#include <iostream> 
#include <vecttor> 
using namespace std;

struct list {
	string name ; 
	string phone ;

};

int main() 
{
	vector <list> contact ;
	list newList;
	while(true){
		cout<< "Enter 1 to add contacts"<< endl ;
		cout<< "Enter 2 to search contacts"<< endl ;
		cout<< "Enter 3 to show all contacts"<< endl ;
		cout<< "Enter 4 to update contacts"<< endl ;
		cout<< "Enter 0 to  exit"<< endl ;
		cin>> value;

		switch(value){
			case 1 :
				int total ;
				cout << " How may contacts do you want to add ";
				cin >> total;
				for(int i = 0 ; i <total ; i++){
					cout<<"Enter Name "<< i + 1<< " : " ;
					cin>>newList.name;
					cout<< " Enter Contact Number  : ";
					cin>>newList.phone;
					contact.push_back(newList);
					cout<<" contact saved sucessfully"<<endl<<endl;

				}
				break;
		}


	}
	
	return 0;
}