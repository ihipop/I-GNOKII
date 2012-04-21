/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.in by autoheader.  */

/* Whether debug is turned on */
#define DEBUG 1

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Define to the Gettext package name */
#define GETTEXT_PACKAGE "gnokii"

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Whether Bluetooth is available */
#define HAVE_BLUETOOTH 1

/* Compile on Linux */
#define HAVE_BLUETOOTH_BLUEZ /**/

/* Compile on Darwin / Mac OSX */
/* #undef HAVE_BLUETOOTH_MACOSX */

/* Compile on NetBSD */
/* #undef HAVE_BLUETOOTH_NETBT */

/* Compile on FreeBSD */
/* #undef HAVE_BLUETOOTH_NETGRAPH */

/* Whether snprintf is available */
#define HAVE_C99_SNPRINTF 1

/* Whether vsnprintf is available */
#define HAVE_C99_VSNPRINTF 1

/* Whether cfsetispeed is available */
/* #undef HAVE_CFSETISPEED */

/* Whether cfsetospeed is available */
/* #undef HAVE_CFSETOSPEED */

/* Whether cfsetspeed is available */
#define HAVE_CFSETSPEED 1

/* Define to 1 if you have the <CoreFoundation/CoreFoundation.h> header file.
   */
/* #undef HAVE_COREFOUNDATION_COREFOUNDATION_H */

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getpass' function. */
#define HAVE_GETPASS 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define if you have the iconv() function and it works. */
#define HAVE_ICONV 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <IOBluetooth/Bluetooth.h> header file. */
/* #undef HAVE_IOBLUETOOTH_BLUETOOTH_H */

/* Define to 1 if you have the <IOBluetooth/IOBluetoothUserLib.h> header file.
   */
/* #undef HAVE_IOBLUETOOTH_IOBLUETOOTHUSERLIB_H */

/* Whether IrDA is available */
#define HAVE_IRDA 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Use libical */
#define HAVE_LIBICAL 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Use libusb */
#define HAVE_LIBUSB 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Whether the platform has a long double type */
#define HAVE_LONG_DOUBLE 1

/* Whether the platform has a long long int type */
#define HAVE_LONG_LONG 1

/* Define to 1 if libpcsclite defines the type 'LPCSTR'. */
/* #undef HAVE_LPCSTR */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Whether struct msghdr has a msg_control member */
#define HAVE_MSGHDR_MSG_CONTROL 1

/* Define if you have libpcsclite */
/* #undef HAVE_PCSC */

/* Define to 1 if you have the `poll' function. */
#define HAVE_POLL 1

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Whether __ptr_t is available */
#define HAVE_PTR_T 1

/* Use readline */
#define HAVE_READLINE 1

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Whether Phonet is available */
#define HAVE_SOCKETPHONET 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if stdbool.h conforms to C99. */
#define HAVE_STDBOOL_H 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strsep' function. */
#define HAVE_STRSEP 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the `strtok' function. */
#define HAVE_STRTOK 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filio.h> header file. */
/* #undef HAVE_SYS_FILIO_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/modem.h> header file. */
/* #undef HAVE_SYS_MODEM_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Whether c_ispeed and c_ospeed are available */
/* #undef HAVE_TERMIOS_CSPEED */

/* Define to 1 if you have the <termios.h> header file. */
#define HAVE_TERMIOS_H 1

/* Define to 1 if you have the `timegm' function. */
#define HAVE_TIMEGM 1

/* Whether timer operations are available */
#define HAVE_TIMEOPS 1

/* Whether tm_gmtoff is available */
#define HAVE_TM_GMTON 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type 'u_int8_t'. */
#define HAVE_U_INT8_T 1

/* Define to 1 if you have the `vasprintf' function. */
#define HAVE_VASPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the <X11/xpm.h> header file. */
#define HAVE_X11_XPM_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST 

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "gnokii"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "gnokii-users@nongnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "gnokii"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gnokii 0.6.30"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gnokii"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://www.gnokii.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.6.30"

/* Root dir for gnokii, xgnokii and smsd */
#define PREFIX "/usr/local"

/* Define to the necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Whether rlpdebug is turned on */
#define RLP_DEBUG 1

/* Where mgnokiidev gets installed */
#define SBINDIR "/usr/local/sbin"

/* Whether security features are enabled */
#define SECURITY 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* The current SMSD version */
#define SVERSION "1.4.5-pp1"

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Whether Unix98 support is available */
#define USE_UNIX98PTYS test x$have_unix98 = xyes

/* The current version */
#define VERSION "0.6.30"

/* Whether compiling on Windows */
/* #undef WIN32 */

/* Define if you cross compile Windows. */
/* #undef WIN32_CROSS */

/* Whether xdebug is turned on */
#define XDEBUG 1

/* Whether the Xpm library is available */
#define XPM 1

/* The current xgnokii version */
#define XVERSION "1.0"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
