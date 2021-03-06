#ifndef COMMON_HPP_
#define COMMON_HPP_
// Some defines
#define MAXUSERS 65535
#define PI 3.14159265
#define MAXPACKETSIZE (1024* 2048) // 2 Megabyte

//unsigned types
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

// signed types
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

// Float types
typedef float f32;
typedef double f64;

// Coordinates
struct sCoord
{
	sCoord(f32 _X = 0, f32 _Y = 0, f32 _Z = 0)
	{
		X = _X;
		Y = _Y;
		Z = _Z;
	}
	f32 X, Y, Z;
};

// Running?
extern bool Running;
#endif

