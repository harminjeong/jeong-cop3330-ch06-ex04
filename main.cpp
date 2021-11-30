#include "std_lib_facilities.h"	

class Name_value {
public:
	Name_value(string n, int s): name(n), score(s) { }
	string name;
	int score;
};

int main()
{
	vector<Name_value> pairs;

	string n;
	int v;

	while (cin>>n>>v && n!="NoName 0") {
        if(n=="NoName"&&v==0){
            break;
        }
		for (int i=0; i<pairs.size(); ++i)
			if (n==pairs[i].name) error("Duplicate name: ",n);
		pairs.push_back(Name_value(n,v));
	}

	for (int i=0; i<pairs.size(); ++i)
			cout << '(' << pairs[i].name << ',' << pairs[i].score << ")\n";

}
