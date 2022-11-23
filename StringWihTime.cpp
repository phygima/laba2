//
//  stringWihTime.cpp
//  labb
//
//  Created by Виктория Гладкова on 09.11.2022.
//
#include <iostream>
#include "StringWithTime.h"
#include <time.h>
#include <fstream>

using namespace std;

StringWithTime::StringWithTime() : String()
{
    strWithTime=nullptr;
}



StringWithTime::StringWithTime(const char* str) : String(str)
{

    this->strWithTime=str;
}

StringWithTime::StringWithTime(const String& other)
{
    this->strWithTime = other;
}


StringWithTime::~StringWithTime()
{
    
}



void StringWithTime::setTime(){
    time_t seconds = time(NULL);
    tm* timeinfo = localtime(&seconds);
    
    char* timee=asctime(timeinfo);

    char* tmp = cStr();
    
    ofstream fout;
    fout.open("/Users/vikulya/Desktop/lab1/lab/lab/labb/myFile.txt",ofstream::app);
    
    if(!fout.is_open())
    {
        cout<<"same wrong"<<endl;
    }
    else
    {
        fout<<tmp<<"\n"<<timee;
    }
    
    fout.close();
}

void StringWithTime::getTime()
{
    
    ifstream fin;
    fin.open("/Users/vikulya/Desktop/lab1/lab/lab/labb/myFile.txt");
    
    if(!fin.is_open())
    {
       
        cout<<"same wrong"<<endl;
    }
    else
    {
        char s[255];
        while(!fin.eof())
        {
            fin.getline(s, 255);
            cout << s << endl;
        }
    }
    
    fin.close();
}



