#pragma once

namespace Images {

  #ifndef DEBUG
  const uint8_t PROGMEM BootLogo[] = {
  0x45, 0x9f, 0x37, 0x16, 0x20, 0x00, 0x25, 0x60, 0xe2, 0x70, 0x7a, 0xed, 0x7c, 0x76, 0xf5, 0xea, 
  0x06, 0xa2, 0x90, 0x90, 0xa1, 0x03, 0x22, 0xda, 0x55, 0x3b, 0x44, 0x06, 0x0c, 0xcd, 0x67, 0x1d, 
  0xb9, 0x68, 0x2f, 0x9e, 0xd0, 0x6b, 0x0f, 0xe8, 0x09, 0xbd, 0xe6, 0x82, 0x5e, 0x85, 0x5b, 0x4e, 
  0xdc, 0x20, 0x57, 0xe5, 0xea, 0x05, 0xf8, 0x10, 0x17, 0x40, 0x00, 0x0a, 0xc4, 0x80, 0x39, 0x74, 
  0x72, 0xea, 0xe7, 0x00, 0x86, 0xa7, 0x59, 0x1c, 0x51, 0x34, 0x08, 0x28, 0x59, 0x16, 0x86, 0xb5, 
  0x41, 0x62, 0xb8, 0xf0, 0xd2, 0x41, 0xb0, 0xc7, 0x96, 0x62, 0xca, 0x4e, 0x19, 0xb0, 0xe4, 0xcc, 
  0x35, 0xaf, 0x39, 0x73, 0xe7, 0x35, 0x67, 0x7f, 0x1c, 0x02, 0x0b, 0x08, 0x05, 0xbb, 0xfb, 0x7a, 
  0xb3, 0xcd, 0xb4, 0xee, 0x18, 0x03, 0x24, 0xb2, 0x0a, 0x37, 0xe0, 0xfb, 0x63, 0x21, 0x83, 0x05, 
  0xc0, 0x69, 0x1c, 0x03, 0x47, 0xe0, 0xc8, 0x19, 0x38, 0x12, 0xe6, 0x08, 0x27, 0xe0, 0xe6, 0x5f, 
  0x0d, 0x81, 0x4d, 0x38, 0xfa, 0xc0, 0xcb, 0xb8, 0x40, 0x6e, 0xc0, 0x95, 0x9f, 0xe7, 0xdd, 0xab, 
  0x57, 0xaf, 0x5e, 0xbd, 0x72, 0x04, 0xce, 0x5e, 0x39, 0x22, 0xbf, 0x06,
  };
  #else
  const uint8_t PROGMEM BootLogo[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Title_Blank_Comp[] = {
  0xbf, 0xff, 0x9e, 0xd6, 0xd2, 0xc5, 0x02, 0xed, 0x76, 0xb0, 0x59, 0x6c, 0x96, 0xae, 0xc2, 0x91, 
  0xab, 0x57, 0xaf, 0x1a, 0x29, 0x68, 0x0e, 0x5e, 0xbd, 0x7a, 0xf5, 0x9f, 0x01, 0xcb, 0xa5, 0x2a, 
  0x05, 0xdb, 0xb6, 0x42, 0x91, 0x22, 0x45, 0x8a, 0xaa, 0xcb, 0x13, 0x13, 0x90, 0x0b, 0x20, 0x17, 
  0x40, 0x2e, 0x80, 0x5c, 0x00, 0xb9, 0x00, 0x72, 0x01, 0xe4, 0x02, 0xc8, 0x05, 0xf8, 0xf3, 0x8f, 
  0xcb, 0x52, 0xca, 0xd0, 0x5a, 0xb5, 0xb2, 0xb0, 0x28, 0xc1, 0xe2, 0x38, 0xf9, 0x8f, 0xd1, 0x74, 
  0xd5, 0x1a, 0x1a, 0xed, 0x26, 0x0e, 0xff, 0xe9, 0x3a, 0x6b, 0x83, 0xb5, 0x54, 0xaf, 0xc6, 0xa0, 
  0x87, 0x18, 0x40, 0x20, 0x61, 0x00, 0x00, 0xe1, 0x00, 0x84, 0x13, 0xff, 0xd0, 0x3c, 0xad, 0xa5, 
  0x8b, 0xad, 0xdd, 0x0e, 0x5d, 0x99, 0x81, 0x0e, 0x12, 0x20, 0x00, 0xc0, 0x3f, 0x47, 0x96, 0x4b, 
  0x55, 0x0a, 0xb6, 0x6d, 0x85, 0xa2, 0xea, 0x83, 0x09, 0x10, 0xfe, 0x51, 0x8e, 0xcb, 0x52, 0xca, 
  0x70, 0x57, 0x37, 0x8b, 0xcd, 0xa2, 0xe8, 0x3a, 0xf1, 0x0f, 0x11,
  };
  #else
  const uint8_t PROGMEM Title_Blank_Comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Winner_Comp[] = {
  0x4f, 0x1f, 0xa6, 0x04, 0x19, 0xc0, 0x40, 0x0a, 0x86, 0x63, 0x4a, 0x08, 0x21, 0x84, 0xe6, 0x46, 
  0xc8, 0x28, 0x12, 0x26, 0xa1, 0x9d, 0x44, 0x00, 0x01, 0x08, 0x00, 0x15, 0x42, 0x91, 0x90, 0x51, 
  0x24, 0x6c, 0xa0, 0x00, 0x04, 0x80, 0x00, 0xd0, 0x4e, 0xc2, 0x98, 0x21, 0x9c, 0x98, 0xcc, 0x6e, 
  0x26, 0x41, 0x3a, 0x0e, 0x0c, 0x98, 0x93, 0x02, 0x05, 0x20, 0x00, 0x04, 0x80, 0x76, 0x12, 0xc6, 
  0x0c, 0xe1, 0x44, 0x00, 0xc6, 0xa4, 0x29, 0x21, 0x84, 0x10, 0x9a, 0x1b, 0x21, 0xa3, 0x48, 0x98, 
  0x84, 0x76, 0x52, 0x16, 0x00, 0x01, 0x20, 0xc8, 0x43, 0x16, 0x0b, 0x10, 0x40, 0x80, 0x20, 0xb0, 
  0xd9, 0x6c, 0x5e, 0x33, 0x5d, 0x9c, 0x99, 0x2e, 0x60, 0x32, 0xf9, 0xd5, 0x2c, 0x26, 0x93, 0x3f, 
  0x1b, 0xd3, 0xcf, 0xb0, 0x58, 0x80, 0x00, 0x02, 0x04, 0x81, 0xcd, 0x66, 0xf3, 0x1d, 0x36, 0x0b, 
  0x28, 0x00, 0x05, 0x16, 0xc3, 0xc5, 0xf7, 0x08, 0x6d, 0x08, 0xb7, 0x94, 0x10, 0x42, 0x08, 0xcd, 
  0x8d, 0xd9, 0x50, 0xa4, 0xa8, 0x74, 0x4c, 0x9e, 0x12, 0x32, 0x42, 0x68, 0x46, 0x4a, 0xd0, 0x10, 
  0x42, 0x73, 0x63, 0x76, 0x33, 0x51, 0xc9, 0x92, 0xa2, 0xc1, 0x55, 0x24, 0x2c, 0x83, 0xd0, 0x49, 
  0x53, 0x42, 0x08, 0x05, 0x3a, 0x26, 0x9f, 0x60, 0xb3, 0x80, 0x05, 0x14, 0x28, 0x30, 0xfc, 0x3e, 
  0x6b, 0x85, 0x70, 0xc6, 0x55, 0x24, 0x4c, 0x42, 0x3b, 0xb9, 0xa5, 0x00, 0x04, 0x80, 0x0a, 0x9f, 
  0x4a, 0x09, 0x9b, 0xc9, 0x44, 0x42, 0x73, 0x14, 0x40, 0x00, 0x00, 0x00, 0x40, 0x01, 0xa0, 0x1c, 
  0x5c, 0x6e, 0x24, 0x00, 0x04, 0x80, 0x20, 0xdf, 0xc1, 0x55, 0xa4, 0x48, 0x11, 0xc5, 0x3b, 0xae, 
  0x49, 0x53, 0x42, 0x08, 0x21, 0x34, 0xc7, 0x94, 0x10, 0x42, 0x08, 0xcd, 0x31, 0x25, 0x84, 0x50, 
  0x20, 0x6b, 0xf2, 0x12,
  };
  #else
  const uint8_t PROGMEM Winner_Comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Title_Levels_Comp[] ={
  0xd7, 0x87, 0x63, 0x01, 0x18, 0x8e, 0x4e, 0xc4, 0x1e, 0x81, 0x85, 0x08, 0x1c, 0x9d, 0x40, 0xfb, 
  0x2b, 0x86, 0x1c, 0xc8, 0x38, 0x3a, 0x91, 0x78, 0xec, 0xe6, 0x58, 0x39, 0x24, 0x1c, 0x7a, 0x34, 
  0xc8, 0xea, 0x6d, 0xfc, 0x94, 0x21, 0x7b, 0xdc, 0x0c, 0xb2, 0x7a, 0x6b, 0x38, 0x3b, 0x11, 0xc6, 
  0xaf, 0x18, 0xb2, 0xc7, 0xcd, 0x80, 0x0b, 0x38, 0x8e, 0xd3, 0x00,
  };
  #else
  const uint8_t PROGMEM Title_Levels_Comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Title_Mini_Rogue_Comp[] ={
  0x45, 0xdf, 0x7f, 0xb0, 0xeb, 0xda, 0x1d, 0x8e, 0x7d, 0x71, 0xde, 0xa7, 0xf3, 0x3e, 0xbd, 0xec, 
  0xb6, 0x5e, 0x5f, 0x5c, 0xff, 0x68, 0xf6, 0xd6, 0x5b, 0x57, 0xd2, 0x04, 0xd3, 0x5b, 0x4f, 0x33, 
  0xe7, 0x39, 0x8e, 0x5e, 0xcd, 0x8e, 0x57, 0x8f, 0x63, 0x5e, 0x3b, 0x4f, 0xb9, 0x3a, 0x1b, 0x33, 
  0x6b, 0xc7, 0x70, 0xb4, 0x77, 0xbc, 0x7a, 0x75, 0x2e, 0x0e, 0xd3, 0xab, 0x57, 0xb9, 0x33, 0x56, 
  0x6f, 0xbd, 0x35, 0xc1, 0x34, 0xa3, 0x1d, 0x30, 0x3f, 0x34, 0xba, 0xe8, 0x17, 0x32, 0x67, 0xe6, 
  0x2d, 0x57, 0x67, 0x63, 0x3a, 0xbd, 0xe6, 0xb4, 0x73, 0x3b, 0x8c, 0xa3, 0x57, 0x53, 0x12, 0xaf, 
  0x5e, 0x33, 0xcf, 0x5d, 0x47, 0xaf, 0x74, 0x97, 0xab, 0xc7, 0x31, 0x9e, 0x7d, 0x2a, 0xcb, 0x8c, 
  0x75, 0x68, 0xf8, 0x0e, 0x67, 0x16, 0x9b, 0xc5, 0xe6, 0xcc, 0x67, 0x39, 0xb3, 0xd8, 0x2c, 0x36, 
  0x8b, 0x33, 0x9b, 0x57, 0x4c, 0x20, 0x99, 0x19, 0xbc, 0x63, 0x71, 0x66, 0xb3, 0xd8, 0x2c, 0xce, 
  0x7c, 0x96, 0x33, 0x9b, 0xc5, 0x66, 0x71, 0xe6, 0x1b, 0x84, 0x00,
  };
  #else
  const uint8_t PROGMEM Title_Mini_Rogue_Comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM High_Score_Comp[] ={
  0x55, 0xa7, 0xff, 0xde, 0x00, 0x80, 0x87, 0x81, 0x05, 0x20, 0x39, 0x3a, 0x11, 0x91, 0x5b, 0x17, 
  0x62, 0x6f, 0x3d, 0xa0, 0x67, 0xa7, 0x10, 0xe0, 0x15, 0xf0, 0xd7, 0x30, 0xe0, 0x68, 0x3a, 0x7d, 
  0x04, 0xfc, 0x76, 0x64, 0x20, 0x20, 0x13, 0x09, 0xf2, 0x06, 0xf8, 0x89, 0x00, 0xc0, 0xcb, 0xb1, 
  0xe8, 0x38, 0x41, 0x6e, 0x01, 0x01, 0xe8, 0xb8, 0x8c, 0xc9, 0xc8, 0x1b, 0xe0, 0x8f, 0x35, 0x04, 
  0xd6, 0x38, 0xb5, 0x1c, 0x7c, 0x04, 0xfc, 0xf4, 0x0e, 0x2a, 0x42, 0x17, 0x7d, 0x04, 0xfc, 0x44, 
  0x00, 0xe0, 0xdf, 0x0e, 0x2b, 0xc3, 0x59, 0x47, 0x47, 0xc0, 0xe1, 0x2b, 0xe0, 0xb7, 0xbb, 0x02, 
  0x0a, 0x23, 0x10, 0x5f, 0x01, 0x3f, 0x11, 0x00, 0xf8, 0x37, 0x55, 0x95, 0x50, 0x24, 0x8c, 0xbe, 
  0x01, 0x7e, 0x3a, 0x38, 0x90, 0xa0, 0x45, 0x02, 0x3e, 0x02, 0x7e, 0x22, 0x00, 0xf0, 0x4b, 0xc7, 
  0x02, 0xcc, 0xb5, 0x93, 0x7a, 0x76, 0x08, 0x03, 0x38, 0x02, 0x45, 0x0a, 0x5c, 0x81, 0x22, 0x05, 
  0x3e, 0x32, 0x04, 0xd6, 0x00,
  };
  #else
  const uint8_t PROGMEM High_Score_Comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM High_Score2_Comp[] ={
  0x59, 0xa7, 0xff, 0xe0, 0x81, 0x03, 0x01, 0x6e, 0x10, 0x15, 0xa0, 0x20, 0x6f, 0x80, 0xff, 0x00, 
  0x01, 0x65, 0x01, 0x50, 0x4e, 0x88, 0x08, 0x50, 0xbd, 0x53, 0xe0, 0xef, 0xc2, 0x11, 0xf8, 0xba, 
  0x57, 0xfe, 0x3e, 0x1c, 0x91, 0x5b, 0x3e, 0xc7, 0xd5, 0xbf, 0x03, 0x47, 0xe0, 0x9a, 0x34, 0x20, 
  0x04, 0xb9, 0xb9, 0xf8, 0x10, 0x3f, 0x13, 0x09, 0x10, 0xc2, 0x48, 0x10, 0x09, 0x1b, 0x28, 0x0b, 
  0x80, 0x72, 0x88, 0x88, 0x00, 0x82, 0xde, 0x29, 0xf0, 0x67, 0x48, 0x12, 0xac, 0xb0, 0xc2, 0xc8, 
  0xa6, 0x00, 0x2c, 0x0a, 0x6c, 0x12, 0x01, 0x2d, 0x78, 0x07, 0xca, 0xcf, 0x07, 0x96, 0x65, 0x31, 
  0x50, 0x08, 0x3a, 0xd8, 0x40, 0x59, 0x00, 0x94, 0x8d, 0x24, 0x36, 0xdc, 0x80, 0xf2, 0x3b, 0x38, 
  0x8e, 0x53, 0xee, 0x1c, 0x81, 0x6b, 0x2e, 0x20, 0x3c, 0xe5, 0x07, 0x73, 0xeb, 0x71, 0x5c, 0x82, 
  0x27, 0xaf, 0xc0, 0x91, 0x2b, 0xe6, 0xc2, 0x13, 0x7e, 0x3d, 0x70, 0x81, 0x5c, 0x73, 0x02, 0xee, 
  0x1c, 0x81, 0x3b, 0x97, 0xc8, 0x95, 0x5f, 0x03,
  };
  #else
  const uint8_t PROGMEM High_Score2_Comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Blink_Eyes_1[] = {
  0x99, 0x87, 0xd9, 0x4d, 0xdb, 0x8d, 0x39, 0xa8, 0x27, 0x7e, 0x01, 0x27, 0xf5, 0x10, 0xd9, 0x6d, 
  0xd3, 0x1d,
  };
  #else
  const uint8_t PROGMEM Blink_Eyes_1[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Blink_Eyes_2[] = {
  0x19, 0x07, 0x38, 0x9d, 0x0e, 0x70, 0x00, 0x93, 0xcd, 0xe4, 0x67, 0x31, 0x59, 0x0c, 0xa0, 0xe0, 
  0x70, 0x38, 0x1c,
  };
  #else
  const uint8_t PROGMEM Blink_Eyes_2[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  const uint8_t * const Blink_Eyes[] = { 
    Blink_Eyes_1,
    Blink_Eyes_2
  };

  #ifndef DEBUG
  const uint8_t PROGMEM Game_Over_Banner[] ={
  79, 8,
  0x00, 0x00, 0x00, 0x3c, 0x7e, 0xc3, 0x91, 0xf3, 0x77, 0x32, 0x10, 0x80, 0xc0, 0xf8, 0x2f, 0x2f, 
  0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x81, 0xff, 0xff, 0x1f, 0xfc, 0x78, 0x1c, 0xff, 0xff, 0x00, 0x81, 
  0xff, 0xff, 0x91, 0x91, 0xb9, 0x83, 0x40, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x7e, 0xe1, 0x81, 0x87, 
  0x7e, 0x3c, 0x00, 0x01, 0x07, 0x1f, 0xff, 0xf8, 0x38, 0x0f, 0x03, 0x01, 0x00, 0x81, 0xff, 0xff, 
  0x91, 0x91, 0xb9, 0x83, 0x40, 0x81, 0xff, 0xff, 0x11, 0x7f, 0xff, 0xee, 0x80, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM Game_Over_Banner[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Flame_01_comp[] ={
  0x8f, 0x0f, 0x75, 0xb5, 0x6d, 0xb3, 0x18, 0x89, 0x75, 0xb9, 0xd9, 0x6c, 0xde, 0xf0, 0x09, 0xce, 
  0xbd, 0xb5, 0x1d, 0xc0, 0xf2, 0xd6, 0xb7,
  };
  #else
  const uint8_t PROGMEM Flame_01_comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif

  #ifndef DEBUG
  const uint8_t PROGMEM Flame_02_comp[] ={
  0x8f, 0x8f, 0x82, 0x76, 0xef, 0x79, 0x02, 0x07, 0x78, 0xb1, 0x1c, 0x84, 0x27, 0x7c, 0x3e, 0x70, 
  0x8a, 0xd9, 0x25, 0xb7, 0xbe, 0x05,
  };
  #else
  const uint8_t PROGMEM Flame_02_comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif
  
  #ifndef DEBUG
  const uint8_t PROGMEM Flame_03_comp[] ={
  0x8f, 0x4f, 0xda, 0xb6, 0x6d, 0x47, 0x16, 0xb0, 0xc0, 0xe5, 0x76, 0x5a, 0x93, 0x5f, 0x92, 0x4d, 
  0x5d, 0x2e, 0x60, 0xf4, 0xd6, 0x77,
  };
  #else
  const uint8_t PROGMEM Flame_03_comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  
  
  #ifndef DEBUG
  const uint8_t PROGMEM Flame_04_comp[] ={
  0x8f, 0x0f, 0xb5, 0xd0, 0xb6, 0xcd, 0xa2, 0x4d, 0x80, 0x0a, 0x1d, 0x6c, 0x37, 0xf2, 0x75, 0x47, 
  0xcb, 0x81, 0xc9, 0x02, 0x96, 0xb7, 0xbe, 0x05,
  };
  #else
  const uint8_t PROGMEM Flame_04_comp[] = {
  0x00 ,0x07, 0x3d
  };
  #endif  

  const uint8_t * const Flames[] = { 
    Flame_01_comp,
    Flame_02_comp,
    Flame_03_comp,
    Flame_04_comp
  };

}