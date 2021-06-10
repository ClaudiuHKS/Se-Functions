
#pragma once

static bool x64System(::std::string* a = nullptr, ::std::wstring* w = nullptr) noexcept
{
    static char da[4096]{ };
    static wchar_t dw[4096]{ };
    static bool r{ };

    r = false;

    if (::GetSystemWow64DirectoryA(da, ::std::atoi(XCS("4095"))))
    {
        if (a)
            a->assign(da);

        r = true;
    }

    if (::GetSystemWow64DirectoryW(dw, ::std::atoi(XCS("4095"))))
    {
        if (w)
            w->assign(dw);

        r = true;
    }

    return r;
}

static void toUpper(char* b) noexcept
{
    static ::std::size_t i{ };

    if (!b || *b == SE_0)
        return;

    for (i = SE_0; i < ::std::strlen(b); i++)
        b[i] = ::std::toupper(b[i]);
}

static void toUpper(wchar_t* b) noexcept
{
    static ::std::size_t i{ };

    if (!b || *b == SE_0)
        return;

    for (i = SE_0; i < ::std::wcslen(b); i++)
        b[i] = ::std::towupper(b[i]);
}

static ::std::string& toUpper(::std::string& b) noexcept
{
    if (b.empty())
        return b;

    ::std::transform(b.begin(), b.end(), b.begin(), ::toupper);

    return b;
}

static ::std::string toUpper(const char* b) noexcept
{
    static ::std::string u{ };

    if (!b || *b == SE_0)
        return { };

    u.assign(b), ::std::transform(u.begin(), u.end(), u.begin(), ::toupper);

    return u;
}

static void toUpper(::std::string* b) noexcept
{
    if (!b || (*b).empty())
        return;

    ::std::transform((*b).begin(), (*b).end(), (*b).begin(), ::toupper);
}

static ::std::wstring& toUpper(::std::wstring& b) noexcept
{
    if (b.empty())
        return b;

    ::std::transform(b.begin(), b.end(), b.begin(), ::towupper);

    return b;
}

static ::std::wstring toUpper(const wchar_t* b) noexcept
{
    static ::std::wstring u{ };

    if (!b || *b == SE_0)
        return { };

    u.assign(b), ::std::transform(u.begin(), u.end(), u.begin(), ::towupper);

    return u;
}

static void toUpper(::std::wstring* b) noexcept
{
    if (!b || (*b).empty())
        return;

    ::std::transform((*b).begin(), (*b).end(), (*b).begin(), ::towupper);
}

static void toLower(char* b) noexcept
{
    static ::std::size_t i{ };

    if (!b || *b == SE_0)
        return;

    for (i = SE_0; i < ::std::strlen(b); i++)
        b[i] = ::std::tolower(b[i]);
}

static void toLower(wchar_t* b) noexcept
{
    static ::std::size_t i{ };

    if (!b || *b == SE_0)
        return;

    for (i = SE_0; i < ::std::wcslen(b); i++)
        b[i] = ::std::towlower(b[i]);
}

static ::std::string& toLower(::std::string& b) noexcept
{
    if (b.empty())
        return b;

    ::std::transform(b.begin(), b.end(), b.begin(), ::tolower);

    return b;
}

static ::std::string toLower(const char* b) noexcept
{
    static ::std::string u{ };

    if (!b || *b == SE_0)
        return { };

    u.assign(b), ::std::transform(u.begin(), u.end(), u.begin(), ::tolower);

    return u;
}

static void toLower(::std::string* b) noexcept
{
    if (!b || (*b).empty())
        return;

    ::std::transform((*b).begin(), (*b).end(), (*b).begin(), ::tolower);
}

static ::std::wstring& toLower(::std::wstring& b) noexcept
{
    if (b.empty())
        return b;

    ::std::transform(b.begin(), b.end(), b.begin(), ::towlower);

    return b;
}

static ::std::wstring toLower(const wchar_t* b) noexcept
{
    static ::std::wstring u{ };

    if (!b || *b == SE_0)
        return { };

    u.assign(b), ::std::transform(u.begin(), u.end(), u.begin(), ::towlower);

    return u;
}

static void toLower(::std::wstring* b) noexcept
{
    if (!b || (*b).empty())
        return;

    ::std::transform((*b).begin(), (*b).end(), (*b).begin(), ::towlower);
}

static ::std::wstring toUnicode(::std::string i) noexcept
{
    static const unsigned int u{ ((unsigned int)(::std::atoi(XCS("65001")))) };

    static wchar_t w[4096]{ };
    static ::std::wstring r{ };

    ::MultiByteToWideChar
    (
        u, \
        SE_0, \
        i.c_str(), \
        ::std::atoi(XCS("-1")), \
        w, \
        ::std::atoi(XCS("4095"))
    );

    r.assign(w);

    return r;
}

static ::std::string fromUnicode(::std::wstring i) noexcept
{
    static const unsigned int u{ ((unsigned int)(::std::atoi(XCS("65001")))) };

    static char b[4096]{ };
    static ::std::string r{ };

    ::WideCharToMultiByte
    (
        u, \
        SE_0, \
        i.c_str(), \
        ::std::atoi(XCS("-1")), \
        b, \
        ::std::atoi(XCS("4095")), \
        nullptr, \
        nullptr
    );

    r.assign(b);

    return r;
}

static ::std::string& replaceAll(::std::string& i, ::std::string f, ::std::string t) noexcept
{
    static ::std::size_t w{ }, fl{ }, tl{ };

    if (i.empty() || f.empty())
        return i;

    w = SE_0, fl = f.length(), tl = t.length();

    while ((w = i.find(f, w)) != ::std::string::npos)
        i.replace(w, fl, t), w += tl;

    return i;
}

static ::std::wstring& replaceAll(::std::wstring& i, ::std::wstring f, ::std::wstring t) noexcept
{
    static ::std::size_t w{ }, fl{ }, tl{ };

    if (i.empty() || f.empty())
        return i;

    w = SE_0, fl = f.length(), tl = t.length();

    while ((w = i.find(f, w)) != ::std::string::npos)
        i.replace(w, fl, t), w += tl;

    return i;
}

static ::std::string& replaceOnce(::std::string& i, ::std::string f, ::std::string t) noexcept
{
    static ::std::size_t w{ };

    if (i.empty() || f.empty())
        return i;

    if ((w = i.find(f)) != ::std::string::npos)
        i.replace(w, f.length(), t);

    return i;
}

static ::std::wstring& replaceOnce(::std::wstring& i, ::std::wstring f, ::std::wstring t) noexcept
{
    static ::std::size_t w{ };

    if (i.empty() || f.empty())
        return i;

    if ((w = i.find(f)) != ::std::string::npos)
        i.replace(w, f.length(), t);

    return i;
}

static ::std::string& eraseAll(::std::string& i, ::std::string f) noexcept
{
    static const ::std::string e{ };

    static ::std::size_t w{ }, fl{ };

    if (i.empty() || f.empty())
        return i;

    w = SE_0, fl = f.length();

    while ((w = i.find(f, w)) != ::std::string::npos)
        i.replace(w, fl, e);

    return i;
}

static ::std::wstring& eraseAll(::std::wstring& i, ::std::wstring f) noexcept
{
    static const ::std::wstring e{ };

    static ::std::size_t w{ }, fl{ };

    if (i.empty() || f.empty())
        return i;

    w = SE_0, fl = f.length();

    while ((w = i.find(f, w)) != ::std::string::npos)
        i.replace(w, fl, e);

    return i;
}

static ::std::string& eraseOnce(::std::string& i, ::std::string f) noexcept
{
    static const ::std::string e{ };

    static ::std::size_t w{ };

    if (i.empty() || f.empty())
        return i;

    if ((w = i.find(f)) != ::std::string::npos)
        i.replace(w, f.length(), e);

    return i;
}

static ::std::wstring& eraseOnce(::std::wstring& i, ::std::wstring f) noexcept
{
    static const ::std::wstring e{ };

    static ::std::size_t w{ };

    if (i.empty() || f.empty())
        return i;

    if ((w = i.find(f)) != ::std::string::npos)
        i.replace(w, f.length(), e);

    return i;
}

static ::std::string& truncateFullPathToAddFileName(::std::string& p) noexcept
{
    static const ::std::string q{ XCS("\\/") };

    static ::std::size_t w{ };

    if (p.empty() || p.ends_with(q.at(SE_0)) || p.ends_with(q.at(SE_1)))
        return p;

    w = p.find_last_of(q.at(SE_0));

    if (w != ::std::string::npos)
        p.erase(w + ::std::size_t(SE_1));

    w = p.find_last_of(q.at(SE_1));

    if (w != ::std::string::npos)
        p.erase(w + ::std::size_t(SE_1));

    return p;
}

static ::std::wstring& truncateFullPathToAddFileName(::std::wstring& p) noexcept
{
    static const ::std::wstring q{ ::toUnicode(XCS("\\/")).c_str() };

    static ::std::size_t w{ };

    if (p.empty() || p.ends_with(q.at(SE_0)) || p.ends_with(q.at(SE_1)))
        return p;

    w = p.find_last_of(q.at(SE_0));

    if (w != ::std::string::npos)
        p.erase(w + ::std::size_t(SE_1));

    w = p.find_last_of(q.at(SE_1));

    if (w != ::std::string::npos)
        p.erase(w + ::std::size_t(SE_1));

    return p;
}

static ::std::string& replaceOneChar(::std::string& i, ::std::string f, ::std::string t) noexcept
{
    static ::std::size_t x{ };

    if (i.empty())
        return i;

    for (x = (::std::size_t)SE_0; x < i.length(); x++)
    {
        if (i[x] == f[SE_0])
            i[x] = t[SE_0];
    }

    return i;
}

static ::std::wstring& replaceOneChar(::std::wstring& i, ::std::wstring f, ::std::wstring t) noexcept
{
    static ::std::size_t x{ };

    if (i.empty())
        return i;

    for (x = (::std::size_t)SE_0; x < i.length(); x++)
    {
        if (i[x] == f[SE_0])
            i[x] = t[SE_0];
    }

    return i;
}

static ::std::string& trimBeg(::std::string& i, ::std::string w = XCS(" \f\n\r\t\v")) noexcept
{
    static ::std::size_t p{ };

    if (i.empty() || w.empty())
        return i;

    if ((p = i.find_first_not_of(w)) != ::std::string::npos)
        i.erase(SE_0, p);

    else
        i.clear();

    return i;
}

static ::std::wstring& trimBeg(::std::wstring& i, ::std::wstring w = ::toUnicode(XCS(" \f\n\r\t\v")).c_str()) noexcept
{
    static ::std::size_t p{ };

    if (i.empty() || w.empty())
        return i;

    if ((p = i.find_first_not_of(w)) != ::std::wstring::npos)
        i.erase(SE_0, p);

    else
        i.clear();

    return i;
}

static ::std::string& trimEnd(::std::string& i, ::std::string w = XCS(" \f\n\r\t\v")) noexcept
{
    static ::std::size_t p{ };

    if (i.empty() || w.empty())
        return i;

    if ((p = i.find_last_not_of(w)) != ::std::string::npos)
        i.erase(p + SE_1);

    else
        i.clear();

    return i;
}

static ::std::wstring& trimEnd(::std::wstring& i, ::std::wstring w = ::toUnicode(XCS(" \f\n\r\t\v")).c_str()) noexcept
{
    static ::std::size_t p{ };

    if (i.empty() || w.empty())
        return i;

    if ((p = i.find_last_not_of(w)) != ::std::wstring::npos)
        i.erase(p + SE_1);

    else
        i.clear();

    return i;
}

static ::std::string& trimAll(::std::string& i, ::std::string w = XCS(" \f\n\r\t\v")) noexcept
{
    if (i.empty() || w.empty())
        return i;

    return trimBeg(trimEnd(i, w), w);
}

static ::std::wstring& trimAll(::std::wstring& i, ::std::wstring w = ::toUnicode(XCS(" \f\n\r\t\v")).c_str()) noexcept
{
    if (i.empty() || w.empty())
        return i;

    return trimBeg(trimEnd(i, w), w);
}

static ::std::string& removeQuotes(::std::string& i, ::std::string q = XCS("\"'")) noexcept
{
    if (i.empty() || q.empty())
        return i;

    return trimBeg(trimEnd(i, q), q);
}

static ::std::wstring& removeQuotes(::std::wstring& i, ::std::wstring q = ::toUnicode(XCS("\"'")).c_str()) noexcept
{
    if (i.empty() || q.empty())
        return i;

    return trimBeg(trimEnd(i, q), q);
}

static ::std::string& removeSlashes(::std::string& i, ::std::string q = XCS("\\/")) noexcept
{
    if (i.empty() || q.empty())
        return i;

    return trimBeg(trimEnd(i, q), q);
}

static ::std::wstring& removeSlashes(::std::wstring& i, ::std::wstring q = ::toUnicode(XCS("\\/")).c_str()) noexcept
{
    if (i.empty() || q.empty())
        return i;

    return trimBeg(trimEnd(i, q), q);
}

static bool procRunning(::std::string n) noexcept
{
    static unsigned long l[4096]{ }, c{ }, s{ };
    static char on[4096]{ };
    static void* p{ };
    static ::std::size_t i{ };

    if (n.empty() || SE_0 == ::K32EnumProcesses(l, ::std::atoi(XCS("16384")), &c))
        return { };

    for (i = SE_0, s = ::GetCurrentProcessId(); i < (c / SE_4); i++)
    {
        if (l[i] != SE_0 && l[i] != s)
        {
            p = ::OpenProcess(::std::strtoul(XCS("2097151"), nullptr, SE_0), SE_0, l[i]);

            if (p)
            {
                ::K32GetModuleBaseNameA(p, nullptr, on, ::std::atoi(XCS("4095"))), ::CloseHandle(p), p = nullptr;

                if (::lstrcmpiA(on, n.c_str()) == SE_0)
                    return true;
            }
        }
    }

    return { };
}

static bool procRunning(::std::wstring n) noexcept
{
    static unsigned long l[4096]{ }, c{ }, s{ };
    static wchar_t on[4096]{ };
    static void* p{ };
    static ::std::size_t i{ };

    if (n.empty() || SE_0 == ::K32EnumProcesses(l, ::std::atoi(XCS("16384")), &c))
        return { };

    for (i = SE_0, s = ::GetCurrentProcessId(); i < (c / SE_4); i++)
    {
        if (l[i] != SE_0 && l[i] != s)
        {
            p = ::OpenProcess(::std::strtoul(XCS("2097151"), nullptr, SE_0), SE_0, l[i]);

            if (p)
            {
                ::K32GetModuleBaseNameW(p, nullptr, on, ::std::atoi(XCS("4095"))), ::CloseHandle(p), p = nullptr;

                if (::lstrcmpiW(on, n.c_str()) == SE_0)
                    return true;
            }
        }
    }

    return { };
}

static ::std::vector < ::std::pair < ::std::string, ::std::string > > enumApps(void) noexcept
{
    static const ::std::string f{ XCS("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall") };

    static ::HKEY__* t{ }, * a{ };
    static ::std::vector < ::std::pair < ::std::string, ::std::string > > l{ };
    static ::std::pair < ::std::string, ::std::string > p{ };
    static ::std::size_t i{ };
    static ::std::string e{ };
    static char b[4096]{ };
    static long r{ };
    static unsigned long s{ };

    if (::RegOpenKeyExA(((::HKEY__*)(unsigned long)((long)(::std::strtoull(XCS("2147483650"), nullptr, SE_0)))), f.c_str(), SE_0, ::std::strtoul(XCS("983103"), nullptr, SE_0), &t) != SE_0 || !t)
        return { };

    for (i = SE_0, l.clear(); i < ((unsigned int)(::std::strtoull(XCS("4294967295"), nullptr, SE_0))); i++)
    {
        ::std::memset(b, SE_0, ::std::atoi(XCS("4096"))), s = ::std::atoi(XCS("4095")), \
            r = ::RegEnumKeyExA(t, (unsigned long)i, b, &s, nullptr, nullptr, nullptr, nullptr);

        if (r == SE_0)
        {
            e.assign(f.c_str()), e.append(XCS("\\")), e.append(b);

            if (::RegOpenKeyExA(((::HKEY__*)(unsigned long)((long)(::std::strtoull(XCS("2147483650"), nullptr, SE_0)))), e.c_str(), SE_0, ::std::strtoul(XCS("983103"), nullptr, SE_0), &a) != SE_0 || !a)
            {
                if (a)
                    ::RegCloseKey(a), a = nullptr;

                continue;
            }

            ::std::memset(b, SE_0, ::std::atoi(XCS("4096"))), s = ::std::atoi(XCS("4095"));

            if (::RegQueryValueExA(a, XCS("DisplayName"), nullptr, nullptr, ((unsigned char*)(b)), &s) == SE_0)
                p.first.assign(b);

            else
                p.first.clear();

            ::std::memset(b, SE_0, ::std::atoi(XCS("4096"))), s = ::std::atoi(XCS("4095"));

            if (::RegQueryValueExA(a, XCS("DisplayVersion"), nullptr, nullptr, ((unsigned char*)(b)), &s) == SE_0)
                p.second.assign(b);

            else
                p.second.clear();

            if (a)
                ::RegCloseKey(a), a = nullptr;

            if (!p.first.empty() && !p.second.empty())
                l.emplace_back(p);
        }

        else if (r == ::std::atol(XCS("259")))
            break;
    }

    if (t)
        ::RegCloseKey(t), t = nullptr;

    return l;
}

static ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > enumAppsUnicode(void) noexcept
{
    static const ::std::wstring f{ ::toUnicode(XCS("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall")).c_str() };

    static ::HKEY__* t{ }, * a{ };
    static ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > l{ };
    static ::std::pair < ::std::wstring, ::std::wstring > p{ };
    static ::std::size_t i{ };
    static ::std::wstring e{ };
    static wchar_t b[4096]{ };
    static long r{ };
    static unsigned long s{ };

    if (::RegOpenKeyExW(((::HKEY__*)(unsigned long)((long)(::std::strtoull(XCS("2147483650"), nullptr, SE_0)))), f.c_str(), SE_0, ::std::strtoul(XCS("983103"), nullptr, SE_0), &t) != SE_0 || !t)
        return { };

    for (i = SE_0, l.clear(); i < ((unsigned int)(::std::strtoull(XCS("4294967295"), nullptr, SE_0))); i++)
    {
        ::std::memset(b, SE_0, ::std::atoi(XCS("8192"))), s = ::std::atoi(XCS("4095")), \
            r = ::RegEnumKeyExW(t, (unsigned long)i, b, &s, nullptr, nullptr, nullptr, nullptr);

        if (r == SE_0)
        {
            e.assign(f.c_str()), e.append(::toUnicode(XCS("\\")).c_str()), e.append(b);

            if (::RegOpenKeyExW(((::HKEY__*)(unsigned long)((long)(::std::strtoull(XCS("2147483650"), nullptr, SE_0)))), e.c_str(), SE_0, ::std::strtoul(XCS("983103"), nullptr, SE_0), &a) != SE_0 || !a)
            {
                if (a)
                    ::RegCloseKey(a), a = nullptr;

                continue;
            }

            ::std::memset(b, SE_0, ::std::atoi(XCS("8192"))), s = ::std::atoi(XCS("4095"));

            if (::RegQueryValueExW(a, ::toUnicode(XCS("DisplayName")).c_str(), nullptr, nullptr, ((unsigned char*)(b)), &s) == SE_0)
                p.first.assign(b);

            else
                p.first.clear();

            ::std::memset(b, SE_0, ::std::atoi(XCS("8192"))), s = ::std::atoi(XCS("4095"));

            if (::RegQueryValueExW(a, ::toUnicode(XCS("DisplayVersion")).c_str(), nullptr, nullptr, ((unsigned char*)(b)), &s) == SE_0)
                p.second.assign(b);

            else
                p.second.clear();

            if (a)
                ::RegCloseKey(a), a = nullptr;

            if (!p.first.empty() && !p.second.empty())
                l.emplace_back(p);
        }

        else if (r == ::std::atol(XCS("259")))
            break;
    }

    if (t)
        ::RegCloseKey(t), t = nullptr;

    return l;
}

static ::std::size_t countAppsByPartOfName(::std::string p, ::std::vector < ::std::pair < ::std::string, ::std::string > > l) noexcept
{
    static ::std::size_t i{ }, c{ };

    if (p.empty() || l.empty())
        return { };

    for (c = SE_0, i = SE_0; i < l.size(); i++)
    {
        if (::std::strstr(l[i].first.c_str(), p.c_str()))
            c++;
    }

    return c;
}

static ::std::size_t countAppsByPartOfName(::std::wstring p, ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > l) noexcept
{
    static ::std::size_t i{ }, c{ };

    if (p.empty() || l.empty())
        return { };

    for (c = SE_0, i = SE_0; i < l.size(); i++)
    {
        if (::std::wcsstr(l[i].first.c_str(), p.c_str()))
            c++;
    }

    return c;
}

static ::std::string retrieveAppVersionByPartOfName(::std::string p, ::std::vector < ::std::pair < ::std::string, ::std::string > > l) noexcept
{
    static ::std::size_t i{ };

    if (p.empty() || l.empty())
        return { };

    for (i = SE_0; i < l.size(); i++)
    {
        if (::std::strstr(l[i].first.c_str(), p.c_str()))
            return l[i].second;
    }

    return { };
}

static ::std::wstring retrieveAppVersionByPartOfName(::std::wstring p, ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > l) noexcept
{
    static ::std::size_t i{ };

    if (p.empty() || l.empty())
        return { };

    for (i = SE_0; i < l.size(); i++)
    {
        if (::std::wcsstr(l[i].first.c_str(), p.c_str()))
            return l[i].second;
    }

    return { };
}

static ::std::string retrieveSteamUsersFilePath(void) noexcept
{
    static ::HKEY__* k{ };
    static char p[4096]{ };
    static unsigned long s{ };
    static ::std::string f{ };

    if (SE_0 == ::RegOpenKeyExA(((::HKEY__*)(unsigned long)((long)(::std::strtoull(XCS("2147483649"), nullptr, SE_0)))), XCS("SOFTWARE\\Valve\\Steam"), SE_0, ::std::strtoul(XCS("983103"), nullptr, SE_0), &k) && k)
    {
        ::std::memset(p, SE_0, ::std::atoi(XCS("4096"))), s = ::std::atoi(XCS("4095")), \
            ::RegQueryValueExA(k, XCS("SteamPath"), nullptr, nullptr, ((unsigned char*)(p)), &s), \
            ::RegCloseKey(k), k = nullptr;

        if (::std::strlen(p) > (unsigned int)SE_0)
        {
            f.assign(p), ::trimAll(f), ::removeQuotes(f), ::trimAll(f), \
                ::replaceAll(f, XCS("/"), XCS("\\")), \
                f.append(XCS("\\config\\loginusers.vdf"));

            return f;
        }
    }

    return { };
}

static ::std::wstring retrieveSteamUsersFilePathUnicode(void) noexcept
{
    static ::HKEY__* k{ };
    static wchar_t p[4096]{ };
    static unsigned long s{ };
    static ::std::wstring f{ };

    if (SE_0 == ::RegOpenKeyExW(((::HKEY__*)(unsigned long)((long)(::std::strtoull(XCS("2147483649"), nullptr, SE_0)))), ::toUnicode(XCS("SOFTWARE\\Valve\\Steam")).c_str(), SE_0, ::std::strtoul(XCS("983103"), nullptr, SE_0), &k) && k)
    {
        ::std::memset(p, SE_0, ::std::atoi(XCS("8192"))), s = ::std::atoi(XCS("4095")), \
            ::RegQueryValueExW(k, ::toUnicode(XCS("SteamPath")).c_str(), nullptr, nullptr, ((unsigned char*)(p)), &s), \
            ::RegCloseKey(k), k = nullptr;

        if (::std::wcslen(p) > (::std::size_t)SE_0)
        {
            f.assign(p), ::trimAll(f), ::removeQuotes(f), ::trimAll(f), \
                ::replaceAll(f, ::toUnicode(XCS("/")).c_str(), ::toUnicode(XCS("\\")).c_str()), \
                f.append(::toUnicode(XCS("\\config\\loginusers.vdf")).c_str());

            return f;
        }
    }

    return { };
}

static double cpuSpeed(void) noexcept
{
    static const double p{ ((double)(::std::strtod(XCS("1000000.0"), nullptr))), };
    static const int f{ (int)SE_5, };

    static ::_LARGE_INTEGER w{ }, s{ }, c{ };
    static unsigned long long x{ };

    ::QueryPerformanceCounter(&s), ::QueryPerformanceFrequency(&w), w.QuadPart >>= f, x = ::__rdtsc();

    do ::QueryPerformanceCounter(&c);

    while (c.QuadPart - s.QuadPart < w.QuadPart);

    return ((::__rdtsc() - x) << f) / p;
}

static void resolveLicenses(::std::string f, ::std::string t, ::std::vector < ::std::string > l, \
    ::std::string k = XCS("HWIDS"), ::std::string fn = XCS("XS"), ::std::string sp = XCS("    ")) noexcept
{
    static ::_iobuf* ff{ }, * tf{ };
    static char b[4096]{ };
    static ::std::string c{ }, r{ };
    static ::std::size_t s{ }, i{ };
    static bool d{ };

    ::fopen_s(&ff, f.c_str(), XCS("r"));

    if (!ff)
        return;

    ::fopen_s(&tf, t.c_str(), XCS("w"));

    if (!tf)
    {
        if (ff)
            ::std::fclose(ff), ff = nullptr;

        return;
    }

    s = l.size(), d = { };

    while (SE_0 == ::std::feof(ff))
    {
        b[SE_0] = SE_0, ::std::fgets(b, ::std::atoi(XCS("4095")), ff), c.assign(b);

        if (c.find(k.c_str()) != ::std::string::npos && !d)
        {
            for (i = SE_0, r.clear(); i < s; i++)
            {
                if (i != (s - SE_1))
                {
                    if (i == SE_0)
                        r.append(fn.c_str()), r.append(XCS("(\"")), r.append(l[i]), r.append(XCS("\"), \\\n"));

                    else
                        r.append(sp.c_str()), r.append(fn.c_str()), r.append(XCS("(\"")), r.append(l[i]), r.append(XCS("\"), \\\n"));
                }

                else
                    r.append(sp.c_str()), r.append(fn.c_str()), r.append(XCS("(\"")), r.append(l[i]), r.append(XCS("\"),"));
            }

            ::replaceOnce(c, k.c_str(), r), d = true;
        }

        if (c.find(XCS("%")) != ::std::string::npos)
            ::replaceAll(c, XCS("%"), XCS("%%"));

        ::std::fprintf(tf, c.c_str());
    }

    ::std::fclose(ff), ff = nullptr, ::std::fclose(tf), tf = nullptr;
}

static void resolveLicenses(::std::wstring f, ::std::wstring t, ::std::vector < ::std::string > l, \
    ::std::string k = XCS("HWIDS"), ::std::string fn = XCS("XS"), ::std::string sp = XCS("    ")) noexcept
{
    static ::_iobuf* ff{ }, * tf{ };
    static char b[4096]{ };
    static ::std::string c{ }, r{ };
    static ::std::size_t s{ }, i{ };
    static bool d{ };

    ::_wfopen_s(&ff, f.c_str(), ::toUnicode(XCS("r")).c_str());

    if (!ff)
        return;

    ::_wfopen_s(&tf, t.c_str(), ::toUnicode(XCS("w")).c_str());

    if (!tf)
    {
        if (ff)
            ::std::fclose(ff), ff = nullptr;

        return;
    }

    s = l.size(), d = { };

    while (SE_0 == ::std::feof(ff))
    {
        b[SE_0] = SE_0, ::std::fgets(b, ::std::atoi(XCS("4095")), ff), c.assign(b);

        if (c.find(k.c_str()) != ::std::string::npos && !d)
        {
            for (i = SE_0, r.clear(); i < s; i++)
            {
                if (i != (s - SE_1))
                {
                    if (i == SE_0)
                        r.append(fn.c_str()), r.append(XCS("(\"")), r.append(l[i]), r.append(XCS("\"), \\\n"));

                    else
                        r.append(sp.c_str()), r.append(fn.c_str()), r.append(XCS("(\"")), r.append(l[i]), r.append(XCS("\"), \\\n"));
                }

                else
                    r.append(sp.c_str()), r.append(fn.c_str()), r.append(XCS("(\"")), r.append(l[i]), r.append(XCS("\"),"));
            }

            ::replaceOnce(c, k.c_str(), r), d = true;
        }

        if (c.find(XCS("%")) != ::std::string::npos)
            ::replaceAll(c, XCS("%"), XCS("%%"));

        ::std::fprintf(tf, c.c_str());
    }

    ::std::fclose(ff), ff = nullptr, ::std::fclose(tf), tf = nullptr;
}

static float elapsedSince(::std::clock_t s) noexcept
{
    static const ::std::clock_t p{ ((::std::clock_t)(::std::atoi(XCS("1000")))) };

    static ::std::clock_t r{ };

    r = ::std::clock() - s;

    return ((float)(r)) / p;
}

static float retrieveWindowsVersion(void) noexcept
{
    static long(__stdcall * v) (::_OSVERSIONINFOEXW*) { };
    static ::HINSTANCE__* m{ };
    static ::_OSVERSIONINFOEXW i{ };
    static wchar_t b[512]{ };

    if (!m)
        m = ::GetModuleHandleW(SE_UNI_C("ntdll"));

    if (!m)
        m = ::LoadLibraryW(SE_UNI_C("ntdll"));

    if (m)
    {
        if (!v)
            *(::FARPROC*)&v = ::GetProcAddress(m, XCS("RtlGetVersion"));

        if (v)
        {
            ::std::memset(&i, SE_0, ((unsigned int)(::std::atof(XCS("284.00000"))))), \
                i.dwOSVersionInfoSize = ((unsigned long)(::std::atof(XCS("284.00000")))), v(&i), \
                ::wsprintfW(b, SE_UNI_C("%d.%d"), ((int)(i.dwMajorVersion)), ((int)(i.dwMinorVersion)));

            return ((float)(::std::atof(::fromUnicode(b).c_str())));
        }
    }

    return SE_0_F;
}

static void storeBytesToFile(const ::std::string n, const ::std::vector < unsigned char > v) noexcept
{
    static ::std::basic_ofstream < unsigned char, ::std::char_traits < unsigned char > > f{ };

    f.open(n.c_str(), ((int)(::std::atof(XCS("50.00000")))), ((int)(::std::atof(XCS("64.00000")))));

    if (f.is_open())
        f.write(v.data(), v.size()), f.close();

    f.clear();
}

static void storeBytesToFile(const ::std::wstring n, const ::std::vector < unsigned char > v) noexcept
{
    static ::std::basic_ofstream < unsigned char, ::std::char_traits < unsigned char > > f{ };

    f.open(n.c_str(), ((int)(::std::atof(XCS("50.00000")))), ((int)(::std::atof(XCS("64.00000")))));

    if (f.is_open())
        f.write(v.data(), v.size()), f.close();

    f.clear();
}

static bool isChrSlash(long long llChr) noexcept
{
    return (((llChr == ((long long)(XS("\\/^&*()_+").at(SE_0)))) || (llChr == ((long long)(XS("\\/~!@#$").at(SE_1))))) ? ((bool)(SE_1)) : ((bool)(SE_0)));
}

static ::std::vector < unsigned char > readBinaryFileToMem(const ::std::string p) noexcept
{
    static ::std::vector < unsigned char > r{ };
    static ::std::basic_ifstream < unsigned char, ::std::char_traits < unsigned char > > f{ };

    r.clear(), f.open(p, SE_33, ((int)(::std::atof(XCS("64.00000")))));

    if (!f.is_open())
    {
        f.clear();

        return r;
    }

    f.seekg((long long)SE_0, SE_2), r.resize(static_cast <::std::size_t> (f.tellg())), f.seekg((long long)SE_0, SE_0), \
        f.read(r.data(), r.size()), f.close(), f.clear();

    return r;
}

static ::std::vector < unsigned char > readBinaryFileToMem(const ::std::wstring p) noexcept
{
    static ::std::vector < unsigned char > r{ };
    static ::std::basic_ifstream < unsigned char, ::std::char_traits < unsigned char > > f{ };

    r.clear(), f.open(p, SE_33, ((int)(::std::atof(XCS("64.00000")))));

    if (!f.is_open())
    {
        f.clear();

        return r;
    }

    f.seekg((long long)SE_0, SE_2), r.resize(static_cast <::std::size_t> (f.tellg())), f.seekg((long long)SE_0, SE_0), \
        f.read(r.data(), r.size()), f.close(), f.clear();

    return r;
}

static void freezeProcForMod(const unsigned long p, const ::std::string n) noexcept
{
    static void* s{ ((void*)(unsigned long)::std::atof(XCS("-1.00000"))), };
    static ::tagMODULEENTRY32W e{ };

    while (SE_1)
    {
        s = ::CreateToolhelp32Snapshot(SE_8, p);

        while (s == ((void*)(unsigned long)::std::atof(XCS("-1.00000"))))
            s = ::CreateToolhelp32Snapshot(SE_8, p);

        ::std::memset(&e, SE_0, ::std::atoi(XCS("1064"))), e.dwSize = ::std::atoi(XCS("1064"));

        if (::Module32FirstW(s, &e))
        {
            do
            {
                if (SE_0 == ::lstrcmpiW(e.szModule, ::toUnicode(n.c_str()).c_str()))
                {
                    ::CloseHandle(s), s = ((void*)(unsigned long)::std::atof(XCS("-1.00000")));

                    return;
                }
            }

            while (::Module32NextW(s, &e));
        }

        ::CloseHandle(s), s = ((void*)(unsigned long)::std::atof(XCS("-1.00000")));
    }
}

static void freezeProcForMod(const unsigned long p, const ::std::wstring n) noexcept
{
    static void* s{ ((void*)(unsigned long)::std::atof(XCS("-1.00000"))), };
    static ::tagMODULEENTRY32W e{ };

    while (SE_1)
    {
        s = ::CreateToolhelp32Snapshot(SE_8, p);

        while (s == ((void*)(unsigned long)::std::atof(XCS("-1.00000"))))
            s = ::CreateToolhelp32Snapshot(SE_8, p);

        ::std::memset(&e, SE_0, ::std::atoi(XCS("1064"))), e.dwSize = ::std::atoi(XCS("1064"));

        if (::Module32FirstW(s, &e))
        {
            do
            {
                if (SE_0 == ::lstrcmpiW(e.szModule, n.c_str()))
                {
                    ::CloseHandle(s), s = ((void*)(unsigned long)::std::atof(XCS("-1.00000")));

                    return;
                }
            }

            while (::Module32NextW(s, &e));
        }

        ::CloseHandle(s), s = ((void*)(unsigned long)::std::atof(XCS("-1.00000")));
    }
}
