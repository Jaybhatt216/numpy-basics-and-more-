#include <iostream>
#include <windows.h>
 using namespace std;
 
 char map[100] [100] =  {"#########",
                       "#        #",
                       "#         #",
                       "#         #",
                       "#         #",
                       "#         #",                   
                       "#         #",
                       "#         #",
                       "#         #",
                       "# @        #",
                       "#########"};
                       
int Gamespeed = 100;
int Level = 0;
bool Stopgame = false;
                       
int main()
{
	while(Stopgame == false)
	      
	      system("cls");
	     for (int y = 0; y < 20; y++)
	     {
	     	cout << map[y] << endl;
		 }
		 for(int y = 0; y<10; y++)
		 {
		 
		 for(int x = 0; x<10; x++){
		 switch(map[y][x])
		 {     
		      case '@':
		      	if(GetAsyncKeyState(VK_up !=0;))
		    
		      	{
		      	    int y2 = (y-1)
					  switch(map[y2][x])
					  
					  case '  ':
					  {
					  	map[y] [x] = ' ';
					  	y-= 1;
					  	map[y2][x] = '@'
					  	
						  }	
				  }
		 	
		 }
		 
	
	
	
}
