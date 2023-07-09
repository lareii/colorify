# colorify

**colorify** is a package that allows you to produce colorful output using ANSI codes. This package is designed to simplify the process of generating colorful outputs using the [Jule Programming Language](https://jule.dev/).

## Features
- Simple and straightforward package written in Jule.
- Support for text and background coloring, formatting and graphic settings using ANSI codes.
- colorify can work in any console-based environment that supports ANSI codes.

## Installation & Usage
To use the **colorify** package, follow these steps:
1. Download or clone the **colorify** package from the GitHub repository.
2. Add the **colorify** directory to the root directory of your project.
3. Include the **colorify** package in your project's source files.
4. Ta-da!

## Usage
Below is an example showcasing the basic usage of the **colorify** package:
```rs
// include the package
use colorify::colorify::{Style, Foreground, colorify}

fn main() {

  // create a variable named "style" using the Style struct
  let style = Style{
    fg: Foreground.BrightBlack
  }

  // colorify your text with your style and print it
  outln(
    colorify("Hello, world!", style)
  )

}
```
See the `examples/` directory for more usage examples.

## Contributing
We welcome contributions to the colorify package! To contribute, simply fork the repository, make your desired changes, and submit a pull request.

## License
This project is licensed under the MIT License. For more information, see the LICENSE file.

## Contact
If you have any questions or suggestions open an issue on the [GitHub Issues](https://github.com/lareii/colorify/issues) page.
