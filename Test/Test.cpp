#include <iostream>
#include ".\..\IdealFile\IdealFile.cpp"

using namespace std;

int main()
{
	IdealFile Test;
	Test.open("hosts");
	cout << Test.getbyline(2) << endl;
	cout << Test.getcontent() << "###@EOF" << endl;
	Test.addatline(2, "Testing!!!");
	cout << Test.getbyline(2) << endl;
	Test.save();
	Test.close();
	system("pause");
	return 0;
}
