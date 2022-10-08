#define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMplementation
#include "Image.h"
#include "stb_image.h"
#include "stb_image_write.h"

    Image::Image(const char* filename){
        if(read(filename)){
            printf("Read %s\n", filename);
            size = w*h*channels;
        }
        else{
            printf("Failed to read %s\n", filename);
        }
    }
    Image::Image(int w, int h, int channels) : w(w), h(h), channels(channels){
        size = w*h*channels;
        data - new uint8_t[size];
    }
    Image::Image(const Image& img) : Image(img.w, img.h, img.channels){
        memcpy(data, img.data, size)
    }
    Image::~Image(){
        stbi_image_free(data);
    }
    bool Image::read(const char* filename){
        data = stbi_load(filename, &x, &y, &channels, 0);
        return data !=NULL;
    }
    bool Image::write(const char* filename){
        
    }