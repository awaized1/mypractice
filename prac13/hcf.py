#!/usr/bin/python3
#hcf.py

hcf_input = input("Enter 3 numbers you wish to find their HCF: ")

hcf_list = hcf_input.split()

a = int(hcf_list[0])
b = int(hcf_list[1])
c = int(hcf_list[2])

if a < b:
    d = a
elif a > b:
    d = b
if d > c:
    d = c

print("The lowest number is: {}".format(d))

for i in range(d, 1, -1):
   if a % i == 0 and b % i == 0 and c % i == 0:
        print("HCF of {} {} {} is: {}".format(a, b, c, i))
        break
