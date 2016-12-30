#include <iostream>
#include <string>


void error()
{
	using namespace std;
	cout << "An error has occurred... Program exiting..."<<endl;

}
int main()
{
	using namespace std;
//Delcareing doubles and strings because double holds non whole numbers and whole numbers and string is for sentances
double correct; //points correct
double possible;//points possible
double result;//result of correct divided by possible
string input = "";//user input

//Getting students amount of points correct

cout << "Enter amount student got correct";
cin >> correct;
cout << endl;

//Getting total points possible
cout << "Enter amount of points possible";
cin >> possible;
cout << endl;

//Calculating percentage

result = correct / possible;
result = result * 100; //split results into 2 so the order of operations didnt get messed up
cout << "Percentage:" << result << "%" << endl;

//Calculating grade
cout << "Grade:";
if(result == 100){
	cout<< "A+"<< endl;

}else if (result < 100 && result >= 90){
	cout << "A"<< endl;
}else if (result < 90 && result >= 80){
	cout<<"B" << endl;
}else if (result <80 && result >=70){
	cout<<"C"<< endl;
}else if (result < 70 && result >= 60){
	cout <<"D"<<endl;
}else if (result <60){
	cout<<"F"<<endl;
}

//Asking user if they would like to exit or not

cout << endl << "Would you like to exit, or grade another student?\n";
cout << "to exit , type \"exit\"" <<endl;
cout << "To grade another student, type \"new\"" << endl;
cout << endl;
cin >> input;

  if (input=="exit"){ //if user typed exit, then exit
                exit(0); //exit returning 0 meaning program didn't encounter errors
        }else if (input=="new"){ //if user typed new, then go back to the start of main
                system("cls"); //clear the window
                main(); //go back to the beginning
        }else{
                error();//error
        }
        return 0;

}
