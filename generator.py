import random
import string

letters = string.ascii_letters

for row_number in range(100, 1000001, 10100):
    f = open("test_files/" + str(row_number) + ".txt", "a")
    for i in range(0, row_number):
        id = str(i)
        text = ''.join(random.choice(letters) for i in range(10))
        f.write(id + "," + text + "\n")
    f.close()