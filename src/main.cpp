#include "Image.h"

int main(){
    FILE * fileptr;
    long FileLength; 
    fileptr = fopen("unesco.raw","rb");
    fseek(fileptr, 0, SEEK_END);
    FileLength = ftell(fileptr);
    rewind(fileptr);

    //buffers 1 & 2
    //create an empty
    


    return 0;

}
