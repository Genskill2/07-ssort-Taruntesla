void swap_max(int arr[],int l,int n){
        int k=n;
	int c= arr[n];
	for(int i=n+1;i<l;i++){
		if(arr[i]>c){
			c=arr[i];
                       k=i;
		}
		}
	               int p=arr[n];
		       arr[n]=arr[k];
		       arr[k]=p;
	}
    
    void ssort(int m[],int l){
    for(int i=0;i<l;i++){
    swap_max(m,l,i);
    }
   
}
