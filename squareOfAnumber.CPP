/*
Student  Name:Elina Singh Thapa
Subject:Programming Fund
Roll No:
Program:WAP to print the surface and volume of sphere
LAB No:02
Date :18 september ,2016
*/
#include<stdio.h>
#include<conio.h>
	 void main()
	 {
	 float a,square;
	 clrscr();
	 float r,surface, volume;
	 printf("enter the radius of sphere");
	 scanf("%f",&r);
	 surface=4*(22/7)*r*r;
	 volume=(4/3)*(22/7)*r*r*r;
	 printf("the surface of the sphere is=%f",surface);
	 printf("the volume of the sphere is=%f",volume);
	 getch();
	 }
