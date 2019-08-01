#ifndef MYLIBRARY_GLOBAL_H
#define MYLIBRARY_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MYLIBRARY_LIBRARY)
#  define MYLIBRARYSHARED_EXPORT Q_DECL_EXPORT
#else
#  define MYLIBRARYSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MYLIBRARY_GLOBAL_H
