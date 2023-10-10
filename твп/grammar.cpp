#include "grammar.h"


void grammar::print()
{
	cout << "Терминологический словарь:\n";
	for (int i = 0; i < alphabet.size(); i++) {
		cout << to_string(alphabet[i]) + " ";
	}
	cout<<endl;
	cout << "Вспомогательный словарь:\n";
	cout << start_symbol + " ";
	for (int i = 0; i < rules.size(); i++) {
		cout << rules[i]->term + " ";
	}
	cout << endl;
	cout << "Правила\n{";
	for (int i = 0; i < rules.size(); i++) {
		rule* tmp = rules[i];
		for (int j = 0; j < tmp->transcript.size(); j++) {
			cout << tmp->term + "->" + tmp->transcript[j]<<endl;
		}
	}
	cout << "}\n";
}

int grammar::check_word(string _word)
{
	string tmp_word = _word;
	string nums = "";
	//int j = 0;
	for (int i = 0; i < rules.size(); i++) {
		rule* tmp = rules[i];
		for (int j = 0; j < tmp->transcript.size(); j++) {
			bool Check = 0;
			while (tmp_word.find(tmp->transcript[j]) != string::npos)
			{
				tmp_word[tmp_word.find(tmp->transcript[j])] = tmp->term;
				nums = to_string(i + j + 2) + nums;
				Check = 1;
			}
			if (Check)j = 0;
		}
	}
	if (tmp_word == start_symbol) {
		nums = "1" + nums;
		return stoi(nums);
	}

	return 0;
}