#include<iostream>
using namespace std;
#include"getTicks.h"


int main()
{
	warmUp();
	uint64_t start,end;
	double sum, results[iterations];
	for(int i=0;i<iterations;++i)
	{
		sum = 0;
		for (int j=0;j<innerLoop;j++)
		{
			getStartTick(start);
			for(int k=0;k<10;++k);
			getEndTick(end);
			sum += end - start;
		}
		sum /= innerLoop;
		results[i] = sum;
	}
	writeToFile(results,"loopResults.txt");
	return 0;
}
