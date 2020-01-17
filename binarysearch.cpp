#include<iostream>
using namespace std;

  bool binarySearchRecursive(int* array, int startIndex, int lastIndex )
 {
   

	int mid= (startIndex + lastIndex)/2;
	if(startIndex<=lastIndex)
	{
	
		if(*(array + mid)==mid)
		return true;
		else if(*(array + mid)>mid)
		return binarySearchRecursive(array, startIndex, mid-1);
		else
		return binarySearchRecursive(array, mid+1, lastIndex);

}
	return false;
}
bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
	while (startIndex<=lastIndex)
	{
	
	int mid =(startIndex + lastIndex)/2;
	if(element==array[mid])
	return mid;
	else if(element<array[mid])
	lastIndex= mid-1;
	else
	startIndex = mid+1;
}
	
}
int main()
{
	int array[]={ 2,5,6,3,7};
	int target= 6;
	int n = sizeof(array)/sizeof(array[0]);
	int index= binarySearchIterative(array, n, target);
	if(index!= -1)
	cout<<"element found at index"<<index;
	else cout<<"element not found in array"<<endl;
	return 0;
}


   
	
  

