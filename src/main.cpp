#include "Image.h"

int main(int argc, char** argv){
    printf("hello world!\n");
    Image test("unesco-1.png");
    test.flipX();
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
Image& Image::flipX() {
	uint8_t tmp[4];
	uint8_t* px1;
	uint8_t* px2;
	for(int y = 0;y < h;++y) {
		for(int x = 0;x < w/2;++x) {
			px1 = &data[(x + y * w) * channels];
			px2 = &data[((w - 1 - x) + y * w) * channels];
			
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