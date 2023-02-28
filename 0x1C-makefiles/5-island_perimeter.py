#!/usr/bin/python3
"""function island_perimeter"""


def island_perimeter(grid):
    """Function to calculate an island described in a grid perimeter
    grid is a list of list of integers:
    0 represents a water zone
    1 represents a land zone
    One cell is a square with side length 1
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for u in range(height):
        for t in range(width):
            if grid[u][t] == 1:
                size += 1
                if (t > 0 and grid[u][t - 1] == 1):
                    edges += 1
                if (u > 0 and grid[u - 1][t] == 1):
                    edges += 1
    return size * 4 - edges * 2
