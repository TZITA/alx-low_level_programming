#!/usr/bin/python3
"""Defines a function island_perimeter."""


def island_perimeter(grid):
    """Returns the perimeter of the island.
    Args:
        1. grid: list of list of numbers
    """
    width = len(grid[0])
    height = len(grid)
    cnt = 0
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                cnt += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return cnt * 4 - edges * 2
