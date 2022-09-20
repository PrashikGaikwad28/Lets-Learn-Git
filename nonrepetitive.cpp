int nonRepetitive(int arr[], int n){
	for(int i=0; i<n; i++){
		int j;
		for(j=0; j<n; j++){
			if(i!=j && arr[i]==arr[j]){
				break;
			}
		}
		if(j==n){
			return arr[i];
		}
	}
	
}
/*
n=6;
arr[0]!=arr[1]
