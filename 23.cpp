
#include<iostream>
#define N 3 //change to 100 acc to question?
using namespace std;
double fo=0,in=0;
class Distance
{
	private:
		double foot,inch;
	public:
		void read()
		{
			cout<<"Enter foot and inch: ";
			cin>>foot>>inch;
		}
		void sum()
		{
			fo+=foot;
			in+=inch;
		}
};
int main()
{
	Distance d[N];
	cout<<"Enter "<<N<<" distances"<<endl;
	for(int i=0;i<N;i++)
		d[i].read();
	for(int i=0;i<N;i++)
		d[i].sum();
		cout<<fo/N<<"ft "<<in/N<<"in";
}
	