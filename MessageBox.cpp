#undef UNICODE
#define UNICODE
#include <windows.h>

int main()
{
    MessageBox( 0, L"Message", L"Title", 0 );
    return 0;
}
