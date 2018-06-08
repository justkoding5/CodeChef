withdraw, balance = map(float, input(). split())
if withdraw%5 == 0:
    balance = balance - (withdraw + 0.50)
if balance <= 0:
    balance = balance + (withdraw + 0.50)
print(format(balance, '.2f'))
