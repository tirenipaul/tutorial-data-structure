#include <iostream>
using namespace std;

int main(){
	cout <<"Input two numbers for a and b: " << endl;
	float a, b, result; 
	int choice;
	cin >>a;
	cin >> b;
	
	cout<<"Which operation do you want to perform ( (1)+, (2)-, (3)/ or (4)*)?"<<endl;
	int answer;
	cin >> answer;
	
	if(answer == 1){
		result = a + b;
	}
	else if (answer == 2) {
		cout << "Do you want to subtract (1)a from b or (2)b from a?"<<endl;
		cin >> choice;
		
		if (choice == 1) {
			result = a - b;
		} 
		else if (choice == 2){
			result = b - a;
		}
	}
	else if (answer == 3){
		cout << "Do you want to divide (1) a by b or (2) b by a?"<<endl;
		cin >> choice;
		
		if (choice == 1){
		result = a/b;	
		}
		else if (choice == 2){
			result = b/a;
		}
	}
	else if (answer == 4){
		result = a * b;
	}
	cout <<"The result of yor operation is: " << result;
	return 0;
}