#include "rule.h"


//string grammar::check(string _word, int num)
//{
//	string tmp_word = _word;
//	string nums = "";
//	for (int i = 0; i < rules.size(); i++) {
//		bool Check = 0;
//		rule* tmp = rules[i];
//		for (int j = 0; j < tmp->transcript.size(); j++) {
//
//			while (tmp_word.find(tmp->transcript[j]) != string::npos)
//			{
//				tmp_word[tmp_word.find(tmp->transcript[j])] = tmp->term;
//				nums = to_string(i + j + 2) + nums;
//				Check = 1;
//			}
//		}
//		if (Check)i = 0;
//	}
//	if (tmp_word == start_symbol) {
//		nums = "1" + nums;
//		return nums;
//	}
//	return "0";
//}
//void grammar::set_index()
//{
//	for (int i = 0; i < rules.size(); i++) {
//		rule* tmp = rules[i];
//		rules[i]->num_of_rule = to_string(i + 2 + );
//	}
//}
//int grammar::check_word(string _word)
//{
//	//for()
//
////return stoi(check(_word));
//
//}