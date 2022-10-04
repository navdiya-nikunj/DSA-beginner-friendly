public class Merge_Sort {
    public static void mergeSort(int arr[], int si, int ei){
        if(si < ei){
            //Devide an array into smallest possible units
            int mid = si+(ei-si)/2;    //Also We Can Write mid = (si+ei)/2.
            mergeSort(arr, si, mid);   //Left Partition
            mergeSort(arr, mid+1, ei); //Right Partition
            //merging
            mergeing(arr, si, mid, ei);
        }
    }
  
    //Define a function for mreging smallest sorted units
    public static void mergeing(int arr[], int si, int mid, int ei){
        int i = si, j = mid+1, k = 0;  //Tracking Variables
        
        //Take temp. array to store elements of resultant sorted array
        int temp[] = new int[ei-si+1];
      
        
        while(i <= mid && j <= ei){
            if(arr[i] > arr[j]){
                temp[k++] = arr[j++];  //Sorting Of Both Partition
            } else{
                temp[k++] = arr[i++];
            }
        }
      
        //Add Remaining Elements.
        //Left Side
        while(i <= mid){
            temp[k++] = arr[i++];
        }
        //Right Side
        while(j <= ei){
            temp[k++] = arr[j++];
        }
      
        //Copying Temp Into Original Array.
        for(int m=0, n=si;m<temp.length;n++,m++){
            arr[n] = temp[m];
        }
    }
    
    //If you want then you can write a function to print array elements
  
    public static void main(String agrs[]){
        int arr[] = {7,29,51,25,31,17,12,6,5};
      
        mergeSort(arr, 0, arr.length-1);
    }
}
