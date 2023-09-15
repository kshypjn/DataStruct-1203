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


def mergeSort(arey):
    if len(arey) > 1:
        mid = len(arey)//2
        first = arey[:mid]
        last = arey[mid:]
        mergeSort(first)
        mergeSort(last)
        a, b, c = 0, 0, 0
        while a < len(first) and b < len(last):
            if first[a] <= last[b]:
                arey[c] = first[a]
                a += 1
            else:
                arey[c] = last[b]
                b += 1
            c += 1
        while a < len(first):
            arey[c] = first[a]
            a += 1
            c += 1
        while b < len(last):
            arey[c] = last[b]
            b += 1
            c += 1
    return arey


print(mergeSort(areyYaar))
