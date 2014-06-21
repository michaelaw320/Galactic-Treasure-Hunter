
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Graf.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "toolbox.h"
#include "aiController.h"
#include "playerVsPc.h"
#include "AlgoInfo.h"
//#include "stdafx.h"

namespace stima1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class mainform : public System::Windows::Forms::Form {
	public:
		mainform(void) {
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainform() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(4, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(306, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Galactic Treasure Hunter";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 85);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 52);
			this->label2->TabIndex = 1;
			this->label2->Text = L"A Game by:\r\n13512079 - Dariel Valdano\r\n13512046 - Michael Alexander\r\n13512038 - V"
				L"iktor Trimulya B";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(177, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Made for\r\nIF2211 Strategi Algoritma";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(183, 26);
			this->label4->TabIndex = 4;
			this->label4->Text = L"An Example implementation of A\r\nGreedy Algorithm to raze the universe";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 19);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 48);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Human Controlled Single Player";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainform::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(97, 19);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 48);
			this->button2->TabIndex = 7;
			this->button2->Text = L"PC Controlled Single Player";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainform::button2_click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(19, 151);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 73);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Start Game:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(188, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(85, 48);
			this->button3->TabIndex = 8;
			this->button3->Text = L"PC vs Human";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainform::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(180, 122);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(117, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Algorithm Information";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainform::button4_Click);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(314, 239);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Name = L"mainform";
			this->Text = L"Galactic Treasure Hunter";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// BEGIN GUI Functions
	private:

		bool isMouseOver(const sf::CircleShape shape, const sf::Event input) {
			const int mousex = input.mouseButton.x;
			const int mousey = input.mouseButton.y;

			const int spriteradius = 15;
			const sf::Vector2f spritecenter = shape.getPosition();

			// If the distance between the mouse and the sprite's center
			// is less than the length/width of the sprite.
			if (std::abs(mousex - spritecenter.x) < spriteradius &&
				std::abs(mousex - spritecenter.x) < spriteradius) {
				return true;
			} else {
				return false;
			}
		}



		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->Hide();
			toolbox^ toolform = gcnew toolbox;
			toolform->ShowDialog(); // to show then wait till close then next command executes (show in current thread)
			//toolform->Show(); // to show simultaneously with next commands (show in different thread)
			this->Show();
			this->button1->Enabled = true;
			this->button2->Enabled = true;
		}

		System::Void button2_click(System::Object^  sender, System::EventArgs^  e) {
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->Hide();
			aiController^ aiform = gcnew aiController;
			aiform->ShowDialog(); // to show then wait till close then next command executes (show in current thread)
			//toolform->Show(); // to show simultaneously with next commands (show in different thread)
			this->Show();
			this->button1->Enabled = true;
			this->button2->Enabled = true;
		}
		System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->Hide();
			playerVsPc^ pvsform = gcnew playerVsPc;
			pvsform->ShowDialog(); // to show then wait till close then next command executes (show in current thread)
			//toolform->Show(); // to show simultaneously with next commands (show in different thread)
			this->Show();
			this->button1->Enabled = true;
			this->button2->Enabled = true;
		}
		System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			AlgoInfo^ pvsform = gcnew AlgoInfo;
			pvsform->ShowDialog(); // to show then wait till close then next command executes (show in current thread)
		}
};
}
