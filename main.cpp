/****************************
[file name]--------------
main.cpp
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

#include "include.h"
#include "class.h"
#include "class3D.h"
#include "define.h"
#include "function.h"

using namespace std;  
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv)
{
	//srand(time(NULL));
	
	// print setting argument in "define.h"
	print_define_setting(true); //true for print the setting in "define.h"
	
	
	// decide the size of matrix A and B
	int CNL_A = 3;		//channel number of A
	int ROW_A = 224;	//row number of A
	int COL_A = 224;	//column number of A
	int CNL_B = 3;		//channel number of B
	int ROW_B = 3;		//row number of B
	int COL_B = 3;		//column number of B
	
	int numberOfKernel = 16; //number of kernel
	
	int i; //loop variable
	
	// class declaration
    Matrix_3D_class *Matrix_A = new Matrix_3D_class;
    Matrix_3D_class *Matrix_B = new Matrix_3D_class[numberOfKernel];
	Matrix_3D_class *Matrix_O = new Matrix_3D_class[numberOfKernel];
	
	/**** Matrix size setting ****/
	Matrix_A->set_matrix_size_3D(CNL_A,ROW_A,COL_A);
	for(i = 0;i < numberOfKernel;i++)
	{
		Matrix_B[i].set_matrix_size_3D(CNL_B,ROW_B,COL_B);
	}
	/**** Matrix size allocation ****/
    Matrix_A->matrix_allocation();
    for(i = 0;i < numberOfKernel;i++)
    {
		Matrix_B[i].matrix_allocation();
	}
    
    /**** Creat randon int matrix ****/
    Matrix_A->creat_random_int_matrix("matrix_input.txt",  0, 255); //value 0~255

	for(i = 0;i < numberOfKernel;i++)
	{
		string B_filename("matrix_kernel");
		B_filename = file_add_number_txt(B_filename,i);
		Matrix_B[i].creat_random_int_matrix(B_filename,  0, 5); //value 0~5
	}	
	
	/**** computing O = conv(A,B)****/
	for(i = 0;i < numberOfKernel;i++)
	{
		Matrix_O[i].matrix_convolution(*Matrix_A, Matrix_B[i], 1, 0);
	}
	
	for(i = 0;i < numberOfKernel;i++)
	{
		string O_filename("matrix_output");
		O_filename = file_add_number_txt(O_filename,i);
		Matrix_O[i].write_content_to_txt_orod(O_filename);
	}
	
	delete Matrix_A;
	delete Matrix_B;
	delete Matrix_O;
	
	system("pause");
    return 0;  
}
