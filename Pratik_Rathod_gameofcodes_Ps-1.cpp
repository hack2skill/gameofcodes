#include <iostream>

using namespace std;
int main()
{
	long T;
	int N,A,B,K,br,un,both,total,lcm,hcf,pro,p;
	
	cin>>T;
	
	for (int i=1;i<=T;i++)
	{
		cin>>N>>A>>B>>K;
		br=un=both=0;
		
			br=N/A;
			un=N/B;
			pro=A*B;
		
		while (B>0)
		{
		p=A%B;
		A=B;
		B=p;
		}
		hcf=A;
		lcm=pro/hcf;
		
		both=N/lcm;
		total=br+un-(2*both);
		
		if (total>=K)
		{
			cout<<"Win\n";
		}
		else
		{
			cout<<"Lose\n";
		}
	}
	
	return 0;
}
