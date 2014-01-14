/*
 * Win32 specific functions
 *
 * by MarcSanfacon
 * 2014.01.13
 */

#ifndef WIN32_H__
#define WIN32_H__

#ifdef _WIN32

#include <io.h>
#include <libgen.h>
#include <sstream>
#include <glib.h>

char *mkdtemp(char *temp);

#define mkdir(A, B) _mkdir(A)
#define stat _stat

namespace pdf2htmlEX {
    std::string     get_data_dir(char *dir);
    std::string     get_tmp_dir();
} // namespace pdf2htmlEX

#endif //_WIN32

#endif //WIN32_H__

