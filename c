total_sum = 0

while True:
    number = int(input("Введите натуральное число (0 для завершения): "))
    if number == 0:
        break
    if number % 6 == 0 and number % 10 == 6:
        total_sum += number

print(f"Сумма чисел, кратных 6 и оканчивающихся на 6: {total_sum}")
