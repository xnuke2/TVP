#pragma once
#include<vector>
#include<string>
using namespace std;
class rule
{
public:
	char term;
	vector<string> transcript;
	string num_of_rule;
	rule(char _term, vector<string> _transcript) :term(_term), transcript(_transcript) {};
};

