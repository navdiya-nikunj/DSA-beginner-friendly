public class Counting_Sort
{
  //Define a function for counting_sort
  public static void countingSort(int arr[])
  {
    int largest = Integer.MIN_VALUE;
    //Finding largest element of an array for the size of count array.
    for(int i=0;i<arr.length;i++)
    {
      largest  = Math.max(largest, arr[i]);
    }  
    
    //Create count array in Order to store frequancy of elements
    int count[] = new int[largest+1];
    for(int i=0;i<arr.length;i++)
    {
      //Storing frequancy
      count[arr[i]]++;
    }  
    
    //Sorting
    int j=0;
    for(int i=0;i<count.length;i++)
    {
      while(count[i] > 0)
      {
        arr[j] = i;
        j++;
        count[i]--;
      }  
    }  
  }  
  
  //If you want then you can write a function to print elements of an array
  
  public static void main(String args[])
  {
    int arr[] = {3,6,2,1,8,7,5,4,3,1};
    
    countingSort(arr);
  }  
}  
