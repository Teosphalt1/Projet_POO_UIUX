#pragma once
#include "FormAdress.h"
#include "FormClients.h"
#include "FormStaff.h"
#include "FormStock.h"
#include "FormOrder.h"
#include "FormPayment.h"
#include "FormToOrder.h"
#include "FormStat.h"

namespace ProjetV1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_adresse;
	private: System::Windows::Forms::Button^ btn_client;
	private: System::Windows::Forms::Button^ btn_staff;
	private: System::Windows::Forms::Button^ btn_order;
	private: System::Windows::Forms::Button^ btn_payment;
	private: System::Windows::Forms::Button^ btn_stock;
	private: System::Windows::Forms::Button^ btn_to_order;
	private: System::Windows::Forms::Button^ btn_stats;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	protected:






	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenu::typeid));
			this->btn_adresse = (gcnew System::Windows::Forms::Button());
			this->btn_client = (gcnew System::Windows::Forms::Button());
			this->btn_staff = (gcnew System::Windows::Forms::Button());
			this->btn_order = (gcnew System::Windows::Forms::Button());
			this->btn_payment = (gcnew System::Windows::Forms::Button());
			this->btn_stock = (gcnew System::Windows::Forms::Button());
			this->btn_to_order = (gcnew System::Windows::Forms::Button());
			this->btn_stats = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_adresse
			// 
			this->btn_adresse->BackColor = System::Drawing::Color::MistyRose;
			this->btn_adresse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_adresse.Image")));
			this->btn_adresse->Location = System::Drawing::Point(59, 24);
			this->btn_adresse->Name = L"btn_adresse";
			this->btn_adresse->Size = System::Drawing::Size(100, 130);
			this->btn_adresse->TabIndex = 0;
			this->btn_adresse->Text = L"Adress Managment";
			this->btn_adresse->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_adresse->UseVisualStyleBackColor = false;
			this->btn_adresse->Click += gcnew System::EventHandler(this, &FormMenu::btn_adress_Click);
			// 
			// btn_client
			// 
			this->btn_client->BackColor = System::Drawing::Color::MistyRose;
			this->btn_client->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_client.Image")));
			this->btn_client->Location = System::Drawing::Point(207, 24);
			this->btn_client->Name = L"btn_client";
			this->btn_client->Size = System::Drawing::Size(100, 130);
			this->btn_client->TabIndex = 1;
			this->btn_client->Text = L"Client Managment";
			this->btn_client->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_client->UseVisualStyleBackColor = false;
			this->btn_client->Click += gcnew System::EventHandler(this, &FormMenu::btn_client_Click);
			// 
			// btn_staff
			// 
			this->btn_staff->BackColor = System::Drawing::Color::MistyRose;
			this->btn_staff->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_staff.Image")));
			this->btn_staff->Location = System::Drawing::Point(355, 24);
			this->btn_staff->Name = L"btn_staff";
			this->btn_staff->Size = System::Drawing::Size(100, 130);
			this->btn_staff->TabIndex = 2;
			this->btn_staff->Text = L"Staff Managment";
			this->btn_staff->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_staff->UseVisualStyleBackColor = false;
			this->btn_staff->Click += gcnew System::EventHandler(this, &FormMenu::btn_staff_Click);
			// 
			// btn_order
			// 
			this->btn_order->BackColor = System::Drawing::Color::MistyRose;
			this->btn_order->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_order.Image")));
			this->btn_order->Location = System::Drawing::Point(59, 209);
			this->btn_order->Name = L"btn_order";
			this->btn_order->Size = System::Drawing::Size(100, 130);
			this->btn_order->TabIndex = 3;
			this->btn_order->Text = L"Order Managment";
			this->btn_order->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_order->UseVisualStyleBackColor = false;
			this->btn_order->Click += gcnew System::EventHandler(this, &FormMenu::btn_order_Click);
			// 
			// btn_payment
			// 
			this->btn_payment->BackColor = System::Drawing::Color::MistyRose;
			this->btn_payment->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_payment.Image")));
			this->btn_payment->Location = System::Drawing::Point(355, 209);
			this->btn_payment->Name = L"btn_payment";
			this->btn_payment->Size = System::Drawing::Size(100, 130);
			this->btn_payment->TabIndex = 5;
			this->btn_payment->Text = L"Payment Managment";
			this->btn_payment->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_payment->UseVisualStyleBackColor = false;
			this->btn_payment->Click += gcnew System::EventHandler(this, &FormMenu::btn_payment_Click);
			// 
			// btn_stock
			// 
			this->btn_stock->BackColor = System::Drawing::Color::MistyRose;
			this->btn_stock->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_stock.Image")));
			this->btn_stock->Location = System::Drawing::Point(131, 381);
			this->btn_stock->Name = L"btn_stock";
			this->btn_stock->Size = System::Drawing::Size(100, 130);
			this->btn_stock->TabIndex = 6;
			this->btn_stock->Text = L"Stock Managment";
			this->btn_stock->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_stock->UseVisualStyleBackColor = false;
			this->btn_stock->Click += gcnew System::EventHandler(this, &FormMenu::btn_stock_Click);
			// 
			// btn_to_order
			// 
			this->btn_to_order->BackColor = System::Drawing::Color::MistyRose;
			this->btn_to_order->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_to_order.Image")));
			this->btn_to_order->Location = System::Drawing::Point(207, 209);
			this->btn_to_order->Name = L"btn_to_order";
			this->btn_to_order->Size = System::Drawing::Size(100, 130);
			this->btn_to_order->TabIndex = 7;
			this->btn_to_order->Text = L"Add Product to Order";
			this->btn_to_order->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_to_order->UseVisualStyleBackColor = false;
			this->btn_to_order->Click += gcnew System::EventHandler(this, &FormMenu::btn_to_order_Click);
			// 
			// btn_stats
			// 
			this->btn_stats->BackColor = System::Drawing::Color::MistyRose;
			this->btn_stats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_stats.Image")));
			this->btn_stats->Location = System::Drawing::Point(281, 381);
			this->btn_stats->Name = L"btn_stats";
			this->btn_stats->Size = System::Drawing::Size(100, 130);
			this->btn_stats->TabIndex = 8;
			this->btn_stats->Text = L"Stats";
			this->btn_stats->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->btn_stats->UseVisualStyleBackColor = false;
			this->btn_stats->Click += gcnew System::EventHandler(this, &FormMenu::btn_stats_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(387, 469);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(116, 56);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(515, 537);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btn_stats);
			this->Controls->Add(this->btn_to_order);
			this->Controls->Add(this->btn_stock);
			this->Controls->Add(this->btn_payment);
			this->Controls->Add(this->btn_order);
			this->Controls->Add(this->btn_staff);
			this->Controls->Add(this->btn_client);
			this->Controls->Add(this->btn_adresse);
			this->Name = L"FormMenu";
			this->Text = L"FormMenu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void btn_adress_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_adress^ formadress = gcnew Form_adress;
	formadress->ShowDialog();
	}
private: System::Void btn_client_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_clients^ formclients = gcnew Form_clients;
	formclients->ShowDialog();
}
private: System::Void btn_staff_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_staff^ formstaff = gcnew Form_staff;
	formstaff->ShowDialog();
}
private: System::Void btn_order_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_order^ formorder = gcnew Form_order;
	formorder->ShowDialog();
}
private: System::Void btn_payment_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_payment^ formpayment = gcnew Form_payment;
	formpayment->ShowDialog();
}
private: System::Void btn_stock_Click(System::Object^ sender, System::EventArgs^ e) {
	Form_stock^ formstock = gcnew Form_stock;
	formstock->ShowDialog();
}
private: System::Void btn_to_order_Click(System::Object^ sender, System::EventArgs^ e) {
	FormToOrder^ formtoorder = gcnew FormToOrder;
	formtoorder->ShowDialog();
}
private: System::Void btn_stats_Click(System::Object^ sender, System::EventArgs^ e) {
	FormStat^ formstat = gcnew FormStat;
	formstat->ShowDialog();
}
};
}
