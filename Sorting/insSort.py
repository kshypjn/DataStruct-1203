# Insertion Sort in Python

areyYaar = []
n = int (input("Enter a number : "))
areyYaar.append(n)
while True: 
    key = input("Enter another number? (y/n)")
    if key in 'Yy':
        n2 = int(input("Enter another number: "))
        areyYaar.append(n2)
        continue
    else:
        break

for i in range(1,len(areyYaar)): 
    j = i #initializing j to i
    #checking if j>0 and if the element to the left is greater than the current element
    while j>0 and areyYaar[j-1] > areyYaar [j]: 
        #swapping if both conditions are met
        areyYaar[j], areyYaar[j-1] = areyYaar[j-1],areyYaar[j]
        #decrementing j
        j = j-1

print(f"sorted array : {areyYaar}");
