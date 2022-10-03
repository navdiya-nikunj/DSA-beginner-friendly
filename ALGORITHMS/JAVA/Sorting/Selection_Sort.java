public class Selection_Sort
{
    //Define a function to sort an array
    
    public static void selectionSort(int arr[])
    {
      for(int i=0;i<arr.length;i++)
      {
        int minPos = i;
        for(int j=i+1;j<arr.length;j++)
        {
          //Finding the minimum elements for each iteration 
          if(arr[minPos] > arr[j])
          {
            minPos = j;
          }  
        }  
        //Swapping the newly find minimum element with current element
        
        int temp = arr[minPos];
        arr[minPos] = arr[i];
        arr[i] = temp;
      }
    }
  
      //If ypu want then you can write a function to print elements of an array
  
   public static void main(String args[])
      {
        int arr[] = {12,3,6,9,16,24,67,92};
     
        selectionSort(arr);
      }  
}
