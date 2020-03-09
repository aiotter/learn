# Sample code for playing rock-paper-scissors
from enum import Enum, auto


class HandShape(Enum):
    ROCK = auto()
    SCISSORS = auto()
    PAPER = auto()


class Hand:
    shapes_vs_antishapes = {
        HandShape.ROCK: HandShape.PAPER,
        HandShape.SCISSORS: HandShape.ROCK,
        HandShape.PAPER: HandShape.SCISSORS
    }

    def __init__(self, shape):
        assert shape in Hand.shapes_vs_antishapes
        self.shape = shape

    def __repr__(self):
        return f'<Hand shape={self.shape}>'

    def __eq__(self, other):
        return self.shape is other.shape

    def __matmul__(self, other):
        if Hand.shapes_vs_antishapes[self.shape] is other.shape:
            return False
        elif self.shape is other.shape:
            return None
        else:
            return True

    @classmethod
    def rock(cls):
        return cls(HandShape.ROCK)

    @classmethod
    def scissors(cls):
        return cls(HandShape.SCISSORS)

    @classmethod
    def paper(cls):
        return cls(HandShape.PAPER)


if __name__ == '__main__':
    print(f"{Hand.rock() @ Hand.paper()=}")  # False
    print(f"{Hand.rock() @ Hand.scissors()=}")  # True
    print(f"{Hand.scissors() @ Hand.scissors()=}")  # None
