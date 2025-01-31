///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "gui.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 500,300 ), wxSize( 500,300 ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	StaticText1 = new wxStaticText( this, wxID_ANY, wxT("Выберите чего-нибудь"), wxDefaultPosition, wxDefaultSize, 0 );
	StaticText1->Wrap( -1 );
	bSizer2->Add( StaticText1, 0, wxALL, 5 );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );

	CheckBox1 = new wxCheckBox( this, wxID_ANY, wxT("C++"), wxDefaultPosition, wxDefaultSize, 0 );
	CheckBox1->SetValue(true);
	bSizer3->Add( CheckBox1, 0, wxALL, 5 );

	ListBox1 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	ListBox1->Append( wxT("C") );
	ListBox1->Append( wxT("C++") );
	ListBox1->Append( wxT("Java") );
	ListBox1->Append( wxT("C#") );
	ListBox1->Append( wxT("Python") );
	ListBox1->Append( wxT("Delphi") );
	bSizer3->Add( ListBox1, 0, wxALL, 5 );

	wxString Choice1Choices[] = { wxT("C"), wxT("C++"), wxT("Java"), wxT("C#"), wxT("Python"), wxT("Delphi") };
	int Choice1NChoices = sizeof( Choice1Choices ) / sizeof( wxString );
	Choice1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, Choice1NChoices, Choice1Choices, 0 );
	Choice1->SetSelection( 1 );
	bSizer3->Add( Choice1, 0, wxALL, 5 );

	wxString RadioBox1Choices[] = { wxT("C"), wxT("C++"), wxT("Java"), wxT("C#"), wxT("Python"), wxT("Delphi") };
	int RadioBox1NChoices = sizeof( RadioBox1Choices ) / sizeof( wxString );
	RadioBox1 = new wxRadioBox( this, wxID_ANY, wxT("wxRadioBox"), wxDefaultPosition, wxDefaultSize, RadioBox1NChoices, RadioBox1Choices, 1, wxRA_SPECIFY_COLS );
	RadioBox1->SetSelection( 1 );
	bSizer3->Add( RadioBox1, 0, wxALL, 5 );


	bSizer2->Add( bSizer3, 1, wxEXPAND, 5 );

	Button1 = new wxButton( this, wxID_ANY, wxT("Выход"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer2->Add( Button1, 0, wxALIGN_RIGHT|wxALL, 5 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	CheckBox1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainFrameBase::OnCheckBox1Click ), NULL, this );
	ListBox1->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBox1Select ), NULL, this );
	Choice1->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MainFrameBase::OnChoice1Select ), NULL, this );
	RadioBox1->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnRadioBox1Select ), NULL, this );
	Button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnQuit ), NULL, this );
}

MainFrameBase::~MainFrameBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( MainFrameBase::OnCloseFrame ) );
	CheckBox1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( MainFrameBase::OnCheckBox1Click ), NULL, this );
	ListBox1->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnListBox1Select ), NULL, this );
	Choice1->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( MainFrameBase::OnChoice1Select ), NULL, this );
	RadioBox1->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( MainFrameBase::OnRadioBox1Select ), NULL, this );
	Button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MainFrameBase::OnQuit ), NULL, this );

}
