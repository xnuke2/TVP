#pragma once
#include <iostream>
#include<vector>
#include<string>
using namespace std;
#include"rule.h"

class grammar
{
private:
	vector <char> alphabet;
	vector<rule*> rules;
	string start_symbol;
public:
	grammar(vector <char> _alphabet, vector<rule*> _rules, string _start_symbol) : alphabet(_alphabet), rules(_rules), start_symbol(_start_symbol) {};
	int check_word(string _word);
	void print();
};

