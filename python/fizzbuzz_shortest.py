# fizzbuzz in Python: Shortest PEP8-aware code
for i in range(1, 101):
    print(('' if i%3 else 'fizz') + ('' if i%5 else 'buzz') or i)
