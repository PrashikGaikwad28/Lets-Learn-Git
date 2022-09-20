bool isPrime(int num){
	if(num==1)
		return false;
	for(int i=2; i*i<=num; i++){
		if(num%i==0){
			return false;
		}
	}
	return true;
}
int nthPrime(int n){
	int count = 0, number=2;
	while(count<n){
		if(isPrime(number){
			count++;
		}
		number++;
	}
	return number-1;
}


			
		