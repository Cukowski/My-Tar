# Welcome to My Tar
***

## Task
During Season 1 Arc 2 of the Qwasar program, we were assigned My Tar. The goal of the assignment was to create a program that replicated the functionality of the tar utility. The program was created using C.

## Description
To complete the assignment,  we started by reviewing open source documentation at GNU (https://www.gnu.org/software/tar/manual/html_node/Standard.html). That provided information on the format of a tar file including the header, content, and padding. 
After learning that information, we created a large function that created a tar file that could be opened using the tar utility on a linux system. From there, we divided the code into smaller helper functions and divided the 
code base into multiple files.

## Installation
To install the program, git clone the program. There is a Makefile provided with the program. Compile the program (instructions in usage) and it should return my_tar
if successful.

The provided flags are:
* -c Create a new archive containing the specified items.
* -r Like -c, but new entries are appended to the archive. The -f option is required.
* -t List archive contents to stdout.
* -u Like -r, but new entries are added only if they have a modification date newer than the corresponding entry in the archive. The -f option is required.
* -x Extract to disk from the archive. If a file with the same name appears more than once in the archive, each copy will be extracted, with later copies overwriting (replacing) earlier copies.
* -f Read the archive from or write the archive to the specified file. The filename can be standard input or standard output.

## Usage

```
git clone url
make clean
make
./my_tar -flags tar.name source.txt or ./my_tar -flags tar.name or ./my_tar -flags source.txt or will return error

```

### The Core Team

<h4>Kendra Moore</h4>
<h4>Selcuk Aksoy</h4>
<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
