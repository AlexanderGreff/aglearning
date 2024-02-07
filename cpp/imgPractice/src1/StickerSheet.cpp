#include "StickerSheet.h"
#include <algorithm> 

StickerSheet::StickerSheet(const Image& picture)
: baseImage_(picture)
{
}

int StickerSheet::addSticker(Image& sticker, int x, int y)
{
    layers_.push_back(&sticker);
    layerCoords_.push_back(Coordinates(x,y));
    return layers()-1;
}

int StickerSheet::setStickerAtLayer(Image& sticker, unsigned layer, int x, int y)
{
    if (int(layer) < layers())
    {
        layers_[layer] = &sticker;
        layerCoords_[layer] = Coordinates(x,y);
        return layer;
    }
    else
    {
        return addSticker(sticker,x,y);
    }

    return -1;
}

bool StickerSheet::translate(unsigned index, int x, int y)
{
    if (int(index) < layers())
    {
        layerCoords_[index] = Coordinates(x, y);
        return true;
    }
    return false;
}

void StickerSheet::removeSticker(unsigned index)
{
    if (int(index) < layers())
    {
        layers_.erase(std::find(layers_.begin(), layers_.end(), layers_[index]));
        layerCoords_.erase(std::find(layerCoords_.begin(), layerCoords_.end(), layerCoords_[index]));
    }
}

Image* StickerSheet::getSticker(unsigned index)
{
    if(int(index) < layers())
    {
        return layers_[index];
    }
    return nullptr;
}

int StickerSheet::layers() const
{
    return layers_.size();
}

Image StickerSheet::render() const
{
    Image result;
    Coordinates upperLeft(0,0);
    Coordinates lowerRight(baseImage_.width(),baseImage_.height());

    for(int i = 0; i < layers(); i++)
    {
        Coordinates layerupperLeft = layerCoords_[i];
        Coordinates layerlowerRight =layerupperLeft + Coordinates(layers_[i]->width(),layers_[i]->height());
        upperLeft = upperLeft.min(layerupperLeft);
        lowerRight = lowerRight.max(layerlowerRight);
    }
    result.resize(lowerRight.posX - upperLeft.posX, lowerRight.posY - upperLeft.posY);
    result.insertImage(baseImage_, -upperLeft.posX, -upperLeft.posY);
    for(int i = 0; i < layers(); i++)
    {
        
        result.insertImage(*(layers_[i]), -upperLeft.posX+layerCoords_[i].posX,  -upperLeft.posY +layerCoords_[i].posY);
    }
    return result;
}
