# colorify

**colorify** is a package that allows you to produce colorful output using ANSI codes. This package is designed to simplify the process of generating colorful outputs using the [Jule Programming Language](https://jule.dev/).

## Features
- Simple and straightforward package written in Jule.
- Support for text and background coloring, formatting and graphic settings using ANSI codes.
- Runs in any console-based environment that supports ANSI codes.

## Installation & Usage
To use the package, follow these steps:
1. Download or clone the package from the GitHub repository.
3. Include the package in your project's source files. (don't forget to run `julec mod init` to create a module)
4. Ta-da! You're ready to use the package in your project.

## Usage
Below is an example showcasing the basic usage of the package:
```js
// include the package
use "colorify"

fn main() {
	// create a variable named "style" using the Style struct
	let style = colorify::Style{
		Foreground: colorify::Foreground.BrightBlack,
		Fonts: [colorify::Font.Bold]
	}.BackgroundRGB(
		95, 116, 137)!

	// colorify your text with your style and print it
	println(colorify::Colorify("Hello, Jule!", style))
}
```

## Contributing
We welcome contributions to the colorify package! To contribute, simply fork the repository, make your desired changes, and submit a pull request.

## License
This project is licensed under the MIT License. For more information, see the [LICENSE](https://github.com/lareii/colorify/blob/master/LICENSE) file.

## Contact
If you have any questions or suggestions open an issue on the [GitHub Issues](https://github.com/lareii/colorify/issues) page.
