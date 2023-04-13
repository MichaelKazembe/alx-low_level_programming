#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * main - Displays the information contained in the ELF header at the start of an ELF file.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If successful, returns 0. Otherwise, returns 98.
 */
int main(int argc, char *argv[])
{
	int fd, n_read;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file '%s'. %s\n", argv[1], strerror(errno));
		exit(98);
	}

	n_read = read(fd, &header, sizeof(header));
	if (n_read != sizeof(header))
	{
		fprintf(stderr, "Error: Cannot read ELF header from file '%s'. %s\n", argv[1], strerror(errno));
		exit(98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: '%s' is not an ELF file.\n", argv[1]);
		exit(98);
	}

	printf("Magic:   %02x %02x %02x %02x\n", header.e_ident[0], header.e_ident[1], header.e_ident[2], header.e_ident[3]);
	printf("Class:   %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:  %s\n", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX System V ABI" : "Unknown");
	printf("ABI Version: %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:    %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" :
								header.e_type == ET_DYN ? "DYN (Shared object file)" :
								header.e_type == ET_REL ? "REL (Object file)" :
								"Unknown");
	printf("Entry point address: 0x%lx\n", (unsigned long) header.e_entry);

	close(fd);
	return (0);
}

