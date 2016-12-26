% Write data to binary file
tempData = rand(3,4);
fileID = fopen('binFile.bin', 'w');
fwrite(fileID, tempData', 'double');
fclose(fileID);

fildID2 = fopen('binFile.bin', 'r');
A = fread(fildID2, [4 3], 'double')';
fclose(fildID2);