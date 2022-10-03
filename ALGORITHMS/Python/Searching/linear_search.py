# Linear search in python

def linear_search (arr , target) :
  
  # iterate loop till you get target.
  
  for i in range(len(arr)):
    
    # check if we found target or not
    
    if(arr[i] == target):    
      
      # return index of currunt element
      
      return i
    
arr = [5,4,2,8,1,8]
target = 4
print( linear_search(arr,target))
