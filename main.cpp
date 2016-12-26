#include <iostream>
#include <opencv2\core\core.hpp>

int main(void)
{
	FILE *fileID;
	
	cv::Mat values;

	values.create(3, 4, CV_64FC1);

	fopen_s(&fileID, "binFile.bin", "rb");
	double *valptr = (double*)values.data;
	for (int i = 0; i < values.rows*values.cols; i++, valptr++){
		fread_s(valptr, sizeof(double), sizeof(double), 1, fileID);
	}
	
	std::cout << values << std::endl;
	fclose(fileID);

	return 0;
}