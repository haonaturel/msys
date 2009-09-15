/** \file sashwnd.hh
 *
 * Created: JohnE, 2008-11-08
 */
#ifndef SASHWND_HH_INC
#define SASHWND_HH_INC


#define WIN32_LEAN_AND_MEAN
#include <windows.h>


#ifdef __cplusplus
extern "C" {
#endif


int SashWnd_RegisterClasses(HINSTANCE hinstance);


#ifdef __cplusplus
} //extern "C"
#endif


#endif // SASHWND_HH_INC