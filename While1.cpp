//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//在控制台输入整型数字，如果输入不正确则重新输入，直到输入正确为止
//	int number = 0;
//
//	cout << "Please enter an integer:";
//	cin >> number;
//
//	while (cin.fail()) {
//		cout << "Error! Please enter again:";
//		cin.clear();
//		cin.ignore(numeric_limits<streamsize>::max(), '\n');
//		cin >> number;
//	}
//
//	cout << "number = " << number << endl;
//	
//	return 0;
//}