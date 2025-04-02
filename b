
n = int(input("Введите количество чисел в последовательности: "))

count = 0

for _ in range(n):
    number = int(input("Введите натуральное число: "))
    if number % 10 == 3:
        count += 1

print(f"Количество чисел, оканчивающихся на 3: {count}")
