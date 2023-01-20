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
//#include "LLC_simulator_2.cpp"
using namespace std;

extern bool DebugMode;
extern bool NormalMode;

int updatePLRU(int LRU,int way)
{
std::bitset<7> LRU_b(LRU);			// Converts int to bits 
    if(way<4){
        LRU_b[0]=0;              //set A=0
        if(way<2){
            LRU_b[1]=0;          //set B=0
            if(way==0){
                LRU_b[3]=0;      //set D=0
            }

            else{
                LRU_b[3]=1;      //set D=1
            }
        }

        else{
            LRU_b[1]=1;          //set B=1
            if(way==2){
                LRU_b[4]=0;      //set E=0
            }

            else{
                LRU_b[4]=1;      //set E=1
            }
        }
    }

    else{
        LRU_b[0]=1;              //set A=1
        if(way<6){
            LRU_b[2]=0;          //set C=0
            if(way==4){
                LRU_b[5]=0;      //set F=0
            }

            else{
                LRU_b[5]=1;      //set F=1
            }
        }

        else{
            LRU_b[2]=1;          //set C=1
            if(way==6){
                LRU_b[6]=0;      //set G=0
            }

            else{
                LRU_b[6]=1;      //set G=0
            }
        }
    }
    if (DebugMode){
        cout<<"PLRU bits - "<< LRU_b <<endl;
    }


int LRU_b_int;
LRU_b_int = (int)(LRU_b.to_ulong()); 	// Converting bits back to int

return LRU_b_int;
}
