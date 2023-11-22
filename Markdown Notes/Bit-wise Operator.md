# Arithmetic 
* Operations operate on individual bits within values.
* Usually used with 8, 16 or 32 bit values. 
* Operators `&`, `|`, `^` are bitwise operators with `AND`, `OR`, `XOR`.
* Operator `~` is bitwise for `NOT` and inverts all the bits. 
```c
# include <stdint.h>
const uint8_t headerByte = 0xFF // 11111111

const uint8_t fieldMask = 0xF0  // 11110000

const uint8_t field1 = headerByte & fieldMask //11110000 = 0xF0
const uint8_t field2 = headerByte | fieldMask //11111111 = 0xFF
const uint8_t field3 = headerByte ^ fieldMask //00000000 = 0x00
const uint8_t field1 = headerByte ~ fieldMask //00001111 = 0x0F
```
## Shift 
* Moves the bits inside a value left or right `<<` or `>>` operator.
```c
const uint8_t field1 = (headerByte & field1mask) >> 4; 
//Field1 preshift was 10110000, it is now 00001011

uint8_t headerByte = 1; // Set lowest bit, header byte is 00000001

headerByte |= field1 << 4; 
//shift field1 to upper nibble and oR it with headerByte
//Header byte is now 10110001
```
* Shifting to the right is the equivalent to multiplication * 2
* Shifting to the left is the equivalent to dividing * 2