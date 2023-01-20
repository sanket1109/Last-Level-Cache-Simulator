#include <bits/stdc++.h>
#include <fstream>
#include <iostream>
#include<string.h>
#include <cctype>
#include<cstring>

using namespace std;

extern bool NormalMode;
extern bool DebugMode;
extern int offset_b;
extern int index_b;
extern unsigned int set_mask;

// Parse for trace file.
void parse_line(std::string access,unsigned int arr[]) {
	// What we want to parse
	int instr;
	unsigned int address;
	// Parse from the string we read from the file
	sscanf(access.c_str(), "%d %lx", &instr, &address);
	arr[0]=instr;
	arr[1]=address;
}

// For set bits - Shift byte offset bits times and then AND with mask 
int get_set(unsigned int address) {
	auto shifted_address = address >> offset_b;
	shifted_address = shifted_address & set_mask;
	if(DebugMode) {
		cout<<"Set:"<<shifted_address<<"\t";
	}
	return shifted_address;
}

// For tag bits - Shift (index + byte offset) times
int get_tag(unsigned int address) {
	auto shifted_address = address >> (offset_b + index_b);
	if(DebugMode) {
		cout<<"Tag:"<<shifted_address<<endl;
	}
	return shifted_address;
}

float round1(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}
