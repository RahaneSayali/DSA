int sum=0;
	int original=0;
	while(n>0){
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n=n/10;


	}
	if(sum==original){
		cout<<"true"<<endl;

	}
	else{
		cout<<"false"<<endl;
	}
	return 0;

    //logic