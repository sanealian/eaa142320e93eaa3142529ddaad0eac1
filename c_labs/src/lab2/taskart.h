#ifndef __TASK1_H__
// ===========================================================================

// twitchquotes.com

unsigned char BROKEN_SQUIRREL[] = {
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x5f, 0x5f, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5c, 0x20, 0x60, 0x2d, 0x2e, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x29, 0x20, 0x20, 0x20, 0x5c, 0x0a, 0x20, 0x20, 0x2e,
  0x2d, 0x27, 0x20, 0x20, 0x60, 0x2d, 0x2e, 0x5f, 0x2e, 0x2d, 0x2d, 0x27,
  0x20, 0x20, 0x20, 0x20, 0x7c, 0x0a, 0x20, 0x2f, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x5f,
  0x2f, 0x0a, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x5f, 0x5f, 0x5f, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x5f, 0x5f, 0x2d, 0x27, 0x2e, 0x20, 0x2e, 0x0a, 0x7c,
  0x20, 0x20, 0x20, 0x27, 0x20, 0x20, 0x20, 0x60, 0x2d, 0x2d, 0x2d, 0x3c,
  0x5f, 0x5f, 0x5f, 0x2f, 0x7c, 0x2f, 0x7c, 0x0a, 0x7c, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x5f, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x6f, 0x20, 0x20, 0x29, 0x0a, 0x7c, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x5c, 0x20, 0x20, 0x20, 0x2f, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x7c, 0x0a, 0x5c, 0x20, 0x20, 0x60, 0x2c, 0x20, 0x20, 0x20,
  0x29, 0x20, 0x20, 0x5c, 0x20, 0x20, 0x5c, 0x2d, 0x60, 0x2d, 0x2e, 0x5f,
  0x7c, 0x0a, 0x20, 0x60, 0x2d, 0x2f, 0x20, 0x20, 0x20, 0x2f, 0x2d, 0x2d,
  0x2d, 0x27, 0x3e, 0x5f, 0x2f, 0x5f, 0x5c, 0x0a, 0x20, 0x27, 0x2d, 0x60,
  0x2d, 0x5f, 0x5f, 0x60, 0x2d, 0x2e, 0x20, 0x27, 0x22, 0x20, 0x20, 0x20,
  0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x22, 0x22, 0x0a
};

unsigned char ASCII_STRANGEGUY_ART[] = {
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbf, 0xe2, 0xa3, 0x9f,
  0xe2, 0xa0, 0xbb, 0xe2, 0xa0, 0xaf, 0xe2, 0xa0, 0xad, 0xe2, 0xa0, 0x89,
  0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x8b, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89,
  0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0xbb, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbd, 0xe2, 0xa0, 0x9a, 0xe2, 0xa0,
  0x89, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x88, 0xe2, 0xa0, 0x99, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa3, 0xbf, 0xe2, 0xa0, 0x8f, 0xe2, 0xa0, 0x81, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa2, 0x80, 0xe2, 0xa3, 0xbe, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa3, 0xbf, 0xe2, 0xa3, 0xb7, 0xe2, 0xa3, 0xa6, 0xe2, 0xa1, 0x80, 0xe2,
  0xa0, 0xb6, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0x0a,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x8f, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x86, 0xe2, 0xa2, 0xbb, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0xbb, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xaf, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0xb9, 0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa0, 0x81, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x98, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x87, 0xe2,
  0xa0, 0x80, 0xe2, 0xa3, 0xbf, 0xe2, 0xa2, 0x9f, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa1, 0x80, 0xe2, 0xa0, 0x9f, 0xe2, 0xa2, 0xb9, 0xe2, 0xa3, 0xbf, 0x0a,
  0xe2, 0xa1, 0x84, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa2, 0xb9,
  0xe2, 0xa3, 0xb7, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xbc,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x84, 0xe2, 0xa2, 0xb9,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xb7, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0xb6, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa2,
  0xa0, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0,
  0x89, 0xe2, 0xa0, 0x88, 0xe2, 0xa2, 0xbb, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa3, 0xb7, 0xe2, 0xa3, 0x84, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x9b, 0xe2,
  0xa0, 0x8b, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x9b, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xbe, 0x0a,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb7,
  0xe2, 0xa1, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x88,
  0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89,
  0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x81, 0xe2, 0xa3, 0xb0, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb7, 0xe2, 0xa3,
  0xa6, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0x84, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3,
  0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0xa0, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xbe, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0x0a
};

const unsigned char ASCII_BUTTART_IMAGE[] = {
    0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0xb8, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa2, 0xa3, 0xe2, 0xa2, 0xb6, 0xe2, 0xa3, 0x9f,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0x96, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb7,
    0xe2, 0xa3, 0xbb, 0xe2, 0xa3, 0xae, 0xe2, 0xa1, 0xbf, 0xe2, 0xa3, 0xbd,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbb, 0xe2, 0xa3, 0x96, 0xe2, 0xa3, 0xb6,
    0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xad, 0xe2, 0xa1, 0x89, 0xe2, 0xa0, 0x84,
    0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84,
    0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa2,
    0xb9, 0xe2, 0xa0, 0xa3, 0xe2, 0xa3, 0x9b, 0xe2, 0xa3, 0xa3, 0xe2, 0xa3,
    0xad, 0xe2, 0xa3, 0xad, 0xe2, 0xa3, 0xad, 0xe2, 0xa3, 0x81, 0xe2, 0xa1,
    0x9b, 0xe2, 0xa0, 0xbb, 0xe2, 0xa2, 0xbd, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa2, 0xbb, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbd, 0xe2, 0xa1,
    0xa7, 0xe2, 0xa1, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0,
    0x84, 0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2,
    0xa0, 0x84, 0xe2, 0xa3, 0xbc, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb6, 0xe2, 0xa3, 0x8c, 0xe2,
    0xa1, 0x9b, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3, 0xbd, 0xe2, 0xa2, 0x98, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xb7, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbb, 0xe2,
    0xa0, 0x8f, 0xe2, 0xa3, 0x9b, 0xe2, 0xa3, 0x80, 0xe2, 0xa0, 0x84, 0xe2,
    0xa0, 0x84, 0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84,
    0xe2, 0xa3, 0xbc, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xa6, 0xe2, 0xa0, 0x99, 0xe2, 0xa1, 0x85,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x9a, 0xe2, 0xa3, 0xa1, 0xe2, 0xa3, 0xb4,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x86,
    0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa3,
    0xb0, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb7, 0xe2, 0xa0,
    0x84, 0xe2, 0xa3, 0xb1, 0xe2, 0xa3, 0xbe, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa2, 0x80, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa2, 0xb8, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa3, 0xb8,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbf, 0xe2, 0xa0, 0xa3,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa0, 0x84, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa0, 0xbf, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x91, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xae, 0xe2, 0xa3, 0x9d, 0xe2, 0xa3, 0x9b, 0xe2, 0xa0,
    0xbf, 0xe2, 0xa0, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa2, 0xa0, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb6, 0xe2,
    0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
    0xa3, 0xbf, 0xe2, 0xa1, 0x9f, 0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa2, 0xb8,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x87,
    0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84,
    0xe2, 0xa2, 0xb9, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
    0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x81, 0xe2, 0xa0, 0x84, 0x0a, 0xe2, 0xa3,
    0xb8, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x8f, 0xe2, 0xa0,
    0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0, 0x84, 0xe2, 0xa0,
    0x84, 0xe2, 0xa0, 0xb8, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
    0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbf, 0xe2, 0xa2,
    0x9f, 0xe2, 0xa3, 0xa3, 0xe2, 0xa3, 0x80, 0x0a
};


const unsigned char wondering_guy[] = {
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbf, 0xe2, 0xa3, 0x9f,
  0xe2, 0xa0, 0xbb, 0xe2, 0xa0, 0xaf, 0xe2, 0xa0, 0xad, 0xe2, 0xa0, 0x89,
  0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x8b, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89,
  0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0xbb, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0xbd, 0xe2, 0xa0, 0x9a, 0xe2, 0xa0,
  0x89, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x88, 0xe2, 0xa0, 0x99, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa3, 0xbf, 0xe2, 0xa0, 0x8f, 0xe2, 0xa0, 0x81, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa2, 0x80, 0xe2, 0xa3, 0xbe, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa3, 0xbf, 0xe2, 0xa3, 0xb7, 0xe2, 0xa3, 0xa6, 0xe2, 0xa1, 0x80, 0xe2,
  0xa0, 0xb6, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0x0a,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x8f, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x86, 0xe2, 0xa2, 0xbb, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0xbb, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xaf, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0xb9, 0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa0, 0x81, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x98, 0xe2, 0xa2, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x87, 0xe2,
  0xa0, 0x80, 0xe2, 0xa3, 0xbf, 0xe2, 0xa2, 0x9f, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa1, 0x80, 0xe2, 0xa0, 0x9f, 0xe2, 0xa2, 0xb9, 0xe2, 0xa3, 0xbf, 0x0a,
  0xe2, 0xa1, 0x84, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa2, 0xb9,
  0xe2, 0xa3, 0xb7, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xbc,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa1, 0x84, 0xe2, 0xa2, 0xb9,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xb7, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0xb6, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0,
  0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa2,
  0xa0, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0,
  0x89, 0xe2, 0xa0, 0x88, 0xe2, 0xa2, 0xbb, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2,
  0xa3, 0xb7, 0xe2, 0xa3, 0x84, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x9b, 0xe2,
  0xa0, 0x8b, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x9b, 0xe2,
  0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xbe, 0x0a,
  0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb7,
  0xe2, 0xa1, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80,
  0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x80, 0xe2, 0xa0, 0x88,
  0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89, 0xe2, 0xa0, 0x89,
  0xe2, 0xa0, 0x9b, 0xe2, 0xa0, 0x81, 0xe2, 0xa3, 0xb0, 0xe2, 0xa3, 0xbf,
  0xe2, 0xa3, 0xbf, 0x0a, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xb7, 0xe2, 0xa3,
  0xa6, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0x84, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3,
  0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0x80, 0xe2, 0xa3, 0xa0, 0xe2, 0xa3,
  0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xa4, 0xe2, 0xa3, 0xbe, 0xe2, 0xa3,
  0xbf, 0xe2, 0xa3, 0xbf, 0xe2, 0xa3, 0xbf, 0x0a
};



// ===========================================================================
#endif //__TASK1_H__