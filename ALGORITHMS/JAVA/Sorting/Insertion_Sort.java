public class Insertion_Sort
{
  //Define a function for insertion_sort
  public static void insertionSort(int Numbers[])
  {
        for(int i=1;i<Numbers.length;i++){
            int current = Numbers[i];
            int previous = i-1;
          
            //finding out the right position.
            while( previous >=0 && Numbers[previous] < current){
                Numbers[previous+1] = Numbers[previous];
                previous--;
            }
            //insertion process.
            Numbers[previous+1] = current;
        }
    }
  
  //If you want then you can write a function to print elements of an array
  
  public static void main(String args[])
  {
    int Numbers[] = {3,6,2,1,8,7,5,4,3,1};
    
    insertionSort(arr);
  }  
}  
