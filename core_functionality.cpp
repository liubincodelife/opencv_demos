#include "core_functionality.h"

core_functionality::core_functionality(Mat &input_image)
{
    image = input_image.clone();
}

core_functionality::~core_functionality()
{

}

void core_functionality::process()
{
    namedWindow("core_functionality", CV_WINDOW_AUTOSIZE);
    imshow("core_functionality", image);
}