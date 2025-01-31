#include "main.h"
#include "tsnsoft.xpm" // Подключаем иконку
#include <locale>
#include <wx/intl.h>

// initialize the application
IMPLEMENT_APP(MainApp);

////////////////////////////////////////////////////////////////////////////////
// application class implementation
////////////////////////////////////////////////////////////////////////////////

bool MainApp::OnInit() {
	SetTopWindow(new MainFrame(NULL));
	GetTopWindow()->Show(); // Отображаем окно
	GetTopWindow()->Center(); // Центрируем окно
	return true;
}

////////////////////////////////////////////////////////////////////////////////
// main application frame implementation
////////////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow* parent)
: MainFrameBase(parent) {
	wxInitAllImageHandlers();
	this->SetIcon(wxIcon(tsnsoft_xpm)); // Устанавливаем иконку для формы
}

MainFrame::~MainFrame() {
}

