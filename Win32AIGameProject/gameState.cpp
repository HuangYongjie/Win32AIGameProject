#include "gameState.h"



void rePaint(HWND& hw) {
    PAINTSTRUCT ps;
    HDC hdc = BeginPaint(hw, &ps);

    RECT rect{ 300, 200, 600, 400 };
    HBRUSH hb = CreateSolidBrush(RGB(100, 100, 200));
    FillRect(hdc, &rect, hb);

    EndPaint(hw, &ps);

}

gameState::gameState()
{
    
}
