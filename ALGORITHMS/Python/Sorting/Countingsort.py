
def Sort(ary):
  size = len(ary)
  output = [0] * size
  # create and initialize count array
  count = [0] * 10
  # In the count array, keep track of how many of each variable there are.
  for no in range(0, size):
      count[ary[no]] += 1
  # Keep track of the total number of count
  for no in range(1, 10):
      count[no] += count[no - 1]
  # In the count array, find the index of each member of the original array.
  # and place the elements in output array
  no = size - 1
  while no >= 0:
    output[count[ary[no]] - 1] = ary[no]
    count[ary[no]] -= 1
    no -= 1
  # Copy the sorted elements into original array
  for no in range(0, size):
      ary[no] = output[no]
data = [ 0, 6, 5, 6, 8, 5, 8 ]
print( "The given array is: " )
print( data )
Sort( data )
print( "The sorted array in ascending Order is: " )
print(data)
