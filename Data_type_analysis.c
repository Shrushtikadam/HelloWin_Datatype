#include <Windows.h> 

void Test(void); 

void Test(void)
{
    WNDCLASSEX wnd; 

    wnd.cbSize; // UINT 
    wnd.cbClsExtra; // INT 
    wnd.cbWndExtra; // INT 
    wnd.hbrBackground; // HBRUSH 
}


// HDGDIOBJECT __stdcall GetStockObject(int);
// GetStockObject API returns a handle to a stock object. 
// Stock objects are built in resources of various kinds. 
// Every stock object is fundamentally defined as a GDI OBJECT 
// HGDIOBJECT is a HANDLE to GDIOBJECT 
// if a STOCKOBJECT resource is created in memory then we share 
// its handle to a client. The type of that handle is 
// HGDIOBJECT 

// GetStockQuadrilateral(int TYPE); 

// GetStockQadrilateral(SQUARE); 
// GetStockQuadrilateral(RECTANGLE);
// GetStockQuadrilateral(RHOMBUS); 

// HQUADRILATERAL GetStockQuadrilateral(UINT uQuadType); 

// HSQUARE hsq = (HSQUARE)GetStockQuadrilateral(SQUARE); 


LRESULT WndProc(HWND, UINT, WPARAM, LPARAM); 

typedef struct tagWNDCLASSEXW WNDCLASSEX; 

struct tagWNDCLASSEXW
{
    UINT cbSize; 
    INT cbClsExtra; 
    INT cbWndExtra; 

    HBRUSH hbrBackground; 
    HCURSOR hCursor; 
    HICON hIcon; 
    HICON hIconSm; 
    HINSTANCE hInstance; 

    LRESULT (*lpfnWndProc)(HWND, UINT, WPARAM, LPARAM); 

    LPCWSTR lpszClassName; // const wchar_t* lpszClassName
    LPCWSTR lpszMenuName;   // const wchar_t* lpszMenuName; 

    DWORD stye; 

}; 

WNDCLASSEX wnd; 

// ZeroMemory(&wnd, sizeof(WNDCLASSEX)); 
// wnd.cbSize = sizeof(WNDCLASSEX); 
// wnd.cbClsExtra = 0; 
// wnd.cbWndExtra = 0; 
// wnd.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); 
// wnd.hCursor = LoadCursor(NULL, IDC_ARROW); 
// wnd.hIcon = LoadIcon(NULL, IDI_APPLICATION); 
// wnd.hIconSm = LoadIcon(NULL, IDI_APPLICATION); 
// wnd.hInstance = hInstance; 

struct tagBook
{
    char* lpszBookName; 
}; 

typedef struct tagBook BOOK; 

void Test2(void)
{
    BOOK bk; 

    bk.lpszBookName = "Hello"; 
}

// POINTER TO CONST 

struct tagBook{
    const char* lpszBookName;
}; 

typedef struct tagBook BOOK; 

void Test3(void)
{
    BOOK bk; 

    ZeroMemory(&bk, sizeof(BOOK)); 

    bk.lpszBookName = "Programming Windows!"; 
}

// pointer to const of type wchar_t 

struct tagBook{
    const wchar_t* lpszBookName; 
}; 

typedef struct tagBook BOOK; 

void Test4(void)
{
    BOOK bk; 

    ZeroMemory(&bk, sizeof(BOOK)); 

    bk.lpszBookName = TEXT("Programming Windows!"); 
}

typedef char CHAR; 

typedef CHAR* LPSTR; 
typedef const CHAR* LPCSTR; 
// char* | LPSTR 
// const char* | LPCSTR 

typedef short SHORT;

typedef SHORT* LPWSTR;
typedef const SHORT* LPCWSTR;  

// STR -> ASCII CHARACTER STRING 
// WSTR -> WIDE CHARACTER STRING 

// LPSTR 
// LPWSTR 

// LPCSTR 
// LPCWSTR