 #include <stdio.h>
int main()
{
    int n,i,temp;
    printf("How many elements you want to put in integer array\n");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Your %d element of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the %d element of your array is %d\n",i+1,arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]>arr[i])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
        
    }
    printf("The array in descending order is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("The array in asending order is\n");
    for (i = n; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}
