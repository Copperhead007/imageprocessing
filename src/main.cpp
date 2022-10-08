#include "Image.h"

int main(int argc, char** argv){
    printf("hello world!\n");
    Image test("test.png");
    //test.flipX();
    test.write("output.png");
    Image copy = test;
    for(int i = 0; i < copy.w*copy.channels; ++i){
        copy.data[i] = 255;
    }
    copy.write("copy.png");
    Image blank (100,100,3);
    blank.write("blank.jpg");

    return 0;

}

/*
void swap_int (int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
*/