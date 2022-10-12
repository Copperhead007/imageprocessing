#include "Image.h"

int main(){
    int H = 750;
    int W = 500;
    int i = 0;
    int j = 0;
    int a = 0, b = 0, c = 0;
    long FileLength;
    unsigned char buffer[H][W]; //2D array of 0s Buffer is used to hold data from file pointer
    unsigned char outimageReverse[H][W];
    unsigned char outimageAddLess[H][W];
    unsigned char outimageAddMore[H][W];
    printf("Assgined buffers\n");
    FILE * fp = fopen("unesco750.raw","rb");
    fread(buffer, H*W, 1, fp);
    printf("Open and Read\n");
    for(i = 0; i < H; i++){
        for(j = 0; j < W; j++){
            a = buffer[i][j];
            b = buffer[i][j];
            c = buffer[i][j];
            outimageReverse[i][j] = 255 - a;
            outimageAddLess[i][j] = b + 20;
            outimageAddMore[i][j] = c + 128;
            //outimage[i][j] = a;
            //printf("%x %x\n", outimage[i][j],buffer[i][j]);
    }
    }
    printf("AfterLoop\n");
    FILE * fp2 = fopen("reverse.raw","wb");
    FILE * fp3 = fopen("addless.raw","wb");
    FILE * fp4 = fopen("addmore.raw","wb");
    fwrite(outimageReverse, H*W,1, fp2);
    fwrite(outimageAddLess, H*W,1, fp3);
    fwrite(outimageAddMore, H*W,1, fp4);
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    fclose(fp4);
    
    /*
    FILE * fileptr;
    FILE * writeptr;
    long FileLength;
    char * buffer;
    char * bufferRepeat;
      //long fl = ftell(fp);
    //FILE * fp2 = fopen("unesco.raw","rb");
    //fread(buffer2, W*H, 1, fp);
    for(i = 0; i < W; i++){
        for(j = 0; j < H; j++){
            a = buffer[i][j];
            outimage[i][j] = a + 20;
    }
    }
    
    
    fileptr = fopen("unesco.raw","rb");
   // fseek(fileptr, 0, SEEK_END);
    FileLength = ftell(fileptr);
    rewind(fileptr);
    buffer = (char*)malloc(sizeof(char)*FileLength);
    bufferRepeat = (char*)malloc(sizeof(char)*FileLength);
    fread(buffer,sizeof(buffer),1,fileptr);
    fwrite(buffer,sizeof(buffer),1,writeptr);

    for(int i = 0; i < FileLength; i++){
        //reverse in here
    }
    for(int i = 0; i < FileLength; i++){
        //add 20
        
    }
    for(int i = 0; i < FileLength; i++){
        //add 128
    }
    */


    return 0;

}
