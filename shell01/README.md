# S.Hell

# Check list
- [x] ex01
- [x] ex02
- [x] ex03
- [x] ex04
- [x] ex05
- [x] ex06
- [x] ex07
- [ ] ex08

# Exercise 01 : print_groups

- define a env var FT_USER with the value `nours` or `daemon`
```sh
export FT_USER=nours
export FT_USER=daemon
```

```sh
id -nG $FT_USER | tr ' ' ','
```

- `-G` : Display the different group IDs (effective, real and supplementary) as white-space separated numbers, in no particular order.
- `-n` : Display the name of the user instead of the ID number. 

# Exercise 02 : find_sh

```bash
find . -type f -name "*.sh" -exec basename {} .sh \;
```

- `find .`: Start searching in the current directory (`.`).
- `-type f`: Look for files (not directories).
- `-name "*.sh"`: Search for files with names ending in ".sh".
- `-exec basename {} .sh \;`: For each found file, run the `basename` command to remove the ".sh" extension. The `{}` will be replaced by the file name, and `\;` is used to terminate the `-exec` option.


# Exercise 03 : count_files

```bash
find . | wc -l | tr -d ' '
```

Let's break down the command:

- `find .`: Start searching in the current directory (`.`).
- `| wc -l`: redirect the output of `find` to `wc -l`, which will count the number of lines.
- `| tr -d ' '`: redirect the output of `wc -l` to `tr -d ' '`, which will remove all spaces.

> **Note:** `WC` stands for "word count" and `TR` for "translate or delete characters"


# Exercise 04 : MAC

```bash
ifconfig -a | grep "ether " | cut -d " " -f2
```

- `ifconfig -a`: Display all network interfaces.
- `grep "ether "`: Search for the line containing "ether " (with a space after "ether").
- `cut -d " " -f2`: Split the line into fields using the space character as a delimiter (`-d" "`), and print the second field (`-f2`).

# Exercise 05 : Can you create it ?

```bash
touch -t 10021221 "\"\?\$*'MaRViN'*\$?\\\""
```

- Just add some backslashes to escape the special characters.


# Exercise 06 : skip

```bash
ls -l | awk 'NR%2==1'
```

- `awk` : a.k.a. Aho–Corasick algorithm, is an efficient string-searching algorithm, often used for pattern scanning and processing language.
- `NR` : Number of Records (line number) 
# Exercise 07 : r_dwssap

```bash
cat /etc/passwd     # display the content of the file
| grep -v '^#'      # remove all lines starting with '#'
| awk 'NR%2==0'     # keep only every other line
| cut -d ':' -f1    # keep only the login
| rev               # reverse each line
| sort -r           # sort in reverse alphabetical order
| awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' # keep only the lines between FT_LINE1 and FT_LINE2
| awk 'BEGIN { sep="" } { printf "%s%s", sep, $0; sep=", " } END { printf "." }' # Build a single line with ", " as separator and "." at the end
# Define the BEGIN sep to an empty string
# printf "%s%s", sep, $0 : print the separator and the current line
# set sep to ", " after the first line
# Add a "." at the end

```

```bash
export FT_LINE1=7
export FT_LINE2=15
./r_dwssap.sh
```