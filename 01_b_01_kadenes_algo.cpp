void kadenesAlgo(){
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int currentSum=arr[0],maxSum=arr[0];
	for (int i = 1; i < sz; ++i)
	{
		currentSum=max(arr[i],currentSum+arr[i]);
		maxSum=max(currentSum,maxSum);
		
	}
	cout<<maxSum<<endl;
}


int main(){
	

	kadenesAlgo();
}