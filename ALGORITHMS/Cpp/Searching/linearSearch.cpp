// Linear search in cpp

#include<iostream>

using namespace std;

// Linear search function

int linearSearch(int *arr, int length_arr, int target)
{
    // Iterate loop length_arr times
    
    for(int i = 0 ; i < length_arr ; i++)
    {
        // Check wheather target is present or not
      
        if(arr[i] == target)
        {   
            //return index of traget
          
            return i;
        }
    }
  return -1;
}

int main(){

    int arr[10] = {2, 4, 1, 8, 79, 45, 55, 12, 3, 7};
  
    int length_arr = 10;
  
    int target = 7;
  
    // Call linearSearch function
  
    int ans = linearSearch(arr, length_arr, target);
  
    if(ans == -1)
    {
        cout<<"target is not prensent in an Array ";
    }
    else
    {
        cout<<endl<<"target is  prensent in an Array at index : "<<ans;   
    }
    return 0;
}
