class Jpro1
{
     static int  find_ele(int arr[] ,int  arr_size ,int  x)
     {
        int i;
        for(i=0;i<arr_size;i++)
        {
            if(arr[i]==x)
            return i;
        }
        return -1;
     }
    public static void main(String args[])
    {
        int arr[]={1,2,3,4,5};
        int arr_size=arr.length;
        int x=3;

        int position= find_ele(arr , arr_size , x);
        
        if(position==-1)
        System.out.println("Element is Not Found");
        else
        System.out.println("Element is Found at position "+ (position+1));

    }
}