#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Calculate the height and width of the grid"""
    height = len(grid)
    width = len(grid[0])

    # Initialize the perimeter to 0
    perimeter = 0

    # Loop through each cell in the grid
    for i in range(height):
        for j in range(width):
            # If the cell is land, add to the perimeter
            if grid[i][j] == 1:
                # Check the four adjacent cells to see if they are water
                if i == 0 or grid[i-1][j] == 0:  # Top side
                    perimeter += 1
                if i == height-1 or grid[i+1][j] == 0:  # Bottom side
                    perimeter += 1
                if j == 0 or grid[i][j-1] == 0:  # Left side
                    perimeter += 1
                if j == width-1 or grid[i][j+1] == 0:  # Right side
                    perimeter += 1

    return perimeter
