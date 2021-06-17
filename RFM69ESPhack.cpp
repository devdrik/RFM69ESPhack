#include <RFM69ESPhack.h>
#include <RFM69registers.h>


bool RFM69ESPhack::canSend(){
  delay(1);
  RFM69::canSend();
}

void RFM69ESPhack::setLongRange(){
    RFM69::writeReg(0x58, 0x2D);    //enables low noise pre-amp to increase sensitivity by 2-3db
}