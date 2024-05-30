#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Returns the perimiter of an island.

    0 represents a water zone.
    1 represents a land zone.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """

    width = len(grid[0])
    height = len(grid)
    num_of_edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    num_of_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    num_of_edges += 1
    return size * 4 - num_of_edges * 2
