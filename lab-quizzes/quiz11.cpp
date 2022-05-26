//Author: Tiffany Zhu 
//Course: CSCI-135
//Instructor: Tong Yi 
//Assignment: Lab quiz 11

//To have an outputted image with a checkerboard pattern which alternates
//between the image and black pixels

 if(row % 2 == 0 && col % 2 == 0){
   out[row][col] = 0;
 }else if(row % 2 != 0 && col % 2 != 0){
   out[row][col] == 0;
 }else{
   out[row][col] = img[row][col];
 }
   
