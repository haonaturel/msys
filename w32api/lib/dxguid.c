/*
   DXGUID.C

   Author: Daniel Guerrero Miralles (daguer@geocities.com)
   Version: 1.0.0
   Date: April 27, 1999

   ABSTRACT:
   Source code to generate a library with DirectX GUIDs. For DirectX 6.1
   and earlier versions.

   LEGAL INFORMATION:
   This is PUBLIC DOMAIN source code. The source code in this file is
   provided "as is", without any warranty, including but not limited to,
   fitness for any particular purpose.

   REMARKS:
   - This file may have more GUIDs than the original one. It was made by
   recollecting GUIDs defined in the DirectX header files.

   TODO:
   Nothing.
*/

#if defined(__LCC__) || defined(__GNUC__)
#define INITGUID 1
#include <windows.h>
#include <objbase.h>
#else
#include <basetyps.h>
#endif 

/////////////////////////////////////////////////////////////////////
// File D3D.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IDirect3D,0x3BBA0080,0x2421,0x11CF,0xA3,0x1A,0x00,0xAA,0x00,0xB9,0x33,0x56);
DEFINE_GUID(IID_IDirect3D2,0x6aae1ec1,0x662a,0x11d0,0x88,0x9d,0x00,0xaa,0x00,0xbb,0xb7,0x6a);
DEFINE_GUID(IID_IDirect3D3,0xbb223240,0xe72b,0x11d0,0xa9,0xb4,0x00,0xaa,0x00,0xc0,0x99,0x3e);
DEFINE_GUID(IID_IDirect3DRampDevice,0xF2086B20,0x259F,0x11CF,0xA3,0x1A,0x00,0xAA,0x00,0xB9,0x33,0x56);
DEFINE_GUID(IID_IDirect3DRGBDevice,0xA4665C60,0x2673,0x11CF,0xA3,0x1A,0x00,0xAA,0x00,0xB9,0x33,0x56);
DEFINE_GUID(IID_IDirect3DHALDevice,0x84E63dE0,0x46AA,0x11CF,0x81,0x6F,0x00,0x00,0xC0,0x20,0x15,0x6E);
DEFINE_GUID(IID_IDirect3DMMXDevice,0x881949a1,0xd6f3,0x11d0,0x89,0xab,0x00,0xa0,0xc9,0x05,0x41,0x29);
DEFINE_GUID(IID_IDirect3DRefDevice,0x50936643,0x13e9,0x11d1,0x89,0xaa,0x0,0xa0,0xc9,0x5,0x41,0x29);
DEFINE_GUID(IID_IDirect3DNullDevice,0x8767df22,0xbacc,0x11d1,0x89,0x69,0x0,0xa0,0xc9,0x6,0x29,0xa8);
DEFINE_GUID(IID_IDirect3DDevice,0x64108800,0x957d,0X11d0,0x89,0xab,0x00,0xa0,0xc9,0x05,0x41,0x29);
DEFINE_GUID(IID_IDirect3DDevice2,0x93281501,0x8cf8,0x11d0,0x89,0xab,0x0,0xa0,0xc9,0x5,0x41,0x29);
DEFINE_GUID(IID_IDirect3DDevice3,0xb0ab3b60,0x33d7,0x11d1,0xa9,0x81,0x0,0xc0,0x4f,0xd7,0xb1,0x74);
DEFINE_GUID(IID_IDirect3DTexture,0x2CDCD9E0,0x25A0,0x11CF,0xA3,0x1A,0x00,0xAA,0x00,0xB9,0x33,0x56);
DEFINE_GUID(IID_IDirect3DTexture2,0x93281502,0x8cf8,0x11d0,0x89,0xab,0x0,0xa0,0xc9,0x5,0x41,0x29);
DEFINE_GUID(IID_IDirect3DLight,0x4417C142,0x33AD,0x11CF,0x81,0x6F,0x00,0x00,0xC0,0x20,0x15,0x6E);
DEFINE_GUID(IID_IDirect3DMaterial,0x4417C144,0x33AD,0x11CF,0x81,0x6F,0x00,0x00,0xC0,0x20,0x15,0x6E);
DEFINE_GUID(IID_IDirect3DMaterial2,0x93281503,0x8cf8,0x11d0,0x89,0xab,0x0,0xa0,0xc9,0x5,0x41,0x29);
DEFINE_GUID(IID_IDirect3DMaterial3,0xca9c46f4,0xd3c5,0x11d1,0xb7,0x5a,0x0,0x60,0x8,0x52,0xb3,0x12);
DEFINE_GUID(IID_IDirect3DExecuteBuffer,0x4417C145,0x33AD,0x11CF,0x81,0x6F,0x00,0x00,0xC0,0x20,0x15,0x6E);
DEFINE_GUID(IID_IDirect3DViewport,0x4417C146,0x33AD,0x11CF,0x81,0x6F,0x00,0x00,0xC0,0x20,0x15,0x6E);
DEFINE_GUID(IID_IDirect3DViewport2,0x93281500,0x8cf8,0x11d0,0x89,0xab,0x0,0xa0,0xc9,0x5,0x41,0x29);
DEFINE_GUID(IID_IDirect3DViewport3,0xb0ab3b61,0x33d7,0x11d1,0xa9,0x81,0x0,0xc0,0x4f,0xd7,0xb1,0x74);
DEFINE_GUID(IID_IDirect3DVertexBuffer,0x7a503555,0x4a83,0x11d1,0xa5,0xdb,0x0,0xa0,0xc9,0x3,0x67,0xf8);

/////////////////////////////////////////////////////////////////////
// File D3DRM.H:
/////////////////////////////////////////////////////////////////////


DEFINE_GUID(IID_IDirect3DRM,0x2bc49361,0x8327,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRM2,0x4516ecc8,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRM3,0x4516ec83,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRM,0x4516ec41,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);

/////////////////////////////////////////////////////////////////////
// File D3DRMOBJ.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(CLSID_CDirect3DRMDevice,0x4fa3568e,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMViewport,0x4fa3568f,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMFrame,0x4fa35690,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMMesh,0x4fa35691,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMMeshBuilder,0x4fa35692,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMFace,0x4fa35693,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMLight,0x4fa35694,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMTexture,0x4fa35695,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMWrap,0x4fa35696,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMMaterial,0x4fa35697,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMAnimation,0x4fa35698,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMAnimationSet,0x4fa35699,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMUserVisual,0x4fa3569a,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMShadow,0x4fa3569b,0x623f,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(CLSID_CDirect3DRMViewportInterpolator,0xde9eaa1,0x3b84,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMFrameInterpolator,0xde9eaa2,0x3b84,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMMeshInterpolator,0xde9eaa3,0x3b84,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMLightInterpolator,0xde9eaa6,0x3b84,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMMaterialInterpolator,0xde9eaa7,0x3b84,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMTextureInterpolator,0xde9eaa8,0x3b84,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMProgressiveMesh,0x4516ec40,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(CLSID_CDirect3DRMClippedVisual,0x5434e72d,0x6d66,0x11d1,0xbb,0xb,0x0,0x0,0xf8,0x75,0x86,0x5a);
DEFINE_GUID(IID_IDirect3DRMObject,0xeb16cb00,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMObject2,0x4516ec7c,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMDevice,0xe9e19280,0x6e05,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMDevice2,0x4516ec78,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMDevice3,0x549f498b,0xbfeb,0x11d1,0x8e,0xd8,0x0,0xa0,0xc9,0x67,0xa4,0x82);
DEFINE_GUID(IID_IDirect3DRMViewport,0xeb16cb02,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMViewport2,0x4a1b1be6,0xbfed,0x11d1,0x8e,0xd8,0x0,0xa0,0xc9,0x67,0xa4,0x82);
DEFINE_GUID(IID_IDirect3DRMFrame,0xeb16cb03,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMFrame2,0xc3dfbd60,0x3988,0x11d0,0x9e,0xc2,0x0,0x0,0xc0,0x29,0x1a,0xc3);
DEFINE_GUID(IID_IDirect3DRMFrame3,0xff6b7f70,0xa40e,0x11d1,0x91,0xf9,0x0,0x0,0xf8,0x75,0x8e,0x66);
DEFINE_GUID(IID_IDirect3DRMVisual,0xeb16cb04,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMMesh,0xa3a80d01,0x6e12,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMMeshBuilder,0xa3a80d02,0x6e12,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMMeshBuilder2,0x4516ec77,0x8f20,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMMeshBuilder3,0x4516ec82,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMFace,0xeb16cb07,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMFace2,0x4516ec81,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMLight,0xeb16cb08,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMTexture,0xeb16cb09,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMTexture2,0x120f30c0,0x1629,0x11d0,0x94,0x1c,0x0,0x80,0xc8,0xc,0xfa,0x7b);
DEFINE_GUID(IID_IDirect3DRMTexture3,0xff6b7f73,0xa40e,0x11d1,0x91,0xf9,0x0,0x0,0xf8,0x75,0x8e,0x66);
DEFINE_GUID(IID_IDirect3DRMWrap,0xeb16cb0a,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMMaterial,0xeb16cb0b,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMMaterial2,0xff6b7f75,0xa40e,0x11d1,0x91,0xf9,0x0,0x0,0xf8,0x75,0x8e,0x66);
DEFINE_GUID(IID_IDirect3DRMAnimation,0xeb16cb0d,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMAnimation2,0xff6b7f77,0xa40e,0x11d1,0x91,0xf9,0x0,0x0,0xf8,0x75,0x8e,0x66);
DEFINE_GUID(IID_IDirect3DRMAnimationSet,0xeb16cb0e,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMAnimationSet2,0xff6b7f79,0xa40e,0x11d1,0x91,0xf9,0x0,0x0,0xf8,0x75,0x8e,0x66);
DEFINE_GUID(IID_IDirect3DRMObjectArray,0x242f6bc2,0x3849,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMDeviceArray,0xeb16cb10,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMViewportArray,0xeb16cb11,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMFrameArray,0xeb16cb12,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMVisualArray,0xeb16cb13,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMLightArray,0xeb16cb14,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMPickedArray,0xeb16cb16,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMFaceArray,0xeb16cb17,0xd271,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMAnimationArray,0xd5f1cae0,0x4bd7,0x11d1,0xb9,0x74,0x0,0x60,0x8,0x3e,0x45,0xf3);
DEFINE_GUID(IID_IDirect3DRMUserVisual,0x59163de0,0x6d43,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMShadow,0xaf359780,0x6ba3,0x11cf,0xac,0x4a,0x0,0x0,0xc0,0x38,0x25,0xa1);
DEFINE_GUID(IID_IDirect3DRMShadow2,0x86b44e25,0x9c82,0x11d1,0xbb,0xb,0x0,0xa0,0xc9,0x81,0xa0,0xa6);
DEFINE_GUID(IID_IDirect3DRMInterpolator,0x242f6bc1,0x3849,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMProgressiveMesh,0x4516ec79,0x8f20,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMPicked2Array,0x4516ec7b,0x8f20,0x11d0,0x9b,0x6d,0x0,0x0,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirect3DRMClippedVisual,0x5434e733,0x6d66,0x11d1,0xbb,0xb,0x0,0x0,0xf8,0x75,0x86,0x5a);

/////////////////////////////////////////////////////////////////////
// File D3DRMWIN.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IDirect3DRMWinDevice,0xc5016cc0,0xd273,0x11ce,0xac,0x48,0x0,0x0,0xc0,0x38,0x25,0xa1);

/////////////////////////////////////////////////////////////////////
// File DDRAW.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(CLSID_DirectDraw,0xD7B70EE0,0x4340,0x11CF,0xB0,0x63,0x00,0x20,0xAF,0xC2,0xCD,0x35);
DEFINE_GUID(CLSID_DirectDrawClipper,0x593817A0,0x7DB3,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xb9,0x33,0x56);
DEFINE_GUID(IID_IDirectDraw,0x6C14DB80,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectDraw2,0xB3A6F3E0,0x2B43,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xB9,0x33,0x56);
DEFINE_GUID(IID_IDirectDraw4,0x9c59509a,0x39bd,0x11d1,0x8c,0x4a,0x00,0xc0,0x4f,0xd9,0x30,0xc5);
DEFINE_GUID(IID_IDirectDrawSurface,0x6C14DB81,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectDrawSurface2,0x57805885,0x6eec,0x11cf,0x94,0x41,0xa8,0x23,0x03,0xc1,0x0e,0x27);
DEFINE_GUID(IID_IDirectDrawSurface3,0xDA044E00,0x69B2,0x11D0,0xA1,0xD5,0x00,0xAA,0x00,0xB8,0xDF,0xBB);
DEFINE_GUID(IID_IDirectDrawSurface4,0x0B2B8630,0xAD35,0x11D0,0x8E,0xA6,0x00,0x60,0x97,0x97,0xEA,0x5B);
DEFINE_GUID(IID_IDirectDrawPalette,0x6C14DB84,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectDrawClipper,0x6C14DB85,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectDrawColorControl,0x4B9F0EE0,0x0D7E,0x11D0,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(IID_IDirectDrawGammaControl,0x69C11C3E,0xB46B,0x11D1,0xAD,0x7A,0x00,0xC0,0x4F,0xC2,0x9B,0x4E);

/////////////////////////////////////////////////////////////////////
// File DINPUT.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(CLSID_DirectInput,0x25E609E0,0xB259,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(CLSID_DirectInputDevice,0x25E609E1,0xB259,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputA,0x89521360,0xAA8A,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputW,0x89521361,0xAA8A,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInput2A,0x5944E662,0xAA8A,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInput2W,0x5944E663,0xAA8A,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputDeviceA,0x5944E680,0xC92E,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputDeviceW,0x5944E681,0xC92E,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputDevice2A,0x5944E682,0xC92E,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputDevice2W,0x5944E683,0xC92E,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(IID_IDirectInputEffect,0xE7E1F7C0,0x88D2,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_XAxis,0xA36D02E0,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_YAxis,0xA36D02E1,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_ZAxis,0xA36D02E2,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_RxAxis,0xA36D02F4,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_RyAxis,0xA36D02F5,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_RzAxis,0xA36D02E3,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_Slider,0xA36D02E4,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_Button,0xA36D02F0,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_Key,0x55728220,0xD33C,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_POV,0xA36D02F2,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_Unknown,0xA36D02F3,0xC9F3,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_SysMouse,0x6F1D2B60,0xD5A0,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_SysKeyboard,0x6F1D2B61,0xD5A0,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_Joystick,0x6F1D2B70,0xD5A0,0x11CF,0xBF,0xC7,0x44,0x45,0x53,0x54,0x00,0x00);
DEFINE_GUID(GUID_ConstantForce,0x13541C20,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_RampForce,0x13541C21,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Square,0x13541C22,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Sine,0x13541C23,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Triangle,0x13541C24,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_SawtoothUp,0x13541C25,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_SawtoothDown,0x13541C26,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Spring,0x13541C27,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Damper,0x13541C28,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Inertia,0x13541C29,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_Friction,0x13541C2A,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);
DEFINE_GUID(GUID_CustomForce,0x13541C2B,0x8E33,0x11D0,0x9A,0xD0,0x00,0xA0,0xC9,0xA0,0x6E,0x35);

/////////////////////////////////////////////////////////////////////
// File DMKSCTRL.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IKsControl,0x28F54685,0x06FD,0x11D2,0xB2,0x7A,0x00,0xA0,0xC9,0x22,0x31,0x96);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_MIDI,0x1D262760L,0xE957,0x11CF,0xA5,0xD6,0x28,0xDB,0x04,0xC1,0x00,0x00);
DEFINE_GUID(KSDATAFORMAT_SUBTYPE_DIRECTMUSIC,0x1a82f8bc,0x3f8b,0x11d2,0xb7,0x74,0x00,0x60,0x08,0x33,0x16,0xc1);

/////////////////////////////////////////////////////////////////////
// File DMUSICC.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IReferenceClock,0x56a86897,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
DEFINE_GUID(CLSID_DirectMusic,0x636b9f10,0x0c7d,0x11d1,0x95,0xb2,0x00,0x20,0xaf,0xdc,0x74,0x21);
DEFINE_GUID(CLSID_DirectMusicCollection,0x480ff4b0,0x28b2,0x11d1,0xbe,0xf7,0x0,0xc0,0x4f,0xbf,0x8f,0xef);
DEFINE_GUID(CLSID_DirectMusicSynth,0x58C2B4D0,0x46E7,0x11D1,0x89,0xAC,0x00,0xA0,0xC9,0x05,0x41,0x29);
DEFINE_GUID(IID_IDirectMusic,0x6536115a,0x7b2d,0x11d2,0xba,0x18,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicBuffer,0xd2ac2878,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicPort,0x08f2d8c9,0x37c2,0x11d2,0xb9,0xf9,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicThru,0xced153e7,0x3606,0x11d2,0xb9,0xf9,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicPortDownload,0xd2ac287a,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicDownload,0xd2ac287b,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicCollection,0xd2ac287c,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicInstrument,0xd2ac287d,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicDownloadedInstrument,0xd2ac287e,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_DMUS_PROP_GM_Hardware,0x178f2f24,0xc364,0x11d1,0xa7,0x60,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(GUID_DMUS_PROP_GS_Hardware,0x178f2f25,0xc364,0x11d1,0xa7,0x60,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Hardware,0x178f2f26,0xc364,0x11d1,0xa7,0x60,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Capable,0x6496aba1,0x61b0,0x11d2,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(GUID_DMUS_PROP_GS_Capable,0x6496aba2,0x61b0,0x11d2,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(GUID_DMUS_PROP_DLS1,0x178f2f27,0xc364,0x11d1,0xa7,0x60,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(GUID_DMUS_PROP_SynthSink_DSOUND,0xaa97844,0xc877,0x11d1,0x87,0xc,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SynthSink_WAVE,0xaa97845,0xc877,0x11d1,0x87,0xc,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_DMUS_PROP_WriteLatency,0x268a0fa0,0x60f2,0x11d2,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(GUID_DMUS_PROP_WritePeriod,0x268a0fa1,0x60f2,0x11d2,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(GUID_DMUS_PROP_MemorySize,0x178f2f28,0xc364,0x11d1,0xa7,0x60,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(GUID_DMUS_PROP_WavesReverb,0x4cb5622,0x32e5,0x11d2,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(GUID_DMUS_PROP_Effects,0xcda8d611,0x684a,0x11d2,0x87,0x1e,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_DMUS_PROP_LegacyCaps,0xcfa7cdc2,0x00a1,0x11d2,0xaa,0xd5,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(GUID_DMUS_PROP_Volume,0xfedfae25L,0xe46e,0x11d1,0xaa,0xce,0x00,0x00,0xf8,0x75,0xac,0x12);

/////////////////////////////////////////////////////////////////////
// File DMUSICI.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(CLSID_DirectMusicPerformance,0xd2ac2881,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSegment,0xd2ac2882,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSegmentState,0xd2ac2883,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicGraph,0xd2ac2884,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicTempoTrack,0xd2ac2885,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSeqTrack,0xd2ac2886,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSysExTrack,0xd2ac2887,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicTimeSigTrack,0xd2ac2888,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicStyle,0xd2ac288a,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicChordTrack,0xd2ac288b,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicCommandTrack,0xd2ac288c,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicStyleTrack,0xd2ac288d,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicMotifTrack,0xd2ac288e,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicChordMap,0xd2ac288f,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicComposer,0xd2ac2890,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicSignPostTrack,0xf17e8672,0xc3b4,0x11d1,0x87,0xb,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicLoader,0xd2ac2892,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicBandTrack,0xd2ac2894,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicBand,0x79ba9e00,0xb6ee,0x11d1,0x86,0xbe,0x0,0xc0,0x4f,0xbf,0x8f,0xef);
DEFINE_GUID(CLSID_DirectMusicChordMapTrack,0xd2ac2896,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(CLSID_DirectMusicMuteTrack,0xd2ac2898,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_DirectMusicAllTypes,0xd2ac2893,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_NOTIFICATION_SEGMENT,0xd2ac2899,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_NOTIFICATION_PERFORMANCE,0x81f75bc5,0x4e5d,0x11d2,0xbc,0xc7,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(GUID_NOTIFICATION_MEASUREANDBEAT,0xd2ac289a,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_NOTIFICATION_CHORD,0xd2ac289b,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_NOTIFICATION_COMMAND,0xd2ac289c,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_CommandParam,0xd2ac289d,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_ChordParam,0xd2ac289e,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_RhythmParam,0xd2ac289f,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_IDirectMusicStyle,0xd2ac28a1,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_TimeSignature,0xd2ac28a4,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_TempoParam,0xd2ac28a5,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_IDirectMusicBand,0xd2ac28ac,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_IDirectMusicChordMap,0xd2ac28ad,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_MuteParam,0xd2ac28af,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_Download,0xd2ac28a7,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_Unload,0xd2ac28a8,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_ConnectToDLSCollection,0x1db1ae6b,0xe92e,0x11d1,0xa8,0xc5,0x0,0xc0,0x4f,0xa3,0x72,0x6e);
DEFINE_GUID(GUID_Enable_Auto_Download,0xd2ac28a9,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_Disable_Auto_Download,0xd2ac28aa,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_Clear_All_Bands,0xd2ac28ab,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_StandardMIDIFile,0x6621075,0xe92e,0x11d1,0xa8,0xc5,0x0,0xc0,0x4f,0xa3,0x72,0x6e);
DEFINE_GUID(GUID_DisableTimeSig,0x45fc707b,0x1db4,0x11d2,0xbc,0xac,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(GUID_EnableTimeSig,0x45fc707c,0x1db4,0x11d2,0xbc,0xac,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(GUID_DisableTempo,0x45fc707d,0x1db4,0x11d2,0xbc,0xac,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(GUID_EnableTempo,0x45fc707e,0x1db4,0x11d2,0xbc,0xac,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(GUID_PerfMasterTempo,0xd2ac28b0,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_PerfMasterVolume,0xd2ac28b1,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_PerfMasterGrooveLevel,0xd2ac28b2,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(GUID_PerfAutoDownload,0xfb09565b,0x3631,0x11d2,0xbc,0xb8,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(GUID_DefaultGMCollection,0xf17e8673,0xc3b4,0x11d1,0x87,0xb,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicLoader,0x2ffaaca2,0x5dca,0x11d2,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(IID_IDirectMusicGetLoader,0x68a04844,0xd13d,0x11d1,0xaf,0xa6,0x0,0xaa,0x0,0x24,0xd8,0xb6);
DEFINE_GUID(IID_IDirectMusicObject,0xd2ac28b5,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicSegment,0xf96029a2,0x4282,0x11d2,0x87,0x17,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicSegmentState,0xa3afdcc7,0xd3ee,0x11d1,0xbc,0x8d,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(IID_IDirectMusicTrack,0xf96029a1,0x4282,0x11d2,0x87,0x17,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicPerformance,0x7d43d03,0x6523,0x11d2,0x87,0x1d,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicTool,0xd2ac28ba,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicGraph,0x2befc277,0x5497,0x11d2,0xbc,0xcb,0x0,0xa0,0xc9,0x22,0xe6,0xeb);
DEFINE_GUID(IID_IDirectMusicStyle,0xd2ac28bd,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicChordMap,0xd2ac28be,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicComposer,0xd2ac28bf,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);
DEFINE_GUID(IID_IDirectMusicBand,0xd2ac28c0,0xb39b,0x11d1,0x87,0x4,0x0,0x60,0x8,0x93,0xb1,0xbd);

/////////////////////////////////////////////////////////////////////
// File DPLAY.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IDirectPlay2,0x2b74f7c0,0x9154,0x11cf,0xa9,0xcd,0x0,0xaa,0x0,0x68,0x86,0xe3);
DEFINE_GUID(IID_IDirectPlay2A,0x9d460580,0xa822,0x11cf,0x96,0xc,0x0,0x80,0xc7,0x53,0x4e,0x82);
DEFINE_GUID(IID_IDirectPlay3,0x133efe40,0x32dc,0x11d0,0x9c,0xfb,0x0,0xa0,0xc9,0xa,0x43,0xcb);
DEFINE_GUID(IID_IDirectPlay3A,0x133efe41,0x32dc,0x11d0,0x9c,0xfb,0x0,0xa0,0xc9,0xa,0x43,0xcb);
DEFINE_GUID(IID_IDirectPlay4,0xab1c530,0x4745,0x11d1,0xa7,0xa1,0x0,0x0,0xf8,0x3,0xab,0xfc);
DEFINE_GUID(IID_IDirectPlay4A,0xab1c531,0x4745,0x11d1,0xa7,0xa1,0x0,0x0,0xf8,0x3,0xab,0xfc);
DEFINE_GUID(CLSID_DirectPlay,0xd1eb6d20,0x8923,0x11d0,0x9d,0x97,0x0,0xa0,0xc9,0xa,0x43,0xcb);
DEFINE_GUID(DPSPGUID_IPX,0x685bc400,0x9d2c,0x11cf,0xa9,0xcd,0x0,0xaa,0x0,0x68,0x86,0xe3);
DEFINE_GUID(DPSPGUID_TCPIP,0x36E95EE0,0x8577,0x11cf,0x96,0xc,0x0,0x80,0xc7,0x53,0x4e,0x82);
DEFINE_GUID(DPSPGUID_SERIAL,0xf1d6860,0x88d9,0x11cf,0x9c,0x4e,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPSPGUID_MODEM,0x44eaa760,0xcb68,0x11cf,0x9c,0x4e,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(IID_IDirectPlay,0x5454e9a0,0xdb65,0x11ce,0x92,0x1c,0x00,0xaa,0x00,0x6c,0x49,0x72);

/////////////////////////////////////////////////////////////////////
// File DPLOBBY.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IDirectPlayLobby,0xaf465c71,0x9588,0x11cf,0xa0,0x20,0x0,0xaa,0x0,0x61,0x57,0xac);
DEFINE_GUID(IID_IDirectPlayLobbyA,0x26c66a70,0xb367,0x11cf,0xa0,0x24,0x0,0xaa,0x0,0x61,0x57,0xac);
DEFINE_GUID(IID_IDirectPlayLobby2,0x194c220,0xa303,0x11d0,0x9c,0x4f,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(IID_IDirectPlayLobby2A,0x1bb4af80,0xa303,0x11d0,0x9c,0x4f,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(IID_IDirectPlayLobby3,0x2db72490,0x652c,0x11d1,0xa7,0xa8,0x0,0x0,0xf8,0x3,0xab,0xfc);
DEFINE_GUID(IID_IDirectPlayLobby3A,0x2db72491,0x652c,0x11d1,0xa7,0xa8,0x0,0x0,0xf8,0x3,0xab,0xfc);
DEFINE_GUID(CLSID_DirectPlayLobby,0x2fe8f810,0xb2a5,0x11d0,0xa7,0x87,0x0,0x0,0xf8,0x3,0xab,0xfc);
DEFINE_GUID(DPLPROPERTY_MessagesSupported,0x762ccda1,0xd916,0x11d0,0xba,0x39,0x0,0xc0,0x4f,0xd7,0xed,0x67);
DEFINE_GUID(DPLPROPERTY_LobbyGuid,0xf56920a0,0xd218,0x11d0,0xba,0x39,0x0,0xc0,0x4f,0xd7,0xed,0x67);
DEFINE_GUID(DPLPROPERTY_PlayerGuid,0xb4319322,0xd20d,0x11d0,0xba,0x39,0x0,0xc0,0x4f,0xd7,0xed,0x67);
DEFINE_GUID(DPLPROPERTY_PlayerScore,0x48784000,0xd219,0x11d0,0xba,0x39,0x0,0xc0,0x4f,0xd7,0xed,0x67);
DEFINE_GUID(DPAID_TotalSize,0x1318f560,0x912c,0x11d0,0x9d,0xaa,0x0,0xa0,0xc9,0xa,0x43,0xcb);
DEFINE_GUID(DPAID_ServiceProvider,0x7d916c0,0xe0af,0x11cf,0x9c,0x4e,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_LobbyProvider,0x59b95640,0x9667,0x11d0,0xa7,0x7d,0x0,0x0,0xf8,0x3,0xab,0xfc);
DEFINE_GUID(DPAID_Phone,0x78ec89a0,0xe0af,0x11cf,0x9c,0x4e,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_PhoneW,0xba5a7a70,0x9dbf,0x11d0,0x9c,0xc1,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_Modem,0xf6dcc200,0xa2fe,0x11d0,0x9c,0x4f,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_ModemW,0x1fd92e0,0xa2ff,0x11d0,0x9c,0x4f,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_INet,0xc4a54da0,0xe0af,0x11cf,0x9c,0x4e,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_INetW,0xe63232a0,0x9dbf,0x11d0,0x9c,0xc1,0x0,0xa0,0xc9,0x5,0x42,0x5e);
DEFINE_GUID(DPAID_INetPort,0xe4524541,0x8ea5,0x11d1,0x8a,0x96,0x0,0x60,0x97,0xb0,0x14,0x11);
DEFINE_GUID(DPAID_ComPort,0xf2f0ce00,0xe0af,0x11cf,0x9c,0x4e,0x0,0xa0,0xc9,0x5,0x42,0x5e);

/////////////////////////////////////////////////////////////////////
// File DSOUND.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(CLSID_DirectSound,0x47d4d946,0x62e8,0x11cf,0x93,0xbc,0x44,0x45,0x53,0x54,0x0,0x0);
DEFINE_GUID(CLSID_DirectSoundCapture,0xb0210780,0x89cd,0x11d0,0xaf,0x8,0x0,0xa0,0xc9,0x25,0xcd,0x16);
DEFINE_GUID(IID_IDirectSound,0x279AFA83,0x4981,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectSoundBuffer,0x279AFA85,0x4981,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectSound3DListener,0x279AFA84,0x4981,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectSound3DBuffer,0x279AFA86,0x4981,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectSoundCapture,0xb0210781,0x89cd,0x11d0,0xaf,0x8,0x0,0xa0,0xc9,0x25,0xcd,0x16);
DEFINE_GUID(IID_IDirectSoundCaptureBuffer,0xb0210782,0x89cd,0x11d0,0xaf,0x8,0x0,0xa0,0xc9,0x25,0xcd,0x16);
DEFINE_GUID(IID_IDirectSoundNotify,0xb0210783,0x89cd,0x11d0,0xaf,0x8,0x0,0xa0,0xc9,0x25,0xcd,0x16);
DEFINE_GUID(IID_IKsPropertySet,0x31efac30,0x515c,0x11d0,0xa9,0xaa,0x00,0xaa,0x00,0x61,0xbe,0x93);

/////////////////////////////////////////////////////////////////////
// File DVP.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(IID_IDDVideoPortContainer,0x6C142760,0xA733,0x11CE,0xA5,0x21,0x00,0x20,0xAF,0x0B,0xE5,0x60);
DEFINE_GUID(IID_IDirectDrawVideoPort,0xB36D93E0,0x2B43,0x11CF,0xA2,0xDE,0x00,0xAA,0x00,0xB9,0x33,0x56);
DEFINE_GUID(DDVPTYPE_E_HREFH_VREFH,0x54F39980L,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_E_HREFH_VREFL,0x92783220L,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_E_HREFL_VREFH,0xA07A02E0L,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_E_HREFL_VREFL,0xE09C77E0L,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_CCIR656,0xFCA326A0L,0xDA60,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_BROOKTREE,0x1352A560L,0xDA61,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);
DEFINE_GUID(DDVPTYPE_PHILIPS,0x332CF160L,0xDA61,0x11CF,0x9B,0x06,0x00,0xA0,0xC9,0x03,0xA3,0xB8);

/////////////////////////////////////////////////////////////////////
// File DXFILE.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(CLSID_CDirectXFile,0x4516ec43,0x8f20,0x11d0,0x9b,0x6d,0x00,0x00,0xc0,0x78,0x1b,0xc3);
DEFINE_GUID(IID_IDirectXFile,0x3d82ab40,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(IID_IDirectXFileEnumObject,0x3d82ab41,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(IID_IDirectXFileSaveObject,0x3d82ab42,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(IID_IDirectXFileObject,0x3d82ab43,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(IID_IDirectXFileData,0x3d82ab44,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(IID_IDirectXFileDataReference,0x3d82ab45,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(IID_IDirectXFileBinary,0x3d82ab46,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_DXFILEHeader,0x3d82ab43,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);

/////////////////////////////////////////////////////////////////////
// File RMXFGUID.H:
/////////////////////////////////////////////////////////////////////

DEFINE_GUID(TID_D3DRMInfo,0x2b957100,0x9e9a,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMMesh,0x3d82ab44,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMVector,0x3d82ab5e,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMMeshFace,0x3d82ab5f,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMMaterial,0x3d82ab4d,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMMaterialArray,0x35ff44e1,0x6c7c,0x11cf,0x8F,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMFrame,0x3d82ab46,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMFrameTransformMatrix,0xf6f23f41,0x7686,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMeshMaterialList,0xf6f23f42,0x7686,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMeshTextureCoords,0xf6f23f40,0x7686,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMeshNormals,0xf6f23f43,0x7686,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMCoords2d,0xf6f23f44,0x7686,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMatrix4x4,0xf6f23f45,0x7686,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMAnimation,0x3d82ab4f,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMAnimationSet,0x3d82ab50,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMAnimationKey,0x10dd46a8,0x775b,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMFloatKeys,0x10dd46a9,0x775b,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMMaterialAmbientColor,0x01411840,0x7786,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMMaterialDiffuseColor,0x01411841,0x7786,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMMaterialSpecularColor,0x01411842,0x7786,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMMaterialEmissiveColor,0xd3e16e80,0x7835,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMaterialPower,0x01411843,0x7786,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMColorRGBA,0x35ff44e0,0x6c7c,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xA3);
DEFINE_GUID(TID_D3DRMColorRGB,0xd3e16e81,0x7835,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMGuid,0xa42790e0,0x7810,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMTextureFilename,0xa42790e1,0x7810,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMTextureReference,0xa42790e2,0x7810,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMIndexedColor,0x1630b820,0x7842,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMeshVertexColors,0x1630b821,0x7842,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMMaterialWrap,0x4885ae60,0x78e8,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMBoolean,0x537da6a0,0xca37,0x11d0,0x94,0x1c,0x0,0x80,0xc8,0xc,0xfa,0x7b);
DEFINE_GUID(TID_D3DRMMeshFaceWraps,0xed1ec5c0,0xc0a8,0x11d0,0x94,0x1c,0x0,0x80,0xc8,0xc,0xfa,0x7b);
DEFINE_GUID(TID_D3DRMBoolean2d,0x4885ae63,0x78e8,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMTimedFloatKeys,0xf406b180,0x7b3b,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMAnimationOptions,0xe2bf56c0,0x840f,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMFramePosition,0xe2bf56c1,0x840f,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMFrameVelocity,0xe2bf56c2,0x840f,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMFrameRotation,0xe2bf56c3,0x840f,0x11cf,0x8f,0x52,0x0,0x40,0x33,0x35,0x94,0xa3);
DEFINE_GUID(TID_D3DRMLight,0x3d82ab4a,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMCamera,0x3d82ab51,0x62da,0x11cf,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMAppData,0xe5745280,0xb24f,0x11cf,0x9d,0xd5,0x0,0xaa,0x0,0xa7,0x1a,0x2f);
DEFINE_GUID(TID_D3DRMLightUmbra,0xaed22740,0xb31f,0x11cf,0x9d,0xd5,0x0,0xaa,0x0,0xa7,0x1a,0x2f);
DEFINE_GUID(TID_D3DRMLightRange,0xaed22742,0xb31f,0x11cf,0x9d,0xd5,0x0,0xaa,0x0,0xa7,0x1a,0x2f);
DEFINE_GUID(TID_D3DRMLightPenumbra,0xaed22741,0xb31f,0x11cf,0x9d,0xd5,0x0,0xaa,0x0,0xa7,0x1a,0x2f);
DEFINE_GUID(TID_D3DRMLightAttenuation,0xa8a98ba0,0xc5e5,0x11cf,0xb9,0x41,0x0,0x80,0xc8,0xc,0xfa,0x7b);
DEFINE_GUID(TID_D3DRMInlineData,0x3a23eea0,0x94b1,0x11d0,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMUrl,0x3a23eea1,0x94b1,0x11d0,0xab,0x39,0x0,0x20,0xaf,0x71,0xe4,0x33);
DEFINE_GUID(TID_D3DRMProgressiveMesh,0x8A63C360,0x997D,0x11d0,0x94,0x1C,0x0,0x80,0xC8,0x0C,0xFA,0x7B);
DEFINE_GUID(TID_D3DRMExternalVisual,0x98116AA0,0xBDBA,0x11d1,0x82,0xC0,0x00,0xA0,0xC9,0x69,0x72,0x71);
DEFINE_GUID(TID_D3DRMStringProperty,0x7f0f21e0,0xbfe1,0x11d1,0x82,0xc0,0x0,0xa0,0xc9,0x69,0x72,0x71);
DEFINE_GUID(TID_D3DRMPropertyBag,0x7f0f21e1,0xbfe1,0x11d1,0x82,0xc0,0x0,0xa0,0xc9,0x69,0x72,0x71);
DEFINE_GUID(TID_D3DRMRightHanded,0x7f5d5ea0,0xd53a,0x11d1,0x82,0xc0,0x0,0xa0,0xc9,0x69,0x72,0x71);