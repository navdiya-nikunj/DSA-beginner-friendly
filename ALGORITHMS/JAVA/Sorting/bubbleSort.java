public class bubbleSort {
    // Making a function with name bubble for sorting the array
    static void bubble(int []arr) {
        int n,t;
        n = arr.length;  // n = array length
        t = 0;
        int i,j;
        // Outer loop :- Is used for no. of turns 
        for(i = 0; i < n-1; i++)
        {
            // Inner loop :- Is used for no. of comparisions of terms
            for(j = 0; j < n-1-i; j++)
            {
                // Comparing and swaping happens inside this 'if'
                if(arr[j] > arr[j+1])
                {
                    t = arr[j+1];
                    arr[j+1] = arr[j];
                    arr[j] = t;
                }
            }
        }
    }

    // The function to print to code Before and After Bubble sort
    public static void main(String[] args)
    {
        int arr[] = {10,24,32,67,12,29};
        int i;

        // Array before Bubble sort used
        System.out.println("Before sort Array is : ");
        for(i=0;i<arr.length;i++)
        {
            System.out.println(arr[i] + " ");
        }
        System.out.println();

        // Bubble sort used here
        bubble(arr);  // bubble is name of function of bubble sort

        // Array after Bubble sort used
        System.out.println("After sort Array is : ");
        for(i=0;i<arr.length;i++)
        {
            System.out.println(arr[i] + " ");
        }
    }
}
