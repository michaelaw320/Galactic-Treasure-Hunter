
#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Graf.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
#include "holder.h"
#include "Player.h"
#include "constants.h"


namespace stima1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class toolbox : public System::Windows::Forms::Form {
	public:
		toolbox(void) {
			InitializeComponent();
			this->useDrill->Enabled = false;
			this->useCannon->Enabled = false;
			this->useRailgun->Enabled = false;
			this->FuelCount->Enabled = false;
			this->PlatinumCount->Enabled = false;
			this->TonnageGoal->Enabled = false;
		}

	protected:
		~toolbox() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  RaingunCount;
	private: System::Windows::Forms::NumericUpDown^  CannonCount;
	private: System::Windows::Forms::NumericUpDown^  DrillCount;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  useDrill;
	private: System::Windows::Forms::Button^  useRailgun;
	private: System::Windows::Forms::Button^  useCannon;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  buyAndStart;
	private: System::Windows::Forms::Button^  viewObjective;
	private: System::Windows::Forms::Button^  viewPlanetInfo;

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

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(toolbox::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->useRailgun = (gcnew System::Windows::Forms::Button());
			this->useCannon = (gcnew System::Windows::Forms::Button());
			this->useDrill = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RaingunCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->CannonCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->DrillCount = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buyAndStart = (gcnew System::Windows::Forms::Button());
			this->viewObjective = (gcnew System::Windows::Forms::Button());
			this->viewPlanetInfo = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RaingunCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CannonCount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DrillCount))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->useRailgun);
			this->groupBox1->Controls->Add(this->useCannon);
			this->groupBox1->Controls->Add(this->useDrill);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->RaingunCount);
			this->groupBox1->Controls->Add(this->CannonCount);
			this->groupBox1->Controls->Add(this->DrillCount);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(13, 13);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(738, 187);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tool Inventory";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(119, 146);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(598, 30);
			this->label6->TabIndex = 11;
			this->label6->Text = resources->GetString(L"label6.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(119, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(596, 30);
			this->label5->TabIndex = 10;
			this->label5->Text = resources->GetString(L"label5.Text");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(118, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(575, 30);
			this->label4->TabIndex = 9;
			this->label4->Text = resources->GetString(L"label4.Text");
			// 
			// useRailgun
			// 
			this->useRailgun->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->useRailgun->Location = System::Drawing::Point(6, 130);
			this->useRailgun->Name = L"useRailgun";
			this->useRailgun->Size = System::Drawing::Size(54, 23);
			this->useRailgun->TabIndex = 8;
			this->useRailgun->Text = L"Use";
			this->useRailgun->UseVisualStyleBackColor = true;
			this->useRailgun->Click += gcnew System::EventHandler(this, &toolbox::useRailgun_Click);
			// 
			// useCannon
			// 
			this->useCannon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->useCannon->Location = System::Drawing::Point(6, 76);
			this->useCannon->Name = L"useCannon";
			this->useCannon->Size = System::Drawing::Size(54, 23);
			this->useCannon->TabIndex = 7;
			this->useCannon->Text = L"Use";
			this->useCannon->UseVisualStyleBackColor = true;
			this->useCannon->Click += gcnew System::EventHandler(this, &toolbox::useCannon_Click);
			// 
			// useDrill
			// 
			this->useDrill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->useDrill->Location = System::Drawing::Point(6, 20);
			this->useDrill->Name = L"useDrill";
			this->useDrill->Size = System::Drawing::Size(54, 23);
			this->useDrill->TabIndex = 6;
			this->useDrill->Text = L"Use";
			this->useDrill->UseVisualStyleBackColor = true;
			this->useDrill->Click += gcnew System::EventHandler(this, &toolbox::useDrill_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(118, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(323, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Matter-Antimatter Railgun (3 Tonnes Platinum)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(118, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(382, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Geostationary Orbit Laser Cannon (2 Tonnes Platinum)";
			// 
			// RaingunCount
			// 
			this->RaingunCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RaingunCount->Location = System::Drawing::Point(67, 132);
			this->RaingunCount->Name = L"RaingunCount";
			this->RaingunCount->Size = System::Drawing::Size(46, 21);
			this->RaingunCount->TabIndex = 3;
			// 
			// CannonCount
			// 
			this->CannonCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CannonCount->Location = System::Drawing::Point(67, 78);
			this->CannonCount->Name = L"CannonCount";
			this->CannonCount->Size = System::Drawing::Size(46, 21);
			this->CannonCount->TabIndex = 2;
			// 
			// DrillCount
			// 
			this->DrillCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DrillCount->Location = System::Drawing::Point(66, 22);
			this->DrillCount->Name = L"DrillCount";
			this->DrillCount->Size = System::Drawing::Size(46, 21);
			this->DrillCount->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(119, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hand Drill (1 Ton platinum)";
			// 
			// buyAndStart
			// 
			this->buyAndStart->Location = System::Drawing::Point(12, 215);
			this->buyAndStart->Name = L"buyAndStart";
			this->buyAndStart->Size = System::Drawing::Size(122, 51);
			this->buyAndStart->TabIndex = 1;
			this->buyAndStart->Text = L"Buy Tools and Hyperwarp to selected Galaxy";
			this->buyAndStart->UseVisualStyleBackColor = true;
			this->buyAndStart->Click += gcnew System::EventHandler(this, &toolbox::buyAndStart_Click);
			// 
			// viewObjective
			// 
			this->viewObjective->Location = System::Drawing::Point(140, 215);
			this->viewObjective->Name = L"viewObjective";
			this->viewObjective->Size = System::Drawing::Size(132, 24);
			this->viewObjective->TabIndex = 2;
			this->viewObjective->Text = L"View Your Objective";
			this->viewObjective->UseVisualStyleBackColor = true;
			this->viewObjective->Click += gcnew System::EventHandler(this, &toolbox::viewObjective_Click);
			// 
			// viewPlanetInfo
			// 
			this->viewPlanetInfo->Location = System::Drawing::Point(140, 242);
			this->viewPlanetInfo->Name = L"viewPlanetInfo";
			this->viewPlanetInfo->Size = System::Drawing::Size(132, 24);
			this->viewPlanetInfo->TabIndex = 3;
			this->viewPlanetInfo->Text = L"View Planet Information";
			this->viewPlanetInfo->UseVisualStyleBackColor = true;
			this->viewPlanetInfo->Click += gcnew System::EventHandler(this, &toolbox::viewPlanetInfo_Click);
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
			this->groupBox2->Location = System::Drawing::Point(363, 206);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(388, 69);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Spaceship Status Panel";
			// 
			// galaxyLoad
			// 
			this->galaxyLoad->Location = System::Drawing::Point(303, 42);
			this->galaxyLoad->Name = L"galaxyLoad";
			this->galaxyLoad->Size = System::Drawing::Size(75, 23);
			this->galaxyLoad->TabIndex = 13;
			this->galaxyLoad->Text = L"Lock in";
			this->galaxyLoad->UseVisualStyleBackColor = true;
			this->galaxyLoad->Click += gcnew System::EventHandler(this, &toolbox::galaxyLoad_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"given.lvl", L"random.lvl", L"Milky Way.lvl",
					L"Andromeda.lvl", L"NGC-50120.lvl", L"NGC-20105.lvl"
			});
			this->comboBox1->Location = System::Drawing::Point(100, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(197, 21);
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
			this->TonnageGoal->Location = System::Drawing::Point(358, 17);
			this->TonnageGoal->Name = L"TonnageGoal";
			this->TonnageGoal->Size = System::Drawing::Size(24, 20);
			this->TonnageGoal->TabIndex = 10;
			this->TonnageGoal->Text = L"XX";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(234, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Platinum Tonnage Goal:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(85, 20);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(95, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Platinum (Tonnes):";
			// 
			// PlatinumCount
			// 
			this->PlatinumCount->Location = System::Drawing::Point(183, 17);
			this->PlatinumCount->Name = L"PlatinumCount";
			this->PlatinumCount->Size = System::Drawing::Size(24, 20);
			this->PlatinumCount->TabIndex = 7;
			this->PlatinumCount->Text = L"XX";
			// 
			// FuelCount
			// 
			this->FuelCount->Location = System::Drawing::Point(39, 17);
			this->FuelCount->Name = L"FuelCount";
			this->FuelCount->Size = System::Drawing::Size(24, 20);
			this->FuelCount->TabIndex = 6;
			this->FuelCount->Text = L"XX";
			// 
			// toolbox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(763, 284);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->viewPlanetInfo);
			this->Controls->Add(this->viewObjective);
			this->Controls->Add(this->buyAndStart);
			this->Controls->Add(this->groupBox1);
			this->Name = L"toolbox";
			this->Text = L"Player Ship Controls";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RaingunCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CannonCount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DrillCount))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:

		bool isGalaxyLoaded = false;
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

		System::Void buyAndStart_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->isGalaxyLoaded) {
				int bal = this->vars->levelfile.GetModal();
				int sumbuy = 0;
				sumbuy += Convert::ToInt16(this->DrillCount->Text);
				sumbuy += Convert::ToInt16(this->CannonCount->Text)*3;
				sumbuy += Convert::ToInt16(this->RaingunCount->Text)*5;

				if (sumbuy <= bal) {
					this->PlatinumCount->Text = Convert::ToString(bal - sumbuy);
					this->DrillCount->Enabled = false;
					this->CannonCount->Enabled = false;
					this->RaingunCount->Enabled = false;
					this->comboBox1->Enabled = false;
					this->galaxyLoad->Enabled = false;
					this->vars->human.SetPlatinum(bal - sumbuy);
					this->vars->human.SetCurrentPos(this->vars->levelfile.GetPosPemain());
					this->vars->human.SetNDrill(Convert::ToInt16(this->DrillCount->Text));
					this->vars->human.SetNLaser(Convert::ToInt16(this->CannonCount->Text));
					this->vars->human.SetNRailgun(Convert::ToInt16(this->RaingunCount->Text));
					this->useDrill->Enabled = true;
					this->useCannon->Enabled = true;
					this->useRailgun->Enabled = true;

					// create the window
					sf::ContextSettings settings;
					settings.depthBits = 24;
					settings.stencilBits = 8;
					settings.antialiasingLevel = 8;
					settings.majorVersion = 3;
					settings.minorVersion = 0;
					sf::RenderWindow window(sf::VideoMode(1024, 584), "Single Player", sf::Style::Default, settings);

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
					sf::CircleShape human(8, 4);
					human.setFillColor(sf::Color(0, 0, 255));
					human.setOutlineThickness(1);
					human.setOutlineColor(sf::Color(50, 50, 150));
					human.setOrigin(sf::Vector2f(8, 8));
					human.setPosition(nodes[this->vars->human.GetCurrentPos()].getPosition());

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

					//TODO: show inter-node distances
					sf::Text **chestdist = new sf::Text*[this->vars->levelfile.GetJumlahSimpul()];
					for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
						chestdist[i] = new sf::Text[this->vars->levelfile.GetJumlahSimpul()];
						for (int j = 0; j < this->vars->levelfile.GetJumlahSimpul(); j++) {
							chestdist[i][j].setFont(font); // font is a sf::Font
							chestdist[i][j].setString(std::to_string(i));
							chestdist[i][j].setCharacterSize(12); // in pixels, not points!
							chestdist[i][j].setColor(sf::Color::White);
							chestdist[i][j].setPosition(nodes[i].getPosition());
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
					while (window.isOpen() && this->vars->human.GetFuel() > 0) {
						// BEGIN EVENT HANDLER-----------------
						sf::Event event;
						if (movable) { // check is player is in move
							while (window.pollEvent(event)) {

								if (event.type == sf::Event::Closed) { // "close requested" event: we close the window
									window.close(); // end main loop
								}

								if (event.mouseButton.button == sf::Mouse::Left) { // mouse clicked event
									for (int i = 0; i < this->vars->levelfile.GetJumlahSimpul(); i++) {
										if (isMouseOver(nodes[i], event)) {
											//std::cout << "gettin " << i << std::endl;
											//nodes[i].setFillColor(sf::Color(250, 0, 0));
											time = (float)this->vars->levelfile.GetJarakSimpulKeKe(this->vars->human.GetCurrentPos(), i);
											usefuel = this->vars->human.GetFuel();
											if (!(time == -99 || time == 0)) {
												time *= 50;
												dx = nodes[i].getPosition().x - human.getPosition().x;
												dy = nodes[i].getPosition().y - human.getPosition().y;
												movable = false;
												this->vars->human.SetCurrentPos(i);
											}
										}
									}
								}

							}
						} else if (updategui) {

						} else { // player move algorithm
							//std::cout << "not movable!!" << std::endl;
							if (time == syscounter) {
								movable = true;
								this->vars->human.SetFuel(usefuel - ((int)time / 50));
								syscounter = 0;
								time = 0;
								usefuel = 0;
								substr = 0;
								diff = 0;
								this->FuelCount->Text = Convert::ToString(this->vars->human.GetFuel());
							} else {
								human.move((dx / time), (dy / time));
								substr = ((float)syscounter / time)*(time / 50);
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
						window.draw(human);
						window.display(); // end the current frame
					} // exit main loop
					this->Close();
					if (this->vars->human.GetFuel() <= 0) {
						MessageBox::Show("You have ran out of fuel.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					} else if (this->vars->human.GetNDrill() == 0 &&
							   this->vars->human.GetNLaser() == 0 &&
							   this->vars->human.GetNRailgun() == 0) {
						MessageBox::Show("You have ran out of tools", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
					if (this->vars->human.GetPlatinum() >= this->vars->levelfile.GetMinSkor()) {
						MessageBox::Show("You Won the game with a total score of " + this->vars->human.GetPlatinum(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					} else {
						MessageBox::Show("You Lost, you only collected " + this->vars->human.GetPlatinum() + " out of the minimum requirement of " + this->vars->levelfile.GetMinSkor(), "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					}
				} else { // money not enough
					MessageBox::Show("You did not have enough money.\n Please review your tool shopping amount.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			} else { // galaxy not loaded
				MessageBox::Show("You haven't locked in to a galaxy, or the selected galaxy coordinates failed to load.", "ERROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		System::Void useDrill_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->vars->human.GetNDrill() > 0) {
				this->vars->human.UseDrill();
				if (this->vars->levelfile.IsHijau(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(TIME_GREEN);
					this->vars->human.AddPlatinum(SOLAR_GREEN);
					MessageBox::Show("You try to use a hand drill to extract the treasure.\nThe Treasure is extracted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsKuning(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(EXPLODE_YELLOW);
					MessageBox::Show("You try to use a hand drill to extract the treasure.\nThe Treasure magically explode.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsMerah(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(EXPLODE_RED);
					MessageBox::Show("You try to use a hand drill to extract the treasure.\nThe Treasure magically explode.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsKosong(this->vars->human.GetCurrentPos())) {
					MessageBox::Show("The planet here does not contain any treasure.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("WTF what kind of chest is in here??", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->vars->levelfile.SetArrPosPetiOpen(this->vars->human.GetCurrentPos());
				this->DrillCount->Text = Convert::ToString(this->vars->human.GetNDrill());
				this->FuelCount->Text = Convert::ToString(this->vars->human.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->human.GetPlatinum());
			} else {
				MessageBox::Show("You did not have any Drill", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		System::Void useCannon_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->vars->human.GetNLaser() > 0) {
				this->vars->human.UseLaser();
				if (this->vars->levelfile.IsHijau(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(TIME_YELLOW);
					this->vars->human.AddPlatinum(SOLAR_GREEN);
					MessageBox::Show("You try to use a Laser Cannon to extract the treasure.\nThe Treasure is extracted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsKuning(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(TIME_YELLOW);
					this->vars->human.AddPlatinum(SOLAR_YELLOW);
					MessageBox::Show("You try to use a Laser Cannon to extract the treasure.\nThe Treasure is extracted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsMerah(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(EXPLODE_RED);
					MessageBox::Show("You try to use a Laser Cannon to extract the treasure.\nThe Treasure magically explode.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsKosong(this->vars->human.GetCurrentPos())) {
					MessageBox::Show("The planet here does not contain any treasure.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("WTF what kind of chest is in here??", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->vars->levelfile.SetArrPosPetiOpen(this->vars->human.GetCurrentPos());
				this->CannonCount->Text = Convert::ToString(this->vars->human.GetNLaser());
				this->FuelCount->Text = Convert::ToString(this->vars->human.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->human.GetPlatinum());
			} else {
				MessageBox::Show("You did not have any Laser Cannon", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		System::Void useRailgun_Click(System::Object^  sender, System::EventArgs^  e) {
			if (this->vars->human.GetNRailgun() > 0) {
				this->vars->human.UseRailgun();
				if (this->vars->levelfile.IsHijau(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(TIME_RED);
					this->vars->human.AddPlatinum(SOLAR_GREEN);
					MessageBox::Show("You try to use a Railgun to extract the treasure.\nThe Treasure is extracted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsKuning(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(TIME_RED);
					this->vars->human.AddPlatinum(SOLAR_YELLOW);
					MessageBox::Show("You try to use a Railgun to extract the treasure.\nThe Treasure is extracted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsMerah(this->vars->human.GetCurrentPos())) {
					this->vars->human.UseFuel(TIME_RED);
					this->vars->human.AddPlatinum(SOLAR_RED);
					MessageBox::Show("You try to use a Railgun to extract the treasure.\nThe Treasure is extracted successfully.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else if (this->vars->levelfile.IsKosong(this->vars->human.GetCurrentPos())) {
					MessageBox::Show("The planet here does not contain any treasure.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				} else {
					MessageBox::Show("WTF what kind of chest is in here??", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				this->vars->levelfile.SetArrPosPetiOpen(this->vars->human.GetCurrentPos());
				this->RaingunCount->Text = Convert::ToString(this->vars->human.GetNRailgun());
				this->FuelCount->Text = Convert::ToString(this->vars->human.GetFuel());
				this->PlatinumCount->Text = Convert::ToString(this->vars->human.GetPlatinum());
			} else {
				MessageBox::Show("You did not have any Railgun", "Information", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		System::Void viewObjective_Click(System::Object^  sender, System::EventArgs^  e) {
			MessageBox::Show("Welcome Commander, this is your ship information screen.\n"
							 "The imperial command has tasked tou to raze a galaxy and collect as much platinum as possible\n"
							 "Your target platinum tonnage goal is shown on the humantom right."
							 "To raze a planet, you need to have suitable tool you need to buy before starting your rampage.\n"
							 "You are given some initial capital (in Tonnes of Platinum) to buy some tools.\n"
							 "Spend this wisely, becausethe leftovers from the initial capital will be added to the final profit\n"
							 "Your ship can only run for a limited amount of time (in months), as show in the status view.\n"
							 , "Objective", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		System::Void viewPlanetInfo_Click(System::Object^  sender, System::EventArgs^  e) {
			MessageBox::Show("There are three planet categories: Green, Yellow and Red.\n"
							 "Green planets only have one Ton of platinum buried in the surface, excavatable using a Hand Drill or better.\n"
							 "Yellow planets have three Tons of platinum buried deeper in the mantle. you need to use Laser Cannon of better.\n"
							 "Red Planets have five Tons of platinum buried in the core. you will need the Railgun to extract it.\n"
							 "If you use an inadequate tool on a planet (eg. using Drill on red planet) the treasure will somehow explode.\n"
							 , "Planet Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		System::Void endTurn_Click(System::Object^  sender, System::EventArgs^  e) {
			//asdf
		}
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
				this->vars->levelfile.Print(); // DBG
				this->isGalaxyLoaded = true;
				this->vars->human.SetFuel(this->vars->levelfile.GetWaktuPermainan());
				this->FuelCount->Text = Convert::ToString(this->vars->human.GetFuel());
				this->PlatinumCount->Text = this->vars->levelfile.GetModal().ToString();
				this->TonnageGoal->Text = this->vars->levelfile.GetMinSkor().ToString();
			}
			//asdf
		}
	};
}
