PORTNAME=	rubocop
PORTVERSION=	1.7.0
PORTREVISION=	1
CATEGORIES=	devel ruby
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby code style checking tool

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-parallel>=1.10<2:sysutils/rubygem-parallel \
		rubygem-parser>=2.7.1.5:devel/rubygem-parser \
		rubygem-rainbow>=2.2.2<4.0:devel/rubygem-rainbow \
		rubygem-regexp_parser>=1.8<3.0:textproc/rubygem-regexp_parser \
		rubygem-rexml>=0:textproc/rubygem-rexml \
		rubygem-rubocop-ast>=1.2.0<2.0:devel/rubygem-rubocop-ast \
		rubygem-ruby-progressbar>=1.7<2:devel/rubygem-ruby-progressbar \
		rubygem-unicode-display_width1>=1.4.0<2.0:devel/rubygem-unicode-display_width1

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/rubocop

.include <bsd.port.mk>
