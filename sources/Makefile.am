SUBDIRS = Core Reconstruction Nadeko AnaLoop

lib_LTLIBRARIES = libanaroot.la
libanaroot_la_SOURCES =
libanaroot_la_LIBADD = \
 AnaLoop/Core/libanaloop.la \
 Core/libanacore.la \
 Nadeko/libananadeko.la \
 Reconstruction/BigRIPS/libanabrips.la 

if USE_MINOS
libanaroot_la_LIBADD += Reconstruction/MINOS/libanaminos.la 
endif
