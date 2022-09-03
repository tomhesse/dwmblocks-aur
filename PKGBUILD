pkgname=dwmblocks
pkgver=68.a933ce0
pkgrel=3
pkgdesc="Modular status bar for dwm written in c"
url="https://github.com/torrinfail/dwmblocks"
arch=('i686' 'x86_64')
license=('ISC')
options=(zipman)
depends=('libx11')
source=("$pkgname::git+https://github.com/torrinfail/dwmblocks.git"
	blocks.h)
sha256sums=('SKIP'
            '4f4c4a1c8c8e2f35058839fca9cd02bee38b8e45b808c73057400141a75f0761')
pkgver() {
  cd "$srcdir/$pkgname"
  printf "%s.%s" "$(git rev-list --count HEAD)" "$(git rev-parse --short HEAD)"
}

prepare() {
  cd "$srcdir/$pkgname"
  cp "$srcdir/blocks.h" blocks.h
}

build() {
  cd "$srcdir/$pkgname"
  make X11INC=/usr/include/X11 X11LIB=/usr/lib/X11
}

package() {
  cd "$srcdir/$pkgname"
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -m644 -D README.md "$pkgdir/usr/share/doc/$pkgname/README"
}
