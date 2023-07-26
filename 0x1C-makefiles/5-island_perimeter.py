#!/usr/bin/python3
""" Computes Perimeter of Island """


def get_neighbour_cells(row, col, grid):
    """ Helper function to get neighboring cells """
    neighbour_cells = []
    if row > 0:
        neighbour_cells.append((row - 1, col))
    if row < len(grid) - 1:
        neighbour_cells.append((row + 1, col))
    if col > 0:
        neighbour_cells.append((row, col - 1))
    if col < len(grid[0]) - 1:
        neighbour_cells.append((row, col + 1))
    return neighbour_cells


def island_perimeter(grid):
    """ Compute the perimeter """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                neighbour_cells = get_neighbour_cells(row, col, grid)
                land_neighbours = sum(grid[x][y] for x, y in neighbour_cells)
                perimeter += 4 - land_neighbours
    return perimeter
