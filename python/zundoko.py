import random
import re
from collections import deque


def zundoko():
    choices = ('ズン', 'ドコ')
    zun_counter = 0
    while not ((new := random.choice(choices)) == 'ドコ' and zun_counter == 4):
        if new == 'ズン':
            zun_counter += 1
        else:
            zun_counter = 0
        yield new
    yield new
    yield 'きよし'


def zundoko2():
    choices = ('ズン', 'ドコ')
    chosen = deque(maxlen=5)
    while not re.match(r'(ドコ)?ズンズンズンズンドコ', ''.join(chosen)):
        new = random.choice(choices)
        chosen.append(new)
        yield new
    yield 'きよし'


if __name__ == '__main__':
    print(''.join(zundoko()))
    print(''.join(zundoko2()))
