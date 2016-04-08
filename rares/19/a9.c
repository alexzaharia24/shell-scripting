CAT(1)                           User Commands                           CAT(1)



NAME
       cat - concatenate files and print on the standard output

SYNOPSIS
       cat [OPTION]... [FILE]...

DESCRIPTION
       Concatenate FILE(s), or standard input, to standard output.

       -A, --show-all
              equivalent to -vET

       -b, --number-nonblank
              number nonempty output lines, overrides -n

       -e     equivalent to -vE

       -E, --show-ends
              display $ at end of each line

       -n, --number
              number all output lines

       -s, --squeeze-blank
              suppress repeated empty output lines

       -t     equivalent to -vT

       -T, --show-tabs
              display TAB characters as ^I

       -u     (ignored)

       -v, --show-nonprinting
              use ^ and M- notation, except for LFD and TAB

       --help display this help and exit

       --version
              output version information and exit

       With no FILE, or when FILE is -, read standard input.

EXAMPLES
       cat f - g
              Output f's contents, then standard input, then g's contents.

       cat    Copy standard input to standard output.

AUTHOR
       Written by Torbjorn Granlund and Richard M. Stallman.

REPORTING BUGS
       Report cat bugs to bug-coreutils@gnu.org
       GNU coreutils home page: <http://www.gnu.org/software/coreutils/>
       General help using GNU software: <http://www.gnu.org/gethelp/>
       Report cat translation bugs to <http://translationproject.org/team/>

COPYRIGHT
       Copyright © 2013 Free Software Foundation, Inc.  License GPLv3+: GNU GPL
       version 3 or later <http://gnu.org/licenses/gpl.html>.
       This is free software: you are  free  to  change  and  redistribute  it.
       There is NO WARRANTY, to the extent permitted by law.

SEE ALSO
       tac(1)

       The  full  documentation  for cat is maintained as a Texinfo manual.  If
       the info and cat programs are properly installed at your site, the  com‐
       mand

              info coreutils 'cat invocation'

       should give you access to the complete manual.



GNU coreutils 8.21               December 2015                           CAT(1)
RM(1)                            User Commands                            RM(1)



NAME
       rm - remove files or directories

SYNOPSIS
       rm [OPTION]... FILE...

DESCRIPTION
       This manual page documents the GNU version of rm.  rm removes each spec‐
       ified file.  By default, it does not remove directories.

       If the -I or --interactive=once option is given, and there are more than
       three files or the -r, -R, or --recursive are given, then rm prompts the
       user for whether to proceed with the entire operation.  If the  response
       is not affirmative, the entire command is aborted.

       Otherwise,  if  a  file is unwritable, standard input is a terminal, and
       the -f or --force option is not given, or the -i or --interactive=always
       option is given, rm prompts the user for whether to remove the file.  If
       the response is not affirmative, the file is skipped.

OPTIONS
       Remove (unlink) the FILE(s).

       -f, --force
              ignore nonexistent files and arguments, never prompt

       -i     prompt before every removal

       -I     prompt once before removing more than three files, or when remov‐
              ing recursively.  Less intrusive than -i, while still giving pro‐
              tection against most mistakes

       --interactive[=WHEN]
              prompt according to WHEN:  never,  once  (-I),  or  always  (-i).
              Without WHEN, prompt always

       --one-file-system
              when removing a hierarchy recursively, skip any directory that is
              on a file system different from that of the corresponding command
              line argument

       --no-preserve-root
              do not treat '/' specially

       --preserve-root
              do not remove '/' (default)

       -r, -R, --recursive
              remove directories and their contents recursively

       -d, --dir
              remove empty directories

       -v, --verbose
              explain what is being done

       --help display this help and exit

       --version
              output version information and exit

       By  default, rm does not remove directories.  Use the --recursive (-r or
       -R) option to remove each listed directory, too, along with all  of  its
       contents.

       To  remove  a file whose name starts with a '-', for example '-foo', use
       one of these commands:

              rm -- -foo

              rm ./-foo

       Note that if you use rm to remove  a  file,  it  might  be  possible  to
       recover  some  of  its contents, given sufficient expertise and/or time.
       For greater assurance that the contents are  truly  unrecoverable,  con‐
       sider using shred.

AUTHOR
       Written  by  Paul  Rubin,  David MacKenzie, Richard M. Stallman, and Jim
       Meyering.

REPORTING BUGS
       Report rm bugs to bug-coreutils@gnu.org
       GNU coreutils home page: <http://www.gnu.org/software/coreutils/>
       General help using GNU software: <http://www.gnu.org/gethelp/>
       Report rm translation bugs to <http://translationproject.org/team/>

COPYRIGHT
       Copyright © 2013 Free Software Foundation, Inc.  License GPLv3+: GNU GPL
       version 3 or later <http://gnu.org/licenses/gpl.html>.
       This  is  free  software:  you  are  free to change and redistribute it.
       There is NO WARRANTY, to the extent permitted by law.

SEE ALSO
       unlink(1), unlink(2), chattr(1), shred(1)

       The full documentation for rm is maintained as a Texinfo manual.  If the
       info and rm programs are properly installed at your site, the command

              info coreutils 'rm invocation'

       should give you access to the complete manual.



GNU coreutils 8.21               December 2015                            RM(1)
RM(1)                            User Commands                            RM(1)



NAME
       rm - remove files or directories

SYNOPSIS
       rm [OPTION]... FILE...

DESCRIPTION
       This manual page documents the GNU version of rm.  rm removes each spec‐
       ified file.  By default, it does not remove directories.

       If the -I or --interactive=once option is given, and there are more than
       three files or the -r, -R, or --recursive are given, then rm prompts the
       user for whether to proceed with the entire operation.  If the  response
       is not affirmative, the entire command is aborted.

       Otherwise,  if  a  file is unwritable, standard input is a terminal, and
       the -f or --force option is not given, or the -i or --interactive=always
       option is given, rm prompts the user for whether to remove the file.  If
       the response is not affirmative, the file is skipped.

OPTIONS
       Remove (unlink) the FILE(s).

       -f, --force
              ignore nonexistent files and arguments, never prompt

       -i     prompt before every removal

       -I     prompt once before removing more than three files, or when remov‐
              ing recursively.  Less intrusive than -i, while still giving pro‐
              tection against most mistakes

       --interactive[=WHEN]
              prompt according to WHEN:  never,  once  (-I),  or  always  (-i).
              Without WHEN, prompt always

       --one-file-system
              when removing a hierarchy recursively, skip any directory that is
              on a file system different from that of the corresponding command
              line argument

       --no-preserve-root
              do not treat '/' specially

       --preserve-root
              do not remove '/' (default)

       -r, -R, --recursive
              remove directories and their contents recursively

       -d, --dir
              remove empty directories

       -v, --verbose
              explain what is being done

       --help display this help and exit

       --version
              output version information and exit

       By  default, rm does not remove directories.  Use the --recursive (-r or
       -R) option to remove each listed directory, too, along with all  of  its
       contents.

       To  remove  a file whose name starts with a '-', for example '-foo', use
       one of these commands:

              rm -- -foo

              rm ./-foo

       Note that if you use rm to remove  a  file,  it  might  be  possible  to
       recover  some  of  its contents, given sufficient expertise and/or time.
       For greater assurance that the contents are  truly  unrecoverable,  con‐
       sider using shred.

AUTHOR
       Written  by  Paul  Rubin,  David MacKenzie, Richard M. Stallman, and Jim
       Meyering.

REPORTING BUGS
       Report rm bugs to bug-coreutils@gnu.org
       GNU coreutils home page: <http://www.gnu.org/software/coreutils/>
       General help using GNU software: <http://www.gnu.org/gethelp/>
       Report rm translation bugs to <http://translationproject.org/team/>

COPYRIGHT
       Copyright © 2013 Free Software Foundation, Inc.  License GPLv3+: GNU GPL
       version 3 or later <http://gnu.org/licenses/gpl.html>.
       This  is  free  software:  you  are  free to change and redistribute it.
       There is NO WARRANTY, to the extent permitted by law.

SEE ALSO
       unlink(1), unlink(2), chattr(1), shred(1)

       The full documentation for rm is maintained as a Texinfo manual.  If the
       info and rm programs are properly installed at your site, the command

              info coreutils 'rm invocation'

       should give you access to the complete manual.



GNU coreutils 8.21               December 2015                            RM(1)
RM(1)                            User Commands                            RM(1)



NAME
       rm - remove files or directories

SYNOPSIS
       rm [OPTION]... FILE...

DESCRIPTION
       This manual page documents the GNU version of rm.  rm removes each spec‐
       ified file.  By default, it does not remove directories.

       If the -I or --interactive=once option is given, and there are more than
       three files or the -r, -R, or --recursive are given, then rm prompts the
       user for whether to proceed with the entire operation.  If the  response
       is not affirmative, the entire command is aborted.

       Otherwise,  if  a  file is unwritable, standard input is a terminal, and
       the -f or --force option is not given, or the -i or --interactive=always
       option is given, rm prompts the user for whether to remove the file.  If
       the response is not affirmative, the file is skipped.

OPTIONS
       Remove (unlink) the FILE(s).

       -f, --force
              ignore nonexistent files and arguments, never prompt

       -i     prompt before every removal

       -I     prompt once before removing more than three files, or when remov‐
              ing recursively.  Less intrusive than -i, while still giving pro‐
              tection against most mistakes

       --interactive[=WHEN]
              prompt according to WHEN:  never,  once  (-I),  or  always  (-i).
              Without WHEN, prompt always

       --one-file-system
              when removing a hierarchy recursively, skip any directory that is
              on a file system different from that of the corresponding command
              line argument

       --no-preserve-root
              do not treat '/' specially

       --preserve-root
              do not remove '/' (default)

       -r, -R, --recursive
              remove directories and their contents recursively

       -d, --dir
              remove empty directories

       -v, --verbose
              explain what is being done

       --help display this help and exit

       --version
              output version information and exit

       By  default, rm does not remove directories.  Use the --recursive (-r or
       -R) option to remove each listed directory, too, along with all  of  its
       contents.

       To  remove  a file whose name starts with a '-', for example '-foo', use
       one of these commands:

              rm -- -foo

              rm ./-foo

       Note that if you use rm to remove  a  file,  it  might  be  possible  to
       recover  some  of  its contents, given sufficient expertise and/or time.
       For greater assurance that the contents are  truly  unrecoverable,  con‐
       sider using shred.

AUTHOR
       Written  by  Paul  Rubin,  David MacKenzie, Richard M. Stallman, and Jim
       Meyering.

REPORTING BUGS
       Report rm bugs to bug-coreutils@gnu.org
       GNU coreutils home page: <http://www.gnu.org/software/coreutils/>
       General help using GNU software: <http://www.gnu.org/gethelp/>
       Report rm translation bugs to <http://translationproject.org/team/>

COPYRIGHT
       Copyright © 2013 Free Software Foundation, Inc.  License GPLv3+: GNU GPL
       version 3 or later <http://gnu.org/licenses/gpl.html>.
       This  is  free  software:  you  are  free to change and redistribute it.
       There is NO WARRANTY, to the extent permitted by law.

SEE ALSO
       unlink(1), unlink(2), chattr(1), shred(1)

       The full documentation for rm is maintained as a Texinfo manual.  If the
       info and rm programs are properly installed at your site, the command

              info coreutils 'rm invocation'

       should give you access to the complete manual.



GNU coreutils 8.21               December 2015                            RM(1)
RM(1)                            User Commands                            RM(1)



NAME
       rm - remove files or directories

SYNOPSIS
       rm [OPTION]... FILE...

DESCRIPTION
       This manual page documents the GNU version of rm.  rm removes each spec‐
       ified file.  By default, it does not remove directories.

       If the -I or --interactive=once option is given, and there are more than
       three files or the -r, -R, or --recursive are given, then rm prompts the
       user for whether to proceed with the entire operation.  If the  response
       is not affirmative, the entire command is aborted.

       Otherwise,  if  a  file is unwritable, standard input is a terminal, and
       the -f or --force option is not given, or the -i or --interactive=always
       option is given, rm prompts the user for whether to remove the file.  If
       the response is not affirmative, the file is skipped.

OPTIONS
       Remove (unlink) the FILE(s).

       -f, --force
              ignore nonexistent files and arguments, never prompt

       -i     prompt before every removal

       -I     prompt once before removing more than three files, or when remov‐
              ing recursively.  Less intrusive than -i, while still giving pro‐
              tection against most mistakes

       --interactive[=WHEN]
              prompt according to WHEN:  never,  once  (-I),  or  always  (-i).
              Without WHEN, prompt always

       --one-file-system
              when removing a hierarchy recursively, skip any directory that is
              on a file system different from that of the corresponding command
              line argument

       --no-preserve-root
              do not treat '/' specially

       --preserve-root
              do not remove '/' (default)

       -r, -R, --recursive
              remove directories and their contents recursively

       -d, --dir
              remove empty directories

       -v, --verbose
              explain what is being done

       --help display this help and exit

       --version
              output version information and exit

       By  default, rm does not remove directories.  Use the --recursive (-r or
       -R) option to remove each listed directory, too, along with all  of  its
       contents.

       To  remove  a file whose name starts with a '-', for example '-foo', use
       one of these commands:

              rm -- -foo

              rm ./-foo

       Note that if you use rm to remove  a  file,  it  might  be  possible  to
       recover  some  of  its contents, given sufficient expertise and/or time.
       For greater assurance that the contents are  truly  unrecoverable,  con‐
       sider using shred.

AUTHOR
       Written  by  Paul  Rubin,  David MacKenzie, Richard M. Stallman, and Jim
       Meyering.

REPORTING BUGS
       Report rm bugs to bug-coreutils@gnu.org
       GNU coreutils home page: <http://www.gnu.org/software/coreutils/>
       General help using GNU software: <http://www.gnu.org/gethelp/>
       Report rm translation bugs to <http://translationproject.org/team/>

COPYRIGHT
       Copyright © 2013 Free Software Foundation, Inc.  License GPLv3+: GNU GPL
       version 3 or later <http://gnu.org/licenses/gpl.html>.
       This  is  free  software:  you  are  free to change and redistribute it.
       There is NO WARRANTY, to the extent permitted by law.

SEE ALSO
       unlink(1), unlink(2), chattr(1), shred(1)

       The full documentation for rm is maintained as a Texinfo manual.  If the
       info and rm programs are properly installed at your site, the command

              info coreutils 'rm invocation'

       should give you access to the complete manual.



GNU coreutils 8.21               December 2015                            RM(1)
