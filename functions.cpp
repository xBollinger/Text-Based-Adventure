/*
 * functions.cpp
 *
 *  Created on: Jan 7, 2013
 *      Author: Mindofbeholder & xBollinger
 */

#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h> // for resizing the window
using namespace std;

/*****************************
 * Used in inserting a pause *
 *****************************/

void pause(){
	system("PAUSE");
}

/*******************************************
 * Used in clearing out the console screen *
 *******************************************/

void clear(){
	system("CLS");
}

/***************************************
 * A function that allows the designer *
 * to create a choice that does have   *
 * an effect on future aspects of the  *
 * story.                              *
 ***************************************/

int twoChoice(string descript, string opOne, string opTwo){
	int choice =0;
	start:
	cout << descript;
	cout << "\n";
	cout << "\n";
	cout << "1. " << opOne;
	cout << "\n";
	cout << "2. " << opTwo;
	cout << "\n";
	cin >> choice;
	if(choice > 2){
		goto start;
	}
	return choice;


}

/*************************************************
 * A function that allows the designer to create *
 * a choice that has no effect on the story      *
 *************************************************/

void noEffect(string descript, string opOne, string opTwo, string answerOne, string answerTwo){
	int choice =0;
	cout << descript;
	cout << "\n";
	cout << "\n";
	cout << "1. " << opOne;
	cout << "\n";
	cout << "2. " << opTwo;
	cout << "\n";
	start:
	cin >> choice;
	switch (choice){

		case 1:
			cout << answerOne;
			break;
		case 2:
			cout << answerTwo;
			break;
		default:
			goto start;
			break;
		}
	clear();


}

/*************************************
 * Used for resizing the game window *
 *************************************/

void resize(int Width, int Height)
    {
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size
    }

	/***********************
	 * Displays "GotMilk?" *
	 ***********************/

void title(){
	cout<<"  _____       _     __  __ _ _ _   ___  ";
	cout << endl;
	cout<<" / ____|     | |   |  \\/  (_) | | |__ \\ ";
	cout << endl;
	cout<<"| |  __  ___ | |_  | \\  / |_| | | __ ) |";
	cout << endl;
	cout<<"| | |_ |/ _ \\| __| | |\\/| | | | |/ // / ";
	cout << endl;
	cout<<"| |__| | (_) | |_  | |  | | | |   <|_|  ";
	cout << endl;
	cout<<" \\_____|\\___/ \\__| |_|  |_|_|_|_|\\_(_)  ";
	cout << endl;
	cout << endl;
}

/**********************************************************************************
 * Credit Sequence that displays "Coded by: Mindofbeholder Written by: xBollinger *
 **********************************************************************************/

void credits(){
	cout<<" __      .     .  .          .  .      .   ._.     .     .  .      ";
	cout << endl;
	cout<<"/  ` _  _| _  _|  |_   . *   |\\/|*._  _| _ |,|_  _ |_  _ | _| _ ._.";
	cout << endl;
	cout<<"\\__.(_)(_](/,(_]  [_)\\_| *   |  ||[ )(_](_)| [_)(/,[ )(_)|(_](/,[  ";
	cout << endl;
	cout<<"                     ._|                                           ";
	cout << endl;
	cout<<".  .     ,  ,         .             .__    ..             ";
	cout << endl;
	cout<<"|  |._.*-+--+- _ ._   |_   . *   \\./[__) _ ||*._  _  _ ._.";
	cout << endl;
	cout<<"|/\\|[  | |  | (/,[ )  [_)\\_| *   /'\\[__)(_)|||[ )(_](/,[  ";
	cout << endl;
	cout<<"                         ._|                     ._|      ";
	cout << endl;
	cout << endl;
}
