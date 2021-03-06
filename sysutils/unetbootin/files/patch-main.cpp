--- main.cpp.orig	2021-02-04 09:18:21 UTC
+++ main.cpp
@@ -294,9 +294,9 @@ int main(int argc, char **argv)
 			}
             argsconc += "\"rootcheck=no\"";
             argsconcSingleQuote += "'rootcheck=no'";
-#ifdef Q_OS_LINUX
+#ifdef Q_OS_UNIX
             QString gksuarg1;
-            gksuarg1 += QString("bash -c 'QT_X11_NO_MITSHM=1 ");
+            gksuarg1 += QString("sh -c 'QT_X11_NO_MITSHM=1 ");
             gksuarg1 += QString("%1 %2").arg(app.applicationFilePath()).arg(argsconc);
             gksuarg1 += QString("'");
             QStringList gksuargs;
@@ -395,7 +395,7 @@ int main(int argc, char **argv)
 	#ifdef Q_OS_WIN32
 	QSettings chkinst("HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\UNetbootin", QSettings::NativeFormat);
 	#endif
-	#ifdef Q_OS_LINUX
+	#ifdef Q_OS_UNIX
 	QSettings chkinst(QSettings::SystemScope, "UNetbootin");
 	#endif
 #ifndef Q_OS_MAC
@@ -428,7 +428,7 @@ int main(int argc, char **argv)
 	icon.addFile(":/unetbootin_24.png", QSize(24,24));
 	icon.addFile(":/unetbootin_32.png", QSize(32,32));
 	icon.addFile(":/unetbootin_48.png", QSize(48,48));
-#ifdef Q_OS_LINUX
+#ifdef Q_OS_UNIX
 	icon.addFile("/usr/share/pixmaps/unetbootin.png");
 	icon.addFile("/usr/share/pixmaps/unetbootin.xpm");
 #endif
