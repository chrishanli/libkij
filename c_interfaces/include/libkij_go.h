/* Code generated by cmd/cgo; DO NOT EDIT. */

/* package libkij */


#line 1 "cgo-builtin-export-prolog"

#include <stddef.h> /* for ptrdiff_t below */

#ifndef GO_CGO_EXPORT_PROLOGUE_H
#define GO_CGO_EXPORT_PROLOGUE_H

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef struct { const char *p; ptrdiff_t n; } _GoString_;
#endif

#endif

/* Start of preamble from import "C" comments.  */




/* End of preamble from import "C" comments.  */


/* Start of boilerplate cgo prologue.  */
#line 1 "cgo-gcc-export-header-prolog"

#ifndef GO_CGO_PROLOGUE_H
#define GO_CGO_PROLOGUE_H

typedef signed char GoInt8;
typedef unsigned char GoUint8;
typedef short GoInt16;
typedef unsigned short GoUint16;
typedef int GoInt32;
typedef unsigned int GoUint32;
typedef long long GoInt64;
typedef unsigned long long GoUint64;
typedef GoInt64 GoInt;
typedef GoUint64 GoUint;
typedef __SIZE_TYPE__ GoUintptr;
typedef float GoFloat32;
typedef double GoFloat64;
typedef float _Complex GoComplex64;
typedef double _Complex GoComplex128;

/*
  static assertion to make sure the file is being used on architecture
  at least with matching size of GoInt.
*/
typedef char _check_for_64_bit_pointer_matching_GoInt[sizeof(void*)==64/8 ? 1:-1];

#ifndef GO_CGO_GOSTRING_TYPEDEF
typedef _GoString_ GoString;
#endif
typedef void *GoMap;
typedef void *GoChan;
typedef struct { void *t; void *v; } GoInterface;
typedef struct { void *data; GoInt len; GoInt cap; } GoSlice;

#endif

/* End of boilerplate cgo prologue.  */

#ifdef __cplusplus
extern "C" {
#endif


/* Return type for NewAuthWin */
struct NewAuthWin_return {
	char* r0; /* username */
	char* r1; /* passcode */
};

extern struct NewAuthWin_return NewAuthWin(char* p0, char* p1, char* p2);

extern int NewErrWin(char* p0, char* p1, char* p2, char** p3, int p4);

extern int NewInfoWin(char* p0, char* p1, char* p2, char** p3, int p4);

// 只有needProgBar是T或t时，才会显示进度条！

extern void NewInitWin(char* p0, char* p1, int p2, char p3);

/* Return type for NewInputWin */
struct NewInputWin_return {
	int r0; /* sel */
	char** r1; /* text */
	int r2; /* textCount */
};

// 传出的字符串会和文本框个数一样多，而且请注意要free掉！

extern struct NewInputWin_return NewInputWin(char* p0, char* p1, char** p2, int p3, char** p4, int p5);

extern int NewSelectWin(char* p0, char* p1, char* p2, char** p3, int p4, char* p5, char* p6);

extern int NewTableWin(char* p0, char* p1, char** p2, int p3, int* p4, char** p5, int p6, char** p7, int p8);

#ifdef __cplusplus
}
#endif
