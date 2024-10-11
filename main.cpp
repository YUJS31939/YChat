#include <string>
#include <iostream>
#include <vector>
using namespace std;

class newPerson {
	
public:

	newPerson();

	bool operator==(const newPerson& other) const
	{
		return false;
	}
};
int main()
{
	string str;
	str = " ÎÒ°®ÀîĞÀ ";
	vector<int> intVec;
	intVec.push_back(23);
	
	str += intVec.at(0);
	str += "Äê"; 
	cout << str << endl;

	return 0;
}
