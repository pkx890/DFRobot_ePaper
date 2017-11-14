/*!
 *file DFRobot_IL0376F_StrDemo.ino
 *
 *@n 下载这个程序后，ePaper将会显示出两段字符串，展示了ePaper显示字符串基础功能。
 *    用户只需要调用disString函数即可显示任意字符串，并且可以设置字体颜色、大小、坐标。
 *
 * Copyright    [DFRobot](http://www.dfrobot.com), 2016
 * Copyright    GNU Lesser General Public License
 *
 * version  V0.3
 * date  2017-10-9
 */

#include "Arduino.h"
#include "DFRobot_IL0376F_SPI.h"
DFRobot_IL0376F_SPI eink;

#define EINK_CS  D3
#define Font_CS  D6
#define EINK_DC  D8
#define BUSY     D7

void setup(void)
{
    Serial.begin(115200);
    //Select the corresponding pins
    eink.begin(EINK_CS, Font_CS, EINK_DC, BUSY);

    //Clear the screen and display white
    eink.fillScreen(WHITE);
    //Displays a string, red font
    eink.disString(12,12,1,"DFRobot EINK 1234567890,!@#$%^&*()-+=",RED);
    //Refresh screen display
    eink.flush();
    delay(3000);

    //Displays a string, red font
    eink.disString(12,48,1,"DFRobot三色电子墨水屏测试程序",BLACK);
    //Refresh screen display
    eink.flush();
}

void loop(void)
{
    delay(8000);
}

