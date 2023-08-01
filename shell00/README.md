# S.Hell

# Check list
- [x] ex00
- [x] ex01
- [x] ex02
- [x] ex03
- [x] ex04
- [x] ex05
- [x] ex06
- [x] ex07
- [x] ex08
- [x] ex09

# Exercise 00 : Z
```sh
touch z    
echo "Z" > z
```

# Exercise 01 : testShell00
```sh
# Create a file with specific date
touch -t 06012342 testShell00
# Add a some text to the file (40 octets)
for i in {1..40}; do echo -n "a" >> testShell00; done
# Change file rights
chmod 0 testShell00 # reset
chmod u+r,go+rx ./testShell00
```

# Exercise 02 : Oh yeah, mooore...

```sh
# Create a file all file or folder like the first exercice
...
# To create a hard link
ln test3 test5
# To create a symbolic link
ln -s test0 test6
# To define the date of a symbolic link
touch -h -t 06012342 test6
# and apply the right
chmod -h 777 test6 
```

- `-h`      If the file is a symbolic link, change the times of the link itself rather than the file that the link points to. Note that -h implies -c and thus will not create any new files.
- `-t STAMP`    [[CC]YY]MMDDhhmm[.ss] 

# Exercise 03 : SSH me!
```sh
ssh-keygen -t rsa
```

# Exercise 04 : midLS

```sh
ls -tpm
```

- `-t`: Sort by time modified (most recently modified first) before sorting the operands by lexicographical order.
- `-p`: Write a slash (`/') after each filename if that file is a directory.
- `-m`: Stream output format; list files across the page, separated by commas.

# Exercise 05 : GiT commit

```sh
git log --pretty=oneline -n 5 | cut -d' ' -f1
```

- `--pretty=format:"%H"`: This option formats the output of the log command.
- `-n 5`: This option limits the number of commits to 5.
- `cut -d' ' -f1`: This command cuts the output of the log command at the first space and displays only the first field. 

# Exercise 06 : gitignore

```sh
# git ls-files -o -i --exclude-standard
git status --ignored -s | grep '!!' | cut -d' ' -f2-
```

- `--ignored`: This option displays ignored files in the output.
- `-s`: This option displays the output in short format.
- `grep '!!'`: This command displays only the lines that contain `!!`.
- `cut -d' ' -f2-`: This command cuts the output at the first space and displays only the second field and the rest of the line.

# Exercise 07 : diff

>**note:** here we need to use the given file in the ressources archive `sw.diff` and `a`. <br>
`a` is the original file and `b` is the modified file. We lost the modified file, so we need to recreate it.
Using the patch command, we can apply the changes in the sw.diff file to the a file and create the b file.
```sh
patch a < sw.diff
mv a b
```

# Exercise 08 : clean

```sh
find . -type f \( -name '*~' -o -name '#*#' \) -print -delete
```

- `-type 'f'`: Selected only files
- `-name '*~'`: This option matches all files that end with a tilde (`~`).
- `-o`: This option is used to specify an alternative expression.
- `-name '#*#'`: This option matches all files that start and end with a hash (`#`).
- `-print`: This option prints the name of the matched files.
- `-delete`: This option deletes the matched files.

# Exercise 09 : Illusions, not tricks, Michael...

```rawdoc
-m, --magic-file magicfiles
             Specify an alternate list of files and directories containing magic.  This can be a single item, or a colon-separated list.  If a compiled
             magic file is found alongside a file or directory, it will be used instead.

STANDARDS CONFORMANCE
     This program conforms to Version 3 of the Single UNIX Specification (“SUSv3”).  Its behavior is mostly compatible with the System V program of the
     same name.  This version knows more magic, however, so it will produce different (albeit more accurate) output in many cases.

     The one significant difference between this version and System V is that this version treats any white space as a delimiter, so that spaces in
     pattern strings must be escaped.  For example,

           >10     string  language impress        (imPRESS data)
```

```sh
touch ft_magic
# offset - type - value - description
echo -n "41 string 42 42 file" > ft_magic
# testing
touch 42file
# for loop that add dumb to the file 10 times (40 chars)
for i in {1..41}; do echo -n "a" >> 42file; done
# add our magic number
echo -n "42" >> 42file
# check the file type with ft_magic
file -m ft_magic 42file
```