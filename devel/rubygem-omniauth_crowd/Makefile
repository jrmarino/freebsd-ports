PORTNAME=	omniauth_crowd
PORTVERSION=	2.4.0
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ports@michael-fausten.de
COMMENT=	OmniAuth provider for Atlassian Crowds REST API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS?=	rubygem-activesupport60>=0:devel/rubygem-activesupport60 \
		rubygem-nokogiri>=1.4.4:textproc/rubygem-nokogiri \
		rubygem-omniauth>=1.0:security/rubygem-omniauth

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
