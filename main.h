#ifndef __main__
#define __main__

#include <wx/wx.h>
#include "gui.h"


class MainApp : public wxApp
{
public:
	virtual bool OnInit();
};

DECLARE_APP(MainApp)

class MainFrame : public MainFrameBase {
public:
	MainFrame(wxWindow* parent);
	virtual ~MainFrame();
private:
	void OnQuit(wxCommandEvent& event);
	void OnListBox1Select(wxCommandEvent& event);
	void OnChoice1Select(wxCommandEvent& event);
	void OnRadioBox1Select(wxCommandEvent& event);
	void OnCheckBox1Click(wxCommandEvent& event);
};

#endif //__main__
