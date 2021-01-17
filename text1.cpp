#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	
	fstream f("/home/dimon/Downloads/27-B_2.txt");
	int s = 0;
	int a[49999] = {};
	int cx = 0, ch =0;
	for(f >> s; !f.eof(); f >>s)
	{
		a[cx] = s;
		cx++;
	}	
	 
	for(int i = 0; i < cx; i++)
	{
		for(int ix = 0; ix < cx; ix++)
		{
			if(a[i]%14==0 and (a[i]*a[ix])%14==0)
			{
				if(a[i]*a[ix] > ch)
					ch = a[i]*a[ix];
			}
		}
	}
	cout << ch;
	return 0;
}
