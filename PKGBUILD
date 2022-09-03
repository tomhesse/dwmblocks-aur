pkgname=dwmblocks
pkgver=68.a933ce0
pkgrel=2
pkgdesc="Modular status bar for dwm written in c"
url="https://github.com/torrinfail/dwmblocks"
arch=('i686' 'x86_64')
license=('ISC')
options=(zipman)
depends=('libx11')
source=("$pkgname::git+https://github.com/torrinfail/dwmblocks.git"
	blocks.h)
sha256sums=('SKIP'
            '85be912dd1f957191762b25f9b69e25169bcb8fb3a4e2f9cdf7c79c361aeae4a')
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
