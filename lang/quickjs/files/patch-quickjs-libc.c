--- quickjs-libc.c.orig	2020-09-06 09:31:51 UTC
+++ quickjs-libc.c
@@ -47,8 +47,14 @@
 #include <sys/ioctl.h>
 #include <sys/wait.h>
 
-#if defined(__APPLE__)
+#if defined(__FreeBSD__)
+extern char **environ;
+#endif
+
+#if defined(__APPLE__) || defined(__FreeBSD__)
 typedef sig_t sighandler_t;
+#endif
+#if defined(__APPLE__)
 #if !defined(environ)
 #include <crt_externs.h>
 #define environ (*_NSGetEnviron())
