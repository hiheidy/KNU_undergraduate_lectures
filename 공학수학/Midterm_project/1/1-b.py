# 컴퓨터학부 심화컴퓨터전공
# 2020114658 이윤서

# 공학수학 Midterm Project 1-b

import numpy as np
from matplotlib import pyplot as plt
import math

# 초기 조건
x0, y0 = 0, 5

# step size
h = 0.05
x_end = 2


def f_sol(x):
    return 5 * math.exp(3/2 * (x**2))


def f(x, y):
    return 3 * x * y


x_arr = np.arange(x0, x_end+h, h)
y_arr = np.zeros(x_arr.shape)
y_value = np.zeros(x_arr.shape)
error = np.zeros(x_arr.shape)

y_arr[0] = y0
for i, x in enumerate(x_arr[:-1]):
    y_arr[i+1] = y_arr[i] + h * f(x, y_arr[i])
    y_value[i] = f_sol(x)
y_value[-1] = f_sol(x_arr[-1])


for i in range (len(x_arr)) :
    error[i] = abs((y_value[i] - y_arr[i]) / y_value[i]) * 100


print("    x \t\t    y(x) \t Euler approximation of y(x) \t True relative percentage error")
for i in range(0, len(x_arr)):
    print("%f \t %f \t\t %f \t \t\t%f" % (x_arr[i], y_value[i], y_arr[i], error[i]))

# 근사치 그래프 그리기
plt.plot(x_arr, y_arr, 'r', label='Euler approximation')
plt.plot(x_arr, y_value, 'b', label='Real value')
plt.xlabel('t axis')
plt.ylabel('y axis')
plt.title('1-b Graph')
plt.legend(loc='upper right')
plt.show()
