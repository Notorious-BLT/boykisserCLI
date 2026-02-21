# BoyKisser CLI Utility

Welcome to the Linux Compatible BoyKisser repository. This CLI utility allows you to easily output, or copy a random or specific boykisser ASCII art into your terminal or clipboard.

### Features

+ Random ASCII Art: Get a random piece of boykisser ASCII art with a simple command.

+ Specific Art: With a simple command you can request a particular ASCII art piece.

+ Clipboard Support: Copy art directly to your clipboard for easy pasting (Only works for xorg, sorry). Whether you want to copy a particular art piece, or want to copy a random one.

+ Syntax simplicity: The program is designed to have a small sheet containing a list of simple commands that should help you operate the utility.

### Building

To get started, you need to acquire the source code by cloning the repo, or simply downloading from releases.

Once you have downloaded the source files, make sure you have `xsel` installed, it is required for clipboard support!

### Building Steps

1. Direct yourself into the source directory.
2. Make the installation file executable by entering `chmod +x install.sh`
3. Execute the installation file by entering `sh install.sh`

# Usage

After installation, you can start using the utility, you can consult the usage list down below or enter `boykisser --help usage`

```
Usage: boykisser [command] [argument]

Commands:
    random-kiss - print out a random boykisser into the terminal.
        Arguments:
            -sfw: exclude NSFW ascii.
            -nsfw: include NSFW ascii.
    
    find-kiss - print out one out of 32 boykisser ascii arts.
        Arguments:
            1-32: numeration for each boykisser ascii art.
    
    copy-random-kiss - copy a random boykisser into the clipboard.
        Arguments:
            -sfw: exclude NSFW ascii.
            -nsfw: include NSFW ascii.
    
    copy-kiss - copy one out of 32 boykisser ascii arts.
        Arguments:
            1-32: numeration for each boykisser ascii art.

    --help - print out usage help or locations for ascii sources.
        Arguments:
            usage: print out commands and arguments that can be used.
            ascii_sources: print out a message with ascii sources locations.
```