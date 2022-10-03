A = [102,6,74,50,64,98,47,63,112]	#Initialing the List
for i in range(len(A)):
	min_idx = i	#Taking the Minimum index
	for j in range(i+1, len(A)):
		if A[min_idx] > A[j]:	#Conditional check for Minimum Index
			min_idx = j

	A[i], A[min_idx] = A[min_idx], A[i]	#Swaping Elements


print ("Sorted array")
for i in range(len(A)):
	print("%d" %A[i],end=" ")	#Printing the Sorted List
