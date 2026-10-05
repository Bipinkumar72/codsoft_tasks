#include <windows.h>
#include <string>
#include <sstream>

#define ID_NUM1 101
#define ID_NUM2 102
#define ID_ADD  103
#define ID_SUB  104
#define ID_MUL  105
#define ID_DIV  106
#define ID_RESULT 107

HWND hNum1, hNum2, hResult;

void Calculate(char operation)
{
    char num1Text[100], num2Text[100];

    GetWindowTextA(hNum1, num1Text, 100);
    GetWindowTextA(hNum2, num2Text, 100);

    try
    {
        double num1 = std::stod(num1Text);
        double num2 = std::stod(num2Text);
        double result = 0;

        switch (operation)
        {
            case '+':
                result = num1 + num2;
                break;

            case '-':
                result = num1 - num2;
                break;

            case '*':
                result = num1 * num2;
                break;

            case '/':
                if (num2 == 0)
                {
                    SetWindowTextA(hResult, "Cannot divide by zero!");
                    return;
                }
                result = num1 / num2;
                break;
        }

        std::ostringstream output;
        output << result;

        SetWindowTextA(hResult, output.str().c_str());
    }
    catch (...)
    {
        SetWindowTextA(hResult, "Enter valid numbers!");
    }
}

LRESULT CALLBACK WindowProcedure(
    HWND hwnd,
    UINT msg,
    WPARAM wp,
    LPARAM lp)
{
    switch (msg)
    {
        case WM_CREATE:

            CreateWindowA(
                "STATIC",
                "SIMPLE CALCULATOR",
                WS_VISIBLE | WS_CHILD,
                170, 25, 250, 40,
                hwnd, NULL, NULL, NULL
            );

            CreateWindowA(
                "STATIC",
                "First Number:",
                WS_VISIBLE | WS_CHILD,
                70, 100, 120, 25,
                hwnd, NULL, NULL, NULL
            );

            hNum1 = CreateWindowA(
                "EDIT",
                "",
                WS_VISIBLE | WS_CHILD | WS_BORDER,
                200, 95, 250, 30,
                hwnd,
                (HMENU)ID_NUM1,
                NULL,
                NULL
            );

            CreateWindowA(
                "STATIC",
                "Second Number:",
                WS_VISIBLE | WS_CHILD,
                70, 150, 120, 25,
                hwnd, NULL, NULL, NULL
            );

            hNum2 = CreateWindowA(
                "EDIT",
                "",
                WS_VISIBLE | WS_CHILD | WS_BORDER,
                200, 145, 250, 30,
                hwnd,
                (HMENU)ID_NUM2,
                NULL,
                NULL
            );

            CreateWindowA(
                "BUTTON",
                "+",
                WS_VISIBLE | WS_CHILD,
                100, 210, 70, 40,
                hwnd,
                (HMENU)ID_ADD,
                NULL,
                NULL
            );

            CreateWindowA(
                "BUTTON",
                "-",
                WS_VISIBLE | WS_CHILD,
                190, 210, 70, 40,
                hwnd,
                (HMENU)ID_SUB,
                NULL,
                NULL
            );

            CreateWindowA(
                "BUTTON",
                "×",
                WS_VISIBLE | WS_CHILD,
                280, 210, 70, 40,
                hwnd,
                (HMENU)ID_MUL,
                NULL,
                NULL
            );

            CreateWindowA(
                "BUTTON",
                "÷",
                WS_VISIBLE | WS_CHILD,
                370, 210, 70, 40,
                hwnd,
                (HMENU)ID_DIV,
                NULL,
                NULL
            );

            CreateWindowA(
                "STATIC",
                "Result:",
                WS_VISIBLE | WS_CHILD,
                70, 290, 100, 25,
                hwnd, NULL, NULL, NULL
            );

            hResult = CreateWindowA(
                "EDIT",
                "",
                WS_VISIBLE | WS_CHILD | WS_BORDER | ES_READONLY,
                200, 285, 250, 35,
                hwnd,
                (HMENU)ID_RESULT,
                NULL,
                NULL
            );

            break;

        case WM_COMMAND:

            switch (LOWORD(wp))
            {
                case ID_ADD:
                    Calculate('+');
                    break;

                case ID_SUB:
                    Calculate('-');
                    break;

                case ID_MUL:
                    Calculate('*');
                    break;

                case ID_DIV:
                    Calculate('/');
                    break;
            }

            break;

        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProcA(hwnd, msg, wp, lp);
    }

    return 0;
}

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    WNDCLASSA wc = {};

    wc.hInstance = hInstance;
    wc.lpfnWndProc = WindowProcedure;
    wc.lpszClassName = "CalculatorWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);

    RegisterClassA(&wc);

    HWND hwnd = CreateWindowA(
        "CalculatorWindow",
        "Simple Calculator",
        WS_OVERLAPPEDWINDOW,
        400, 150,
        550, 400,
        NULL,
        NULL,
        hInstance,
        NULL
    );

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    MSG msg;

    while (GetMessageA(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }

    return 0;
}