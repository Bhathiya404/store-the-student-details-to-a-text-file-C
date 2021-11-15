#include <stdio.h>
#include <stdlib.h>      // this is a program for Store the student details to a text file. (1)

int main()   // main function
{
    char name[20];
    int id;             //declare variable
    char addr[50];


    FILE * fp;         //make a file pointer
    fp=fopen("details.txt","a");


    printf("-------------------------------------\n");
    printf("|Welcome to Student Details  Program|\n");    //print
    printf("-------------------------------------\n\n");

    if(fp == NULL)
    {
        printf("File can't be open");
        return -1;
    }

    printf("please input student id (type -99 to exit):IT"); //input student id
    scanf("%d", &id);                                        // get in user input

    if(id == -99)          // if user enter -99 exit
    {
        return -1;
    }else
        {
            fprintf(fp,"IT%d",id);   //print data to the file

        }



 while(id!=-99) // while loop
    {
        printf("please input student name : "); //input name
        scanf("%s", name);                      //get in user inputs

        fprintf(fp," %s",name);                //print name to the file

        printf("please input student address: ");
        scanf("%s", addr);

        fprintf(fp,"  %s\n",addr);

        printf("\n");
        printf("please input student id (type -99 to exit):IT");
        scanf("%d", &id);

        if(id == -99)
        {
            return -1;
        }else
            {
                fprintf(fp,"IT%d",id);
            }



    }//end while loop
        fclose(fp); //close file pointer

    return 0;

} //end main function
