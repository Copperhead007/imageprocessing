#include "Image.h"

int main(){
    FILE * fileptr;
    FILE * FileLength; 
    fileptr = fopen("unesco.raw","rb");
    fseek(fileptr, 0, SEEK_END);
    FileLength = ftell(fileptr);
    rewind(fileptr);


    return 0;

}
