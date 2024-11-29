#ifndef COMPAT_H
#define COMPAT_H

#ifdef _WIN32
#include <io.h>
#include <process.h>
#include <direct.h>
#else
#include <unistd.h>
#endif

#endif // COMPAT_H