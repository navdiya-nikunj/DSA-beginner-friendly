public class Linear_Search
{
  //Define a function for linear search
  
  public static void linearSearch(int arr[], int target)
  {
    //Iterating a loop to find out target
    
    for(int i=0;i<arr.length;i++)
    {
      if(arr[i] == target)
      {
        //Printing index at where index is found 
        
        System.out.println("The Target Is Found At Index : " + i);
        
        return;
      } 
    }  
    //If target is not found then printing the following massage
    
    System.out.println("The Target Is Not Found.");
  }
  public static void main(String args[])
  {
    int arr[]  = {12,5,8,3,24,3,19,33};
    
    linearSearch(arr, 24);
    
  }
}
