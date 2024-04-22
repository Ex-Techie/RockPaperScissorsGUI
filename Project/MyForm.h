#pragma once
#include <string>
#include <ctime>
#include <cstdlib>

namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		Image^ CPUDefault;
		Image^ scissorsImage;
		Image^ rockImage;
		Image^ paperImage;
		Image^ playerDefault;

		int rounds = 3;
		int timerPerRound = 6;
		bool gameOver = false;


		Random^ rnd = gcnew Random();

		int randomNumber = 0;

		String^ playerChoice;
		String^ CPUchoice;

		int playerScore;
		int CPUScore;


		

	private: System::Windows::Forms::Label^ txtPlayerScore;
	private: System::Windows::Forms::Label^ txtCPUScore;
	private: System::Windows::Forms::Label^ txtRounds;
	private: System::Windows::Forms::Label^ txtCountDown;
	private: System::Windows::Forms::Label^ labelCountDown;

	private: System::Windows::Forms::Timer^ countDownTimer;

	public:

		MyForm(void)
		{
			InitializeComponent();
			scissorsImage = Image::FromFile(Application::StartupPath + "\\images\\scissors.png");
			picScissors->Image = scissorsImage;
			paperImage = Image::FromFile(Application::StartupPath + "\\images\\paper.png");
			picPaper->Image = paperImage;
			rockImage = Image::FromFile(Application::StartupPath + "\\images\\rock.png");
			picRock->Image = rockImage;
			playerDefault = Image::FromFile(Application::StartupPath + "\\images\\rockHR.png");
			picPlayer->Image = playerDefault;
			CPUDefault = Image::FromFile(Application::StartupPath + "\\images\\rockHL.png");
			picCPU->Image = CPUDefault;
			//
			//TODO: Add the constructor code here
			//

			countDownTimer->Enabled = true;
			playerChoice = "none";

			txtCountDown->Text = "5";
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRock;
	protected:
	private: System::Windows::Forms::Button^ btnPaper;
	private: System::Windows::Forms::Button^ btnScissors;
	private: System::Windows::Forms::Button^ btnRestart;
	private: System::Windows::Forms::PictureBox^ picRock;
	private: System::Windows::Forms::PictureBox^ picPaper;
	private: System::Windows::Forms::PictureBox^ picScissors;
	private: System::Windows::Forms::PictureBox^ picPlayer;
	private: System::Windows::Forms::PictureBox^ picCPU;










	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnRock = (gcnew System::Windows::Forms::Button());
			this->btnPaper = (gcnew System::Windows::Forms::Button());
			this->btnScissors = (gcnew System::Windows::Forms::Button());
			this->btnRestart = (gcnew System::Windows::Forms::Button());
			this->picRock = (gcnew System::Windows::Forms::PictureBox());
			this->picPaper = (gcnew System::Windows::Forms::PictureBox());
			this->picScissors = (gcnew System::Windows::Forms::PictureBox());
			this->picPlayer = (gcnew System::Windows::Forms::PictureBox());
			this->picCPU = (gcnew System::Windows::Forms::PictureBox());
			this->txtPlayerScore = (gcnew System::Windows::Forms::Label());
			this->txtCPUScore = (gcnew System::Windows::Forms::Label());
			this->txtRounds = (gcnew System::Windows::Forms::Label());
			this->txtCountDown = (gcnew System::Windows::Forms::Label());
			this->countDownTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelCountDown = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPaper))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picScissors))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPlayer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCPU))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRock
			// 
			this->btnRock->Location = System::Drawing::Point(54, 499);
			this->btnRock->Name = L"btnRock";
			this->btnRock->Size = System::Drawing::Size(97, 37);
			this->btnRock->TabIndex = 0;
			this->btnRock->Text = L"Rock";
			this->btnRock->UseVisualStyleBackColor = true;
			this->btnRock->Click += gcnew System::EventHandler(this, &MyForm::btnRock_Click);
			// 
			// btnPaper
			// 
			this->btnPaper->Location = System::Drawing::Point(228, 499);
			this->btnPaper->Name = L"btnPaper";
			this->btnPaper->Size = System::Drawing::Size(97, 37);
			this->btnPaper->TabIndex = 0;
			this->btnPaper->Text = L"Paper";
			this->btnPaper->UseVisualStyleBackColor = true;
			this->btnPaper->Click += gcnew System::EventHandler(this, &MyForm::btnPaper_Click);
			// 
			// btnScissors
			// 
			this->btnScissors->Location = System::Drawing::Point(403, 499);
			this->btnScissors->Name = L"btnScissors";
			this->btnScissors->Size = System::Drawing::Size(97, 37);
			this->btnScissors->TabIndex = 0;
			this->btnScissors->Text = L"Scissors";
			this->btnScissors->UseVisualStyleBackColor = true;
			this->btnScissors->Click += gcnew System::EventHandler(this, &MyForm::btnScissors_Click);
			// 
			// btnRestart
			// 
			this->btnRestart->Location = System::Drawing::Point(443, 575);
			this->btnRestart->Name = L"btnRestart";
			this->btnRestart->Size = System::Drawing::Size(97, 37);
			this->btnRestart->TabIndex = 0;
			this->btnRestart->Text = L"Restart";
			this->btnRestart->UseVisualStyleBackColor = true;
			this->btnRestart->Click += gcnew System::EventHandler(this, &MyForm::btnRestart_Click);
			// 
			// picRock
			// 
			this->picRock->Location = System::Drawing::Point(37, 331);
			this->picRock->Name = L"picRock";
			this->picRock->Size = System::Drawing::Size(129, 153);
			this->picRock->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picRock->TabIndex = 1;
			this->picRock->TabStop = false;
			// 
			// picPaper
			// 
			this->picPaper->Location = System::Drawing::Point(213, 331);
			this->picPaper->Name = L"picPaper";
			this->picPaper->Size = System::Drawing::Size(129, 153);
			this->picPaper->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picPaper->TabIndex = 1;
			this->picPaper->TabStop = false;
			// 
			// picScissors
			// 
			this->picScissors->Location = System::Drawing::Point(387, 331);
			this->picScissors->Name = L"picScissors";
			this->picScissors->Size = System::Drawing::Size(129, 153);
			this->picScissors->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picScissors->TabIndex = 1;
			this->picScissors->TabStop = false;
			// 
			// picPlayer
			// 
			this->picPlayer->Location = System::Drawing::Point(114, 110);
			this->picPlayer->Name = L"picPlayer";
			this->picPlayer->Size = System::Drawing::Size(129, 153);
			this->picPlayer->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picPlayer->TabIndex = 1;
			this->picPlayer->TabStop = false;
			// 
			// picCPU
			// 
			this->picCPU->Location = System::Drawing::Point(314, 110);
			this->picCPU->Name = L"picCPU";
			this->picCPU->Size = System::Drawing::Size(129, 153);
			this->picCPU->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picCPU->TabIndex = 1;
			this->picCPU->TabStop = false;
			// 
			// txtPlayerScore
			// 
			this->txtPlayerScore->AutoSize = true;
			this->txtPlayerScore->Font = (gcnew System::Drawing::Font(L"Jokerman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPlayerScore->Location = System::Drawing::Point(109, 78);
			this->txtPlayerScore->Name = L"txtPlayerScore";
			this->txtPlayerScore->Size = System::Drawing::Size(108, 29);
			this->txtPlayerScore->TabIndex = 3;
			this->txtPlayerScore->Text = L"Player : x";
			// 
			// txtCPUScore
			// 
			this->txtCPUScore->AutoSize = true;
			this->txtCPUScore->Font = (gcnew System::Drawing::Font(L"Jokerman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCPUScore->Location = System::Drawing::Point(309, 78);
			this->txtCPUScore->Name = L"txtCPUScore";
			this->txtCPUScore->Size = System::Drawing::Size(86, 29);
			this->txtCPUScore->TabIndex = 3;
			this->txtCPUScore->Text = L"CPU : x";
			// 
			// txtRounds
			// 
			this->txtRounds->AutoSize = true;
			this->txtRounds->Font = (gcnew System::Drawing::Font(L"Jokerman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtRounds->Location = System::Drawing::Point(12, 22);
			this->txtRounds->Name = L"txtRounds";
			this->txtRounds->Size = System::Drawing::Size(114, 29);
			this->txtRounds->TabIndex = 3;
			this->txtRounds->Text = L"Rounds : x";
			// 
			// txtCountDown
			// 
			this->txtCountDown->AutoSize = true;
			this->txtCountDown->Font = (gcnew System::Drawing::Font(L"Jokerman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCountDown->Location = System::Drawing::Point(510, 23);
			this->txtCountDown->Name = L"txtCountDown";
			this->txtCountDown->Size = System::Drawing::Size(30, 29);
			this->txtCountDown->TabIndex = 3;
			this->txtCountDown->Text = L" x";
			// 
			// countDownTimer
			// 
			this->countDownTimer->Interval = 1000;
			this->countDownTimer->Tick += gcnew System::EventHandler(this, &MyForm::countDownTimerEvent);
			// 
			// labelCountDown
			// 
			this->labelCountDown->AutoSize = true;
			this->labelCountDown->Font = (gcnew System::Drawing::Font(L"Jokerman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCountDown->Location = System::Drawing::Point(363, 22);
			this->labelCountDown->Name = L"labelCountDown";
			this->labelCountDown->Size = System::Drawing::Size(143, 29);
			this->labelCountDown->TabIndex = 4;
			this->labelCountDown->Text = L"CountDown : ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(563, 624);
			this->Controls->Add(this->labelCountDown);
			this->Controls->Add(this->txtCountDown);
			this->Controls->Add(this->txtRounds);
			this->Controls->Add(this->txtCPUScore);
			this->Controls->Add(this->txtPlayerScore);
			this->Controls->Add(this->picScissors);
			this->Controls->Add(this->picPaper);
			this->Controls->Add(this->picCPU);
			this->Controls->Add(this->picPlayer);
			this->Controls->Add(this->picRock);
			this->Controls->Add(this->btnRestart);
			this->Controls->Add(this->btnScissors);
			this->Controls->Add(this->btnPaper);
			this->Controls->Add(this->btnRock);
			this->Name = L"MyForm";
			this->Text = L"Rock Paper Scissors | By KaliYang";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picRock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPaper))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picScissors))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPlayer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picCPU))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnRock_Click(System::Object^ sender, System::EventArgs^ e) {
		picPlayer->Image = Image::FromFile(Application::StartupPath + "\\images\\rockHR.png");
		playerChoice = "rock";
	}
    private: System::Void btnPaper_Click(System::Object^ sender, System::EventArgs^ e) {
		picPlayer->Image = Image::FromFile(Application::StartupPath + "\\images\\paperHR.png");
		playerChoice = "paper";
    }
	private: System::Void btnScissors_Click(System::Object^ sender, System::EventArgs^ e) {
		picPlayer->Image = Image::FromFile(Application::StartupPath + "\\images\\scissorsHR.png");
		playerChoice = "scissors";
	}
	private: System::Void btnRestart_Click(System::Object^ sender, System::EventArgs^ e) {
		playerScore = 0;
		CPUScore = 0;
		rounds = 3;

		txtPlayerScore->Text = "Player : " + playerScore;
		txtCPUScore->Text = "CPU : " + CPUScore;

		playerChoice = "none";

		countDownTimer->Enabled = true;

		playerDefault = Image::FromFile(Application::StartupPath + "\\images\\rockHR.png");
		picPlayer->Image = playerDefault;
		CPUDefault = Image::FromFile(Application::StartupPath + "\\images\\rockHL.png");
		picCPU->Image = CPUDefault;

		gameOver = false;
	}
	private: System::Void countDownTimerEvent(System::Object^ sender, System::EventArgs^ e) {

		timerPerRound -= 1;
		txtCountDown->Text = timerPerRound.ToString();

		txtRounds->Text = "Rounds : " + rounds;

		if (timerPerRound < 1) {
			countDownTimer->Enabled = false;

			timerPerRound = 6;
			array<String^>^ CPUchoiceList = gcnew array<String^> {"rock", "paper", "scissors", "rock", "paper", "scissors"};
			randomNumber = rnd->Next(0, CPUchoiceList->Length);
			CPUchoice = CPUchoiceList[randomNumber];

			if (CPUchoice == "rock") {
				picCPU->Image = Image::FromFile(Application::StartupPath + "\\images\\rockHL.png");
			}
			else if (CPUchoice == "paper") {
				picCPU->Image = Image::FromFile(Application::StartupPath + "\\images\\paperHL.png");
			}
			else if (CPUchoice == "scissors") {
				picCPU->Image = Image::FromFile(Application::StartupPath + "\\images\\scissorsHL.png");
			}

			if (rounds > 0) {
				checkGame();
			}
			else {
				if (playerScore > CPUScore) {
					MessageBox::Show("Player Won the game");
				}
				else {
					MessageBox::Show("Player Won the game");
				}

				gameOver = true;
			}
		}


		
	}

	private: void checkGame() {
		if (playerChoice == "rock" && CPUchoice == "paper") {
			CPUScore += 1;
			rounds -= 1;

			MessageBox::Show("CPU Wins! Paper Covers Rock");
		}
		else if (playerChoice == "paper" && CPUchoice == "scissors") {
			CPUScore += 1;
			rounds -= 1;

			MessageBox::Show("CPU Wins! Scissors cut Paper");
		}
		else if (playerChoice == "scissors" && CPUchoice == "rock") {
			CPUScore += 1;
			rounds -= 1;

			MessageBox::Show("CPU Wins! Rocks Breaks Scissors");
		}
		else if (playerChoice == "paper" && CPUchoice == "rock") {
			playerScore += 1;
			rounds -= 1;

			MessageBox::Show("Player Wins! Paper Covers Rock");
		}
		else if (playerChoice == "scissors" && CPUchoice == "paper") {
			playerScore += 1;
			rounds -= 1;

			MessageBox::Show("Player Wins! Scissors cut Paper");
		}
		else if (playerChoice == "rock" && CPUchoice == "scissors") {
			playerScore += 1;
			rounds -= 1;

			MessageBox::Show("Player Wins! Rocks Breaks Scissors");
		}
		else if (playerChoice == "none") {
			MessageBox::Show("Make a choice");
		}
		else {
			MessageBox::Show("Draw!!!");
		}

		startNextRound();	
	}
	private: void startNextRound() {

		if (gameOver == true) {
			return;
		}

		txtPlayerScore->Text = "Player : " + playerScore;
		txtCPUScore->Text = "CPU : " + CPUScore;

		playerChoice = "none";

		countDownTimer->Enabled = true;

		playerDefault = Image::FromFile(Application::StartupPath + "\\images\\rockHR.png");
		picPlayer->Image = playerDefault;
		CPUDefault = Image::FromFile(Application::StartupPath + "\\images\\rockHL.png");
		picCPU->Image = CPUDefault;
	}
};
}
