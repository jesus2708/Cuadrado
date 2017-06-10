#pragma once  //______________________________________ Cuadrado.h  
#include "Resource.h"
class Cuadrado: public Win::Dialog
{
public:
	Cuadrado()
	{
	}
	~Cuadrado()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxNumero;
	Win::Textbox tbxCuadrado2;
	Win::Button btCalcular;
	Win::Label lb1;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(14.81667);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.87854);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Cuadrado";
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.08479, 1.08479, 3.25438, 0.60854, hWnd, 1000);
		tbxCuadrado2.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 6.05896, 1.08479, 3.75708, 0.60854, hWnd, 1001);
		btCalcular.CreateX(NULL, L"calcular", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 11.21833, 1.08479, 3.41313, 0.60854, hWnd, 1002);
		lb1.CreateX(NULL, L"2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 4.31271, 0.66146, 0.44979, 0.60854, hWnd, 1003);
		lb2.CreateX(NULL, L"=", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 4.84187, 1.08479, 0.71437, 0.60854, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxNumero.Font = fontArial009A;
		tbxCuadrado2.Font = fontArial009A;
		btCalcular.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
	}
	//_________________________________________________
	void btCalcular_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btCalcular.IsEvent(e, BN_CLICKED)) {btCalcular_Click(e); return true;}
		return false;
	}
};
