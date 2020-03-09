# fizzbuzz with NumPy
import numpy as np

nums = np.arange(1, 106).astype(str)

nums = nums.reshape((-1,3))
nums[:,2] = 'fizz'

nums = nums.reshape((-1,5))
nums[:,4] = 'buzz'

nums = nums.reshape((-1,15))
nums[:,14] = 'fizzbuzz'

for i, _ in zip(nums.ravel(), range(100)):
    print(i)
