#!/usr/bin/python3
"""
Module contains Island Perimeter Function
"""


def island_perimeter(grid):
    """
    Function returns perimeter of the island described in a grid
    """
    perim = 0
    if grid == []:
        return
    else:
        for x in range(1, len(grid) - 1):
            for y in range(1, len(grid[x]) - 1):
                if grid[x][y] == 1:
                    if grid[x - 1][y] == 0:
                        perim = perim + 1
                    if grid[x + 1][y] == 0:
                        perim = perim + 1
                    if grid[x][y - 1] == 0:
                        perim = perim + 1
                    if grid[x][y + 1] == 0:
                        perim = perim + 1
                    print(perim)

    return perim
