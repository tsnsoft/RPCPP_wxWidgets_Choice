#include "main.h"
#include <wx/msgdlg.h>

// Обработчик выбора элемента в ListBox
void MainFrame::OnListBox1Select(wxCommandEvent& event) {
	int i = ListBox1->GetSelection(); // Получаем индекс выбранного элемента
	wxString s = ListBox1->GetString(i); // Получаем строку выбранного элемента
	StaticText1->SetLabel(s); // Устанавливаем текст статического элемента
}

// Обработчик выбора элемента в Choice (выпадающем списке)
void MainFrame::OnChoice1Select(wxCommandEvent& event) {
	int i = Choice1->GetSelection(); // Получаем индекс выбранного элемента
	wxString s = Choice1->GetString(i); // Получаем строку выбранного элемента
	StaticText1->SetLabel(s); // Устанавливаем текст статического элемента
}

// Обработчик выбора варианта в RadioBox
void MainFrame::OnRadioBox1Select(wxCommandEvent& event) {
	int k = RadioBox1->GetSelection(); // Получаем индекс выбранного элемента
	wxString s = RadioBox1->GetString(k); // Получаем строку выбранного элемента
	StaticText1->SetLabel(s); // Устанавливаем текст статического элемента
}

// Обработчик нажатия на CheckBox
void MainFrame::OnCheckBox1Click(wxCommandEvent& event) {
	bool b = CheckBox1->GetValue(); // Получаем текущее состояние чекбокса
	if (b == true) {
		StaticText1->SetLabel(wxString::FromUTF8("Да!")); // Устанавливаем "Да!" если включен
	} else {
		StaticText1->SetLabel(wxString::FromUTF8("Нет!")); // Устанавливаем "Нет!" если выключен
	}
}

// Обработчик выхода из приложения
void MainFrame::OnQuit(wxCommandEvent& event) {
	Close(); // Закрываем окно приложения
}
