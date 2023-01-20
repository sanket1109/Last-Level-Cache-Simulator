#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include<string.h>
#include <cctype>
#include<cstring>
using namespace std;

extern bool NormalMode;

void MessageToCache(int Message, unsigned int address){
	if(NormalMode){
		if (Message == 1) {
			cout<<"L2 to L1 Message: GETLINE"<<"\tAddress: "<<std::hex<<address<<endl;
		}
		else if (Message == 2) {
			cout<<"L2 to L1 Message: SENDLINE"<<"\tAddress: "<<std::hex<<address<<endl;
		}
		else if (Message == 3) {
			cout<<"L2 to L1 Message: INVALIDATELINE"<<"\tAddress: "<<std::hex<<address<<endl;
		}
		else if (Message == 4) {
			cout<<"L2 to L1 Message: EVICTLINE"<<"\tAddress: "<<std::hex<<address<<endl;
		}
	}
	
}
