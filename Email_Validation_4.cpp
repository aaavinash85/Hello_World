/*
This program check that the entered text is a valid Email or not
*/
 //User Information
 // Avinash koshal
 // Univ.Roll.NO-1655/16
 // Branch-CSE
 
#include<stdio.h>
#include <iostream>
#include <cctype>
#include <cstring>
#include<stdlib.h>
int main()
{
    int x = 25; //random size to hold contents of array            
    char input[x]; //array to hold input
    int sizeOf ; //holds length of input array
    char* ptr = nullptr; //pointer
    char* ptr2 = nullptr; //pointer

    printf("Enter your email address\n");
    scanf("%s",&x)
    sizeOf = strlen(input);

    for(int i = 0; i < sizeOf; i++)
    {
        ptr= strstr(input, "@"); //searches input array for "@" string
        if(ptr != nullptr) 
        {
            break;
        }
    }

    for(int i = 0; i < sizeOf; i++)
    {
        ptr2 = strstr(input, "."); //searches input array for "." string
        if(ptr2 != nullptr && &ptr2 > &ptr)
        {
            break;
        }
    }

    if(ptr != nullptr) //validates input of "@" sign
    {
        if(ptr2 != 0 && &ptr2 < &ptr) 
            {
                printf("Email accepted.\n");
            }

        else
            {
               printf("Missing . symbol after @\n");
            }
    }

    else
    {
        printf("Missing @ symbol\n");
    }



return 0;
}

