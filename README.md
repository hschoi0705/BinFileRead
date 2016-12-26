# Reading a binary file saved in MATLAB in C++

## In MATALB
* SaveBinFile.m: generate a 3-by-4 matrix & save it as a binary file

## In C++
* main.cpp: read a binary file & save it into a cv::Mat variable.
	*  Requirements: "binFile.bin"

## Precausion
* MATLAB: column-major order
* C++: row-major order

## Environments
* Windows 10 Enterprise
* Visual Studio 2013
* MATLAB or GNU Octave
* OpenCV 2.4.13
