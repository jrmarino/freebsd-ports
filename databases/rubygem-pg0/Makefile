# Created by: Wen Heping <wenheping@gmail.com>

PORTNAME=	pg
PORTVERSION=	0.21.0
PORTREVISION=	2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	0

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby interface to PostgreSQL library

LICENSE=	BSD2CLAUSE RUBY
LICENSE_COMB=	dual
LICENSE_FILE_BSD2CLAUSE=${WRKSRC}/BSDL
LICENSE_FILE_RUBY=	${WRKSRC}/LICENSE

USES=		gem pgsql
USE_RUBY=	yes

CONFIGURE_ARGS=	--with-pgsql-include-dir=`${PG_CONFIG} --includedir` \
		--with-pgsql-lib-dir=`${PG_CONFIG} --libdir`
PG_CONFIG=	${LOCALBASE}/bin/pg_config

PORTSCOUT=	limit:^0\.

.include <bsd.port.mk>
