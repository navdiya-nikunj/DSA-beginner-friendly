public class Bubble_Sort
{
  //Define a function for sorting an array
  
  public static void bubbleSort(int arr[])
  {
    //Iterating outer loop for no.of turns
    
    for(int i=0;i<arr.length-1;i++)
    {
      //Iterating inner loop for no.of comparison
      
      for(int j=0;j<arr.length-1-i;j++)
      {
        //Comparing consecutive elements
        
        if(arr[j] > arr[j+1])
        {
          //Swapping both elements
          
          int temp = arr[j+1];
          arr[j+1] = arr[j];
          arr[j] = temp;
        }  
      }  
    }  
  }
  
  //You need to write a function to print elements of an array
  
  public static void main(String args[])
  {
    int arr[] = {12,3,6,9,24,55,14,36};
    
    bubbleSort(arr);
  }  
}  
