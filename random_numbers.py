import random
import string
import re

res = []
length = 5
for i in range(length):
	i = random.randint(-2, 2)
	if str(i) not in res:
		res.append(str(i))

print(" ".join(res))
