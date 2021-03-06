/****************************
[file name]--------------
function.h
[project name]----------
CNN_simulation_with_random_value_using_C_Cpp_20211028
[despription]------
simulate CNN with random value
[editor]----
yu-wen Wang (vincent08tw@gmail.com) (vincent08tw@yahoo.com.tw)
[create date]---
2021-10-28
[last modify]----
2021-10-28 
[additional explain]----
****************************/

#ifndef FUNCTION_H
#define FUNCTION_H

#ifndef INCLUDE_H
#include "include.h"
#endif

#include "define.h"
using namespace std;

void print_define_setting(bool ToF)
{
	if(ToF) //true for print the setting in "define.h"
	{
		cout << "*************MODE*************\n"; // 13+4+13 =30
		#if DEBUG_MODE == 1
		printf("%-23s%7s\n","DEBUG_MODE","ON");
		#else
		printf("%-23s%7s\n","DEBUG_MODE","OFF");
		#endif
		
		#if SIZE_IN_AUTO == 1
		printf("%-23s%7s\n","SIZE_IN_AUTO","ON");
		#else
		printf("%-23s%7s\n","SIZE_IN_AUTO","OFF");
		#endif
		
		#if MATRIX_IN_AUTO == 1
		printf("%-23s%7s\n","MATRIX_IN_AUTO","ON");
		#else
		printf("%-23s%7s\n","MATRIX_IN_AUTO","OFF");
		#endif
		
		#if CREAT_RANDOM_MATRIX == 1
		printf("%-23s%7s\n","CREAT_RANDOM_MATRIX","ON");
		#else
		printf("%-23s%7s\n","CREAT_RANDOM_MATRIX","OFF");
		#endif
		
		cout << "******************************\n\n\n\n";
	}
}
void convolution_size_detection(int CNL_input, int ROW_input, int COL_input, int CNL_kernel, int ROW_kernel, int COL_kernel)
{
	bool errorFlag = false;
	if(CNL_input != CNL_kernel)
	{
		printf("\n\n\n %d != %d >> channel does no match!!", CNL_input, CNL_input);
		errorFlag = true;
	}
	if(ROW_input != COL_input)
	{
		printf("\n\n\n %d != %d >> input is not a square matrix!!", ROW_input, COL_input);
		errorFlag = true;
	}
	if(ROW_kernel != COL_kernel)
	{
		printf("\n\n\n %d != %d >> kernel is not a square matrix!!", ROW_kernel, COL_kernel);
		errorFlag = true;
	}
	if(ROW_input < ROW_kernel)
	{
		printf("\n\n\n %d < %d >> input size is less than kernel size!!", ROW_input, ROW_kernel);
		errorFlag = true;
	}
	if(errorFlag)
	{
		system("pause");
		exit(1);	
	}
}
void convolution_size_detection(int ROW_input, int COL_input, int ROW_kernel, int COL_kernel)
{
	bool errorFlag = false;
	if(ROW_input != COL_input)
	{
		printf("\n\n\n %d != %d >> input is not a square matrix!!", ROW_input, COL_input);
		errorFlag = true;
	}
	if(ROW_kernel != COL_kernel)
	{
		printf("\n\n\n %d != %d >> kernel is not a square matrix!!", ROW_kernel, COL_kernel);
		errorFlag = true;
	}
	if(ROW_input < ROW_kernel)
	{
		printf("\n\n\n %d < %d >> input size is less than kernel size!!", ROW_input, ROW_kernel);
		errorFlag = true;
	}
	if(errorFlag)
	{
		system("pause");
		exit(1);	
	}
}
void multiplication_size_detection(int matrix_a_col, int matrix_b_row)
{
	if(matrix_a_col != matrix_b_row) // number of column of A and number of row of B aren't match
	{
		printf("\n\n\n  %d != %d multiplication_size_error!!", matrix_a_col, matrix_b_row);
		exit(1);
	}
}
void square_matrix_detection(int matrix_a_row, int matrix_a_col)
{
	if(matrix_a_row != matrix_a_col) 
	{
		printf("\n\n\n  %d != %d square_matrix_error!!", matrix_a_row, matrix_a_col);
		exit(1);
	}
}
void inner_product_size_detection(int matrix_a_cnl, int matrix_a_row, int matrix_a_col, int matrix_b_cnl, int matrix_b_row, int matrix_b_col)
{
	bool errorFlag = false;
	if(matrix_a_cnl != matrix_b_cnl)
	{
		printf("\n\n\n channel %d != %d inner_product_size_error!!",matrix_a_cnl,matrix_b_cnl);
		errorFlag = true;
	}
	if(matrix_a_row != matrix_b_row) // number of row isn't match
	{
		printf("\n\n\n row %d != %d inner_product_size_error!!",matrix_a_row,matrix_b_row);
		errorFlag = true;
	}
	if(matrix_a_col != matrix_b_col) // number of column isn't match
	{
		printf("\n\n\n column %d != %d inner_product_size_error!!",matrix_a_col,matrix_b_col);
		errorFlag = true;
	}
	if(errorFlag)
	{
		system("pause");
		exit(1);	
	}
}
void inner_product_size_detection(int matrix_a_row, int matrix_a_col, int matrix_b_row, int matrix_b_col)
{
	bool errorFlag = false;
	if(matrix_a_row != matrix_b_row) // number of row isn't match
	{
		printf("\n\n\n row %d != %d inner_product_size_error!!",matrix_a_row,matrix_b_row);
		errorFlag = true;
	}
	if(matrix_a_col != matrix_b_col) // number of column isn't match
	{
		printf("\n\n\n column %d != %d inner_product_size_error!!",matrix_a_col,matrix_b_col);
		errorFlag = true;
	}
	if(errorFlag)
	{
		system("pause");
		exit(1);	
	}
}
string file_add_number_txt(string filename, int number) // matrix_a -> matrix_a1.txt, matrix_a2.txt ...
{
	stringstream ss;
	ss << number;
	filename = filename + ss.str();
	filename = filename + ".txt";
	
	return filename;
}
#if DEBUG_MODE == 1
void idcount_increase()
{
	idcount++;	
}		
#endif

#endif
