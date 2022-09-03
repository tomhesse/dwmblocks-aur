pkgname=dwmblocks
pkgver=68.a933ce0
pkgrel=6
pkgdesc="Modular status bar for dwm written in c"
url="https://github.com/torrinfail/dwmblocks"
arch=('i686' 'x86_64')
license=('ISC')
options=(zipman)
depends=('libx11')
source=("$pkgname::git+https://github.com/torrinfail/dwmblocks.git"
	blocks.h)
sha256sums=('SKIP'
            'b6ee65bd54ae2e2bd81c56c90e2b2d5c4b29542ba804cafe76cb0774cb731496')
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
