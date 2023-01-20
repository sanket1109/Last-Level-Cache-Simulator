#include <bits/stdc++.h>
#include <algorithm>
#include <cassert>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <tuple>
#include <vector>
#include<string.h>
#include <cctype>
#include<cstring>
using namespace std;

extern bool NormalMode;

int getPLRU(int LRU) {
std::bitset<7> LRU_b(LRU);
int way;
    if(LRU_b[0]==0){
        if(LRU_b[1]==0){
            if(LRU_b[3]==0){
                if (NormalMode){
                    cout<<"Least Recently Used - Way w0"<<endl;
                }
				way = 0;
            }

            else{
                if (NormalMode){
                    cout<<"Least Recently Used - Way w1"<<endl;
                }
				way = 1;
            }
        }

        else{
            if(LRU_b[4]==0){
                if (NormalMode){
                    cout<<"Least Recently Used - Way w2"<<endl;
                }
				way = 2;
            }

            else{
                if (NormalMode){
                    cout<<"Least Recently Used - Way w3"<<endl;
                }
				way = 3;
            }
        }
    }

    else{
        if(LRU_b[2]==0){
            if(LRU_b[5]==0){
                if (NormalMode){
                    cout<<"Least Recently Used - Way w4"<<endl;
                }
				way = 4;
            }

            else{
                if (NormalMode){
                    cout<<"Least Recently Used - Way w5"<<endl;
                }
				way = 5;
            }
        }

        else{
            if(LRU_b[6]==0){
                if (NormalMode){
                    cout<<"Least Recently Used - Way w6"<<endl;
                }
				way = 6;
            }

            else{
                if (NormalMode){
                    cout<<"Least Recently Used - Way w7"<<endl;
                }
				way = 7;
            }
        }
    }
	return way;
}
