#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include<string.h>
#include <cctype>
#include<cstring>
using namespace std;

#define NOHIT 0
#define HIT 1
#define HITM 2

int GetSnoopResult(unsigned int address){
    if((address & 3)==0){              //address with LSB 00
        return HIT;
    }

    else if((address & 3)==1){         //address with LSB 01
        return HITM;
    }

    else{                              //address ending with 10 or 11
        return NOHIT;
    }
}
