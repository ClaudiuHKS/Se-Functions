
#pragma once

#include "Requirements.HPP"

static __forceinline void exitSelf ( int x = SE_0 ) noexcept
{
    ::std::exit ( x ), ::std::quick_exit ( x ), ::ExitProcess ( x ), ::std::abort ( );

    do
    {

    }

    while ( SE_1 );

    while ( SE_1 )
    {

    }
}

static __forceinline bool x64System ( ::std::string * a = nullptr, ::std::wstring * w = nullptr ) noexcept
{
    static char da [ 4096 ] { };
    static wchar_t dw [ 4096 ] { };
    static bool r { };

    r = false;

    if ( ::GetSystemWow64DirectoryA ( da, ::std::atoi ( XCS ( "4095" ) ) ) )
    {
        if ( a )
            a->assign ( da );

        r = true;
    }

    if ( ::GetSystemWow64DirectoryW ( dw, ::std::atoi ( XCS ( "4095" ) ) ) )
    {
        if ( w )
            w->assign ( dw );

        r = true;
    }

    return r;
}

static __forceinline void toUpper ( char * b ) noexcept
{
    static unsigned int i { };

    if ( !b || *b == SE_0 )
        return;

    for ( i = SE_0; i < ::std::strlen ( b ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
        b [ i ] = ::std::toupper ( b [ i ] );
}

static __forceinline void toUpper ( wchar_t * b ) noexcept
{
    static unsigned int i { };

    if ( !b || *b == SE_0 )
        return;

    for ( i = SE_0; i < ::std::wcslen ( b ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
        b [ i ] = ::std::towupper ( b [ i ] );
}

static __forceinline ::std::string & toUpper ( ::std::string & b ) noexcept
{
    if ( b.empty ( ) )
        return b;

    ::std::transform ( b.begin ( ), b.end ( ), b.begin ( ), ::toupper );

    return b;
}

static __forceinline ::std::string toUpper ( const char * b ) noexcept
{
    static ::std::string u { };

    if ( !b || *b == SE_0 )
        return { };

    u.assign ( b ), ::std::transform ( u.begin ( ), u.end ( ), u.begin ( ), ::toupper );

    return u;
}

static __forceinline void toUpper ( ::std::string * b ) noexcept
{
    if ( !b || ( *b ).empty ( ) )
        return;

    ::std::transform ( ( *b ).begin ( ), ( *b ).end ( ), ( *b ).begin ( ), ::toupper );
}

static __forceinline ::std::wstring & toUpper ( ::std::wstring & b ) noexcept
{
    if ( b.empty ( ) )
        return b;

    ::std::transform ( b.begin ( ), b.end ( ), b.begin ( ), ::towupper );

    return b;
}

static __forceinline ::std::wstring toUpper ( const wchar_t * b ) noexcept
{
    static ::std::wstring u { };

    if ( !b || *b == SE_0 )
        return { };

    u.assign ( b ), ::std::transform ( u.begin ( ), u.end ( ), u.begin ( ), ::towupper );

    return u;
}

static __forceinline void toUpper ( ::std::wstring * b ) noexcept
{
    if ( !b || ( *b ).empty ( ) )
        return;

    ::std::transform ( ( *b ).begin ( ), ( *b ).end ( ), ( *b ).begin ( ), ::towupper );
}

static __forceinline void toLower ( char * b ) noexcept
{
    static unsigned int i { };

    if ( !b || *b == SE_0 )
        return;

    for ( i = SE_0; i < ::std::strlen ( b ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
        b [ i ] = ::std::tolower ( b [ i ] );
}

static __forceinline void toLower ( wchar_t * b ) noexcept
{
    static unsigned int i { };

    if ( !b || *b == SE_0 )
        return;

    for ( i = SE_0; i < ::std::wcslen ( b ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
        b [ i ] = ::std::towlower ( b [ i ] );
}

static __forceinline ::std::string & toLower ( ::std::string & b ) noexcept
{
    if ( b.empty ( ) )
        return b;

    ::std::transform ( b.begin ( ), b.end ( ), b.begin ( ), ::tolower );

    return b;
}

static __forceinline ::std::string toLower ( const char * b ) noexcept
{
    static ::std::string u { };

    if ( !b || *b == SE_0 )
        return { };

    u.assign ( b ), ::std::transform ( u.begin ( ), u.end ( ), u.begin ( ), ::tolower );

    return u;
}

static __forceinline void toLower ( ::std::string * b ) noexcept
{
    if ( !b || ( *b ).empty ( ) )
        return;

    ::std::transform ( ( *b ).begin ( ), ( *b ).end ( ), ( *b ).begin ( ), ::tolower );
}

static __forceinline ::std::wstring & toLower ( ::std::wstring & b ) noexcept
{
    if ( b.empty ( ) )
        return b;

    ::std::transform ( b.begin ( ), b.end ( ), b.begin ( ), ::towlower );

    return b;
}

static __forceinline ::std::wstring toLower ( const wchar_t * b ) noexcept
{
    static ::std::wstring u { };

    if ( !b || *b == SE_0 )
        return { };

    u.assign ( b ), ::std::transform ( u.begin ( ), u.end ( ), u.begin ( ), ::towlower );

    return u;
}

static __forceinline void toLower ( ::std::wstring * b ) noexcept
{
    if ( !b || ( *b ).empty ( ) )
        return;

    ::std::transform ( ( *b ).begin ( ), ( *b ).end ( ), ( *b ).begin ( ), ::towlower );
}

static __forceinline ::std::wstring toUnicode ( ::std::string i ) noexcept
{
    static const unsigned int u { ( ( unsigned int ) ( ::std::atoi ( XCS ( "65001" ) ) ) ), };

    static wchar_t w [ 4096 ] { };
    static ::std::wstring r { };

    ::MultiByteToWideChar ( u, SE_0, i.c_str ( ), ::std::atoi ( XCS ( "-1" ) ), w, ::std::atoi ( XCS ( "4095" ) ) ), r.assign ( w );

    return r;
}

static __forceinline ::std::string fromUnicode ( ::std::wstring i ) noexcept
{
    static const unsigned int u { ( ( unsigned int ) ( ::std::atoi ( XCS ( "65001" ) ) ) ), };

    static char b [ 4096 ] { };
    static ::std::string r { };

    ::WideCharToMultiByte ( u, SE_0, i.c_str ( ), ::std::atoi ( XCS ( "-1" ) ), b, ::std::atoi ( XCS ( "4095" ) ), nullptr, nullptr ), r.assign ( b );

    return r;
}

static __forceinline ::std::string & replaceAll ( ::std::string & i, ::std::string f, ::std::string t ) noexcept
{
    static unsigned int w { }, fl { }, tl { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    w = SE_0, fl = f.length ( ), tl = t.length ( );

    while ( ( w = i.find ( f, w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, fl, t ), w += tl;

    return i;
}

static __forceinline ::std::wstring & replaceAll ( ::std::wstring & i, ::std::wstring f, ::std::wstring t ) noexcept
{
    static unsigned int w { }, fl { }, tl { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    w = SE_0, fl = f.length ( ), tl = t.length ( );

    while ( ( w = i.find ( f, w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, fl, t ), w += tl;

    return i;
}

static __forceinline ::std::string & replaceOnce ( ::std::string & i, ::std::string f, ::std::string t ) noexcept
{
    static unsigned int w { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    if ( ( w = i.find ( f ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, f.length ( ), t );

    return i;
}

static __forceinline ::std::wstring & replaceOnce ( ::std::wstring & i, ::std::wstring f, ::std::wstring t ) noexcept
{
    static unsigned int w { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    if ( ( w = i.find ( f ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, f.length ( ), t );

    return i;
}

static __forceinline ::std::string & eraseAll ( ::std::string & i, ::std::string f ) noexcept
{
    static const ::std::string e { };

    static unsigned int w { }, fl { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    w = SE_0, fl = f.length ( );

    while ( ( w = i.find ( f, w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, fl, e );

    return i;
}

static __forceinline ::std::wstring & eraseAll ( ::std::wstring & i, ::std::wstring f ) noexcept
{
    static const ::std::wstring e { };

    static unsigned int w { }, fl { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    w = SE_0, fl = f.length ( );

    while ( ( w = i.find ( f, w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, fl, e );

    return i;
}

static __forceinline ::std::string & eraseOnce ( ::std::string & i, ::std::string f ) noexcept
{
    static const ::std::string e { };

    static unsigned int w { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    if ( ( w = i.find ( f ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, f.length ( ), e );

    return i;
}

static __forceinline ::std::wstring & eraseOnce ( ::std::wstring & i, ::std::wstring f ) noexcept
{
    static const ::std::wstring e { };

    static unsigned int w { };

    if ( i.empty ( ) || f.empty ( ) )
        return i;

    if ( ( w = i.find ( f ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.replace ( w, f.length ( ), e );

    return i;
}

static __forceinline ::std::string & truncateFullPathToAddFileName ( ::std::string & p ) noexcept
{
    static const ::std::string q { XCS ( "\\/" ), };

    static unsigned int w { };

    if ( p.empty ( ) || p.ends_with ( q.at ( SE_0 ) ) || p.ends_with ( q.at ( SE_1 ) ) )
        return p;

    w = p.find_last_of ( q.at ( SE_0 ) );

    if ( w != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        p.erase ( w + ( ( unsigned int ) ( SE_1 ) ) );

    w = p.find_last_of ( q.at ( SE_1 ) );

    if ( w != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        p.erase ( w + ( ( unsigned int ) ( SE_1 ) ) );

    return p;
}

static __forceinline ::std::wstring & truncateFullPathToAddFileName ( ::std::wstring & p ) noexcept
{
    static const ::std::wstring q { ::toUnicode ( XCS ( "\\/" ) ).c_str ( ), };

    static unsigned int w { };

    if ( p.empty ( ) || p.ends_with ( q.at ( SE_0 ) ) || p.ends_with ( q.at ( SE_1 ) ) )
        return p;

    w = p.find_last_of ( q.at ( SE_0 ) );

    if ( w != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        p.erase ( w + ( ( unsigned int ) ( SE_1 ) ) );

    w = p.find_last_of ( q.at ( SE_1 ) );

    if ( w != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        p.erase ( w + ( ( unsigned int ) ( SE_1 ) ) );

    return p;
}

static __forceinline ::std::string & replaceOneChar ( ::std::string & i, ::std::string f, ::std::string t ) noexcept
{
    static unsigned int x { };

    if ( i.empty ( ) )
        return i;

    for ( x = ( unsigned int ) SE_0; x < i.length ( ); x = ( x + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( i [ x ] == f [ SE_0 ] )
            i [ x ] = t [ SE_0 ];
    }

    return i;
}

static __forceinline ::std::wstring & replaceOneChar ( ::std::wstring & i, ::std::wstring f, ::std::wstring t ) noexcept
{
    static unsigned int x { };

    if ( i.empty ( ) )
        return i;

    for ( x = ( unsigned int ) SE_0; x < i.length ( ); x = ( x + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( i [ x ] == f [ SE_0 ] )
            i [ x ] = t [ SE_0 ];
    }

    return i;
}

static __forceinline ::std::string & trimBeg ( ::std::string & i, ::std::string w = XCS ( " \f\n\r\t\v" ) ) noexcept
{
    static unsigned int p { };

    if ( i.empty ( ) || w.empty ( ) )
        return i;

    if ( ( p = i.find_first_not_of ( w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.erase ( SE_0, p );

    else
        i.clear ( );

    return i;
}

static __forceinline ::std::wstring & trimBeg ( ::std::wstring & i, ::std::wstring w = ::toUnicode ( XCS ( " \f\n\r\t\v" ) ).c_str ( ) ) noexcept
{
    static unsigned int p { };

    if ( i.empty ( ) || w.empty ( ) )
        return i;

    if ( ( p = i.find_first_not_of ( w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.erase ( SE_0, p );

    else
        i.clear ( );

    return i;
}

static __forceinline ::std::string & trimEnd ( ::std::string & i, ::std::string w = XCS ( " \f\n\r\t\v" ) ) noexcept
{
    static unsigned int p { };

    if ( i.empty ( ) || w.empty ( ) )
        return i;

    if ( ( p = i.find_last_not_of ( w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.erase ( p + SE_1 );

    else
        i.clear ( );

    return i;
}

static __forceinline ::std::wstring & trimEnd ( ::std::wstring & i, ::std::wstring w = ::toUnicode ( XCS ( " \f\n\r\t\v" ) ).c_str ( ) ) noexcept
{
    static unsigned int p { };

    if ( i.empty ( ) || w.empty ( ) )
        return i;

    if ( ( p = i.find_last_not_of ( w ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
        i.erase ( p + SE_1 );

    else
        i.clear ( );

    return i;
}

static __forceinline ::std::string & trimAll ( ::std::string & i, ::std::string w = XCS ( " \f\n\r\t\v" ) ) noexcept
{
    if ( i.empty ( ) || w.empty ( ) )
        return i;

    return trimBeg ( trimEnd ( i, w ), w );
}

static __forceinline ::std::wstring & trimAll ( ::std::wstring & i, ::std::wstring w = ::toUnicode ( XCS ( " \f\n\r\t\v" ) ).c_str ( ) ) noexcept
{
    if ( i.empty ( ) || w.empty ( ) )
        return i;

    return trimBeg ( trimEnd ( i, w ), w );
}

static __forceinline ::std::string & removeQuotes ( ::std::string & i, ::std::string q = XCS ( "\"'" ) ) noexcept
{
    if ( i.empty ( ) || q.empty ( ) )
        return i;

    return trimBeg ( trimEnd ( i, q ), q );
}

static __forceinline ::std::wstring & removeQuotes ( ::std::wstring & i, ::std::wstring q = ::toUnicode ( XCS ( "\"'" ) ).c_str ( ) ) noexcept
{
    if ( i.empty ( ) || q.empty ( ) )
        return i;

    return trimBeg ( trimEnd ( i, q ), q );
}

static __forceinline ::std::string & removeSlashes ( ::std::string & i, ::std::string q = XCS ( "\\/" ) ) noexcept
{
    if ( i.empty ( ) || q.empty ( ) )
        return i;

    return trimBeg ( trimEnd ( i, q ), q );
}

static __forceinline ::std::wstring & removeSlashes ( ::std::wstring & i, ::std::wstring q = ::toUnicode ( XCS ( "\\/" ) ).c_str ( ) ) noexcept
{
    if ( i.empty ( ) || q.empty ( ) )
        return i;

    return trimBeg ( trimEnd ( i, q ), q );
}

static __forceinline bool procRunning ( ::std::string n ) noexcept
{
    static unsigned long l [ 4096 ] { }, c { }, s { };
    static char on [ 4096 ] { };
    static void * p { };
    static unsigned int i { };

    if ( n.empty ( ) || SE_0 == ::K32EnumProcesses ( l, ::std::atoi ( XCS ( "16384" ) ), &c ) )
        return { };

    for ( i = SE_0, s = ::GetCurrentProcessId ( ); i < ( c / SE_4 ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( l [ i ] != SE_0 && l [ i ] != s )
        {
            p = ::OpenProcess ( ::std::strtoul ( XCS ( "2097151" ), nullptr, SE_0 ), SE_0, l [ i ] );

            if ( p )
            {
                ::K32GetModuleBaseNameA ( p, nullptr, on, ::std::atoi ( XCS ( "4095" ) ) ), ::CloseHandle ( p ), p = nullptr;

                if ( ::lstrcmpiA ( on, n.c_str ( ) ) == SE_0 )
                    return true;
            }
        }
    }

    return { };
}

static __forceinline bool procRunning ( ::std::wstring n ) noexcept
{
    static unsigned long l [ 4096 ] { }, c { }, s { };
    static wchar_t on [ 4096 ] { };
    static void * p { };
    static unsigned int i { };

    if ( n.empty ( ) || SE_0 == ::K32EnumProcesses ( l, ::std::atoi ( XCS ( "16384" ) ), &c ) )
        return { };

    for ( i = SE_0, s = ::GetCurrentProcessId ( ); i < ( c / SE_4 ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( l [ i ] != SE_0 && l [ i ] != s )
        {
            p = ::OpenProcess ( ::std::strtoul ( XCS ( "2097151" ), nullptr, SE_0 ), SE_0, l [ i ] );

            if ( p )
            {
                ::K32GetModuleBaseNameW ( p, nullptr, on, ::std::atoi ( XCS ( "4095" ) ) ), ::CloseHandle ( p ), p = nullptr;

                if ( ::lstrcmpiW ( on, n.c_str ( ) ) == SE_0 )
                    return true;
            }
        }
    }

    return { };
}

static __forceinline bool selfProcRunningAlready ( void ) noexcept
{
    static unsigned long l [ 4096 ] { }, c { }, s { };
    static char sn [ 4096 ] { }, on [ 4096 ] { };
    static void * p { };
    static unsigned int i { };

    if ( SE_0 == ::K32GetModuleFileNameExA ( ::GetCurrentProcess ( ), nullptr, sn, ::std::atoi ( XCS ( "4095" ) ) ) ||
         SE_0 == ::K32EnumProcesses ( l, ::std::atoi ( XCS ( "16384" ) ), &c ) )
        return { };

    for ( i = SE_0, s = ::GetCurrentProcessId ( ); i < ( c / SE_4 ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( l [ i ] != SE_0 && l [ i ] != s )
        {
            p = ::OpenProcess ( ::std::strtoul ( XCS ( "2097151" ), nullptr, SE_0 ), SE_0, l [ i ] );

            if ( p )
            {
                ::K32GetModuleFileNameExA ( p, nullptr, on, ::std::atoi ( XCS ( "4095" ) ) ), ::CloseHandle ( p ), p = nullptr;

                if ( ::lstrcmpiA ( on, sn ) == SE_0 )
                    return true;
            }
        }
    }

    return { };
}

static __forceinline bool selfProcRunningAlreadyUnicode ( void ) noexcept
{
    static unsigned long l [ 4096 ] { }, c { }, s { };
    static wchar_t sn [ 4096 ] { }, on [ 4096 ] { };
    static void * p { };
    static unsigned int i { };

    if ( SE_0 == ::K32GetModuleFileNameExW ( ::GetCurrentProcess ( ), nullptr, sn, ::std::atoi ( XCS ( "4095" ) ) ) ||
         SE_0 == ::K32EnumProcesses ( l, ::std::atoi ( XCS ( "16384" ) ), &c ) )
        return { };

    for ( i = SE_0, s = ::GetCurrentProcessId ( ); i < ( c / SE_4 ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( l [ i ] != SE_0 && l [ i ] != s )
        {
            p = ::OpenProcess ( ::std::strtoul ( XCS ( "2097151" ), nullptr, SE_0 ), SE_0, l [ i ] );

            if ( p )
            {
                ::K32GetModuleFileNameExW ( p, nullptr, on, ::std::atoi ( XCS ( "4095" ) ) ), ::CloseHandle ( p ), p = nullptr;

                if ( ::lstrcmpiW ( on, sn ) == SE_0 )
                    return true;
            }
        }
    }

    return { };
}

static __forceinline ::std::vector < ::std::pair < ::std::string, ::std::string > > enumApps ( void ) noexcept
{
    static const ::std::string f { XCS ( "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall" ), };

    static ::HKEY__ * t { }, * a { };
    static ::std::vector < ::std::pair < ::std::string, ::std::string > > l { };
    static ::std::pair < ::std::string, ::std::string > p { };
    static unsigned int i { };
    static ::std::string e { };
    static char b [ 4096 ] { };
    static long r { };
    static unsigned long s { };

    if ( ::RegOpenKeyExA ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483650" ), nullptr, SE_0 ) ) ) ),
                           f.c_str ( ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &t ) != SE_0 || !t )
        return { };

    for ( i = SE_0, l.clear ( ); i < ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) );
          i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        ::std::memset ( b, SE_0, ::std::atoi ( XCS ( "4096" ) ) ), s = ::std::atoi ( XCS ( "4095" ) ),
            r = ::RegEnumKeyExA ( t, ( unsigned long ) i, b, &s, nullptr, nullptr, nullptr, nullptr );

        if ( r == SE_0 )
        {
            e.assign ( f.c_str ( ) ), e.append ( XCS ( "\\" ) ), e.append ( b );

            if ( ::RegOpenKeyExA ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483650" ), nullptr, SE_0 ) ) ) ),
                                   e.c_str ( ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &a ) != SE_0 || !a )
            {
                if ( a )
                    ::RegCloseKey ( a ), a = nullptr;

                continue;
            }

            ::std::memset ( b, SE_0, ::std::atoi ( XCS ( "4096" ) ) ), s = ::std::atoi ( XCS ( "4095" ) );

            if ( ::RegQueryValueExA ( a, XCS ( "DisplayName" ), nullptr, nullptr, ( ( unsigned char * ) ( b ) ), &s ) == SE_0 )
                p.first.assign ( b );

            else
                p.first.clear ( );

            ::std::memset ( b, SE_0, ::std::atoi ( XCS ( "4096" ) ) ), s = ::std::atoi ( XCS ( "4095" ) );

            if ( ::RegQueryValueExA ( a, XCS ( "DisplayVersion" ), nullptr, nullptr, ( ( unsigned char * ) ( b ) ), &s ) == SE_0 )
                p.second.assign ( b );

            else
                p.second.clear ( );

            if ( a )
                ::RegCloseKey ( a ), a = nullptr;

            if ( !p.first.empty ( ) && !p.second.empty ( ) )
                l.emplace_back ( p );
        }

        else if ( r == ::std::atol ( XCS ( "259" ) ) )
            break;
    }

    if ( t )
        ::RegCloseKey ( t ), t = nullptr;

    return l;
}

static __forceinline ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > enumAppsUnicode ( void ) noexcept
{
    static const ::std::wstring f { ::toUnicode ( XCS ( "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall" ) ).c_str ( ), };

    static ::HKEY__ * t { }, * a { };
    static ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > l { };
    static ::std::pair < ::std::wstring, ::std::wstring > p { };
    static unsigned int i { };
    static ::std::wstring e { };
    static wchar_t b [ 4096 ] { };
    static long r { };
    static unsigned long s { };

    if ( ::RegOpenKeyExW ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483650" ), nullptr, SE_0 ) ) ) ),
                           f.c_str ( ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &t ) != SE_0 || !t )
        return { };

    for ( i = SE_0, l.clear ( ); i < ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) );
          i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        ::std::memset ( b, SE_0, ::std::atoi ( XCS ( "8192" ) ) ), s = ::std::atoi ( XCS ( "4095" ) ),
            r = ::RegEnumKeyExW ( t, ( unsigned long ) i, b, &s, nullptr, nullptr, nullptr, nullptr );

        if ( r == SE_0 )
        {
            e.assign ( f.c_str ( ) ), e.append ( ::toUnicode ( XCS ( "\\" ) ).c_str ( ) ), e.append ( b );

            if ( ::RegOpenKeyExW ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483650" ), nullptr, SE_0 ) ) ) ),
                                   e.c_str ( ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &a ) != SE_0 || !a )
            {
                if ( a )
                    ::RegCloseKey ( a ), a = nullptr;

                continue;
            }

            ::std::memset ( b, SE_0, ::std::atoi ( XCS ( "8192" ) ) ), s = ::std::atoi ( XCS ( "4095" ) );

            if ( ::RegQueryValueExW ( a, ::toUnicode ( XCS ( "DisplayName" ) ).c_str ( ), nullptr, nullptr, ( ( unsigned char * ) ( b ) ), &s ) == SE_0 )
                p.first.assign ( b );

            else
                p.first.clear ( );

            ::std::memset ( b, SE_0, ::std::atoi ( XCS ( "8192" ) ) ), s = ::std::atoi ( XCS ( "4095" ) );

            if ( ::RegQueryValueExW ( a, ::toUnicode ( XCS ( "DisplayVersion" ) ).c_str ( ), nullptr, nullptr, ( ( unsigned char * ) ( b ) ), &s ) == SE_0 )
                p.second.assign ( b );

            else
                p.second.clear ( );

            if ( a )
                ::RegCloseKey ( a ), a = nullptr;

            if ( !p.first.empty ( ) && !p.second.empty ( ) )
                l.emplace_back ( p );
        }

        else if ( r == ::std::atol ( XCS ( "259" ) ) )
            break;
    }

    if ( t )
        ::RegCloseKey ( t ), t = nullptr;

    return l;
}

static __forceinline unsigned int countAppsByPartOfName ( ::std::string p, ::std::vector < ::std::pair < ::std::string, ::std::string > > l ) noexcept
{
    static unsigned int i { }, c { };

    if ( p.empty ( ) || l.empty ( ) )
        return { };

    for ( c = SE_0, i = SE_0; i < l.size ( ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( ::std::strstr ( l [ i ].first.c_str ( ), p.c_str ( ) ) )
            c = ( c + ( ( unsigned int ) ( SE_1 ) ) );
    }

    return c;
}

static __forceinline unsigned int countAppsByPartOfName ( ::std::wstring p, ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > l ) noexcept
{
    static unsigned int i { }, c { };

    if ( p.empty ( ) || l.empty ( ) )
        return { };

    for ( c = SE_0, i = SE_0; i < l.size ( ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( ::std::wcsstr ( l [ i ].first.c_str ( ), p.c_str ( ) ) )
            c = ( c + ( ( unsigned int ) ( SE_1 ) ) );
    }

    return c;
}

static __forceinline ::std::string retrieveAppVersionByPartOfName ( ::std::string p,
                                                                    ::std::vector < ::std::pair < ::std::string, ::std::string > > l ) noexcept
{
    static unsigned int i { };

    if ( p.empty ( ) || l.empty ( ) )
        return { };

    for ( i = SE_0; i < l.size ( ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( ::std::strstr ( l [ i ].first.c_str ( ), p.c_str ( ) ) )
            return l [ i ].second;
    }

    return { };
}

static __forceinline ::std::wstring retrieveAppVersionByPartOfName ( ::std::wstring p,
                                                                     ::std::vector < ::std::pair < ::std::wstring, ::std::wstring > > l ) noexcept
{
    static unsigned int i { };

    if ( p.empty ( ) || l.empty ( ) )
        return { };

    for ( i = SE_0; i < l.size ( ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( ::std::wcsstr ( l [ i ].first.c_str ( ), p.c_str ( ) ) )
            return l [ i ].second;
    }

    return { };
}

static __forceinline ::std::string retrieveSteamUsersFilePath ( void ) noexcept
{
    static ::HKEY__ * k { };
    static char p [ 4096 ] { };
    static unsigned long s { };
    static ::std::string f { };

    if ( SE_0 == ::RegOpenKeyExA ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483649" ), nullptr, SE_0 ) ) ) ),
                                   XCS ( "SOFTWARE\\Valve\\Steam" ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &k ) && k )
    {
        ::std::memset ( p, SE_0, ::std::atoi ( XCS ( "4096" ) ) ), s = ::std::atoi ( XCS ( "4095" ) ),
            ::RegQueryValueExA ( k, XCS ( "SteamPath" ), nullptr, nullptr, ( ( unsigned char * ) ( p ) ), &s ), ::RegCloseKey ( k ), k = nullptr;

        if ( ::std::strlen ( p ) > ( unsigned int ) SE_0 )
        {
            f.assign ( p ), ::trimAll ( f ), ::removeQuotes ( f ), ::trimAll ( f ), ::replaceAll ( f, XCS ( "/" ), XCS ( "\\" ) ),
                f.append ( XCS ( "\\config\\loginusers.vdf" ) );

            return f;
        }
    }

    return { };
}

static __forceinline ::std::wstring retrieveSteamUsersFilePathUnicode ( void ) noexcept
{
    static ::HKEY__ * k { };
    static wchar_t p [ 4096 ] { };
    static unsigned long s { };
    static ::std::wstring f { };

    if ( SE_0 == ::RegOpenKeyExW ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483649" ), nullptr, SE_0 ) ) ) ),
                                   SE_UNI_C ( "SOFTWARE\\Valve\\Steam" ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &k ) && k )
    {
        ::std::memset ( p, SE_0, ::std::atoi ( XCS ( "8192" ) ) ), s = ::std::atoi ( XCS ( "4095" ) ),
            ::RegQueryValueExW ( k, SE_UNI_C ( "SteamPath" ), nullptr, nullptr, ( ( unsigned char * ) ( p ) ), &s ), ::RegCloseKey ( k ), k = nullptr;

        if ( ::std::wcslen ( p ) > ( unsigned int ) SE_0 )
        {
            f.assign ( p ), ::trimAll ( f ), ::removeQuotes ( f ), ::trimAll ( f ), ::replaceAll ( f, SE_UNI_C ( "/" ), SE_UNI_C ( "\\" ) ),
                f.append ( SE_UNI_C ( "\\config\\loginusers.vdf" ) );

            return f;
        }
    }

    return { };
}

static __forceinline double cpuSpeed ( void ) noexcept
{
    static const double p { ( ( double ) ( ::std::strtod ( XCS ( "1000000.0" ), nullptr ) ) ), };
    static const int f { ( ( int ) ( SE_5 ) ), };

    static ::_LARGE_INTEGER w { }, s { }, c { };
    static unsigned long long x { };

    ::QueryPerformanceCounter ( &s ), ::QueryPerformanceFrequency ( &w ), w.QuadPart >>= f, x = ::__rdtsc ( );

    do ::QueryPerformanceCounter ( &c );

    while ( c.QuadPart - s.QuadPart < w.QuadPart );

    return ( ( ::__rdtsc ( ) - x ) << f ) / p;
}

static __forceinline void resolveLicenses ( ::std::string f, ::std::string t, ::std::vector < ::std::string > l,
                                            ::std::string k = XCS ( "HWIDS" ), ::std::string fn = XCS ( "XS" ), ::std::string sp = XCS ( "    " ) ) noexcept
{
    static ::_iobuf * ff { }, * tf { };
    static char b [ 4096 ] { };
    static ::std::string c { }, r { };
    static unsigned int s { }, i { };
    static bool d { };

    ::fopen_s ( &ff, f.c_str ( ), XCS ( "r" ) );

    if ( !ff )
        return;

    ::fopen_s ( &tf, t.c_str ( ), XCS ( "w" ) );

    if ( !tf )
    {
        if ( ff )
            ::std::fclose ( ff ), ff = nullptr;

        return;
    }

    s = l.size ( ), d = { };

    while ( SE_0 == ::std::feof ( ff ) )
    {
        b [ SE_0 ] = SE_0, ::std::fgets ( b, ::std::atoi ( XCS ( "4095" ) ), ff ), c.assign ( b );

        if ( c.find ( k.c_str ( ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) && !d )
        {
            for ( i = SE_0, r.clear ( ); i < s; i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
            {
                if ( i != ( s - SE_1 ) )
                {
                    if ( i == SE_0 )
                        r.append ( fn.c_str ( ) ), r.append ( XCS ( "(\"" ) ), r.append ( l [ i ] ), r.append ( XCS ( "\"), \\\n" ) );

                    else
                        r.append ( sp.c_str ( ) ), r.append ( fn.c_str ( ) ), r.append ( XCS ( "(\"" ) ), r.append ( l [ i ] ),
                        r.append ( XCS ( "\"), \\\n" ) );
                }

                else
                    r.append ( sp.c_str ( ) ), r.append ( fn.c_str ( ) ), r.append ( XCS ( "(\"" ) ), r.append ( l [ i ] ), r.append ( XCS ( "\")," ) );
            }

            ::replaceOnce ( c, k.c_str ( ), r ), d = true;
        }

        if ( c.find ( XCS ( "%" ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
            ::replaceAll ( c, XCS ( "%" ), XCS ( "%%" ) );

        ::std::fprintf ( tf, c.c_str ( ) );
    }

    ::std::fclose ( ff ), ff = nullptr, ::std::fclose ( tf ), tf = nullptr;
}

static __forceinline void resolveLicenses ( ::std::wstring f, ::std::wstring t, ::std::vector < ::std::string > l,
                                            ::std::string k = XCS ( "HWIDS" ), ::std::string fn = XCS ( "XS" ), ::std::string sp = XCS ( "    " ) ) noexcept
{
    static ::_iobuf * ff { }, * tf { };
    static char b [ 4096 ] { };
    static ::std::string c { }, r { };
    static unsigned int s { }, i { };
    static bool d { };

    ::_wfopen_s ( &ff, f.c_str ( ), ::toUnicode ( XCS ( "r" ) ).c_str ( ) );

    if ( !ff )
        return;

    ::_wfopen_s ( &tf, t.c_str ( ), ::toUnicode ( XCS ( "w" ) ).c_str ( ) );

    if ( !tf )
    {
        if ( ff )
            ::std::fclose ( ff ), ff = nullptr;

        return;
    }

    s = l.size ( ), d = { };

    while ( SE_0 == ::std::feof ( ff ) )
    {
        b [ SE_0 ] = SE_0, ::std::fgets ( b, ::std::atoi ( XCS ( "4095" ) ), ff ), c.assign ( b );

        if ( c.find ( k.c_str ( ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) && !d )
        {
            for ( i = SE_0, r.clear ( ); i < s; i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
            {
                if ( i != ( s - SE_1 ) )
                {
                    if ( i == SE_0 )
                        r.append ( fn.c_str ( ) ), r.append ( XCS ( "(\"" ) ), r.append ( l [ i ] ), r.append ( XCS ( "\"), \\\n" ) );

                    else
                        r.append ( sp.c_str ( ) ), r.append ( fn.c_str ( ) ), r.append ( XCS ( "(\"" ) ), r.append ( l [ i ] ),
                        r.append ( XCS ( "\"), \\\n" ) );
                }

                else
                    r.append ( sp.c_str ( ) ), r.append ( fn.c_str ( ) ), r.append ( XCS ( "(\"" ) ), r.append ( l [ i ] ), r.append ( XCS ( "\")," ) );
            }

            ::replaceOnce ( c, k.c_str ( ), r ), d = true;
        }

        if ( c.find ( XCS ( "%" ) ) != ( ( unsigned int ) ( ::std::strtoull ( XCS ( "4294967295" ), nullptr, SE_0 ) ) ) )
            ::replaceAll ( c, XCS ( "%" ), XCS ( "%%" ) );

        ::std::fprintf ( tf, c.c_str ( ) );
    }

    ::std::fclose ( ff ), ff = nullptr, ::std::fclose ( tf ), tf = nullptr;
}

static __forceinline float elapsedSince ( long s ) noexcept
{
    static const long p { ( ( long ) ( ::std::atoi ( XCS ( "1000" ) ) ) ), };

    static long r { };

    r = ::std::clock ( ) - s;

    return ( ( float ) ( r ) ) / p;
}

static __forceinline float retrieveWindowsVersion ( void ) noexcept
{
    static long ( __stdcall * v ) ( ::_OSVERSIONINFOEXW * )
    {
    };

    static ::HINSTANCE__ * m { };
    static ::_OSVERSIONINFOEXW i { };
    static wchar_t b [ 512 ] { };

    if ( !m )
        m = ::GetModuleHandleW ( SE_UNI_C ( "ntdll" ) );

    if ( !m )
        m = ::LoadLibraryW ( SE_UNI_C ( "ntdll" ) );

    if ( m )
    {
        if ( !v )
            *( ::FARPROC * ) &v = ::GetProcAddress ( m, XCS ( "RtlGetVersion" ) );

        if ( v )
        {
            ::std::memset ( &i, SE_0, ( ( unsigned int ) ( ::std::atof ( XCS ( "284.00000" ) ) ) ) ),
                i.dwOSVersionInfoSize = ( ( unsigned long ) ( ::std::atof ( XCS ( "284.00000" ) ) ) ), v ( &i ),
                ::wsprintfW ( b, SE_UNI_C ( "%d.%d" ), ( ( int ) ( i.dwMajorVersion ) ), ( ( int ) ( i.dwMinorVersion ) ) );

            return ( ( float ) ( ::std::atof ( ::fromUnicode ( b ).c_str ( ) ) ) );
        }
    }

    return SE_0_F;
}

static __forceinline void storeBytesToFile ( ::std::string n, ::std::vector < unsigned char > v ) noexcept
{
    static ::std::basic_ofstream < unsigned char, ::std::char_traits < unsigned char > > f { };

    f.open ( n.c_str ( ), ( ( int ) ( ::std::atof ( XCS ( "50.00000" ) ) ) ), ( ( int ) ( ::std::atof ( XCS ( "64.00000" ) ) ) ) );

    if ( f.is_open ( ) )
        f.write ( v.data ( ), v.size ( ) ), f.close ( );

    f.clear ( );
}

static __forceinline void storeBytesToFile ( ::std::wstring n, ::std::vector < unsigned char > v ) noexcept
{
    static ::std::basic_ofstream < unsigned char, ::std::char_traits < unsigned char > > f { };

    f.open ( n.c_str ( ), ( ( int ) ( ::std::atof ( XCS ( "50.00000" ) ) ) ), ( ( int ) ( ::std::atof ( XCS ( "64.00000" ) ) ) ) );

    if ( f.is_open ( ) )
        f.write ( v.data ( ), v.size ( ) ), f.close ( );

    f.clear ( );
}

static __forceinline bool isChrSlash ( long long llChr ) noexcept
{
    static const int z { ( ( int ) ( SE_0 ) ), }, o { ( ( int ) ( SE_1 ) ), };

    return ( ( ( llChr == ( ( long long ) ( XS ( "\\/^&*()_+" ).at ( z ) ) ) ) || ( llChr == ( ( long long ) ( XS ( "\\/~!@#$" ).at ( o ) ) ) ) ) ?
             ( ( bool ) ( o ) ) : ( ( bool ) ( z ) ) );
}

static __forceinline ::std::vector < unsigned char > readBinaryFileToMem ( ::std::string p ) noexcept
{
    static ::std::vector < unsigned char > r { };
    static ::std::basic_ifstream < unsigned char, ::std::char_traits < unsigned char > > f { };

    r.clear ( ), f.open ( p, SE_33, ( ( int ) ( ::std::atof ( XCS ( "64.00000" ) ) ) ) );

    if ( !f.is_open ( ) )
    {
        f.clear ( );

        return r;
    }

    f.seekg ( ( long long ) SE_0, SE_2 ), r.resize ( static_cast < unsigned int > ( f.tellg ( ) ) ), f.seekg ( ( long long ) SE_0, SE_0 ),
        f.read ( r.data ( ), r.size ( ) ), f.close ( ), f.clear ( );

    return r;
}

static __forceinline ::std::vector < unsigned char > readBinaryFileToMem ( ::std::wstring p ) noexcept
{
    static ::std::vector < unsigned char > r { };
    static ::std::basic_ifstream < unsigned char, ::std::char_traits < unsigned char > > f { };

    r.clear ( ), f.open ( p, SE_33, ( ( int ) ( ::std::atof ( XCS ( "64.00000" ) ) ) ) );

    if ( !f.is_open ( ) )
    {
        f.clear ( );

        return r;
    }

    f.seekg ( ( long long ) SE_0, SE_2 ), r.resize ( static_cast < unsigned int > ( f.tellg ( ) ) ), f.seekg ( ( long long ) SE_0, SE_0 ),
        f.read ( r.data ( ), r.size ( ) ), f.close ( ), f.clear ( );

    return r;
}

static __forceinline void freezeProcForMod ( unsigned long p, ::std::string n ) noexcept
{
    static void * s { ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) ), };
    static ::tagMODULEENTRY32W e { };

    while ( SE_1 )
    {
        s = ::CreateToolhelp32Snapshot ( SE_8, p );

        while ( s == ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) ) )
            s = ::CreateToolhelp32Snapshot ( SE_8, p );

        ::std::memset ( &e, SE_0, ::std::atoi ( XCS ( "1064" ) ) ), e.dwSize = ::std::atoi ( XCS ( "1064" ) );

        if ( ::Module32FirstW ( s, &e ) )
        {
            do
            {
                if ( SE_0 == ::lstrcmpiW ( e.szModule, ::toUnicode ( n.c_str ( ) ).c_str ( ) ) )
                {
                    ::CloseHandle ( s ), s = ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) );

                    return;
                }
            }

            while ( ::Module32NextW ( s, &e ) );
        }

        ::CloseHandle ( s ), s = ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) );
    }
}

static __forceinline void freezeProcForMod ( unsigned long p, ::std::wstring n ) noexcept
{
    static void * s { ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) ), };
    static ::tagMODULEENTRY32W e { };

    while ( SE_1 )
    {
        s = ::CreateToolhelp32Snapshot ( SE_8, p );

        while ( s == ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) ) )
            s = ::CreateToolhelp32Snapshot ( SE_8, p );

        ::std::memset ( &e, SE_0, ::std::atoi ( XCS ( "1064" ) ) ), e.dwSize = ::std::atoi ( XCS ( "1064" ) );

        if ( ::Module32FirstW ( s, &e ) )
        {
            do
            {
                if ( SE_0 == ::lstrcmpiW ( e.szModule, n.c_str ( ) ) )
                {
                    ::CloseHandle ( s ), s = ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) );

                    return;
                }
            }

            while ( ::Module32NextW ( s, &e ) );
        }

        ::CloseHandle ( s ), s = ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) );
    }
}

static __forceinline void killSteamProcs ( void ) noexcept
{
    static const ::std::wstring p [ ] =
    {
        SE_UNI ( "steam.exe" ), SE_UNI ( "steamservice.exe" ), SE_UNI ( "gameoverlayui.exe" ), SE_UNI ( "steamerrorreporter.exe" ),
        SE_UNI ( "steamerrorreporter64.exe" ), SE_UNI ( "streaming_client.exe" ), SE_UNI ( "writeminidump.exe" ), SE_UNI ( "steamwebhelper.exe" ),
        SE_UNI ( "csgo.exe" ),
    };

    static void * s { ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) ), }, * w { };
    static ::tagPROCESSENTRY32W e { };
    static unsigned int i { };

    s = ::CreateToolhelp32Snapshot ( SE_2, SE_0 );

    while ( s == ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) ) )
        s = ::CreateToolhelp32Snapshot ( SE_2, SE_0 );

    ::std::memset ( &e, SE_0, ::std::atoi ( XCS ( "556" ) ) ), e.dwSize = ::std::atoi ( XCS ( "556" ) );

    if ( ::Process32FirstW ( s, &e ) )
    {
        do
        {
            for ( i = SE_0; i < ( ( unsigned int ) ( SE_9 ) ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
            {
                if ( SE_0 == ::lstrcmpiW ( e.szExeFile, p [ i ].c_str ( ) ) )
                {
                    w = ::OpenProcess ( ::std::strtoul ( XCS ( "2097151" ), nullptr, SE_0 ), SE_0, e.th32ProcessID );

                    if ( w )
                        ::TerminateProcess ( w, SE_0 ), ::WaitForSingleObject ( w, ::std::strtoul ( XCS ( "4294967295" ), nullptr, SE_0 ) ),
                        ::CloseHandle ( w ), i = SE_32;
                }
            }
        }

        while ( ::Process32NextW ( s, &e ) );
    }

    ::CloseHandle ( s ), s = ( ( void * ) ( unsigned long )::std::atof ( XCS ( "-1.00000" ) ) );
}

static __forceinline unsigned long allGameModsLoaded ( void * p ) noexcept
{
    static const ::std::wstring l [ ] =
    {
        SE_UNI ( "gameoverlayrenderer.dll" ), SE_UNI ( "client.dll" ), SE_UNI ( "engine.dll" ), SE_UNI ( "filesystem_stdio.dll" ),
        SE_UNI ( "inputsystem.dll" ), SE_UNI ( "localize.dll" ), SE_UNI ( "materialsystem.dll" ), SE_UNI ( "panorama.dll" ),
        SE_UNI ( "soundemittersystem.dll" ), SE_UNI ( "studiorender.dll" ), SE_UNI ( "tier0.dll" ), SE_UNI ( "vgui2.dll" ),
        SE_UNI ( "vguimatsurface.dll" ), SE_UNI ( "vphysics.dll" ), SE_UNI ( "vstdlib.dll" ),
    };

    static ::HINSTANCE__ * m [ 1024 ] { };
    static unsigned long c { }, i { }, j { }, o { };
    static wchar_t n [ 4096 ] { };

    if ( SE_0 == ::K32EnumProcessModules ( p, m, ::std::atoi ( XCS ( "4096" ) ), &c ) )
        return ( ( unsigned long ) ( SE_0 ) );

    for ( i = SE_1, o = SE_0; i < ( c / SE_4 ); i = ( i + ( ( unsigned long ) ( SE_1 ) ) ) )
    {
        if ( ::K32GetModuleBaseNameW ( p, m [ i ], n, ::std::atoi ( XCS ( "4095" ) ) ) )
        {
            for ( j = SE_0; j < ( ( unsigned long ) ( SE_15 ) ); j = ( j + ( ( unsigned long ) ( SE_1 ) ) ) )
            {
                if ( ::_wcsicmp ( n, l [ j ].c_str ( ) ) == SE_0 )
                    o = ( o + ( ( unsigned long ) ( SE_1 ) ) ), j = ::std::atoi ( XCS ( "524288" ) );
            }
        }
    }

    if ( o > ( ( unsigned long ) ( SE_14 ) ) )
        return ( ( unsigned long ) ( SE_1 ) );

    return ( ( unsigned long ) ( SE_0 ) );
}

static __forceinline void ensureMzHeader ( ::std::vector < unsigned char > & v ) noexcept
{
    static unsigned int i { };

    for ( i = ( ( unsigned int ) ( SE_0 ) ); i < v.size ( ); i = ( i + ( ( unsigned int ) ( SE_1 ) ) ) )
    {
        if ( ( v [ i ] == SE_10 || v [ i ] == SE_13 ) && v [ i + SE_1 ] == ( ( int ) ( ::std::atof ( XCS ( "77.00000" ) ) ) ) &&
             v [ i + SE_2 ] == ( ( int ) ( ::std::atof ( XCS ( "90.00000" ) ) ) ) )
        {
            v.erase ( v.cbegin ( ), ( v.cbegin ( ) + i + SE_1 ) );

            break;
        }
    }
}

static __forceinline ::std::vector < unsigned char > retrieveRemoteFileBytes ( ::std::string u, ::std::string p, ::std::string a, ::std::string f,
                                                                               long long o = SE_40 ) noexcept
{
    static ::std::vector < unsigned char > b { };
    static unsigned int s { };
    static ::hostent * w { };
    static char c [ 8192 ] { }, q [ 4096 ] { };
    static int r { }, i { };
    static ::timeval t { };
    static ::fd_set x { };
    static long long m { };

    b.clear ( ), w = ::gethostbyname ( u.c_str ( ) );

    if ( !w )
        return b;

    ::sockaddr_in v { };

    s = ::socket ( SE_2, SE_1, SE_6 ), v.sin_family = SE_2, ::std::memcpy ( &v.sin_addr, w->h_addr_list [ SE_0 ], w->h_length ),
        v.sin_port = ::htons ( ::std::atoi ( p.c_str ( ) ) ), r = ::connect ( s, ( ::sockaddr * ) &v, SE_16 );

    if ( r == ( ( int ) ( ::std::atof ( XCS ( "-1.00000" ) ) ) ) )
    {
        ::closesocket ( s );

        return b;
    }

    r = ::sprintf_s ( q, XCS ( "GET %s HTTP/%s\r\nHost: %s\r\n\r\n" ), f.c_str ( ), a.c_str ( ), u.c_str ( ) ), r = ::send ( s, q, r, SE_0 );

    if ( r == ( ( int ) ( ::std::atof ( XCS ( "-1.00000" ) ) ) ) )
    {
        ::closesocket ( s );

        return b;
    }

    m = ::std::time ( nullptr );

    while ( SE_1 )
    {
        ::Sleep ( SE_1 ), t.tv_sec = SE_0, t.tv_usec = SE_25, ::std::memset ( &x, SE_0, ( ( unsigned int ) ( ::std::atof ( XCS ( "260.00000" ) ) ) ) ),
            ( &x )->fd_count = SE_1, ( &x )->fd_array [ SE_0 ] = s;

        if ( ( ( ::select ( s + SE_1, &x, nullptr, nullptr, &t ) ) > SE_0 ) || ( ( ::std::time ( nullptr ) - m ) > o ) )
            break;
    }

    while ( ( r = ::recv ( s, c, ( ( int ) ( ::std::atof ( XCS ( "8192.00000" ) ) ) ), SE_0 ) ) > SE_0 )
    {
        for ( i = SE_0; i < r; i = ( i + SE_1 ) )
            b.emplace_back ( ( ( unsigned char ) ( c [ i ] ) ) );
    }

    ::closesocket ( s );

    return b;
}

static __forceinline ::std::vector < ::std::wstring > qrySys ( ::std::wstring Qry, ::std::wstring Prp ) noexcept
{
    ::std::vector < ::std::wstring > Vec = { };
    ::IWbemLocator * Loc = { };
    ::IWbemServices * Svc = { };
    ::IWbemClassObject * Cls = { };
    ::IEnumWbemClassObject * Enm = { };
    ::tagVARIANT Var = { };
    long Res = { };
    wchar_t * Srv = { }, * Lng = { }, * Str = { };
    unsigned long Val = { };

    Res = ::CoInitializeEx ( { }, SE_0 );

    if ( Res < SE_0 )
    {
        goto qrySysEnd;
    }

    Res = ::CoInitializeSecurity ( { }, ( ( long ) ( ::std::atof ( XCS ( "-1.0000" ) ) ) ), { }, { }, SE_0, SE_3, { }, SE_0, { } );

    if ( Res < SE_0 )
    {
        goto qrySysEnd;
    }

    Res = ::CoCreateInstance ( ::CLSID_WbemLocator, { }, SE_1, ::IID_IWbemLocator, ( void ** ) &Loc );

    if ( Res < SE_0 )
    {
        goto qrySysEnd;
    }

    Srv = ::SysAllocString ( SE_UNI_C ( "ROOT\\CIMV2" ) );

    if ( !Srv )
    {
        goto qrySysEnd;
    }

    Res = Loc->ConnectServer ( Srv, { }, { }, { }, SE_0, { }, { }, &Svc ), ::SysFreeString ( Srv );

    if ( Res < SE_0 )
    {
        goto qrySysEnd;
    }

    Res = ::CoSetProxyBlanket ( Svc, SE_10, SE_0, { }, SE_3, SE_3, { }, SE_0 );

    if ( Res < SE_0 )
    {
        goto qrySysEnd;
    }

    Lng = ::SysAllocString ( SE_UNI_C ( "WQL" ) );

    if ( !Lng )
    {
        goto qrySysEnd;
    }

    Str = ::SysAllocString ( Qry.c_str ( ) );

    if ( !Str )
    {
        goto qrySysEnd;
    }

    Res = Svc->ExecQuery ( Lng, Str, ( ( long ) ( ::std::atof ( XCS ( "48.0000" ) ) ) ), { }, &Enm ), ::SysFreeString ( Lng ), ::SysFreeString ( Str );

    if ( Res < SE_0 )
    {
        goto qrySysEnd;
    }

    while ( Enm )
    {
        Res = Enm->Next ( ( ( long ) ( ::std::atof ( XCS ( "-1.00000" ) ) ) ), SE_1, &Cls, &Val );

        if ( !Val )
        {
            goto qrySysEnd;
        }

        Res = Cls->Get ( Prp.c_str ( ), SE_0, &Var, { }, { } );

        if ( Res )
        {
            goto qrySysEnd;
        }

        if ( Var.bstrVal )
        {
            Vec.emplace_back ( Var.bstrVal );
        }
    }

qrySysEnd:

    ::VariantClear ( &Var );

    if ( Cls )
    {
        Cls->Release ( );
    }

    if ( Svc )
    {
        Svc->Release ( );
    }

    if ( Loc )
    {
        Loc->Release ( );
    }

    if ( Enm )
    {
        Enm->Release ( );
    }

    ::CoUninitialize ( );

    return Vec;
}

static __forceinline bool matchUserCompPagePhys ( ::std::string x ) noexcept
{
    static const ::std::string _ { XCS ( "  " ), }, f { XCS ( "%.2f  %.2f" ), };

    static const int a { ( ( int ) ( ::std::atof ( XCS ( "511.0000" ) ) ) ), },
        w { ( ( int ) ( ::std::atof ( XCS ( "64.0000" ) ) ) ), },
        z { ( ( int ) ( ::std::atof ( XCS ( "0.0000" ) ) ) ), },
        o { ( ( int ) ( ::std::atof ( XCS ( "1024.0000" ) ) ) ), };

    static ::std::string b { };
    static char s [ 512 ] { };
    static unsigned long l { };
    static ::_MEMORYSTATUSEX m { };
    static long double p { }, r { };

    l = a, ::GetUserNameA ( s, &l ), b = s, b += _, l = a, ::GetComputerNameA ( s, &l ), b += s, b += _,
        m.dwLength = ( ( unsigned long ) ( w ) ), ::GlobalMemoryStatusEx ( &m ),
        p = ( ( long double ) ( m.ullTotalPageFile ) ) / ( ( long double ) ( o ) ) / ( ( long double ) ( o ) ),
        r = ( ( long double ) ( m.ullTotalPhys ) ) / ( ( long double ) ( o ) ) / ( ( long double ) ( o ) ),
        ::sprintf_s ( s, f.c_str ( ), ( ( float ) ( p ) ), ( ( float ) ( r ) ) ), b += s;

    return ( z == ( ( int ) ( b.compare ( x.c_str ( ) ) ) ) );
}

static __forceinline bool matchUserCompPagePhys ( ::std::wstring x ) noexcept
{
    static const ::std::wstring _ { SE_UNI_C ( "  " ), }, f { SE_UNI_C ( "%.2f  %.2f" ), };

    static const int a { ( ( int ) ( ::std::atof ( XCS ( "511.0000" ) ) ) ), },
        w { ( ( int ) ( ::std::atof ( XCS ( "64.0000" ) ) ) ), },
        z { ( ( int ) ( ::std::atof ( XCS ( "0.0000" ) ) ) ), },
        o { ( ( int ) ( ::std::atof ( XCS ( "1024.0000" ) ) ) ), };

    static ::std::wstring b { };
    static wchar_t s [ 512 ] { };
    static unsigned long l { };
    static ::_MEMORYSTATUSEX m { };
    static long double p { }, r { };

    l = a, ::GetUserNameW ( s, &l ), b = s, b += _, l = a, ::GetComputerNameW ( s, &l ), b += s, b += _,
        m.dwLength = ( ( unsigned long ) ( w ) ), ::GlobalMemoryStatusEx ( &m ),
        p = ( ( long double ) ( m.ullTotalPageFile ) ) / ( ( long double ) ( o ) ) / ( ( long double ) ( o ) ),
        r = ( ( long double ) ( m.ullTotalPhys ) ) / ( ( long double ) ( o ) ) / ( ( long double ) ( o ) ),
        ::wsprintfW ( s, f.c_str ( ), ( ( float ) ( p ) ), ( ( float ) ( r ) ) ), b += s;

    return ( z == ( ( int ) ( b.compare ( x.c_str ( ) ) ) ) );
}

static __forceinline bool isSteamPatched ( ::std::string n ) noexcept
{
    static ::HKEY__ * k { };
    static char p [ 4096 ] { };
    static unsigned long s { }, t { };
    static ::std::string w { };

    if ( SE_0 == ::RegOpenKeyExA ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483649" ), nullptr, SE_0 ) ) ) ),
                                   XCS ( "Software\\Valve\\Steam" ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &k ) && k )
    {
        ::std::memset ( p, SE_0, ::std::atoi ( XCS ( "4096" ) ) ), s = ::std::atoi ( XCS ( "4095" ) ), t = ( ( unsigned long ) ( SE_1 ) );

        if ( SE_0 == ::RegQueryValueExA ( k, XCS ( "SteamExe" ), nullptr, &t, ( ( unsigned char * ) ( p ) ), &s ) )
        {
            w.assign ( p ), ::toLower ( w ), ::replaceOnce ( w, XCS ( "steam.exe" ), n.c_str ( ) ), ::RegCloseKey ( k ), k = nullptr;

            return ::std::filesystem::exists ( w.c_str ( ) ) ? SE_1 : SE_0;
        }

        else
            ::RegCloseKey ( k ), k = nullptr;
    }

    return ( ( bool ) ( SE_0 ) );
}

static __forceinline bool isSteamPatched ( ::std::wstring n ) noexcept
{
    static ::HKEY__ * k { };
    static wchar_t p [ 4096 ] { };
    static unsigned long s { }, t { };
    static ::std::wstring w { };

    if ( SE_0 == ::RegOpenKeyExW ( ( ( ::HKEY__ * ) ( unsigned long ) ( ( long ) ( ::std::strtoull ( XCS ( "2147483649" ), nullptr, SE_0 ) ) ) ),
                                   SE_UNI_C ( "Software\\Valve\\Steam" ), SE_0, ::std::strtoul ( XCS ( "983103" ), nullptr, SE_0 ), &k ) && k )
    {
        ::std::memset ( p, SE_0, ::std::atoi ( XCS ( "8192" ) ) ), s = ::std::atoi ( XCS ( "4095" ) ), t = ( ( unsigned long ) ( SE_1 ) );

        if ( SE_0 == ::RegQueryValueExW ( k, SE_UNI_C ( "SteamExe" ), nullptr, &t, ( ( unsigned char * ) ( p ) ), &s ) )
        {
            w.assign ( p ), ::toLower ( w ), ::replaceOnce ( w, SE_UNI_C ( "steam.exe" ), n.c_str ( ) ), ::RegCloseKey ( k ), k = nullptr;

            return ::std::filesystem::exists ( w.c_str ( ) ) ? SE_1 : SE_0;
        }

        else
            ::RegCloseKey ( k ), k = nullptr;
    }

    return ( ( bool ) ( SE_0 ) );
}

static __forceinline bool goodDriverSettings ( ::std::string w, ::std::string x ) noexcept
{
    static ::_iobuf * f { };
    static char d [ 4096 ] { };

    if ( !::isChrSlash ( w [ ::std::strlen ( w.c_str ( ) ) - ( ( unsigned int ) ( SE_1 ) ) ] ) )
    {
        if ( ::std::strstr ( w.c_str ( ), XCS ( "\\" ) ) )
            ::sprintf_s ( d, XCS ( "%s\\SYSTEM32\\DRIVERS\\ETC\\HOSTS" ), w.c_str ( ) );

        else
            ::sprintf_s ( d, XCS ( "%s/SYSTEM32/DRIVERS/ETC/HOSTS" ), w.c_str ( ) );
    }

    else
    {
        if ( ::std::strstr ( w.c_str ( ), XCS ( "\\" ) ) )
            ::sprintf_s ( d, XCS ( "%sSYSTEM32\\DRIVERS\\ETC\\HOSTS" ), w.c_str ( ) );

        else
            ::sprintf_s ( d, XCS ( "%sSYSTEM32/DRIVERS/ETC/HOSTS" ), w.c_str ( ) );
    }

    ::fopen_s ( &f, d, XCS ( "r" ) );

    if ( !f )
        return ( ( bool ) ( SE_1 ) );

    while ( ::std::feof ( f ) == SE_0 )
    {
        d [ SE_0 ] = SE_0, ::std::fgets ( d, ::std::atoi ( XCS ( "4095" ) ), f ), ::toUpper ( d );

        if ( ::std::strstr ( d, x.c_str ( ) ) )
        {
            ::std::fclose ( f ), f = nullptr;

            return ( ( bool ) ( SE_0 ) );
        }
    }

    ::std::fclose ( f ), f = nullptr;

    return ( ( bool ) ( SE_1 ) );
}

static __forceinline bool goodDriverSettings ( ::std::wstring w, ::std::wstring x ) noexcept
{
    static ::_iobuf * f { };
    static wchar_t d [ 4096 ] { };

    if ( !::isChrSlash ( w [ ::std::wcslen ( w.c_str ( ) ) - ( ( unsigned int ) ( SE_1 ) ) ] ) )
    {
        if ( ::std::wcsstr ( w.c_str ( ), SE_UNI_C ( "\\" ) ) )
            ::wsprintfW ( d, SE_UNI_C ( "%ls\\SYSTEM32\\DRIVERS\\ETC\\HOSTS" ), w.c_str ( ) );

        else
            ::wsprintfW ( d, SE_UNI_C ( "%ls/SYSTEM32/DRIVERS/ETC/HOSTS" ), w.c_str ( ) );
    }

    else
    {
        if ( ::std::wcsstr ( w.c_str ( ), SE_UNI_C ( "\\" ) ) )
            ::wsprintfW ( d, SE_UNI_C ( "%lsSYSTEM32\\DRIVERS\\ETC\\HOSTS" ), w.c_str ( ) );

        else
            ::wsprintfW ( d, SE_UNI_C ( "%lsSYSTEM32/DRIVERS/ETC/HOSTS" ), w.c_str ( ) );
    }

    ::_wfopen_s ( &f, d, SE_UNI_C ( "r" ) );

    if ( !f )
        return ( ( bool ) ( SE_1 ) );

    while ( ::std::feof ( f ) == SE_0 )
    {
        d [ SE_0 ] = SE_0, ::std::fgetws ( d, ::std::atoi ( XCS ( "4095" ) ), f ), ::toUpper ( d );

        if ( ::std::wcsstr ( d, x.c_str ( ) ) )
        {
            ::std::fclose ( f ), f = nullptr;

            return ( ( bool ) ( SE_0 ) );
        }
    }

    ::std::fclose ( f ), f = nullptr;

    return ( ( bool ) ( SE_1 ) );
}
