#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input(){
	while (true) 
    {
		cout << " Enter The Number of Element in Array : "; 
		cin >> n; 
		if ((n > 0) && (n <= 20))
			break; 
		else
			cout << "\nArray should have minimum 1 and maximum 20 elemens.\n\n";
    }

    cout << "\n=====================" << endl;
	cout << "\nEnter Array Element \n" << endl;
	cout << "\n=====================" << endl;
     for ( i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << " > ";
		cin >> arr[i];
    }
}