
#include <iostream>
#include <stack>          // std::stack
using namespace std;
 
 
int main(){
 //declaration of vars
 int cal1,cal2,cal3,cal4;
 string str;
 char casei;
 int totCal=0;	
 cin >> cal1;
 cin >> cal2;
 cin >> cal3;
 cin >> cal4;
 cin >> str;
 for (int i=0 ; i< str.size() ; i++){
 	casei= str[i];
 	switch (casei){
 		case '1':
 			totCal+=cal1;
 			break;
 		case '2':
 			totCal+=cal2;
 			break;
 		case '3':
 			totCal+=cal3;
			break;
		case '4':
 			totCal+=cal4;
			break;
	 }
 }
 
 cout<<totCal<<endl;
}
