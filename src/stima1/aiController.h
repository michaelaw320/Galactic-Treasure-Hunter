
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Graf.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "holder.h"
#include "Player.h"
#include "constants.h"
#include "SYLPH.h"
#include "MAGI.h"
#include "Rogue.h"
#include "Buy.h"

namespace stima1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class aiController : public System::Windows::Forms::Form {
	public:
		aiController(void) {
			InitializeComponent();
			this->FuelCount->Enabled = false;
			this->PlatinumCount->Enabled = false;
			this->TonnageGoal->Enabled = false;
			this->DrillCount->Enabled = false;
			this->CannonCount->Enabled = false;
			this->RaingunCount->Enabled = false;
			this->buy1->Enabled = false;
			this->buy2->Enabled = false;
			this->buy3->Enabled = false;
		}

	protected:
		~aiController() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  PlatinumCount;
	private: System::Windows::Forms::TextBox^  FuelCount;
	private: System::Windows::Forms::TextBox^  TonnageGoal;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  galaxyLoad;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  DrillCount;
	private: System::Windows::Forms::NumericUpDown^  CannonCount;
	private: System::Windows::Forms::NumericUpDown^  RaingunCount;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  SLYPH;
	private: System::Windows::Forms::Button^  MAGIBUTT;

	private: System::Windows::Forms::Button^  buy1;
	private: System::Windows::Forms::Button^  buy2;
	private: System::Windows::Forms::Button^  buy3;




	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->galaxyLoad = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->TonnageGoal = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PlatinumCount = (gcnew System::Windows::Forms::TextBox());
			this->FuelCount = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->DrillCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->CannonCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->RaingunCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->SLYPH = (gcnew System::Windows::Forms::Button());
			this->MAGIBUTT = (gcnew System::Windows::Forms::Button());
			this->buy1 = (gcnew System::Windows::Forms::Button());
			this->buy2 = (gcnew System::Windows::Forms::Button());
			this->buy3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DrillCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CannonCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RaingunCount))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 20);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Fuel:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->galaxyLoad);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->TonnageGoal);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->PlatinumCount);
			this->groupBox2->Controls->Add(this->FuelCount);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Location = System::Drawing::Point(183, 121);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(372, 69);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Spaceship Status Panel";
			// 
			// galaxyLoad
			// 
			this->galaxyLoad->Location = System::Drawing::Point(293, 42);
			this->galaxyLoad->Name = L"galaxyLoad";
			this->galaxyLoad->Size = System::Drawing::Size(75, 23);
			this->galaxyLoad->TabIndex = 13;
			this->galaxyLoad->Text = L"Lock in";
			this->galaxyLoad->UseVisualStyleBackColor = true;
			this->galaxyLoad->Click += gcnew System::EventHandler(this, &aiController::galaxyLoad_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"given.lvl", L"random.lvl", L"Milky Way.lvl",
					L"Andromeda.lvl", L"NGC-50120.lvl", L"NGC-20105.lvl", L"NGC-10501.lvl"
			});
			this->comboBox1->Location = System::Drawing::Point(100, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"given.lvl";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Selected Galaxy:";
			// 
			// TonnageGoal
			// 
			this->TonnageGoal->Location = System::Drawing::Point(342, 17);
			this->TonnageGoal->Name = L"TonnageGoal";
			this->TonnageGoal->Size = System::Drawing::Size(24, 20);
			this->TonnageGoal->TabIndex = 10;
			this->TonnageGoal->Text = L"XX";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(218, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Platinum Tonnage Goal:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(77, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Platinum (Tonnes):";
			// 
			// PlatinumCount
			// 
			this->PlatinumCount->Location = System::Drawing::Point(174, 17);
			this->PlatinumCount->Name = L"PlatinumCount";
			this->PlatinumCount->Size = System::Drawing::Size(24, 20);
			this->PlatinumCount->TabIndex = 7;
			this->PlatinumCount->Text = L"XX";
			// 
			// FuelCount
			// 
			this->FuelCount->Location = System::Drawing::Point(36, 17);
			this->FuelCount->Name = L"FuelCount";
			this->FuelCount->Size = System::Drawing::Size(24, 20);
			this->FuelCount->TabIndex = 6;
			this->FuelCount->Text = L"XX";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hand Drill (1 Ton platinum)";
			// 
			// DrillCount
			// 
			this->DrillCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DrillCount->Location = System::Drawing::Point(6, 20);
			this->DrillCount->Name = L"DrillCount";
			this->DrillCount->Size = System::Drawing::Size(46, 21);
			this->DrillCount->TabIndex = 1;
			// 
			// CannonCount
			// 
			this->CannonCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CannonCount->Location = System::Drawing::Point(6, 47);
			this->CannonCount->Name = L"CannonCount";
			this->CannonCount->Size = System::Drawing::Size(46, 21);
			this->CannonCount->TabIndex = 2;
			// 
			// RaingunCount
			// 
			this->RaingunCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RaingunCount->Location = System::Drawing::Point(6, 76);
			this->RaingunCount->Name = L"RaingunCount";
			this->RaingunCount->Size = System::Drawing::Size(46, 21);
			this->RaingunCount->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Geostationary Orbit Laser Cannon (2 Tonnes Platinum)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 78);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(323, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Matter-Antimatter Railgun (3 Tonnes Platinum)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(118, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 15);
			this->label4->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(119, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 15);
			this->label5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(119, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 15);
			this->label6->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->RaingunCount);
			this->groupBox1->Controls->Add(this->CannonCount);
			this->groupBox1->Controls->Add(this->DrillCount);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(105, 11);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(450, 103);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tool Inventory";
			// 
			// SLYPH
			// 
			this->SLYPH->Location = System::Drawing::Point(12, 120);
			this->SLYPH->Name = L"SLYPH";
			this->SLYPH->Size = System::Drawing::Size(158, 32);
			this->SLYPH->TabIndex = 6;
			this->SLYPH->Text = L"SYLPH Mk.26 ENGINE INIT";
			this->SLYPH->UseVisualStyleBackColor = true;
			this->SLYPH->Click += gcnew System::EventHandler(this, &aiController::SLYPH_Click);
			// 
			// MAGIBUTT
			// 
			this->MAGIBUTT->Location = System::Drawing::Point(12, 158);
			this->MAGIBUTT->Name = L"MAGIBUTT";
			this->MAGIBUTT->Size = System::Drawing::Size(158, 32);
			this->MAGIBUTT->TabIndex = 7;
			this->MAGIBUTT->Text = L"MAGI SYSTEM INIT";
			this->MAGIBUTT->UseVisualStyleBackColor = true;
			this->MAGIBUTT->Click += gcnew System::EventHandler(this, &aiController::MAGI_Click);
			// 
			// buy1
			// 
			this->buy1->Location = System::Drawing::Point(13, 24);
			this->buy1->Name = L"buy1";
			this->buy1->Size = System::Drawing::Size(75, 23);
			this->buy1->TabIndex = 8;
			this->buy1->Text = L"Dumb Buy";
			this->buy1->UseVisualStyleBackColor = true;
			this->buy1->Click += gcnew System::EventHandler(this, &aiController::buy1_Click);
			// 
			// buy2
			// 
			this->buy2->Location = System::Drawing::Point(13, 53);
			this->buy2->Name = L"buy2";
			this->buy2->Size = System::Drawing::Size(75, 23);
			this->buy2->TabIndex = 9;
			this->buy2->Text = L"Smart Buy";
			this->buy2->UseVisualStyleBackColor = true;
			this->buy2->Click += gcnew System::EventHandler(this, &aiController::buy2_Click);
			// 
			// buy3
			// 
			this->buy3->Location = System::Drawing::Point(13, 82);
			this->buy3->Name = L"buy3";
			this->buy3->Size = System::Drawing::Size(75, 23);
			this->buy3->TabIndex = 10;
			this->buy3->Text = L"Best Buy";
			this->buy3->UseVisualStyleBackColor = true;
			this->buy3->Click += gcnew System::EventHandler(this, &aiController::buy3_Click);
			// 
			// aiController
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 201);
			this->Controls->Add(this->buy3);
			this->Controls->Add(this->buy2);
			this->Controls->Add(this->buy1);
			this->Controls->Add(this->MAGIBUTT);
			this->Controls->Add(this->SLYPH);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"aiController";
			this->Text = L"AI Control Panel";
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DrillCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CannonCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RaingunCount))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:

		bool isGalaxyLoaded = false;
		bool isItemBought = false;
		UnmanagedHolder* vars = new UnmanagedHolder();
		bool turn = true;
		bool toolsenabled = true;

		float getMin(float x, float y) {
			if (x<y) {
				return x;
			} else {
				return y;
			}
		}

		Void useDrill() {
			if (this->vars->bot.GetNDrill() > 0) {
				this->vars->bot.UseDrill();
				if (this->vars->levelfile.IsHijau(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(TIME_GREEN);
					this->vars->bot.AddPlatinum(SOLAR_GREEN);
				} else if (this->vars->levelfile.IsKuning(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(EXPLODE_YELLOW);
				} else if (this->vars->levelfile.IsMerah(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(EXPLODE_RED);
				} else if (this->vars->levelfile.IsKosong(this->vars->bot.GetCurrentPos())) {
					MessageBox::Show("The planet here does not contain any treasure.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("WTF what kind of chest is in here??", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->vars->levelfile.SetArrPosPetiOpen(this->vars->bot.GetCurrentPos());
				this->DrillCount->Text = Convert::ToString(this->vars->bot.GetNDrill());
				this->FuelCount->Text = Convert::ToString(this->vars->bot.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
			} else {
				MessageBox::Show("You did not have any Drill", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		Void useCannon() {
			if (this->vars->bot.GetNLaser() > 0) {
				this->vars->bot.UseLaser();
				if (this->vars->levelfile.IsHijau(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(TIME_YELLOW);
					this->vars->bot.AddPlatinum(SOLAR_GREEN);
				} else if (this->vars->levelfile.IsKuning(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(TIME_YELLOW);
					this->vars->bot.AddPlatinum(SOLAR_YELLOW);
				} else if (this->vars->levelfile.IsMerah(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(EXPLODE_RED);
				} else if (this->vars->levelfile.IsKosong(this->vars->bot.GetCurrentPos())) {
					MessageBox::Show("The planet here does not contain any treasure.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("WTF what kind of chest is in here??", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->vars->levelfile.SetArrPosPetiOpen(this->vars->bot.GetCurrentPos());
				this->CannonCount->Text = Convert::ToString(this->vars->bot.GetNLaser());
				this->FuelCount->Text = Convert::ToString(this->vars->bot.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
			} else {
				MessageBox::Show("You did not have any Laser Cannon", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		Void useRailgun() {
			if (this->vars->bot.GetNRailgun() > 0) {
				this->vars->bot.UseRailgun();
				if (this->vars->levelfile.IsHijau(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(TIME_RED);
					this->vars->bot.AddPlatinum(SOLAR_GREEN);
				} else if (this->vars->levelfile.IsKuning(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(TIME_RED);
					this->vars->bot.AddPlatinum(SOLAR_YELLOW);
				} else if (this->vars->levelfile.IsMerah(this->vars->bot.GetCurrentPos())) {
					this->vars->bot.UseFuel(TIME_RED);
					this->vars->bot.AddPlatinum(SOLAR_RED);
				} else if (this->vars->levelfile.IsKosong(this->vars->bot.GetCurrentPos())) {
					MessageBox::Show("The planet here does not contain any treasure.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("WTF what kind of chest is in here??", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->vars->levelfile.SetArrPosPetiOpen(this->vars->bot.GetCurrentPos());
				this->RaingunCount->Text = Convert::ToString(this->vars->bot.GetNRailgun());
				this->FuelCount->Text = Convert::ToString(this->vars->bot.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
			} else {
				MessageBox::Show("You did not have any Railgun", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		//
		System::Void SLYPH_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->isGalaxyLoaded) {

				if (!isItemBought) {
					Buy2(this->vars->levelfile, this->vars->bot);
				}
				this->comboBox1->Enabled = false;
				this->galaxyLoad->Enabled = false;

				// create the window
				sf::ContextSettings settings;
				settings.depthBits = 12;
				settings.stencilBits = 4;
				settings.antialiasingLevel = 4;
				settings.majorVersion = 3;
				settings.minorVersion = 0;
				sf::RenderWindow window(sf::VideoMode(1024, 584), "SYLPH Mk.26 Algorithm Demo", sf::Style::Default, settings);

				// BEGIN OBJECTS DECLARATION -------------------------------------------

				//background
				sf::Texture bgtex;
				bgtex.loadFromFile("bg.jpg");
				sf::Sprite bgsprite;
				bgsprite.setTexture(bgtex);

				// make the nodes
				sf::CircleShape * nodes;
				nodes = new sf::CircleShape[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					srand((int)time(NULL) + (i*i - i) * 200 + i * 100 + i * 30);
					nodes[i].setRadius(15.0f);
					if (this->vars->levelfile.IsKosong(i)) {
						nodes[i].setFillColor(sf::Color(180, 180, 180, 180));
					} else if (this->vars->levelfile.IsMerah(i)) {
						nodes[i].setFillColor(sf::Color(255, 50, 50, 180));
					} else if (this->vars->levelfile.IsKuning(i)) {
						nodes[i].setFillColor(sf::Color(255, 255, 50, 180));
					} else if (this->vars->levelfile.IsHijau(i)) {
						nodes[i].setFillColor(sf::Color(50, 255, 50, 180));
					} else {
						nodes[i].setFillColor(sf::Color(255, 0, 255)); // show error
					}
					nodes[i].setOutlineThickness(2);
					nodes[i].setOutlineColor(sf::Color(50, 50, 50));
					nodes[i].setOrigin(sf::Vector2f(15, 15));
					nodes[i].setPosition(15.0f + std::rand() % 1000, 15.0f + std::rand() % 560);
				}

				// make the lines between nodes
				// ZOMG 3D array
				// [source node #][dest node #][0] = located at source
				// [source node #][dest node #][1] = located at dest
				sf::Vertex ***lines = new sf::Vertex**[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					lines[i] = new sf::Vertex*[this->vars->levelfile.GetJumlahSimpul()];
					for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
						lines[i][j] = new sf::Vertex[2];
						lines[i][j][0] = sf::Vertex(nodes[i].getPosition(), sf::Color(0, 0, 255));
						lines[i][j][1] = sf::Vertex(nodes[j].getPosition(), sf::Color(0, 0, 255));
					}
				}

				//make the players
				sf::CircleShape bot(8, 4);
				bot.setFillColor(sf::Color(0, 0, 255));
				bot.setOutlineThickness(1);
				bot.setOutlineColor(sf::Color(50, 50, 150));
				bot.setOrigin(sf::Vector2f(8, 8));
				bot.setPosition(nodes[this->vars->bot.GetCurrentPos()].getPosition());

				//all about texts
				sf::Font font;
				font.loadFromFile("segoeui.ttf");
				sf::Text *chestname = new sf::Text[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					chestname[i].setFont(font); // font is a sf::Font
					chestname[i].setString(std::to_string(i));
					chestname[i].setCharacterSize(12); // in pixels, not points!
					chestname[i].setColor(sf::Color::Black);
					chestname[i].setPosition(nodes[i].getPosition());
				}

				sf::Text **dist = new sf::Text*[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					dist[i] = new sf::Text[this->vars->levelfile.GetJumlahSimpul()];
					for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
						dist[i][j].setFont(font); // font is a sf::Font
						dist[i][j].setString(std::to_string(this->vars->levelfile.GetJarakSimpulKeKe(i, j)));
						dist[i][j].setCharacterSize(12); // in pixels, not points!
						dist[i][j].setColor(sf::Color::White);
						dist[i][j].setPosition(sf::Vector2f(getMin(nodes[i].getPosition().x, nodes[j].getPosition().x) + Math::Abs(nodes[i].getPosition().x - nodes[j].getPosition().x) / 2,
							getMin(nodes[i].getPosition().y, nodes[j].getPosition().y) + Math::Abs(nodes[i].getPosition().y - nodes[j].getPosition().y) / 2));
					}
				}

				// BEGIN MAIN LOOP -------------------------------------------------------------------------
				int syscounter = 0;
				float time = 0;
				float dx, dy;
				float substr = 0;
				bool movable = true;
				bool updategui = false;
				int usefuel = 0;
				int diff = 0;
				int aiMoveLoc = 0;
				int usedTool = 0;
				while (window.isOpen() && this->vars->bot.GetFuel() > 0) {
					// BEGIN EVENT HANDLER-----------------
					sf::Event event;
					if (movable) { // check is player is in move
						while (window.pollEvent(event)) {
							if (event.type == sf::Event::Closed) { // "close requested" event: we close the window
								window.close(); // end main loop
							}
						}
						// BEGIN OPEN BOX ENGINE INIT
						usedTool = Rogue(this->vars->levelfile, this->vars->bot, this->vars->bot.GetCurrentPos());
						if (usedTool != 0) {
							if (this->vars->levelfile.IsMerah(this->vars->bot.GetCurrentPos())) {
								this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), 'M');
							} else if (this->vars->levelfile.IsKuning(this->vars->bot.GetCurrentPos())) {
								this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), 'K');
							} else if (this->vars->levelfile.IsHijau(this->vars->bot.GetCurrentPos())) {
								this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), 'H');
							} else {
								//NOP
							}
						}
						if (usedTool == RAILGUN) {
							useRailgun();
						} else if (usedTool == CANNON) {
							useCannon();
						} else if (usedTool == DRILL) {
							useDrill();
						} else {
							std::cout << "Rogue Did not want to dig" << std::endl;
							std::cout << this->vars->levelfile.GetNPetiHijau() << " " << this->vars->levelfile.GetNPetiKuning() << " " << this->vars->levelfile.GetNPetiMerah() << std::endl;
							this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), '-');
						}

						// BEGIN MOVE ENGINE INIT
						aiMoveLoc = SYLPH(this->vars->levelfile, this->vars->bot, this->vars->bot.GetCurrentPos());
						std::cout << "AI: from " << this->vars->bot.GetCurrentPos() << " to "<< aiMoveLoc << std::endl;
						time = (float)this->vars->levelfile.GetJarakSimpulKeKe(this->vars->bot.GetCurrentPos(), aiMoveLoc);
						usefuel = this->vars->bot.GetFuel();
						if (!(time == -99 || time == 0)) {
							time *= 30;
							dx = nodes[aiMoveLoc].getPosition().x - bot.getPosition().x;
							dy = nodes[aiMoveLoc].getPosition().y - bot.getPosition().y;
							movable = false;
							this->vars->bot.SetCurrentPos(aiMoveLoc);
						}
					} else if (updategui) {
						// NOP. vestigial.
					} else { // player move algorithm
						//std::cout << "not movable!!" << std::endl;
						if (time == syscounter) {
							movable = true;
							this->vars->bot.SetFuel(usefuel - ((int)time / 30));
							syscounter = 0;
							time = 0;
							usefuel = 0;
							substr = 0;
							diff = 0;
							this->FuelCount->Text = Convert::ToString(this->vars->bot.GetFuel());
						} else {
							bot.move((dx / time), (dy / time));
							substr = ((float)syscounter / time)*(time / 30);
							syscounter++;
							diff = usefuel - (int)substr;
							if (diff != usefuel) {
								diff = usefuel;
								this->FuelCount->Text = Convert::ToString(diff); // WHY THE HELL did it not update while the ship is moving?????
							}

							//std::cout << time << "time | syscount" << syscounter << std::endl;
						}
					}

					// BEGIN DRAW OBJECTS ---------------------------------

					//update node colors
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						if (this->vars->levelfile.IsKosong(i)) {
							nodes[i].setFillColor(sf::Color(180, 180, 180, 180));
						} else if (this->vars->levelfile.IsMerah(i)) {
							nodes[i].setFillColor(sf::Color(255, 50, 50, 180));
						} else if (this->vars->levelfile.IsKuning(i)) {
							nodes[i].setFillColor(sf::Color(255, 255, 50, 180));
						} else if (this->vars->levelfile.IsHijau(i)) {
							nodes[i].setFillColor(sf::Color(50, 255, 50, 180));
						} else {
							nodes[i].setFillColor(sf::Color(255, 0, 255)); // show error
						}
					}

					window.clear(sf::Color(240, 240, 240));
					window.draw(bgsprite);
					
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
							if (!(this->vars->levelfile.GetJarakSimpulKeKe(i, j) == -99 || i == j)) {
								window.draw(lines[i][j], 2, sf::Lines);
							}
						}
					}
					
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						window.draw(nodes[i]);
						window.draw(chestname[i]);
					}
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						for (int j = i + 1; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
							if (this->vars->levelfile.GetJarakSimpulKeKe(i, j) != -99) {
								window.draw(dist[i][j]);
							}
						}
					}
					window.draw(bot);
					window.display(); // end the current frame
				} // exit main loop
				this->Close();
				if (this->vars->bot.GetFuel() <= 0) {
					MessageBox::Show("You have ran out of fuel.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->bot.GetNDrill() == 0 &&
						   this->vars->bot.GetNLaser() == 0 &&
						   this->vars->bot.GetNRailgun() == 0) {
					MessageBox::Show("You have ran out of tools", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
				if (this->vars->bot.GetPlatinum() >= this->vars->levelfile.GetMinSkor()) {
					MessageBox::Show("You Won the game with a total score of " + this->vars->bot.GetPlatinum(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("You Lost, you only collected " + this->vars->bot.GetPlatinum() + " out of the minimum requirement of " + this->vars->levelfile.GetMinSkor(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			} else { // galaxy not loaded
				MessageBox::Show("You haven't locked in to a galaxy, or the selected galaxy coordinates failed to load.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//
		System::Void MAGI_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->isGalaxyLoaded) {

				if (!isItemBought) {
					Buy2(this->vars->levelfile, this->vars->bot);
				}
				this->comboBox1->Enabled = false;
				this->galaxyLoad->Enabled = false;

				// create the window
				sf::ContextSettings settings;
				settings.depthBits = 12;
				settings.stencilBits = 4;
				settings.antialiasingLevel = 4;
				settings.majorVersion = 3;
				settings.minorVersion = 0;
				sf::RenderWindow window(sf::VideoMode(1024, 584), "MAGI Algorithm Demonstration", sf::Style::Default, settings);

				// BEGIN OBJECTS DECLARATION -------------------------------------------

				//background
				sf::Texture bgtex;
				bgtex.loadFromFile("bg.jpg");
				sf::Sprite bgsprite;
				bgsprite.setTexture(bgtex);

				// make the nodes
				sf::CircleShape * nodes;
				nodes = new sf::CircleShape[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					srand((int)time(NULL) + (i*i - i) * 200 + i * 100 + i * 30);
					nodes[i].setRadius(15.0f);
					if (this->vars->levelfile.IsKosong(i)) {
						nodes[i].setFillColor(sf::Color(180, 180, 180, 180));
					} else if (this->vars->levelfile.IsMerah(i)) {
						nodes[i].setFillColor(sf::Color(255, 50, 50, 180));
					} else if (this->vars->levelfile.IsKuning(i)) {
						nodes[i].setFillColor(sf::Color(255, 255, 50, 180));
					} else if (this->vars->levelfile.IsHijau(i)) {
						nodes[i].setFillColor(sf::Color(50, 255, 50, 180));
					} else {
						nodes[i].setFillColor(sf::Color(255, 0, 255)); // show error
					}
					nodes[i].setOutlineThickness(2);
					nodes[i].setOutlineColor(sf::Color(50, 50, 50));
					nodes[i].setOrigin(sf::Vector2f(15, 15));
					nodes[i].setPosition(15.0f + std::rand() % 1000, 15.0f + std::rand() % 560);
				}

				// make the lines between nodes
				// ZOMG 3D array
				// [source node #][dest node #][0] = located at source
				// [source node #][dest node #][1] = located at dest
				sf::Vertex ***lines = new sf::Vertex**[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					lines[i] = new sf::Vertex*[this->vars->levelfile.GetJumlahSimpul()];
					for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
						lines[i][j] = new sf::Vertex[2];
						lines[i][j][0] = sf::Vertex(nodes[i].getPosition(), sf::Color(0, 0, 255));
						lines[i][j][1] = sf::Vertex(nodes[j].getPosition(), sf::Color(0, 0, 255));
					}
				}

				//make the players
				sf::CircleShape bot(8, 4);
				bot.setFillColor(sf::Color(0, 0, 255));
				bot.setOutlineThickness(1);
				bot.setOutlineColor(sf::Color(50, 50, 150));
				bot.setOrigin(sf::Vector2f(8, 8));
				bot.setPosition(nodes[this->vars->bot.GetCurrentPos()].getPosition());

				//all about texts
				sf::Font font;
				font.loadFromFile("segoeui.ttf");
				sf::Text *chestname = new sf::Text[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					chestname[i].setFont(font); // font is a sf::Font
					chestname[i].setString(std::to_string(i));
					chestname[i].setCharacterSize(12); // in pixels, not points!
					chestname[i].setColor(sf::Color::Black);
					chestname[i].setPosition(nodes[i].getPosition());
				}

				sf::Text **dist = new sf::Text*[this->vars->levelfile.GetJumlahSimpul()];
				for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
					dist[i] = new sf::Text[this->vars->levelfile.GetJumlahSimpul()];
					for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
						dist[i][j].setFont(font); // font is a sf::Font
						dist[i][j].setString(std::to_string(this->vars->levelfile.GetJarakSimpulKeKe(i, j)));
						dist[i][j].setCharacterSize(12); // in pixels, not points!
						dist[i][j].setColor(sf::Color::White);
						dist[i][j].setPosition(sf::Vector2f(getMin(nodes[i].getPosition().x, nodes[j].getPosition().x) + Math::Abs(nodes[i].getPosition().x - nodes[j].getPosition().x) / 2,
							getMin(nodes[i].getPosition().y, nodes[j].getPosition().y) + Math::Abs(nodes[i].getPosition().y - nodes[j].getPosition().y) / 2));
					}
				}

				// BEGIN MAIN LOOP -------------------------------------------------------------------------
				int syscounter = 0;
				float time = 0;
				float dx, dy;
				float substr = 0;
				bool movable = true;
				bool updategui = false;
				int usefuel = 0;
				int diff = 0;
				int aiMoveLoc = 0;
				int usedTool = 0;
				while (window.isOpen() && this->vars->bot.GetFuel() > 0) {
					// BEGIN EVENT HANDLER-----------------
					sf::Event event;
					if (movable) { // check is player is in move
						while (window.pollEvent(event)) {
							if (event.type == sf::Event::Closed) { // "close requested" event: we close the window
								window.close(); // end main loop
							}
						}
						// BEGIN OPEN BOX ENGINE INIT
						usedTool = Rogue(this->vars->levelfile, this->vars->bot, this->vars->bot.GetCurrentPos());
						if (usedTool != 0) {
							if (this->vars->levelfile.IsMerah(this->vars->bot.GetCurrentPos())) {
								this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), 'M');
							} else if (this->vars->levelfile.IsKuning(this->vars->bot.GetCurrentPos())) {
								this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), 'K');
							} else if (this->vars->levelfile.IsHijau(this->vars->bot.GetCurrentPos())) {
								this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), 'H');
							} else {
								//NOP
							}
						}
						if (usedTool == RAILGUN) {
							useRailgun();
						} else if (usedTool == CANNON) {
							useCannon();
						} else if (usedTool == DRILL) {
							useDrill();
						} else {
							std::cout << "Rogue Did not want to dig" << std::endl;
							std::cout << this->vars->levelfile.GetNPetiHijau() << " " << this->vars->levelfile.GetNPetiKuning() << " " << this->vars->levelfile.GetNPetiMerah() << std::endl;
							this->vars->levelfile.TulisOutput(this->vars->bot.GetCurrentPos(), '-');
						}
						
						std::cout << std::endl;

						// BEGIN MOVE ENGINE INIT
						//std::cout << "fuel" << this->vars->bot.GetFuel() << std::endl;
						aiMoveLoc = MAGI(this->vars->levelfile, this->vars->bot, this->vars->bot.GetFuel());
						std::cout << "AI: from " << this->vars->bot.GetCurrentPos() << " to " << aiMoveLoc << std::endl;
						time = (float)this->vars->levelfile.GetJarakSimpulKeKe(this->vars->bot.GetCurrentPos(), aiMoveLoc);
						usefuel = this->vars->bot.GetFuel();
						if (!(time == -99 || time == 0)) {
							time *= 30;
							dx = nodes[aiMoveLoc].getPosition().x - bot.getPosition().x;
							dy = nodes[aiMoveLoc].getPosition().y - bot.getPosition().y;
							movable = false;
							this->vars->bot.SetCurrentPos(aiMoveLoc);
						}
					} else if (updategui) {
						// NOP. vestigial.
					} else { // player move algorithm
						//std::cout << "not movable!!" << std::endl;
						if (time == syscounter) {
							movable = true;
							this->vars->bot.SetFuel(usefuel - ((int)time / 30));
							syscounter = 0;
							time = 0;
							usefuel = 0;
							substr = 0;
							diff = 0;
							this->FuelCount->Text = Convert::ToString(this->vars->bot.GetFuel());
						} else {
							bot.move((dx / time), (dy / time));
							substr = ((float)syscounter / time)*(time / 30);
							syscounter++;
							diff = usefuel - (int)substr;
							if (diff != usefuel) {
								diff = usefuel;
								this->FuelCount->Text = Convert::ToString(diff); // WHY THE HELL did it not update while the ship is moving?????
							}

							//std::cout << time << "time | syscount" << syscounter << std::endl;
						}
					}

					// BEGIN DRAW OBJECTS ---------------------------------

					//update node colors
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						if (this->vars->levelfile.IsKosong(i)) {
							nodes[i].setFillColor(sf::Color(180, 180, 180, 180));
						} else if (this->vars->levelfile.IsMerah(i)) {
							nodes[i].setFillColor(sf::Color(255, 50, 50, 180));
						} else if (this->vars->levelfile.IsKuning(i)) {
							nodes[i].setFillColor(sf::Color(255, 255, 50, 180));
						} else if (this->vars->levelfile.IsHijau(i)) {
							nodes[i].setFillColor(sf::Color(50, 255, 50, 180));
						} else {
							nodes[i].setFillColor(sf::Color(255, 0, 255)); // show error
						}
					}

					window.clear(sf::Color(240, 240, 240));
					window.draw(bgsprite);
					
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
							if (!(this->vars->levelfile.GetJarakSimpulKeKe(i, j) == -99 || i == j)) {
								window.draw(lines[i][j], 2, sf::Lines);
							}
						}
					}
					
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						window.draw(nodes[i]);
						window.draw(chestname[i]);
					}
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						for (int j = i + 1; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
							if (this->vars->levelfile.GetJarakSimpulKeKe(i, j) != -99) {
								window.draw(dist[i][j]);
							}
						}
					}
					window.draw(bot);
					window.display(); // end the current frame
				} // exit main loop
				this->Close();
				if (this->vars->bot.GetFuel() <= 0) {
					MessageBox::Show("You have ran out of fuel.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->bot.GetNDrill() == 0 &&
						   this->vars->bot.GetNLaser() == 0 &&
						   this->vars->bot.GetNRailgun() == 0) {
					MessageBox::Show("You have ran out of tools", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
				if (this->vars->bot.GetPlatinum() >= this->vars->levelfile.GetMinSkor()) {
					MessageBox::Show("You Won the game with a total score of " + this->vars->bot.GetPlatinum(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("You Lost, you only collected " + this->vars->bot.GetPlatinum() + " out of the minimum requirement of " + this->vars->levelfile.GetMinSkor(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			} else { // galaxy not loaded
				MessageBox::Show("You haven't locked in to a galaxy, or the selected galaxy coordinates failed to load.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		//
		System::Void galaxyLoad_Click(System::Object^  sender, System::EventArgs^  e) {
			// Get the graph settings from file
			msclr::interop::marshal_context context;
			std::string fname = context.marshal_as<std::string>(this->comboBox1->Text);
			this->vars->levelfile.Load(fname);
			if (this->vars->levelfile.GetJumlahSimpul() == 0 && this->vars->levelfile.GetModal() == 0) {
				//fails.
				std::cout << "FAAIL" << std::endl;
				MessageBox::Show("The Selected File fails to load.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				this->isGalaxyLoaded = false;
				this->FuelCount->Text = "XX";
				this->PlatinumCount->Text = "XX";
				this->TonnageGoal->Text = "XX";
			} else {
				//this->vars->levelfile.Print(); // DBG
				this->isGalaxyLoaded = true;
				this->vars->bot.SetFuel(this->vars->levelfile.GetWaktuPermainan());
				this->vars->bot.SetPlatinum(this->vars->levelfile.GetModal());
				this->vars->bot.SetCurrentPos(this->vars->levelfile.GetPosPemain());
				this->FuelCount->Text = Convert::ToString(this->vars->bot.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
				this->TonnageGoal->Text = this->vars->levelfile.GetMinSkor().ToString();
			}
			this->vars->bot.SetNDrill(0);
			this->vars->bot.SetNLaser(0);
			this->vars->bot.SetNRailgun(0);
			this->DrillCount->Text = "0";
			this->CannonCount->Text = "0";
			this->RaingunCount->Text = "0";
			this->buy1->Enabled = true;
			this->buy2->Enabled = true;
			this->buy3->Enabled = true;
			//asdf
		}

		System::Void buy1_Click(System::Object^  sender, System::EventArgs^  e) {
			if (isGalaxyLoaded) {
				this->buy1->Enabled = false;
				this->buy2->Enabled = false;
				this->buy3->Enabled = false;
				Buy(this->vars->levelfile, this->vars->bot);
				this->DrillCount->Text = Convert::ToString(this->vars->bot.GetNDrill());
				this->CannonCount->Text = Convert::ToString(this->vars->bot.GetNLaser());
				this->RaingunCount->Text = Convert::ToString(this->vars->bot.GetNRailgun());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
				isItemBought = true;
			}
		}
		System::Void buy2_Click(System::Object^  sender, System::EventArgs^  e) {
			if (isGalaxyLoaded) {
				this->buy1->Enabled = false;
				this->buy2->Enabled = false;
				this->buy3->Enabled = false;
				Buy2(this->vars->levelfile, this->vars->bot);
				this->DrillCount->Text = Convert::ToString(this->vars->bot.GetNDrill());
				this->CannonCount->Text = Convert::ToString(this->vars->bot.GetNLaser());
				this->RaingunCount->Text = Convert::ToString(this->vars->bot.GetNRailgun());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
				isItemBought = true;
			}
		}
		System::Void buy3_Click(System::Object^  sender, System::EventArgs^  e) {
			if (isGalaxyLoaded) {
				this->buy1->Enabled = false;
				this->buy2->Enabled = false;
				this->buy3->Enabled = false;
				Buy3(this->vars->levelfile, this->vars->bot);
				this->DrillCount->Text = Convert::ToString(this->vars->bot.GetNDrill());
				this->CannonCount->Text = Convert::ToString(this->vars->bot.GetNLaser());
				this->RaingunCount->Text = Convert::ToString(this->vars->bot.GetNRailgun());
				this->PlatinumCount->Text = Convert::ToString(this->vars->bot.GetPlatinum());
				isItemBought = true;
			}
		}
};
}
