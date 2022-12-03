import os
import re
import sys

n = int(sys.argv[1]) if len(sys.argv) == 2 else 5

def rec(tab, index=0):
	if index == n:
		if len(set(tab)) == n:
			all.append(' '.join(str(k) for k in tab))
		return
	for i in range(n):
		tab[index] = i
		rec(tab, index + 1)

all = []
res = [-1] * n
rec(res)

for args in all:
	check = os.popen(f'./push_swap {args}| ./checker_Mac {args}').read().removesuffix('\n')
	times = int(re.findall('\d+', os.popen(f'./push_swap {args}| wc -l').read())[0])
	print(f'{check} in {" " if times < 10 else ""}{times}  |  args = {args}')
	if check == 'KO':
		input('continue: ')
	if times > 12 and n == 5:
		input('continue: ')