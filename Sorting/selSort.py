areyYaar = []
n = int(input("Enter a number : "))
areyYaar.append(n)
while True:
    key = input("Enter another number? (y/n)")
    if key in 'Yy':
        n2 = int(input("Enter another number: "))
        areyYaar.append(n2)
        continue
    else:
        break

l = len(areyYaar)
for j in range(0, l-1):
    small = j
    for i in range(j+1, l):
        if (areyYaar[i] < areyYaar[small]):
            small = i
    if small != j:
        areyYaar[j], areyYaar[small] = areyYaar[small], areyYaar[j]
    
print(f" sorted array : {areyYaar}")
