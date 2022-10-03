public class Binary_Search
{
  //Define a function for binary search
  
  public static int binarySearch(int arr[], int target, int si, int ei)
  {
    int ans = 0;
    
    //Base Case For Recursion
    
    if(si > ei) return -1;
    
    int mid = si + (ei-si)/2;
    
    //Comparing target with element present at index mid
    
    if(arr[mid] == target)
    {
      return mid;
    }
    
    //Checking position of target with respect to mid in order to call binarySearch fun. recursively.
    
    else if(arr[mid] > target)
    {
      ans = binarySearch(arr, target, si, mid-1);
    }
    
    else if(arr[mid] < target)
    {
      ans = binarySearch(arr, target, mid+1, ei);
    }  
    
    return ans;
    
  }
  public static void main(String args[])
  {
    int arr[] = {2,7,10,12,24,46,55,78};
    
    int ans  = binarySearch(arr, 7, 0, arr.length-1);
    
    if(ans == -1) System.out.println("The Target Is Not Found.");
    
    else System.out.println("The Target Is Found At Index : " + ans);
  }  
}  
