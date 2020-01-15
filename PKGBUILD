pkgname=dwmblocks
gitname=dwmblocks
pkgver=0.8.2
pkgrel=1
pkgdesc='Modular Statusbar for DWM'
arch=('x86_64')
#makedepends=('ncurses' 'libxext' 'git')
source=('git+https://github.com/SearyBlue/dwmblocks')
sha1sums=('SKIP')
provides=('dwmblocks')
conflicts=('dwmblocks')

build() 
{
	cd "$srcdir/$gitname"
	cat ../../blocks.h > ./blocks.h
	make
}

package() 
{
  	cd "$srcdir/$gitname"
  	make PREFIX=/usr DESTDIR="${pkgdir}" install
    install -Dm644 LICENSE "${pkgdir}/usr/share/licenses/${pkgname}/LICENSE"
    install -Dm644 README.md "${pkgdir}/usr/share/doc/${pkgname}/README"
}
