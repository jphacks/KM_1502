/* optFlow2RGB.h */
#ifndef INCLUDE_OPTFLOW2RGB_H
#define INCLUDE_OPTFLOW2RGB_H

//-----------------------------------------------------------------------
// include files
//-----------------------------------------------------------------------
#include <opencv2/opencv.hpp>

//-----------------------------------------------------------------------
// function prototype
//-----------------------------------------------------------------------
void optFlow2RGB(cv::Mat& flow32FC2,
                 cv::Mat& rgb32FC3);

//-----------------------------------------------------------------------
#endif // INCLUDE_OPTFLOW2RGB_H