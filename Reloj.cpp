#include <cstdlib> 
#include <iostream> 
#include <conio.h> 
#include <iostream> 
#include <windows.h> 
#include <dos.h> 
#include <time.h> 

void gotoxy(int x, int y)  
{  
COORD coord;  
coord.X=x;  
coord.Y=y;  
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);  
} 

int x,y; 
using namespace std; 
void dibuja1(int x,int y ){ 
    char de='л'; 
   gotoxy(x,y);cout<<' '; gotoxy(x+1,y);cout<<' '; gotoxy(x+2,y);cout<<' '; gotoxy(x+3,y);cout<<de; 
   gotoxy(x,y+1);cout<<' '; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de; 
   gotoxy(x,y+2);cout<<' '; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de; 
   gotoxy(x,y+3);cout<<' '; gotoxy(x+1,y+3);cout<<' '; gotoxy(x+2,y+3);cout<<' '; gotoxy(x+3,y+3);cout<<de; 
   gotoxy(x,y+4);cout<<' '; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de;  
   gotoxy(x,y+5);cout<<' '; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<' '; gotoxy(x+1,y+6);cout<<' '; gotoxy(x+2,y+6);cout<<' '; gotoxy(x+3,y+6);cout<<de;  
    
} 
void dibuja2( int x ,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de; gotoxy(x+2,y);cout<<de; gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de;  
   gotoxy(x,y+2);cout<<' '; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de;  
   gotoxy(x,y+3);cout<<de;gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<de; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<' ';  
   gotoxy(x,y+5);cout<<de; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de; 
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
    
} 
void dibuja3(int x ,int y ){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de; gotoxy(x+2,y);cout<<de; gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<' '; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de;  
   gotoxy(x,y+2);cout<<' '; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de;  
   gotoxy(x,y+3);cout<<' '; gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<' '; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de;  
   gotoxy(x,y+5);cout<<' '; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
    
} 
void dibuja4( int x,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<' '; gotoxy(x+2,y);cout<<' '; gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de;  
   gotoxy(x,y+2);cout<<de; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de;  
   gotoxy(x,y+3);cout<<de; gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<' '; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de; 
   gotoxy(x,y+5);cout<<' '; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<' '; gotoxy(x+1,y+6);cout<<' '; gotoxy(x+2,y+6);cout<<' '; gotoxy(x+3,y+6);cout<<de; 
    
} 
void dibuja5( int x,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de; gotoxy(x+2,y);cout<<de;gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<' '; 
   gotoxy(x,y+2);cout<<de; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<' ';  
   gotoxy(x,y+3);cout<<de; gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<' '; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de; 
   gotoxy(x,y+5);cout<<' '; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
    
} 
void dibuja6( int x,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de; gotoxy(x+2,y);cout<<de;gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<' '; 
   gotoxy(x,y+2);cout<<de; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<' ';  
   gotoxy(x,y+3);cout<<de; gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<de;  gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de; 
   gotoxy(x,y+5);cout<<de;  gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
} 


void dibuja7(int x,int y ){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de;gotoxy(x+2,y);cout<<de; gotoxy(x+3,y);cout<<de; 
   gotoxy(x,y+1);cout<<' '; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de; 
   gotoxy(x,y+2);cout<<' '; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de; 
   gotoxy(x,y+3);cout<<' '; gotoxy(x+1,y+3);cout<<' '; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de; 
   gotoxy(x,y+4);cout<<' '; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de;  
   gotoxy(x,y+5);cout<<' '; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<' '; gotoxy(x+1,y+6);cout<<' '; gotoxy(x+2,y+6);cout<<' '; gotoxy(x+3,y+6);cout<<de;  
    
} 
void dibuja8( int x,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de; gotoxy(x+2,y);cout<<de;gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de; 
   gotoxy(x,y+2);cout<<de; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de; 
   gotoxy(x,y+3);cout<<de; gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<de;  gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de; 
   gotoxy(x,y+5);cout<<de;  gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
} 
void dibuja9( int x,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de;gotoxy(x+2,y);cout<<de;gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de;  
   gotoxy(x,y+2);cout<<de; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de;  
   gotoxy(x,y+3);cout<<de; gotoxy(x+1,y+3);cout<<de; gotoxy(x+2,y+3);cout<<de; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<' '; gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de; 
   gotoxy(x,y+5);cout<<' '; gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
    
} 
void dibuja0( int x,int y){ 
    char de='л'; 
   gotoxy(x,y);cout<<de; gotoxy(x+1,y);cout<<de; gotoxy(x+2,y);cout<<de;gotoxy(x+3,y);cout<<de;  
   gotoxy(x,y+1);cout<<de; gotoxy(x+1,y+1);cout<<' '; gotoxy(x+2,y+1);cout<<' '; gotoxy(x+3,y+1);cout<<de; 
   gotoxy(x,y+2);cout<<de; gotoxy(x+1,y+2);cout<<' '; gotoxy(x+2,y+2);cout<<' '; gotoxy(x+3,y+2);cout<<de; 
   gotoxy(x,y+3);cout<<de; gotoxy(x+1,y+3);cout<<' '; gotoxy(x+2,y+3);cout<<' '; gotoxy(x+3,y+3);cout<<de;  
   gotoxy(x,y+4);cout<<de;  gotoxy(x+1,y+4);cout<<' '; gotoxy(x+2,y+4);cout<<' '; gotoxy(x+3,y+4);cout<<de; 
   gotoxy(x,y+5);cout<<de;  gotoxy(x+1,y+5);cout<<' '; gotoxy(x+2,y+5);cout<<' '; gotoxy(x+3,y+5);cout<<de;  
   gotoxy(x,y+6);cout<<de; gotoxy(x+1,y+6);cout<<de; gotoxy(x+2,y+6);cout<<de; gotoxy(x+3,y+6);cout<<de; 
} 


int reloj(int h,int r){ 
       switch(h/10){ 
                    case 0:dibuja0(48-r,14);break; 
                    case 1:dibuja1(48-r,14);break; 
                    case 2:dibuja2(48-r,14);break; 
                    case 3:dibuja3(48-r,14);break; 
                    case 4:dibuja4(48-r,14);break; 
                    case 5:dibuja5(48-r,14);break; 
                    case 6:dibuja6(48-r,14);break; 
                    case 7:dibuja7(48-r,14);break; 
                    case 8:dibuja8(48-r,14);break; 
                    case 9:dibuja9(48-r,14);break; 
                    } 
                    switch(h % 10){ 
                    case 0:dibuja0(53-r,14);break; 
                    case 1:dibuja1(53-r,14);break; 
                    case 2:dibuja2(53-r,14);break; 
                    case 3:dibuja3(53-r,14);break; 
                    case 4:dibuja4(53-r,14);break; 
                    case 5:dibuja5(53-r,14);break; 
                    case 6:dibuja6(53-r,14);break; 
                    case 7:dibuja7(53-r,14);break; 
                    case 8:dibuja8(53-r,14);break; 
                    case 9:dibuja9(53-r,14);break; 
                    } 
                    return h; 
                   } 


int main() 
{ 
system("Color 4F");
    int a = 0,h,m,s;
	int col,col1; 
     
	 time_t curr_time;
	 curr_time = time(NULL);
	 tm *tm_local = localtime(&curr_time);
	 h=tm_local->tm_hour;
	 m=tm_local->tm_min;  
	 s=tm_local->tm_sec;
	  
    while (a == 0) 
    { 
       h=reloj(h,24); 
       m=reloj(m,12); 
       s=reloj(s,0); 
       
       for(col=12;col<22;col++){
       	gotoxy(61,col);cout <<"л";
	   }
	   for(col1=12;col1<22;col1++){
	   	gotoxy(19,col1);cout <<"л";
	   }
          gotoxy(46,16);cout <<"л";gotoxy(46,18);cout <<"л"; 
         gotoxy(34,16);cout <<"л";gotoxy(34,18);cout <<"л"; 
         gotoxy(19,12);cout <<"лллллллллллллллллллллллллллллллллллллллллл";
         gotoxy(19,22);cout <<"ллллллллллллллллллллллллллллллллллллллллллл";
         
         
          Sleep(1000); 
          s++; 
          if (s > 59) 
          { 
                s = 0; 
                m++; 
                 
                if (m > 59) 
                { 
                      m = 0; 
                      h++; 
                       
                      if (h > 24) 
                      { 
                            h = 0; 
                      } 
                } 
          } 
    } 
}
