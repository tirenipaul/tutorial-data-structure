#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int value){
	int low = 0;
	int high = size - 1;
	int mid;
	
	while (low <= high){
		mid = (low + high)/2;
		if (arr[mid] == value){
			return mid;
		}
		else if (arr[mid] < value){
			low = mid + 1;
		}
		else{
			high = mid - 1;
		}
	}
	return -1;
}

int main(){
	int arr[7];
	int i, value;
	cout <<"Input 7 numbers from smallest to greatest: ";
	for (i = 0; i<7; i++){
		cin >> arr[i];
	}
	
	int size = sizeof(arr) / sizeof(arr[0]);
	cout <<"Choose a number to search for: ";
	cin >> value;
	int index = binarySearch(arr, size, value);
	
	if (index == -1){
		cout << "This value is not found in the array." << endl;
	}
	else{
		cout <<"Your chosen value is found at index " <<index<<"."<<endl;
	}
	return 0;
}