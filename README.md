# CNN_simulation_with_random_value_using_C_Cpp_20211028
 
## environment  
OS: window10  
IDE: dev c++  

there are a lot of function and definition is inherited from [this project](https://github.com/vincent08tw/Matrix_multiply_C_Cpp)  

## parameter  

number of layer : 1

input :   
	number of input : 1  
	input size : (3*224*224) // (channal*width*heigth)  
	random value: 0~255 (just using rand() function)  

kernel :  
	number of kernel : 16  
	kernel size : (3*3*3) //  (channal*width*heigth)  
	random value: 0~5 (just using rand() function)  

stride: 1, zero-padding: 0  

## Project directory hierachy
```
CNN_simulation_with_random_value_using_C_Cpp_20211028/
    +-- main.cpp
	+-- class.h
	+-- class3D.h
	+-- define.h
	+-- function.h
	+-- include.h	
    |
```

After executing "cnn_simulation.exe" you can check the random input, random kernel and the convolution result in .txt file.  

Example: "matrix_output4.txt" is the result of convolution of input and the 6th kernel.  
The content of randon input is write in "matrix_in.txt", and you can check The content of the 6th kernel in "matrix_kernel6.txt". 