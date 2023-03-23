#!/usr/bin/python3
"""
Module contains Island Perimeter Function
"""


def island_perimeter(grid):
    """
    Function returns perimeter of the island described in a grid
    """
    px = 0
    py = 0

    for row in range(1, len(grid) - 1):
        for col in range(1, len(grid[row]) - 1):
            if grid[row][col] == 1:
                if grid[row - 1][col] == 0:
                    px += 1
                if grid[row + 1][col] == 0:
                    px += 1
                if grid[row][col - 1] == 0:
                    py += 1
                if grid[row][col + 1] == 0:
                    py += 1
    return px + py
