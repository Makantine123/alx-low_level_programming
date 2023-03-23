#!/usr/bin/python3

island_perimeter = __import__('5-island_perimeter').island_perimeter

if __name__ == "__main__":
        grid = [
                [1, 1, 1, 1, 1],
                [1, 1, 1, 1, 1],
                [1, 1, 1, 1, 1]
            ]
        print(island_perimeter(grid))
