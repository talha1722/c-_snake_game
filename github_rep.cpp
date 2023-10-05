#include<iostream>
#include<conio.h> 
#include<windows.h>
#include <cstdlib>
#include<ctime>
enum eDirecton {LEFT,RIGHT, UP, DOWN};   
eDirecton dir;
using namespace std;

void game_over(int vp);

int main()
{
	int scce=0;                                                                     //to produce egg for once until until snake reaaches it......   line no        
	int max=40;
	int fscore;
	int xe,ye;
	int ssg=0;
	int scc;                                                          
	int x1;                                                                          //it stores the value stored on the index of th array
	int y1;                                                                          //it stores the value stored on the index of th array
    int l=1;
	int sc=1;                                                                        // 
	int al=2;
	int x=20,y=20;
	int xxx,yyy;
	xxx=yyy=100;
	int arr[xxx]; 
	int brr[yyy];
	x1=x;
	y1=y;
	scc=1;

	
	do{                                                                              // do while starting here    it will terminate when when " al "  will become = 2 

	cout<<"         *  ************ *****      ****          *          ****    **** **********        ************          *          *****     ***** ********"<<endl;
	cout<<"        **  ************ ******     ****         ***         ****   ****  **********        ************         ***         ******   ****** ********"<<endl;
	cout<<"      ****  ****         *******    ****        *****        ****  ****   ****              ****    ****        *****        ******* ******* ****    "<<endl;
	cout<<"     *****  ****         ********   ****       *******       **** ****    ****              ****               *******       *************** ****    "<<endl;
	cout<<"    ******  ************ **** ****  ****      **** ****      ********     **********        ************      **** ****      **** ***** **** ********"<<endl;
	//cout<<"    ******  ************ ****  **** ****     ****   ****     *******      **********        ************     ****   ****     ****  ***  **** ********"<<endl;
	cout<<"     *****          **** ****   ********    *************    ********     ****              ****    ****    *************    ****   *   **** ****    "<<endl;
	cout<<"      ****          **** ****    *******   ***************   **** ****    ****              ****    ****   ****       ****   ****       **** ****    "<<endl;
	cout<<"        **  ************ ****     ******  ****         ****  ****  ****   **********        ************  ****         ****  ****       **** ********"<<endl;
	cout<<"         *  ************ ****      ***** ****           **** ****   ****  **********        ************ ****           **** ****       **** ********"<<endl;


    srand(time(0));                                                                  // to genrate random value to create egg	
	
	fscore=sc-1;                                                                      //fscore is used for calculating the score of game
    cout<<endl;
	ssg++;       
		arr[sc-1]={x};                                                                //storing value of x in the at last index of array arr[]       ...... ( sc=1 )
		brr[sc-1]={y};                                                                //storing value of y in the at last index of array brr[]       ...... ( sc=1 )
		cout<<"                                             ";                        //gap before the top border
		for(int a1=1;a1<=40;a1++)                                                     // a1 is to print the top border...... 
		{
		cout<<"_";                                                                    //top border 
 	    }
	cout<<endl;
	for(int a=1;a<=41;a++)                                                            //loop for hight .........(a=1  .......  a=40     .... area for snake where as when a=41 == base)
	{
		cout<<"                                            ";                         //space before border
		if(a<=40)                                                                     //this condion will print left and right border
		{
		cout<<"|";                                                                     
		for(int b=1;b<=40;b++)                                                        //loop for width
		{       		
				int eg=1;                                                             //snake formation
				for(int i=sc-1;i>=0;i--)
				{
				    x1=arr[i];                                                        //storing the value of arr[i] in x1
				    y1=brr[i];                                                        //storing the value of brr[i] in y1
					
				if(a==y1 && b==x1) 			                                          //condition to crete snake
			       
				   {
				    cout<<"O";
		            break;
			       }
		       
	               else 
			       {
			       	if(eg==sc)
			       	{
			       		if(a==xe && b==ye )                                            // eg creation 
				       {
						       cout<<"*";	   
					   }
			       	   else
					   {
						
				       cout<<" ";
				       break;
				       }
				    }
				   else
				   {
				   	  eg++;
				   }
				   }
			    }
			    
			    
	    }
		}
		cout<<"|";                                                                // right bside boundery  
	    
		if(a==6)
		{
		cout<<"                                                 THIS PROJECT IS MADE BY TALHA FAIZ AHEER";	
		}
		
		if(a==10)
		{
		cout<<"                                                 SCORE : "<<fscore;	
		}
		if(a==41)                                                                 // condition for base boundery
		{
		for(int a2=1;a2<=40;a2++)                                                 // loop for base boundery
		{
		cout<<"_";                                                                // base boundery --
	    }
	    cout<<"|";                                                                // last right boundery where a=40
		}
		cout<<endl;
	}

    
    if(arr[sc-1]==ye && brr[sc-1]==xe)
    {
    	sc++;                                                                     //increasing score
	}
	
	
	for(int gm=0;gm<=sc-2;gm++)
	{
	if(arr[gm]==arr[sc-1] && brr[gm]==brr[sc-1])
		{
		al=1;
	    }
	}
    
    if(scc==sc)
	{
	for(int iss=0;iss<sc;iss++)
	{
		arr[iss]=arr[iss+1];
		brr[iss]=brr[iss+1];
	}
    }
    else
    {
   	scc++;
	}

if(x==0 || x==41)
{
	al=1;
}

if(y==0 || y==41)
{
	al=1;
}


	if(scce != sc)
	{
	ye=rand()%max;                                                                 //giving a random value to ye
	xe=rand()%max;                                                                 //giving a random value to xe
    if(ye<=0)
    {
    	ye=1;
	}
	if(xe<=0)
    {
    	xe=1;
	}
	
	scce++;
    }

  
    if(fscore<=1)                                                                  //increse speed of snake as score incresed by 10
    {
	   Sleep(0.00001);                                                             //sleep 50
    }
    else
    {
	   Sleep(0.00001);                                                              // sleep 5
    }


	if(kbhit())                                                                     //if any key will be pressed it will detect it
	{
	switch((_getch()))                                                              //to get chracter from user to move snake....(x++....x--.....y++....y--)
	{
		case'q':
		dir=LEFT;                                                                   //case : q ... dir equal to left
		break;
		
		case'w':
		dir=RIGHT;                                                                   //case : w ... dir equal to right
		break;
		
		case'e':
		dir=UP;                                                                      //case : e ... dir equal to up
		break;
		
		case'r':                                                                    
		dir=DOWN;                                                                    //case : r ... dir equal to down
		break;
	}}
	switch(dir)                                                                      //...........dir..............
	{
		case LEFT:
	    x--;                                                                         //dir equal : left .....value of x is decreasing due to which snake will move towards left
	    break;
	    
	    case RIGHT:
	    x++;                                                                         //dir equal : right ....value of w is increasing due to which snake will move towards right
		break;
		
		case UP:
		y--;                                                                         //dir equal : up ....value of y is decreasing due to which snake will move up
		break;
		
		case DOWN:                                                                   //dir equal : down....value of y is increasing due to which snake will move down
		y++;
		break;	
	}
	
	
//	system("CLS");                                                                   // clear screen
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0,0});
	}while(al!=1);                                                                    //while loop
    game_over(fscore);	
	return 0;
}
	
void game_over(int vp)
{
    system("CLS");
    int vvp=vp;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                            ******************            *******            ********       *********    **************          "<<endl;
    cout<<"                                            *****************            *********           **** ****     **********    *************           "<<endl;
    cout<<"                                            ****                        ****  *****          ****  ****   ***** *****    ****                    "<<endl;
    cout<<"                                            ****               ******  ****    *****         ****   **** *****  *****    ****                    "<<endl;
    cout<<"                                            ****   ***********   *********      *****        ****    ********   *****    ********                "<<endl;
    cout<<"                                            ****   ***********       *******     *****       ****     ******    *****    *******                 "<<endl;
    cout<<"                                            ****   ****   ****      ****  *****   *****      ****      ****     *****    ********                "<<endl;
    cout<<"                                            ****          ****     ****     *****  *****     ****               *****    ****                    "<<endl;
	cout<<"                                            ****          ****    ****       ****** *****    ****               *****    ****                    "<<endl;
	cout<<"                                            ******************   ****         ************   ****               *****    *************           "<<endl;
	cout<<"                                            ******************  ****           ************  ****               *****    **************          "<<endl;

	cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                  ******************  ****                 ****  **************  *************                   "<<endl;
    cout<<"                                                  ******************   ****               ****   *************   **************                   "<<endl;
    cout<<"                                                  ****          ****    ****             ****    ****            ****     ******                   "<<endl;
    cout<<"                                                  ****          ****     ****           ****     ****            ****     *****                   "<<endl;
    cout<<"                                                  ****          ****      ****         ****      ********        *************                   "<<endl;
    cout<<"                                                  ****          ****       ****       ****       *******         *************                   "<<endl;
    cout<<"                                                  ****          ****        ****     ****        ********        ****     *****                  "<<endl;
    cout<<"                                                  ****          ****         ****   ****         ****            ****      *****                 "<<endl;
	cout<<"                                                  ****          ****          **** ****          ****            ****        ****                "<<endl;
	cout<<"                                                  ******************           *******           *************   ****         ****               "<<endl;
	cout<<"                                                  ******************            *****            **************  ****           ***              "<<endl;
    
    
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"                                                     *****************************       YOUR SCORE : "<<vvp<<endl;	   	
}


	
	

