# Created by: Gea-Suan Lin <gslin@gslin.org>

PORTNAME=	zookeeper
PORTVERSION=	0.7.2
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	PHP extension for interfacing with Apache ZooKeeper

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	libzookeeper>=3.5.0:devel/libzookeeper
LIB_DEPENDS=	libzookeeper_mt.so:devel/libzookeeper

USES=		php:pecl
USE_PHP=	session:build

PORTDATA=	zookeeper-api.php

post-install:
	${MKDIR} ${STAGEDIR}${DATADIR}/
	${INSTALL_DATA} ${WRKSRC}/zookeeper-api.php ${STAGEDIR}${DATADIR}/

.include <bsd.port.mk>
