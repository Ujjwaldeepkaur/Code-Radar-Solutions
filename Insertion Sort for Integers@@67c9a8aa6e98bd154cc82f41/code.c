int insertioSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=o;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}