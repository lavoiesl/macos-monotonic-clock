# macOS monotonic clock

Outputs miliseconds of a monotonic clock; an ever-increasing counter.

[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE.md)
[![Build Status](https://travis-ci.org/lavoiesl/macos-monotonic-clock.svg)](https://travis-ci.org/lavoiesl/macos-monotonic-clock)

## Usage

### Compiling

```bash
make
```

### Download from GitHub

You can download a precompiled `monotonic` from the [release page](https://github.com/lavoiesl/macos-monotonic-clock/releases/latest).

### Running

```bash
./monotonic
```

or

```bash
sudo make install # installs to /usr/local/bin
monotonic
```

### Using clib

```bash
clib install lavoiesl/macos-monotonic-clock
```

### Output example

```
$ ./monotonic; sleep 1; ./monotonic
415108322
415109335
```

## License

MIT, see [LICENSE.md](LICENSE.md) for details.

## Inspiration

 * https://stackoverflow.com/a/39163567