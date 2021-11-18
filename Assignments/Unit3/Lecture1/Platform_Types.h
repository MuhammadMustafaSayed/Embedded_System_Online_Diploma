/***************************************************************************/
/********				AUTHOR  : MUHAMMAD MUSTAFA .				********/
/********				VERSION : V01 			   .				********/
/********				DATE    : 30/9/2020        .				********/
/********				DRIVER  : **************** .				********/
/***************************************************************************/
#ifndef STD_TYPES_H
#define  STD_TYPES_H
//Architectures definitions

#define S12X           0
#define ST10           1
#define ST30           2
#define V850           3
#define MPC5554        4
#define TC1796_TC1766  5
#define MB91F          6
#define M16C_M32C      7
#define SHx            8
#define ARM_Cortex_A53 9

//Please Put the name of the architecture

#define Architecture S12X

#if Architecture == S12X
	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == ST10

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;


#elif Architecture == ST30

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == V850

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == MPC5554

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == TC1796_TC1766

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == MB91F

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == M16C_M32C

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed long        sint32;
	typedef signed long long   sint64;
	typedef unsigned long      uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == SHx

	typedef unsigned char      boolean;

	typedef signed char        sint8;
	typedef unsigned char      uint8;
	typedef signed short       sint16;
	typedef unsigned short     uint16;
	typedef signed int         sint32;
	typedef signed long long   sint64;
	typedef unsigned int       uint32;
	typedef unsigned long long uint64;

	typedef float              float32;
	typedef double             float64;

#elif Architecture == ARM_Cortex_A53

	typedef unsigned char      boolean;

	typedef unsigned char      uint8;
	typedef unsigned short     uint16;
	typedef unsigned int       uint32;
	typedef unsigned long long uint64;
	typedef signed char        sint8;
	typedef signed short       sint16;
	typedef signed int         sint32;
	typedef signed long long   sint64;

	typedef float              float32;
	typedef double             float64;

#else
#error Please Choose one of the above define architectures

#endif

#endif
