#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 5
#define COL 5
//????????
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board [ROW] [COL],int row,int col);
void ComputMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);