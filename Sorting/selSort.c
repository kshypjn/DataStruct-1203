#include <stdio.h>

int main()
{
    int areyYaar[100]; // Assuming a maximum of 100 elements
    int n, n2;
    int size = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    areyYaar[size++] = n;

    char key;
    while (1)
    {
        printf("Enter another number? (y/n): ");
        scanf(" %c", &key);
        if (key == 'y' || key == 'Y')
        {
            printf("Enter another number: ");
            scanf("%d", &n2);
            areyYaar[size++] = n2;
        }
        else
        {
            break;
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < size; j++) // Changed 'n' to 'size' here
        {
            if (areyYaar[j] < areyYaar[minimum])
            {
                minimum = j;
            }
        }
        if (minimum != i)
        {
            int temp = areyYaar[i];
            areyYaar[i] = areyYaar[minimum];
            areyYaar[minimum] = temp;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", areyYaar[i]);
    }
    printf("\n");

    return 0;
}
