#pragma once

#include "esphome.h"

// This helper function converts a MAC address string (e.g., "AA:BB:CC:DD:EE:FF")
// into a std::array of bytes that ESP-NOW can use.
std::array<uint8_t, 6> string_to_mac(const std::string& mac_string) {
  std::array<uint8_t, 6> mac_bytes;
  sscanf(mac_string.c_str(), "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx",
         &mac_bytes[0], &mac_bytes[1], &mac_bytes[2], &mac_bytes[3], &mac_bytes[4], &mac_bytes[5]);
  return mac_bytes;
}