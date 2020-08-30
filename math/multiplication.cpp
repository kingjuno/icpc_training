void multiply(string s1,string s2){
	if(s1.at(0)=='-'&&s2.at(0)=='-');
	if(s1.at(0)=='-'||s2.at(0)=='-')cout<<"-";
	if(s1.at(0)=='-')s1=s1.substr(1);
	if(s2.at(0)=='-')s2=s2.substr(1);
	vector<short> pro(10000,0);
	if(s1.size()<s2.size()){
		string temp=s1;
		s1=s2;
		s2=temp;
	}
	int sizeb=int(s1.size());
	int sizes=int(s2.size());
	int rem=0,mul,mod;
	int c=0;
	int pos;
	for(int i=sizes-1;i>=0;i--){
		pos=c;
		for(int j=sizeb-1;j>=0;j--){
			int a=int(s1[j])-48;
			int b=int(s2[i])-48;
			mul=a*b+rem+pro[pos];
			rem=mul/10;
			mod=mul%10;
			pro[pos]=mod;
			if(j==0&&rem!=0)
			while(rem!=0){
				mul=pro[++pos]+rem;
				rem=mul/10;
				mod=mul%10;
				pro[pos]=mod;
			}
			pos++;
		}
		c++;
	}		
	int f=0;
	blm(i,pro.size()){
		if(pro[i]!=0)f=1;
		if(f)cout<<pro[i];
	}
	if(f==0)cout<<"0";
	cout<<el;
}
