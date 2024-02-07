#pragma once

#include <string>
#include <vector>
#include "cs225/PNG.h"

// cs225::PNG makePNG(unsigned width, unsigned height, std::vector<cs225::HSLAPixel>);
cs225::PNG rotate180(const cs225::PNG& inputImg);
cs225::PNG rotate180(unsigned width, unsigned height, const std::vector<cs225::HSLAPixel>& pix_list);
std::vector<cs225::HSLAPixel> convertToVector(const cs225::PNG& inputImg);