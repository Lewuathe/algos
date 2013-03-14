import re

if __name__ == "__main__":
    pattern = re.compile("this is pattern")

    for line in open("pattern.txt", "r"):
        if pattern.search(line):
             print(line)
