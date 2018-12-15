#ifndef MAIN_WINDOW_FORM_H
#define MAIN_WINDOW_FORM_H

#include "Handler.h"
#include <map>
#include <string>

namespace ImageRecognition
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindowForm
	/// </summary>
	public ref class MainWindowForm : public System::Windows::Forms::Form
	{
	private: Handler * handler;
	private: u32 currentImageShownIndex;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ListBox^  imagesList;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ListBox^  recognizedObjectsList;


	private: System::Windows::Forms::Button^  showImageInfoButton;




	private: System::Windows::Forms::Label^  label10;






	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  info;
	private: System::Windows::Forms::FlowLayoutPanel^  imageInfoPanel;
	private: System::Windows::Forms::Label^  imageInfo;
	private: System::Windows::Forms::ListBox^  objectsList;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel7;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  objectInfo;
	private: System::Windows::Forms::ListBox^  realObjectsList;






	public:
		MainWindowForm ( void );

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindowForm ( );

	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  truePositiveLabel;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  falsePositiveLabel;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  falseNegativeLabel;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  trueNegativeLabel;

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  totalUnknownObjectsLabel;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent ( void )
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer ( ));
			this->imageInfoPanel = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->imageInfo = (gcnew System::Windows::Forms::Label ( ));
			this->label11 = (gcnew System::Windows::Forms::Label ( ));
			this->label9 = (gcnew System::Windows::Forms::Label ( ));
			this->label10 = (gcnew System::Windows::Forms::Label ( ));
			this->recognizedObjectsList = (gcnew System::Windows::Forms::ListBox ( ));
			this->imagesList = (gcnew System::Windows::Forms::ListBox ( ));
			this->showImageInfoButton = (gcnew System::Windows::Forms::Button ( ));
			this->realObjectsList = (gcnew System::Windows::Forms::ListBox ( ));
			this->info = (gcnew System::Windows::Forms::Label ( ));
			this->button5 = (gcnew System::Windows::Forms::Button ( ));
			this->objectsList = (gcnew System::Windows::Forms::ListBox ( ));
			this->label4 = (gcnew System::Windows::Forms::Label ( ));
			this->label14 = (gcnew System::Windows::Forms::Label ( ));
			this->label13 = (gcnew System::Windows::Forms::Label ( ));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->label3 = (gcnew System::Windows::Forms::Label ( ));
			this->truePositiveLabel = (gcnew System::Windows::Forms::Label ( ));
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->label5 = (gcnew System::Windows::Forms::Label ( ));
			this->falsePositiveLabel = (gcnew System::Windows::Forms::Label ( ));
			this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->label6 = (gcnew System::Windows::Forms::Label ( ));
			this->falseNegativeLabel = (gcnew System::Windows::Forms::Label ( ));
			this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->label7 = (gcnew System::Windows::Forms::Label ( ));
			this->trueNegativeLabel = (gcnew System::Windows::Forms::Label ( ));
			this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->label8 = (gcnew System::Windows::Forms::Label ( ));
			this->totalUnknownObjectsLabel = (gcnew System::Windows::Forms::Label ( ));
			this->button2 = (gcnew System::Windows::Forms::Button ( ));
			this->label2 = (gcnew System::Windows::Forms::Label ( ));
			this->label1 = (gcnew System::Windows::Forms::Label ( ));
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker ( ));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker ( ));
			this->button1 = (gcnew System::Windows::Forms::Button ( ));
			this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel ( ));
			this->label12 = (gcnew System::Windows::Forms::Label ( ));
			this->label15 = (gcnew System::Windows::Forms::Label ( ));
			this->objectInfo = (gcnew System::Windows::Forms::Label ( ));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit ( );
			this->splitContainer1->Panel1->SuspendLayout ( );
			this->splitContainer1->Panel2->SuspendLayout ( );
			this->splitContainer1->SuspendLayout ( );
			this->imageInfoPanel->SuspendLayout ( );
			this->flowLayoutPanel1->SuspendLayout ( );
			this->flowLayoutPanel2->SuspendLayout ( );
			this->flowLayoutPanel3->SuspendLayout ( );
			this->flowLayoutPanel4->SuspendLayout ( );
			this->flowLayoutPanel5->SuspendLayout ( );
			this->flowLayoutPanel6->SuspendLayout ( );
			this->flowLayoutPanel7->SuspendLayout ( );
			this->SuspendLayout ( );
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point ( 12, 12 );
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add ( this->imageInfoPanel );
			this->splitContainer1->Panel1->Controls->Add ( this->label11 );
			this->splitContainer1->Panel1->Controls->Add ( this->label9 );
			this->splitContainer1->Panel1->Controls->Add ( this->label10 );
			this->splitContainer1->Panel1->Controls->Add ( this->recognizedObjectsList );
			this->splitContainer1->Panel1->Controls->Add ( this->imagesList );
			this->splitContainer1->Panel1->Controls->Add ( this->showImageInfoButton );
			this->splitContainer1->Panel1->Controls->Add ( this->realObjectsList );
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add ( this->label15 );
			this->splitContainer1->Panel2->Controls->Add ( this->flowLayoutPanel7 );
			this->splitContainer1->Panel2->Controls->Add ( this->info );
			this->splitContainer1->Panel2->Controls->Add ( this->button5 );
			this->splitContainer1->Panel2->Controls->Add ( this->objectsList );
			this->splitContainer1->Panel2->Controls->Add ( this->label4 );
			this->splitContainer1->Panel2->Controls->Add ( this->label14 );
			this->splitContainer1->Panel2->Controls->Add ( this->label13 );
			this->splitContainer1->Panel2->Controls->Add ( this->flowLayoutPanel1 );
			this->splitContainer1->Panel2->Controls->Add ( this->button2 );
			this->splitContainer1->Panel2->Controls->Add ( this->label2 );
			this->splitContainer1->Panel2->Controls->Add ( this->label1 );
			this->splitContainer1->Panel2->Controls->Add ( this->dateTimePicker2 );
			this->splitContainer1->Panel2->Controls->Add ( this->dateTimePicker1 );
			this->splitContainer1->Panel2->Controls->Add ( this->button1 );
			this->splitContainer1->Size = System::Drawing::Size ( 794, 506 );
			this->splitContainer1->SplitterDistance = 262;
			this->splitContainer1->TabIndex = 5;
			// 
			// imageInfoPanel
			// 
			this->imageInfoPanel->Controls->Add ( this->imageInfo );
			this->imageInfoPanel->Location = System::Drawing::Point ( 21, 147 );
			this->imageInfoPanel->Name = L"imageInfoPanel";
			this->imageInfoPanel->Size = System::Drawing::Size ( 238, 102 );
			this->imageInfoPanel->TabIndex = 21;
			// 
			// imageInfo
			// 
			this->imageInfo->AutoSize = true;
			this->imageInfo->Location = System::Drawing::Point ( 3, 0 );
			this->imageInfo->Name = L"imageInfo";
			this->imageInfo->Size = System::Drawing::Size ( 0, 17 );
			this->imageInfo->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point ( 21, 358 );
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size ( 83, 17 );
			this->label11->TabIndex = 20;
			this->label11->Text = L"Recognized";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point ( 21, 252 );
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size ( 37, 17 );
			this->label9->TabIndex = 19;
			this->label9->Text = L"Real";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point ( 24, 15 );
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size ( 72, 17 );
			this->label10->TabIndex = 18;
			this->label10->Text = L"All Images";
			// 
			// recognizedObjectsList
			// 
			this->recognizedObjectsList->FormattingEnabled = true;
			this->recognizedObjectsList->ItemHeight = 16;
			this->recognizedObjectsList->Location = System::Drawing::Point ( 21, 378 );
			this->recognizedObjectsList->Name = L"recognizedObjectsList";
			this->recognizedObjectsList->Size = System::Drawing::Size ( 238, 68 );
			this->recognizedObjectsList->TabIndex = 13;
			// 
			// imagesList
			// 
			this->imagesList->FormattingEnabled = true;
			this->imagesList->ItemHeight = 16;
			this->imagesList->Location = System::Drawing::Point ( 21, 32 );
			this->imagesList->Name = L"imagesList";
			this->imagesList->Size = System::Drawing::Size ( 238, 68 );
			this->imagesList->TabIndex = 13;
			// 
			// showImageInfoButton
			// 
			this->showImageInfoButton->Location = System::Drawing::Point ( 21, 109 );
			this->showImageInfoButton->Name = L"showImageInfoButton";
			this->showImageInfoButton->Size = System::Drawing::Size ( 238, 23 );
			this->showImageInfoButton->TabIndex = 14;
			this->showImageInfoButton->Text = L"show image info";
			this->showImageInfoButton->UseVisualStyleBackColor = true;
			this->showImageInfoButton->Click += gcnew System::EventHandler ( this, &MainWindowForm::imageInfoButton_Click );
			// 
			// realObjectsList
			// 
			this->realObjectsList->FormattingEnabled = true;
			this->realObjectsList->ItemHeight = 16;
			this->realObjectsList->Location = System::Drawing::Point ( 21, 275 );
			this->realObjectsList->Name = L"realObjectsList";
			this->realObjectsList->Size = System::Drawing::Size ( 238, 68 );
			this->realObjectsList->TabIndex = 12;
			this->realObjectsList->SelectedIndexChanged += gcnew System::EventHandler ( this, &MainWindowForm::realObjects_showInfo );
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Location = System::Drawing::Point ( 350, 447 );
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size ( 137, 17 );
			this->info->TabIndex = 19;
			this->info->Text = L"No information here.";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point ( 281, 196 );
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size ( 246, 30 );
			this->button5->TabIndex = 18;
			this->button5->Text = L"Update stats";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler ( this, &MainWindowForm::button5_Click );
			// 
			// objectsList
			// 
			this->objectsList->FormattingEnabled = true;
			this->objectsList->ItemHeight = 16;
			this->objectsList->Location = System::Drawing::Point ( 12, 32 );
			this->objectsList->Name = L"objectsList";
			this->objectsList->Size = System::Drawing::Size ( 246, 68 );
			this->objectsList->TabIndex = 15;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point ( 9, 12 );
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size ( 111, 17 );
			this->label4->TabIndex = 16;
			this->label4->Text = L"All Object Types";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point ( 12, 103 );
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size ( 64, 17 );
			this->label14->TabIndex = 14;
			this->label14->Text = L"Statistics";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point ( 279, 320 );
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size ( 0, 17 );
			this->label13->TabIndex = 10;
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add ( this->flowLayoutPanel2 );
			this->flowLayoutPanel1->Controls->Add ( this->flowLayoutPanel3 );
			this->flowLayoutPanel1->Controls->Add ( this->flowLayoutPanel4 );
			this->flowLayoutPanel1->Controls->Add ( this->flowLayoutPanel5 );
			this->flowLayoutPanel1->Controls->Add ( this->flowLayoutPanel6 );
			this->flowLayoutPanel1->Location = System::Drawing::Point ( 12, 124 );
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size ( 246, 137 );
			this->flowLayoutPanel1->TabIndex = 7;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add ( this->label3 );
			this->flowLayoutPanel2->Controls->Add ( this->truePositiveLabel );
			this->flowLayoutPanel2->Location = System::Drawing::Point ( 3, 3 );
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size ( 240, 21 );
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point ( 3, 0 );
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size ( 89, 17 );
			this->label3->TabIndex = 0;
			this->label3->Text = L"true positive:";
			// 
			// truePositiveLabel
			// 
			this->truePositiveLabel->AutoSize = true;
			this->truePositiveLabel->Location = System::Drawing::Point ( 98, 0 );
			this->truePositiveLabel->Name = L"truePositiveLabel";
			this->truePositiveLabel->Size = System::Drawing::Size ( 12, 17 );
			this->truePositiveLabel->TabIndex = 1;
			this->truePositiveLabel->Text = L" ";
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add ( this->label5 );
			this->flowLayoutPanel3->Controls->Add ( this->falsePositiveLabel );
			this->flowLayoutPanel3->Location = System::Drawing::Point ( 3, 30 );
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size ( 240, 20 );
			this->flowLayoutPanel3->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point ( 3, 0 );
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size ( 94, 17 );
			this->label5->TabIndex = 1;
			this->label5->Text = L"false positive:";
			// 
			// falsePositiveLabel
			// 
			this->falsePositiveLabel->AutoSize = true;
			this->falsePositiveLabel->Location = System::Drawing::Point ( 103, 0 );
			this->falsePositiveLabel->Name = L"falsePositiveLabel";
			this->falsePositiveLabel->Size = System::Drawing::Size ( 12, 17 );
			this->falsePositiveLabel->TabIndex = 2;
			this->falsePositiveLabel->Text = L" ";
			// 
			// flowLayoutPanel4
			// 
			this->flowLayoutPanel4->Controls->Add ( this->label6 );
			this->flowLayoutPanel4->Controls->Add ( this->falseNegativeLabel );
			this->flowLayoutPanel4->Location = System::Drawing::Point ( 3, 56 );
			this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			this->flowLayoutPanel4->Size = System::Drawing::Size ( 240, 22 );
			this->flowLayoutPanel4->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point ( 3, 0 );
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size ( 100, 17 );
			this->label6->TabIndex = 1;
			this->label6->Text = L"false negative:";
			// 
			// falseNegativeLabel
			// 
			this->falseNegativeLabel->AutoSize = true;
			this->falseNegativeLabel->Location = System::Drawing::Point ( 109, 0 );
			this->falseNegativeLabel->Name = L"falseNegativeLabel";
			this->falseNegativeLabel->Size = System::Drawing::Size ( 12, 17 );
			this->falseNegativeLabel->TabIndex = 2;
			this->falseNegativeLabel->Text = L" ";
			// 
			// flowLayoutPanel5
			// 
			this->flowLayoutPanel5->Controls->Add ( this->label7 );
			this->flowLayoutPanel5->Controls->Add ( this->trueNegativeLabel );
			this->flowLayoutPanel5->Location = System::Drawing::Point ( 3, 84 );
			this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			this->flowLayoutPanel5->Size = System::Drawing::Size ( 240, 21 );
			this->flowLayoutPanel5->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point ( 3, 0 );
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size ( 95, 17 );
			this->label7->TabIndex = 1;
			this->label7->Text = L"true negative:";
			// 
			// trueNegativeLabel
			// 
			this->trueNegativeLabel->AutoSize = true;
			this->trueNegativeLabel->Location = System::Drawing::Point ( 104, 0 );
			this->trueNegativeLabel->Name = L"trueNegativeLabel";
			this->trueNegativeLabel->Size = System::Drawing::Size ( 12, 17 );
			this->trueNegativeLabel->TabIndex = 2;
			this->trueNegativeLabel->Text = L" ";
			// 
			// flowLayoutPanel6
			// 
			this->flowLayoutPanel6->Controls->Add ( this->label8 );
			this->flowLayoutPanel6->Controls->Add ( this->totalUnknownObjectsLabel );
			this->flowLayoutPanel6->Location = System::Drawing::Point ( 3, 111 );
			this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			this->flowLayoutPanel6->Size = System::Drawing::Size ( 240, 24 );
			this->flowLayoutPanel6->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point ( 3, 0 );
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size ( 148, 17 );
			this->label8->TabIndex = 1;
			this->label8->Text = L"total unknown objects:";
			// 
			// totalUnknownObjectsLabel
			// 
			this->totalUnknownObjectsLabel->AutoSize = true;
			this->totalUnknownObjectsLabel->Location = System::Drawing::Point ( 157, 0 );
			this->totalUnknownObjectsLabel->Name = L"totalUnknownObjectsLabel";
			this->totalUnknownObjectsLabel->Size = System::Drawing::Size ( 12, 17 );
			this->totalUnknownObjectsLabel->TabIndex = 2;
			this->totalUnknownObjectsLabel->Text = L" ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point ( 281, 160 );
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size ( 246, 30 );
			this->button2->TabIndex = 5;
			this->button2->Text = L"Recognize";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler ( this, &MainWindowForm::button2_Click );
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point ( 293, 60 );
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size ( 25, 17 );
			this->label2->TabIndex = 4;
			this->label2->Text = L"To";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point ( 278, 32 );
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size ( 40, 17 );
			this->label1->TabIndex = 3;
			this->label1->Text = L"From";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point ( 324, 60 );
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size ( 200, 22 );
			this->dateTimePicker2->TabIndex = 2;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point ( 324, 33 );
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size ( 200, 22 );
			this->dateTimePicker1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point ( 281, 124 );
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size ( 246, 30 );
			this->button1->TabIndex = 0;
			this->button1->Text = L"Filter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler ( this, &MainWindowForm::button1_Click );
			// 
			// flowLayoutPanel7
			// 
			this->flowLayoutPanel7->Controls->Add ( this->label12 );
			this->flowLayoutPanel7->Controls->Add ( this->objectInfo );
			this->flowLayoutPanel7->Location = System::Drawing::Point ( 15, 378 );
			this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			this->flowLayoutPanel7->Size = System::Drawing::Size ( 246, 68 );
			this->flowLayoutPanel7->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point ( 3, 0 );
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size ( 0, 17 );
			this->label12->TabIndex = 0;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point ( 12, 358 );
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size ( 73, 17 );
			this->label15->TabIndex = 23;
			this->label15->Text = L"object info";
			// 
			// objectInfo
			// 
			this->objectInfo->AutoSize = true;
			this->objectInfo->Location = System::Drawing::Point ( 9, 0 );
			this->objectInfo->Name = L"objectInfo";
			this->objectInfo->Size = System::Drawing::Size ( 0, 17 );
			this->objectInfo->TabIndex = 1;
			// 
			// MainWindowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF ( 8, 16 );
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size ( 815, 495 );
			this->Controls->Add ( this->splitContainer1 );
			this->Name = L"MainWindowForm";
			this->Text = L"MainWindowForm";
			this->splitContainer1->Panel1->ResumeLayout ( false );
			this->splitContainer1->Panel1->PerformLayout ( );
			this->splitContainer1->Panel2->ResumeLayout ( false );
			this->splitContainer1->Panel2->PerformLayout ( );
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit ( );
			this->splitContainer1->ResumeLayout ( false );
			this->imageInfoPanel->ResumeLayout ( false );
			this->imageInfoPanel->PerformLayout ( );
			this->flowLayoutPanel1->ResumeLayout ( false );
			this->flowLayoutPanel2->ResumeLayout ( false );
			this->flowLayoutPanel2->PerformLayout ( );
			this->flowLayoutPanel3->ResumeLayout ( false );
			this->flowLayoutPanel3->PerformLayout ( );
			this->flowLayoutPanel4->ResumeLayout ( false );
			this->flowLayoutPanel4->PerformLayout ( );
			this->flowLayoutPanel5->ResumeLayout ( false );
			this->flowLayoutPanel5->PerformLayout ( );
			this->flowLayoutPanel6->ResumeLayout ( false );
			this->flowLayoutPanel6->PerformLayout ( );
			this->flowLayoutPanel7->ResumeLayout ( false );
			this->flowLayoutPanel7->PerformLayout ( );
			this->ResumeLayout ( false );

		}
#pragma endregion

	private: System::Void button1_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		auto from = this->dateTimePicker1->Value;
		auto to = this->dateTimePicker2->Value;
		bool success = handler->filter ( from, to );
		if (!success)
			info->Text = gcnew String("Incorrect date.");
		auto const & selectedImages = handler->getSelectedImages ( );
		show ( selectedImages, handler->getObjects ( ) );
	}

	private: System::Void show ( std::vector<Image*> const & images, std::vector<ImageObject*> const & objects )
	{
		imagesList->Items->Clear ( );
		objectsList->Items->Clear ( );
		for (auto const & image : images) {
			imagesList->Items->Add ( gcnew String ( std::string ( "Image id = " + std::to_string ( image->getId ( ) ) ).c_str ( ) ) );
		}
		for (auto const & object : objects) {
			objectsList->Items->Add ( 
				gcnew String ((
					object->getTitle ( ) 
					+ " prob="
					+ std::to_string(object->getProb())
				).c_str ( )) 
			);
		}
	}

	private: void MainWindowForm::imageInfoButton_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int selected_index = imagesList->SelectedIndex;
		if (selected_index == -1) {
			info->Text = gcnew String ( "Image not selected." );
			return;
		}
		auto const & selectedImages = handler->getSelectedImages ( );
		fill_image_data ( selectedImages[selected_index] );
		currentImageShownIndex = (u32)selected_index;
	}

	private: void MainWindowForm::fill_image_data ( Image const * im )
	{
		time_t t = std::chrono::system_clock::to_time_t ( im->getCreated ( ) );
		char datetime[100];
		ctime_s ( datetime, 100, &t );
		std::string text = std::string ( "Image id: " ) + std::to_string ( im->getId ( ) ) +
			std::string ( "\nCreated: " ) + datetime +
			std::string ( "\nHeight: " ) + std::to_string ( im->getRect ( ).y ) +
			std::string ( "\nWidth: " ) + std::to_string ( im->getRect ( ).x );
		imageInfo->Text = gcnew String ( text.c_str ( ) );
		auto objects = im->getObjects ( );
		auto rec_objects = im->getLastRecognizedObjects ( );
		fill_objects ( realObjectsList, objects );
		fill_objects ( recognizedObjectsList, rec_objects );
	}

	private: void MainWindowForm::fill_objects ( ListBox ^ panel, std::vector<ImageObjectInstance *> objects )
	{
		panel->Items->Clear ( );
		for (auto const & o : objects) {
			std::string text;
			if (o->isUnknown ( ))
				text = "Unknown object";
			else
				text = o->getObject ( )->getTitle ( );
			
			panel->Items->Add ( gcnew System::String ( text.c_str ( ) ) );
		}
	}

	private: void MainWindowForm::fill_stats ( stats_item const & stats )
	{
		falsePositiveLabel->Text = gcnew String ( std::to_string ( stats.false_positive ).c_str ( ) );
		truePositiveLabel->Text = gcnew String ( std::to_string ( stats.true_positive ).c_str ( ) );
		falseNegativeLabel->Text = gcnew String ( std::to_string ( stats.false_negative ).c_str ( ) );
		trueNegativeLabel->Text = gcnew String ( std::to_string ( stats.true_negative ).c_str ( ) );
		totalUnknownObjectsLabel->Text = gcnew String ( std::to_string ( stats.total_unknown_objects ).c_str ( ) );
	}

	private: void MainWindowForm::button2_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int selected_index = objectsList->SelectedIndex;
		handler->setSelectedObject ( selected_index );
		bool success = handler->run ( );

		if (!success) {
			info->Text = gcnew String ( "Nothing to recognize." );
			return;
		}
	}

	private: System::Void button5_Click ( System::Object^  sender, System::EventArgs^  e )
	{
		int index = objectsList->SelectedIndex;
		auto const & objects = handler->getObjects ( );
		if (index == -1) {
			info->Text = gcnew String ( "Object not selected" );
			return;
		}
		fill_stats ( handler->calcStatsItem( objects[index]));
	}

	private: System::Void realObjects_showInfo ( System::Object^  sender, System::EventArgs^  e )
	{
		auto index = realObjectsList->SelectedIndex;
		auto const & images = handler->getImages ( );
		auto const & objects = images[currentImageShownIndex]->getObjects ( );
		fill_object_data ( objects[index] );
	}

	private: System::Void recognizedObjects_showInfo ( System::Object^  sender, System::EventArgs^  e )
	{
		auto index = realObjectsList->SelectedIndex;
		auto const & images = handler->getImages ( );
		auto const & objects = images[currentImageShownIndex]->getLastRecognizedObjects( );
		fill_object_data ( objects[index] );
	}

	private: System::Void fill_object_data( ImageObjectInstance * o )
	{
		std::string text;
		if (o->isUnknown ( ))
			text = "unknown";
		else 
			text = std::string ( "Object title: " ) + o->getObject ( )->getTitle ( ) +
			std::string ( "\npos x: " ) + std::to_string ( o->getPos ( ).x ) +
			std::string ( "\npos y: " ) + std::to_string ( o->getPos ( ).y ) +
			std::string ( "\nrect x: " ) + std::to_string ( o->getRect ( ).x ) +
			std::string ( "\nrect y: " ) + std::to_string ( o->getRect ( ).y );
		objectInfo->Text = gcnew String ( text.c_str() );
	}
};
}
#endif