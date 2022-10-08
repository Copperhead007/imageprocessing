#include "Image.h"

int main(int argc, char** argv){
    printf("hello world!\n");
    Image test("unesco-1.png");
    test.flipX();
    test.write("output.png")

    return 0;

}
Image& Image::flipX(){
    for (int y=0; y<h; ++y){
        for(int x=0; x<w/2; ++x){
            px1 = &data[(x + y * x) * channels];
            px2 = &data[(w - 1 - x) + y * w] 8 channels;

            memcpy(tmp, px1, channels);
            memcpy(px1, px2, channels);
            memcpy(px2, tmp, channels);

        }
    }
    return *this;
}
Image& Image::flipY(){

    return *this;
}

/*
void swap_int (int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
*/