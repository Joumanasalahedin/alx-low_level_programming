#!/usr/bin/python3
"""technical interview preparation"""


def island_perimeter(grid):
    """island_perimeter function"""
    m = len(grid)
    n = len(grid[0])
    land = 0
    nei = 0

    for i in range(m):
        for j in range(n):
            if grid[i][j] == 1:
                land += 1

                if i < m-1 and grid[i+1][j] == 1:
                    nei += 1

                if j < n-1 and grid[i][j+1] == 1:
                    nei += 1

    return land * 4 - 2 * nei
