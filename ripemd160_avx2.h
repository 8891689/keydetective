/*MIT License

Copyright (c) 2025 CryptI

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.*/
#ifndef SHA256_AVX2_H
#define SHA256_AVX2_H

#include <cstdint>

void sha256avx2_8B(
    const uint8_t* data0, const uint8_t* data1, const uint8_t* data2, const uint8_t* data3,
    const uint8_t* data4, const uint8_t* data5, const uint8_t* data6, const uint8_t* data7,
    unsigned char* hash0, unsigned char* hash1, unsigned char* hash2, unsigned char* hash3,
    unsigned char* hash4, unsigned char* hash5, unsigned char* hash6, unsigned char* hash7
);

#endif // SHA256_AVX2_H
#ifndef RIPEMD160_AVX2_H
#define RIPEMD160_AVX2_H

#include <immintrin.h>
#include <cstdint>

namespace ripemd160avx2 {

// Initialyzying Ripemd160
void Initialize(__m256i *state);

// Transform AVX2
void Transform(__m256i *state, uint8_t *blocks[8]);

// Hashing functions
void ripemd160avx2_32(
    unsigned char *i0, unsigned char *i1, unsigned char *i2, unsigned char *i3,
    unsigned char *i4, unsigned char *i5, unsigned char *i6, unsigned char *i7,
    unsigned char *d0, unsigned char *d1, unsigned char *d2, unsigned char *d3,
    unsigned char *d4, unsigned char *d5, unsigned char *d6, unsigned char *d7);

}  // namespace ripemd160avx2

#endif  // RIPEMD160_AVX2_H
