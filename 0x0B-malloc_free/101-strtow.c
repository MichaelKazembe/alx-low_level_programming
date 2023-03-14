#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in str
 */
int count_words(char *str)
{
    int i, word_count = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            word_count++;
    }

    return (word_count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, word_count = 0, word_len = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);

    if (word_count == 0)
        return (NULL);

    words = malloc(sizeof(char *) * (word_count + 1));

    if (words == NULL)
        return (NULL);

    for (i = 0, k = 0; str[i]; i++)
    {
        if (str[i] != ' ')
        {
            word_len = 0;
            for (j = i; str[j] && str[j] != ' '; j++)
                word_len++;

            words[k] = malloc(sizeof(char) * (word_len + 1));

            if (words[k] == NULL)
            {
                for (k = k - 1; k >= 0; k--)
                    free(words[k]);

                free(words);
                return (NULL);
            }

            for (j = 0; j < word_len; j++, i++)
                words[k][j] = str[i];

            words[k++][j] = '\0';
        }
    }

    words[k] = NULL;

    return (words);
}

