// omok.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "omok.h"

LRESULT CALLBACK DlgProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM IParam)
// HWND는 띄울 창, MSG는 클릭이나 닫기의 값을 비교
{
    if (msg == WM_PAINT) {
        
    }
    else if (msg == WM_CLOSE) {
        DestroyWindow(hwnd);
    }

    return 0;
}

// 윈도우 전용 main함수 (시작점)
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                                    _In_opt_ HINSTANCE hPrevInstance,
                                    _In_ LPWSTR    lpCmdLine,
                                    _In_ int       nCmdShow)
{
    DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgProc);
    return 0;
}