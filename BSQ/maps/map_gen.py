#!/usr/bin/env python3
import sys
import random
import argparse

def generate_grid(x, y, density):
    grid = [f"{y}.ox"]
    for i in range(y):
        row = []
        for j in range(x):
            if random.randint(0, 2*y-1) < density:
                row.append("o")
            else:
                row.append(".")
        grid.append("".join(row))
    return grid

def save_grid_to_file(filename, grid):
    with open(filename, "w") as f:
        f.write("\n".join(grid) + "\n")

def main():
    parser = argparse.ArgumentParser(description="Generate a random grid of 'o' and '.' characters")
    parser.add_argument("x", type=int, help="Width of the grid")
    parser.add_argument("y", type=int, help="Height of the grid")
    parser.add_argument("density", type=int, help="Density of 'o' characters")

    args = parser.parse_args()

    x = args.x
    y = args.y
    density = args.density

    grid = generate_grid(x, y, density)
    save_grid_to_file(f"{y}.ox", grid)
    print(f"Generated grid saved to {y}.ox")

if __name__ == "__main__":
    main()
