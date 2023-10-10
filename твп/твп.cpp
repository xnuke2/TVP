#include"grammar.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Терминологический словарь:\n"<<"a, b, c\n";
	vector<char> vc;
	vc.push_back('a');
	vc.push_back('b');
	vc.push_back('c');
	cout << "Вспомогательный словарь:\n"<<"I, W\n";
	vector<rule*> vr;
	vector<string> vcr;
	vcr.push_back("a");
	vcr.push_back("b");
	vr.push_back(new rule('W', vcr));
	cout << "Правила\n{ I->WcWcW; W->a; W->b}\n";
	grammar* gr = new grammar(vc, vr, "WcWcW");
	string word;
	cout << "Введите слово" << endl;
	cin >> word;
	cout<<gr->check_word(word);
}

