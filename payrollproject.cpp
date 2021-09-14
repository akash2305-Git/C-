#include <iostream.h>
#include <fstream.h>
#include <process.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <dos.h>

class LINES
{
public:
    void LINE_HOR(int,int,int,char);
	void LINE_VER(int,int,int,char);
	void BOX(int,int,int,int,char);
	void CLEARUP(int);
	void CLEARDOWN(int);
		
};

class MENU
{
	public:
		void MAIN_MENU(void);
	private:
		void EDIT_MENU(void);
		void INTRODUCTION(void);
};

class EMPLOYEE
{
	public:
		void NEW_EMPLOYEE(void);
		void MODIFICAION(void);
		void DELECTION(void);
		void DISPLAY(void);
		void LIST(void);
		void SALARY_SLIP(void);
	private:
		void ADD_RECORD(int,char[],char[],char[],int,int,int,char[],char,char,char,float,float);
		void MODIFY_RECORD(int,char[],char[],char[],char[],char,char,char,float,float);
		void DELETE_RECORD(void);
		int LASTCODE(void);
		int CODEFOUND(int);
		int RECORDNO(int);
		int FOUND_CODE(int);
		void DISPLAY_RECORD(int);
		int VALID_DATE(int,int,int);
		
		int code,dd,mm,yy;
		char name[26],address[31],phone[10],design[16];
		char grade,house,convense;
		float loan,basic;
		
};


