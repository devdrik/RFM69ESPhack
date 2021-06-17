#pragma once
#include <RFM69.h>

class RFM69ESPhack:public RFM69{
  public:
  using RFM69::RFM69;
  bool canSend() override;
  void setLongRange();
  bool initialize(uint8_t freqBand, uint8_t nodeID, uint8_t networkID);
};