#include "stdafx.h"
#include <iostream>
#include <sstream>
#include "Blockchain.h"
using namespace std;


int main()
{
	Blockchain blockchain;
	uint32_t i = 1;
	stringstream ss;

	while(true)
	{
		ss << "Data for block number " << i;
		cout << "Mining block " << i << endl;
		blockchain.AddBlock(Block(i, ss.str()));

		
		ss.str("");
		ss.clear();
		i++;
	}


    return 0;
}

