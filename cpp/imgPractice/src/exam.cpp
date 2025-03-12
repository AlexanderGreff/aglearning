#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include <vector>
using namespace cs225;


PNG convertToPNG(unsigned width, unsigned height, const std::vector<HSLAPixel>& pix_list)
{
    PNG result(width,height);
    // for (const HSLAPixel& currpixel : pix_list)
    for (unsigned i = 0; i < pix_list.size(); i++)
    {
       const HSLAPixel& currpixel = pix_list[i];
       unsigned x = i % width;
       unsigned y =  i / width;
    //    std::cout 
    //    << "(x=" << x << ", "
    //    << "y=" << y << ") " ;
    // //    << "\n";
       HSLAPixel& resultpixel = result.getPixel(x, y);
       resultpixel = currpixel;
    }
    return result;
}

PNG rotate180(unsigned width, unsigned height, const std::vector<HSLAPixel>& pix_list)
{
    PNG result(width,height);
    // for (const HSLAPixel& currpixel : pix_list)
    for (unsigned i = 0; i < pix_list.size(); i++)
    {
       const HSLAPixel& currpixel = pix_list[i];
       unsigned x = width - (i % width) - 1;
       unsigned y = height - (i / width) - 1;
       HSLAPixel& resultpixel = result.getPixel(x, y);
       resultpixel = currpixel;
    }
    return result;
}

std::vector<HSLAPixel> convertToVector1(const PNG& inputImg)
{
    std::vector<HSLAPixel> result;
    for (unsigned y = 0; y < inputImg.height(); y++)
    {
        for (unsigned x = 0; x < inputImg.width(); x++)
        {
            const HSLAPixel& captureInput = inputImg.getPixel(x,y);
            result.push_back(captureInput);
        }
    }
    return result;
}

std::vector<HSLAPixel> convertToVector(const PNG& inputImg)
{
    std::vector<HSLAPixel> result;
    result.resize(inputImg.height() * inputImg.width());
    for (unsigned x = 0; x < inputImg.width(); x++)
    {
        for (unsigned y = 0; y < inputImg.height(); y++)
        {
            const HSLAPixel& captureInput = inputImg.getPixel(x,y);
            result[x+ y*inputImg.width()] = captureInput;
        }
    }
    return result;
}






















































PNG rotate180(const PNG& inputImg)
{
    PNG resultImg(inputImg.width(),inputImg.height());
    for (unsigned x = 0; x < inputImg.width(); x++)
    {
        for (unsigned y = 0; y < inputImg.height(); y++)
        {
            const HSLAPixel& inputPixel = inputImg.getPixel(x,y);
            HSLAPixel& resultPixel = resultImg.getPixel(resultImg.width()-x-1,resultImg.height()-y-1);
            resultPixel = inputPixel;
        }
    }
    return resultImg;
}





// PNG mirrorPNG(unsigned width, unsigned height, std::vector<HSLAPixel> pix_list)
// {
//     PNG mirroredImg(width,height);
//     for (unsigned i = pix_list.size(); i != 0 ; i--)
//     {
//         HSLAPixel& currpixel = pix_list[i];
//         HSLAPixel& imgPCoords = mirroredImg.getPixel(i % width, i / width);
//         imgPCoords = currpixel;
//     }
//     return mirroredImg;
// }































































// PNG makePNG(unsigned width, unsigned height, std::vector<HSLAPixel> pix_list)
// {
//     PNG result(width, height);
//     for (unsigned long i = 0; i < pix_list.size(); i++)
//     {
//         HSLAPixel& p = result.getPixel(i % width, i / width);
//         p = pix_list[i];

//     }
//     return result;
// }

// PNG rotatePNGRight(const PNG& orig)
// {
//     PNG rotated(orig.height(),orig.width());
//     for (unsigned x = 0; x < orig.width(); x++)
//     {
//         for (unsigned y = 0; y < orig.height(); y++)
//         {
//             const HSLAPixel& currpixel = orig.getPixel(x,y);
//             HSLAPixel& newpixel = rotated.getPixel(rotated.width()-y,x);
//             newpixel = currpixel;
//         }
//     }
//     return rotated;
// }

// PNG rotatePNGLeft(const PNG& baseImage)
// {
//     PNG leftRotated(baseImage.height(), baseImage.width());
//     for (unsigned x = 0; x < baseImage.width(); x++)
//     {
//         for (unsigned y = 0; y < baseImage.height(); y++)
//         {
//             const HSLAPixel& basePixel = baseImage.getPixel(x,y);
//             HSLAPixel& rotatedPixel = leftRotated.getPixel(y, leftRotated.height()-x);
//             rotatedPixel = basePixel;
//         }
//     }
//     return leftRotated;
// }



