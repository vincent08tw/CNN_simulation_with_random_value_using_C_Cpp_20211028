/****************************
[file name]--------------
define.h
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
#ifndef DEFINE_H
#define DEFINE_H

#ifndef INCLUDE_H
#include "include.h"
#endif

#define DEBUG_MODE 0			// 1: print out more detail; 0: just print out important information; 
#define SIZE_IN_AUTO 1			// 1: decide size of input matrix automatically; 0: decide by user
#define MATRIX_IN_AUTO 1		// 1: decide content of matrix from .txt file; 0: decide by user
#define CREAT_RANDOM_MATRIX 0   // 1: creat random value matrix; 0: use original txt or by hand
#define FILE_SUCCESS_PRINT 1	// 1: if file write is success, print the file name

#if DEBUG_MODE == 1
int idcount = 0; //global variable for recording matrix ID from 0
#endif

#endif



