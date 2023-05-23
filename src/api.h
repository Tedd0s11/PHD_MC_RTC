#pragma once

#if defined _WIN32 || defined __CYGWIN__
#  define Phd_Controller_DLLIMPORT __declspec(dllimport)
#  define Phd_Controller_DLLEXPORT __declspec(dllexport)
#  define Phd_Controller_DLLLOCAL
#else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#    define Phd_Controller_DLLIMPORT __attribute__((visibility("default")))
#    define Phd_Controller_DLLEXPORT __attribute__((visibility("default")))
#    define Phd_Controller_DLLLOCAL __attribute__((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#    define Phd_Controller_DLLIMPORT
#    define Phd_Controller_DLLEXPORT
#    define Phd_Controller_DLLLOCAL
#  endif // __GNUC__ >= 4
#endif // defined _WIN32 || defined __CYGWIN__

#ifdef Phd_Controller_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define Phd_Controller_DLLAPI
#  define Phd_Controller_LOCAL
#else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef Phd_Controller_EXPORTS
#    define Phd_Controller_DLLAPI Phd_Controller_DLLEXPORT
#  else
#    define Phd_Controller_DLLAPI Phd_Controller_DLLIMPORT
#  endif // Phd_Controller_EXPORTS
#  define Phd_Controller_LOCAL Phd_Controller_DLLLOCAL
#endif // Phd_Controller_STATIC