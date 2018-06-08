testcases, divisor = map(float, input().split())
count = 0
for i in range(0, int(testcases)):
    number = input()
    number = float(number)
    count += not (number%divisor)

print(format(count, 'd'))
