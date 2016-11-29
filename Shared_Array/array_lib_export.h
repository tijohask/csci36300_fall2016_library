#ifndef ARRAY_LIB_EXPORT_H
#define ARRAY_LIB_EXPORT_H

#if !defined(ARRAY_LIB_HAS_DLL)
# if defined(ARRAY_LIB_AS_STATIC_LIBS)
#   define ARRAY_LIB_HAS_DLL 0
# else
#   define ARRAY_LIB_HAS_DLL 1
# endif
#endif

#if (ARRAY_LIB_HAS_DLL == 1)
#  if defined(__SUNPRO_CC) && (__SUNPRO_CC >= 0x550)
#    if defined(ARRAY_LIB_BUILD_DLL)
#      define ARRAY_LIB_Export __symbolic
#    else
#      define ARRAY_LIB_Export __global
#    endif
#  elif defined(WIN32) || defined(UNDER_CE) || defined(__CYGWIN__)
#    if defined(ARRAY_LIB_BUILD_DLL)
#      define ARRAY_LIB_Export __declspec(dllexport)
#    else
#      define ARRAY_LIB_Export __declspec(dllimport)
#    endif
#  elif (defined(__GNUC__) && (__GNUC__ >= 4))
#    if defined(ARRAY_LIB_BUILD_DLL)
#      define ARRAY_LIB_Export __attribute__((visibility("default")))
#    else
#      define ARRAY_LIB_Export
#    endif
#  else
#    define ARRAY_LIB_Export
#  endif
#else
#  define ARRAY_LIB_Export
#endif

#endif
