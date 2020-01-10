/*
void VOID_WM_PAINT(HWND hwnd, HBITMAP hbmp, BITMAP bmp); //mainze suratis daxatva
void score(char symb,HWND hwnd);
void Again(HWND hwnd, char* str);
char Win(HWND hwnd);
void OUTPUT(HWND hwnd, char* str);		//	gamoaq mesijboqsshi tamashis gagrdzeleba da dasruleba (OUTPUT.cpp)
void VOID_WM_CREATE(HWND hwnd, int amount);			//	WM_CREAT rac unda chaiweros aqaa yvelaferi (qmnis chamosashlel menius)(WM_CREATE_F.cpp)
void ChangeCursorIcon(HWND hwnd, int amount);		//	mtavari kursoris shecvla da gilakebzec (Paint.cpp)
void Paint_on_Button(HWND hwnd,int amount);			//	gilakebze suratis gadakvra (Paint.cpp)
//void Start_Butt(HWND hwnd);
void Again_Paint(HWND hwnd);
void Change_StartMouse(HWND hwnd);
//void Player(HWND hwnd);
*/
//MultiByteToWideChar

char str[2] = "";
static int amount = 1;
static HBITMAP hbmp1;
static BITMAP bmp1;
static int SCOREX=0;
static int SCOREO=0;
bool Clicked=false;
bool here = false;
char p1[8] = "dawyeba";
char p2[9] = "gamorTva";
int xxxl = 0;

#include "Buttons.cpp"
#include "Paint.cpp"
#include "Again.cpp"
#include "score.cpp"
//#include "bfunc.cpp"

#include "OUTPUT.cpp"


#include "Win.cpp"
#include "WM_CREATE_F.cpp"

#include "Header.cpp"
