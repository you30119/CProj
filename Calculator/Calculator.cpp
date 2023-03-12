// calculator.cpp : 애플리케이션에 대한 진입점을 정의합니다.
//

#include "framework.h"
#include "calculator.h"

// #define : 상수 치환 (내가 알아보기 쉬운 단어로 치환)
// ADD 를 쓰면 1로 인식
#define NONE 0
#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4

HWND g_hDlg;

void Oper(int first_num, int oper) {
	int num = GetDlgItemInt(g_hDlg, IDC_EDIT1, 0, TRUE);
	if (oper == ADD) {
		SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num + num, TRUE);
	}
	else if (oper == SUB) {
		SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num - num, TRUE);
	}
	else if (oper == MUL) {
		SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num * num, TRUE);
	}
	else if (oper == DIV) {
		if (num != 0) {
			SetDlgItemInt(g_hDlg, IDC_EDIT1, first_num / num, TRUE);
		}
		else {
			SetDlgItemInt(g_hDlg, IDC_EDIT1, 0, TRUE);
		}
	}
}

void NumBtn(int number, int* p_reset_flag) {
	if (*p_reset_flag == 0) {
		int num = GetDlgItemInt(g_hDlg, IDC_EDIT1, 0, TRUE);
		SetDlgItemInt(g_hDlg, IDC_EDIT1, num * 10 + number, TRUE);
	}
	else {
		SetDlgItemInt(g_hDlg, IDC_EDIT1, number, TRUE);
		*p_reset_flag = 0;
	}
}

INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	// 플래그 : 어떤 연산기호가 눌린 상태인지, 연산기호가 이전에 눌렸었는지(숫자 새로쓰기 여부 판단)
	// static : 함수가 끝나도 공간이 삭제되지 않는 지역변수 (유사 전역변수)
	static int oper;               // 0 : 안눌림, 1 : 더하기, 2 : 빼기, 3 : 곱하기, 4 : 나누기
	static int reset_flag;             // 0 : 안눌림, 1 : 연산기호눌림
	static int first_num;
	g_hDlg = hDlg;
	switch (message)
	{
	case WM_INITDIALOG:
		// 처음 실행하면 동작하는 부분
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		int key = LOWORD(wParam);
		if (key == IDCANCEL)
		{
			// 취소버튼을 누르면 동작할 코드
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		else if (key == IDOK) {
			// 확인버튼을 누르면 동작할 코드 (=)
			if (oper == ADD) {
				// 화면에 있는 값을 변수로 저장해서 -> 백업한 값과 더하기하고 -> 화면에 보여준다
				int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
				SetDlgItemInt(hDlg, IDC_EDIT1, first_num + num, TRUE);
			}
			else if (oper == SUB) {
				int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
				SetDlgItemInt(hDlg, IDC_EDIT1, first_num - num, TRUE);
			}
			else if (oper == MUL) {
				int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
				SetDlgItemInt(hDlg, IDC_EDIT1, first_num * num, TRUE);
			}
			else if (oper == DIV) {
				int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
				if (num != 0) {
					SetDlgItemInt(hDlg, IDC_EDIT1, first_num / num, TRUE);
				}
				else {
					SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
				}
			}
			oper = NONE;
			reset_flag = 1;			// = 버튼 누르면 값을 새로 쓰겠다
		}
		else if (key == IDC_BUTTON0) {
			NumBtn(0, &reset_flag);
		}
		else if (key == IDC_BUTTON1) {
			NumBtn(1, &reset_flag);
		}
		else if (key == IDC_BUTTON2) {
			NumBtn(2, &reset_flag);
		}
		else if (key == IDC_BUTTON3) {
			NumBtn(3, &reset_flag);
		}
		else if (key == IDC_BUTTON4) {
			NumBtn(4, &reset_flag);
		}
		else if (key == IDC_BUTTON5) {
			NumBtn(5, &reset_flag);
		}
		else if (key == IDC_BUTTON6) {
			NumBtn(6, &reset_flag);
		}
		else if (key == IDC_BUTTON7) {
			NumBtn(7, &reset_flag);
		}
		else if (key == IDC_BUTTON8) {
			NumBtn(8, &reset_flag);
		}
		else if (key == IDC_BUTTON9) {
			NumBtn(9, &reset_flag);
		}
		else if (key == IDC_CLEAR) {
			reset_flag = 0;
			oper = NONE;
			SetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
		}
		else if (key == IDC_BACK) {
			int num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
			SetDlgItemInt(hDlg, IDC_EDIT1, num / 10, TRUE);
		}
		else if (key == IDC_ADD) {
			first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
			reset_flag = 1;
			oper = ADD;       // 1
		}
		else if (key == IDC_SUB) {
			first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
			reset_flag = 1;
			oper = SUB;       // 2
		}
		else if (key == IDC_MUL) {
			first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
			reset_flag = 1;
			oper = MUL;       // 3
		}
		else if (key == IDC_DIV) {
			first_num = GetDlgItemInt(hDlg, IDC_EDIT1, 0, TRUE);
			reset_flag = 1;
			oper = DIV;       // 4

		}
		break;
	}
	return (INT_PTR)FALSE;
}


int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), 0, DlgProc);
	return 0;
}
