import time

with open("./pass_list.txt") as file:
    lines = [line.rstrip() for line in file]

for i in lines:
    print(i)
    time.sleep(0.2)