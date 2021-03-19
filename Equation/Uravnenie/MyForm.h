#pragma once
#include <iostream>
#include <string>     
#include <math.h>
namespace Uravnenie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClear;
	protected:

	protected:
	private: System::Windows::Forms::TextBox^ txta;
	private: System::Windows::Forms::TextBox^ txtb;
	private: System::Windows::Forms::TextBox^ txtc;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnRes;
	private: System::Windows::Forms::TextBox^ txtx1;
	private: System::Windows::Forms::TextBox^ txtx2;
	private: System::Windows::Forms::Label^ lbla;
	private: System::Windows::Forms::Label^ lblb;
	private: System::Windows::Forms::Label^ lblc;
	private: System::Windows::Forms::Label^ lblMes;
	private: System::Windows::Forms::Label^ lblx1;
	private: System::Windows::Forms::Label^ lblx2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->txta = (gcnew System::Windows::Forms::TextBox());
			this->txtb = (gcnew System::Windows::Forms::TextBox());
			this->txtc = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnRes = (gcnew System::Windows::Forms::Button());
			this->txtx1 = (gcnew System::Windows::Forms::TextBox());
			this->txtx2 = (gcnew System::Windows::Forms::TextBox());
			this->lbla = (gcnew System::Windows::Forms::Label());
			this->lblb = (gcnew System::Windows::Forms::Label());
			this->lblc = (gcnew System::Windows::Forms::Label());
			this->lblMes = (gcnew System::Windows::Forms::Label());
			this->lblx1 = (gcnew System::Windows::Forms::Label());
			this->lblx2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(187, 100);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(73, 65);
			this->btnClear->TabIndex = 0;
			this->btnClear->Text = L"Сброс";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// txta
			// 
			this->txta->Location = System::Drawing::Point(42, 20);
			this->txta->Name = L"txta";
			this->txta->Size = System::Drawing::Size(100, 20);
			this->txta->TabIndex = 1;
			this->txta->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txta_KeyPress);
			// 
			// txtb
			// 
			this->txtb->Location = System::Drawing::Point(42, 46);
			this->txtb->Name = L"txtb";
			this->txtb->Size = System::Drawing::Size(100, 20);
			this->txtb->TabIndex = 2;
			this->txtb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txta_KeyPress);
			// 
			// txtc
			// 
			this->txtc->Location = System::Drawing::Point(42, 69);
			this->txtc->Name = L"txtc";
			this->txtc->Size = System::Drawing::Size(100, 20);
			this->txtc->TabIndex = 3;
			this->txtc->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txta_KeyPress);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(392, 119);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(60, 46);
			this->btnClose->TabIndex = 4;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnRes
			// 
			this->btnRes->Location = System::Drawing::Point(20, 100);
			this->btnRes->Name = L"btnRes";
			this->btnRes->Size = System::Drawing::Size(122, 65);
			this->btnRes->TabIndex = 5;
			this->btnRes->Text = L"Решить";
			this->btnRes->UseVisualStyleBackColor = true;
			this->btnRes->Click += gcnew System::EventHandler(this, &MyForm::btnRes_Click);
			// 
			// txtx1
			// 
			this->txtx1->Enabled = false;
			this->txtx1->Location = System::Drawing::Point(214, 20);
			this->txtx1->Name = L"txtx1";
			this->txtx1->Size = System::Drawing::Size(67, 20);
			this->txtx1->TabIndex = 6;
			this->txtx1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txta_KeyPress);
			// 
			// txtx2
			// 
			this->txtx2->Enabled = false;
			this->txtx2->Location = System::Drawing::Point(214, 73);
			this->txtx2->Name = L"txtx2";
			this->txtx2->Size = System::Drawing::Size(67, 20);
			this->txtx2->TabIndex = 7;
			this->txtx2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txta_KeyPress);
			// 
			// lbla
			// 
			this->lbla->AutoSize = true;
			this->lbla->Location = System::Drawing::Point(17, 20);
			this->lbla->Name = L"lbla";
			this->lbla->Size = System::Drawing::Size(19, 13);
			this->lbla->TabIndex = 8;
			this->lbla->Text = L"a=";
			// 
			// lblb
			// 
			this->lblb->AutoSize = true;
			this->lblb->Location = System::Drawing::Point(17, 46);
			this->lblb->Name = L"lblb";
			this->lblb->Size = System::Drawing::Size(19, 13);
			this->lblb->TabIndex = 9;
			this->lblb->Text = L"b=";
			// 
			// lblc
			// 
			this->lblc->AutoSize = true;
			this->lblc->Location = System::Drawing::Point(17, 72);
			this->lblc->Name = L"lblc";
			this->lblc->Size = System::Drawing::Size(19, 13);
			this->lblc->TabIndex = 10;
			this->lblc->Text = L"c=";
			// 
			// lblMes
			// 
			this->lblMes->AutoSize = true;
			this->lblMes->Location = System::Drawing::Point(184, 43);
			this->lblMes->Name = L"lblMes";
			this->lblMes->Size = System::Drawing::Size(120, 13);
			this->lblMes->TabIndex = 11;
			this->lblMes->Text = L"Введите числа a, b и c";
			this->lblMes->Click += gcnew System::EventHandler(this, &MyForm::lblMes_Click);
			// 
			// lblx1
			// 
			this->lblx1->AutoSize = true;
			this->lblx1->Location = System::Drawing::Point(184, 23);
			this->lblx1->Name = L"lblx1";
			this->lblx1->Size = System::Drawing::Size(24, 13);
			this->lblx1->TabIndex = 12;
			this->lblx1->Text = L"x1=";
			// 
			// lblx2
			// 
			this->lblx2->AutoSize = true;
			this->lblx2->Location = System::Drawing::Point(184, 76);
			this->lblx2->Name = L"lblx2";
			this->lblx2->Size = System::Drawing::Size(24, 13);
			this->lblx2->TabIndex = 13;
			this->lblx2->Text = L"x2=";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 174);
			this->Controls->Add(this->lblx2);
			this->Controls->Add(this->lblx1);
			this->Controls->Add(this->lblMes);
			this->Controls->Add(this->lblc);
			this->Controls->Add(this->lblb);
			this->Controls->Add(this->lbla);
			this->Controls->Add(this->txtx2);
			this->Controls->Add(this->txtx1);
			this->Controls->Add(this->btnRes);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->txtc);
			this->Controls->Add(this->txtb);
			this->Controls->Add(this->txta);
			this->Controls->Add(this->btnClear);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->Text = L"Калькулятор квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		double a, b, c, D, x1, x2;
private: System::Void txta_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Поле a
	if (e->KeyChar == '.')
		e->KeyChar = ',';
	if (e->KeyChar == '-' && txta->Text->IndexOf('-') == -1)
		txta->SelectionStart = 0;
	if ((e->KeyChar == ',' && txta->Text->IndexOf(',') == -1) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8) || (e->KeyChar == '-' && txta->Text->IndexOf('-') == -1)) {
		e->Handled = false;
	}
	else { e->Handled = true; }
}
	private: System::Void txtb_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Поле b
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		if (e->KeyChar == '-' && txtb->Text->IndexOf('-') == -1)
			txtb->SelectionStart = 0;
		if ((e->KeyChar == ',' && txtb->Text->IndexOf(',') == -1) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8) || (e->KeyChar == '-' && txtb->Text->IndexOf('-') == -1)) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void txtc_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Поле c
		if (e->KeyChar == '.')
			e->KeyChar = ',';
		if (e->KeyChar == '-' && txtc->Text->IndexOf('-') == -1)
			txtc->SelectionStart = 0;
		if ((e->KeyChar == ',' && txtc->Text->IndexOf(',') == -1) || (e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8) || (e->KeyChar == '-' && txtc->Text->IndexOf('-') == -1)) {
			e->Handled = false;
		}
		else { e->Handled = true; }
	}
	private: System::Void txtx1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Поле x1
		e->Handled = true;
	}
	private: System::Void txtx2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) { // Поле x2
		e->Handled = true;
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка стереть
		txta->Text = "";
		txtb->Text = "";
		txtc->Text = "";
		txtx1->Text = "";
		txtx2->Text = "";
		lblMes->Text = "Введите числа a,b и c";
	}
	private: System::Void btnRes_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка Результат
		if ((txta->Text == "") || (txta->Text == ",") || (txta->Text == "-") || (txta->Text == "-,") || (txtb->Text == "") || (txtb->Text == ",") || (txtb->Text == "-") || (txtb->Text == "-,") || (txtc->Text == "") || (txtc->Text == ",") || (txtc->Text == "-") || (txtc->Text == "-,")) {
			txta->Text = "";
			txtb->Text = "";
			txtc->Text = "";
			txtx1->Text = "";
			txtx2->Text = "";
			lblMes->Text = "Недостаточно данных." + "\r\n" + "Если переменная равна нулю, то впишите 0.";

		}
		else {
			txtx1->Text = "";
			txtx2->Text = "";
			a = Convert::ToDouble(txta->Text);
			b = Convert::ToDouble(txtb->Text);
			c = Convert::ToDouble(txtc->Text);
			D = b * b - (4 * a * c);
			if (a == 0 && b == 0 && c == 0) {  // Если 0 0 0
				lblMes->Text = "Уравнение не существует.""\r\n" + "Это равенство.";

			}
			else if (a == 0 && b == 0 && c != 0) { // Если уравнение верное равенство.
				lblMes->Text = "Уравнение не существует.""\r\n" + "Это равенство.";
			}
			else if (a == 0) { // Если только а=0
				x1 = (-1 * c / b);
				lblMes->Text = "Уравнение имеет один корень";
				txtx1->Text = Convert::ToString(Math::Round(x1, 8, MidpointRounding::AwayFromZero).ToString());
				txtx2->Text = Convert::ToString(Math::Round(x1, 8, MidpointRounding::AwayFromZero).ToString());
			}
			else if (D == 0) { // Если Д=0
				x1 = (-1 * b) / (2 * a);
				lblMes->Text = "Дискриминант равен нулю." + "\r\n" + "Уравнение имеет два одинаковых корня.";
				txtx1->Text = Convert::ToString(x1);
				txtx2->Text = Convert::ToString(x1);
			}
			else if (D > 0) { // Если Д>0
				x1 = (-1 * b + (Math::Sqrt(D))) / (2 * a);

				x2 = (-1 * b - (Math::Sqrt(D))) / (2 * a);
				lblMes->Text = "Дискриминант больше нуля." + "\r\n" + "Уравнение имеет два действительных корня.";
				txtx1->Text = Convert::ToString(x1);
				txtx2->Text = Convert::ToString(x2);
			}
			else { // Если Д<0
				lblMes->Text = "Уравнение не имеет действительных корней.";
			}
		}
	}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) { // Кнопка закрыть
	this->Close();
}
private: System::Void lblMes_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}