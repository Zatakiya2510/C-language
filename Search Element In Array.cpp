#include <stdio.h>

int main()
{
    int a[32];
    int size, i, search, found;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
    	printf("Enter Element Of %d Is : ",i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter Element To search: ");
    scanf("%d", &search);
    found = 0; 
    
    for(i=0; i<size; i++)
    {
        if(a[i] == search)
        {
            found = 1;
            break;
        }
    }
    if(found == 1)
    {
        printf("\n%d Is Found at Position %d", search, i+1);
    }
    else
    {
        printf("\n%d Is not found in the array", search);
    }

    return 0;
}