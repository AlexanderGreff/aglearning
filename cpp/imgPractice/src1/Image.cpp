#include "Image.h"
#include <cmath>

using HSLAPixel = cs225::HSLAPixel; 


void Image::lighten()
{
    lighten(0.1);
}

void Image::lighten(double amount)
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            currpixel.l += amount;
            if(currpixel.l > 1.0)
            {
                currpixel.l = 1.0;
            }
        }
    }

}

void Image::darken()
{
    darken(0.1);
}

void Image::darken(double amount)
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            currpixel.l -= amount;
            if(currpixel.l < 0)
            {
                currpixel.l = 0;
            }
        }
    }
}

void Image::saturate()
{
    saturate(0.1);
}


void Image::saturate(double amount)
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            currpixel.s += amount;
            if(currpixel.s > 1)
            {
                currpixel.s = 1;
            }
        }
    }
}

void Image::desaturate()
{
    desaturate(0.1);
}

void Image::desaturate(double amount)
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            currpixel.s -= amount;
            if(currpixel.s < 0)
            {
                currpixel.s = 0;
            }
        }
    }
}

void Image::grayscale()
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            currpixel.s = 0;
        }
    }
}

void Image::rotateColor(double degrees)
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            currpixel.h += degrees;
            currpixel.h = std::fmod(currpixel.h, double(360.0));
            while (currpixel.h < 0) { currpixel.h += double(360.0);}
        }
    }
}


void Image::illinify()
{
    unsigned int imgw = width();
    unsigned int imgh = height();
    for(unsigned int i = 0; i < imgw; i++)
    {
        for(unsigned int j = 0; j < imgh; j++)
        {
            HSLAPixel& currpixel = getPixel(i,j);
            if (currpixel.s >= 180)
            {
                currpixel.s = 216;
            }
            else
            {
                currpixel.s = 11;
            }
        }
    }
}

void Image::scale(double factor)
{
    PNG oldImage(*this);
    // resizes the canvas without duplicating pixels
    unsigned newWidth = factor * width();
    unsigned newHeight = factor * height();
    resize(newWidth, newHeight);
    // Copy the current data to the new image data, using the existing pixel
    // for coordinates within the bounds of the old image size
    for (unsigned x = 0; x < newWidth; x++)
    {
        for (unsigned y = 0; y < newHeight; y++)
        {
            unsigned oldx = x / factor;
            unsigned oldy = y / factor;
            if (oldx < oldImage.width() && oldy < oldImage.height())
            {
                HSLAPixel &oldPixel = oldImage.getPixel(oldx, oldy);
                HSLAPixel &newPixel = this->getPixel(x, y);
                newPixel = oldPixel;
            }
        }
    }
}

void Image::scale(unsigned w, unsigned h)
{
    auto widthRatio = double(w) / double(width());
    auto heightRatio = double(h) / double(height());
    auto ratio = std::min(widthRatio,heightRatio);
    scale(ratio);
}

void Image::insertImage(const Image &a, unsigned x, unsigned y)
{
    unsigned int imgw = a.width();
    unsigned int imgh = a.height();
    for (unsigned int i = 0; i < imgw; i++)
    {
        for (unsigned int j = 0; j < imgh; j++)
        {
            const HSLAPixel &incomingpixel = a.getPixel(i, j);
            HSLAPixel &currpixel = this->getPixel(x+i,y+j);
            if (incomingpixel.a > 0.0)
            {
                currpixel = incomingpixel;
            }
        }
    }
}
