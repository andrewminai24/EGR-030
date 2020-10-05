#include<iostream>
using namespace std;
  
 int main(){
 int x = 6;
 int total=0;
 while(x >= 1){
     total=total+x;
     x=x-2;
     //cout << total << endl;
    }
    cout << total << endl;
    return(0);
 }
/*
section .text
    global  _start
_start:
    mov ax,@data
    mov ds,ax
    mov ax,var1
    mov bx,var2
    clc
    add ax,bx
    mov[500],ax

section .data
var1 dw 0x5h
var2 dw 0x7h
result dw 01 dup(?),'$'
*/