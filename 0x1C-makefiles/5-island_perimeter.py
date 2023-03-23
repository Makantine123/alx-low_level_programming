#!/usr/bin/python3
"""
Module contains Island Perimeter Function
"""

def island_perimeter(grid):
    """
    Function returns perimeter of the island described in a grid
    """
    perim = 0
    i = 0
    j = 0
    if grid == []:
        return
    else:
        row = len(grid)
        col = len(grid[0])
        for i in range(row):
            for j in range(col):
                if grid[i][j] == 0:
                    continue
                else:
                    if grid[i - 1][j] == 0:
                        perim = perim + 1
                    if grid[i + 1][j] == 0:
                        perim = perim + 1
                    if grid[i][j - 1] == 0:
                        perim = perim + 1
                    if grid[i][j + 1] == 0:
                        perim = perim + 1

        return perim
