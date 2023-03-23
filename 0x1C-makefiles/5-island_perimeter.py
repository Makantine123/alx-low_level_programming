#!/usr/bin/python3
"""
Module contains Island Perimeter Function
"""


def island_perimeter(grid):
    """
    Function returns perimeter of the island described in a grid
    """

    perim = 0

    for x in range(len(grid)):
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                if x == 0 or grid[x - 1][y] == 0:
                    perim += 1
                if x == len(grid) - 1 or grid[x + 1][y] == 0:
                    perim += 1
                if y == 0 or grid[x][y - 1] == 0:
                    perim += 1
                if y == len(grid[0]) - 1 or grid[x][y + 1] == 0:
                    perim += 1
    return perim
