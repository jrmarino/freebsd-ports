PORTNAME=	klog
PORTVERSION=	0.9.8.1
PORTREVISION=	1
CATEGORIES=	comms hamradio
MASTER_SITES=	SAVANNAH

MAINTAINER=	hamradio@FreeBSD.org
COMMENT=	Simple Qt-based amateur radio logger

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libhamlib.so:comms/hamlib

USES=		compiler:c++11-lang gl qmake qt:5 xorg
USE_GL=		gl
USE_QT=		buildtools_build charts core gui linguisttools_build multimedia network \
		printsupport sql sql-sqlite3_run serialport widgets

DESKTOP_ENTRIES=	"KLog" "Simple Amateur Radio Logging Program" \
		"" "klog" "Network;HamRadio;" \
		true

PLIST_FILES=	bin/klog \
		${DATADIR}/translations/klog_ca.qm \
		${DATADIR}/translations/klog_de.qm \
		${DATADIR}/translations/klog_es.qm \
		${DATADIR}/translations/klog_fr.qm \
		${DATADIR}/translations/klog_ja.qm \
		${DATADIR}/translations/klog_da.qm \
		${DATADIR}/translations/klog_fi.qm \
		${DATADIR}/translations/klog_hr.qm \
		${DATADIR}/translations/klog_it.qm \
		${DATADIR}/translations/klog_pl.qm \
		man/man1/klog.1.gz

post-patch:
	@${REINPLACE_CMD} '/"\/usr\/share\/klog\/translations\/klog_" + \
		QLocale::system().name()/\
		s|);|, "${DATADIR}/translations/");|' \
			${WRKSRC}/main.cpp

#post-build:
#	${LRELEASE} ${WRKSRC}/${PORTNAME}.pro

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/build/target/klog ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}/translations
	${INSTALL_DATA} ${WRKSRC}/build/target/translations/klog_*.qm \
		${STAGEDIR}${DATADIR}/translations
	${INSTALL_MAN} ${WRKSRC}/klog.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
