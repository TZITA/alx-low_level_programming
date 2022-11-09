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

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                cnt += 1

    return cnt * 2 + 2
