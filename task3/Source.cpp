#pragma once
#include <math.h>
namespace task3 {

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
    private: System::Windows::Forms::Button^ button1;
    protected:
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label10;

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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(91, 383);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(208, 69);
            this->button1->TabIndex = 0;

this->button1->Text = L"Показать таблицу и экстремумы функции";
this->button1->UseVisualStyleBackColor = true;
this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
// 
// button2
// 
this->button2->Location = System::Drawing::Point(489, 383);
this->button2->Name = L"button2";
this->button2->Size = System::Drawing::Size(208, 69);
this->button2->TabIndex = 1;
this->button2->Text = L"Выход";
this->button2->UseVisualStyleBackColor = true;
this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
// 
// textBox1
// 
this->textBox1->Location = System::Drawing::Point(235, 246);
this->textBox1->Name = L"textBox1";
this->textBox1->Size = System::Drawing::Size(93, 22);
this->textBox1->TabIndex = 2;
this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
// 
// textBox2
// 
this->textBox2->Location = System::Drawing::Point(235, 274);
this->textBox2->Name = L"textBox2";
this->textBox2->Size = System::Drawing::Size(93, 22);
this->textBox2->TabIndex = 3;
this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
// 
// textBox3
// 
this->textBox3->Location = System::Drawing::Point(235, 309);
this->textBox3->Name = L"textBox3";
this->textBox3->Size = System::Drawing::Size(93, 22);
this->textBox3->TabIndex = 4;
this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
// 
// textBox4
// 
this->textBox4->Location = System::Drawing::Point(235, 342);
this->textBox4->Name = L"textBox4";
this->textBox4->Size = System::Drawing::Size(93, 22);
this->textBox4->TabIndex = 5;
this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
// 
// label1
// 
this->label1->AutoSize = true;
this->label1->Location = System::Drawing::Point(59, 253);
this->label1->Name = L"label1";
this->label1->Size = System::Drawing::Size(151, 16);
this->label1->TabIndex = 6;
this->label1->Text = L"Введите значение XN";
// 
// label2
// 
this->label2->AutoSize = true;
this->label2->Location = System::Drawing::Point(59, 280);
this->label2->Name = L"label2";
this->label2->Size = System::Drawing::Size(149, 16);
this->label2->TabIndex = 7;
this->label2->Text = L"Введите значение XK";
// 
// label3
// 
this->label3->AutoSize = true;
this->label3->Location = System::Drawing::Point(59, 312);
this->label3->Name = L"label3";
this->label3->Size = System::Drawing::Size(151, 16);
this->label3->TabIndex = 8;
this->label3->Text = L"Введите значение XH";
// 
// label4
// 
this->label4->AutoSize = true;
this->label4->Location = System::Drawing::Point(59, 348);
this->label4->Name = L"label4";
this->label4->Size = System::Drawing::Size(141, 16);
this->label4->TabIndex = 9;
this->label4->Text = L"Введите значение a";
// 
// pictureBox1
// 
this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
this->pictureBox1->Location = System::Drawing::Point(-1, 12);
this->pictureBox1->Name = L"pictureBox1";
this->pictureBox1->Size = System::Drawing::Size(329, 228);
this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
this->pictureBox1->TabIndex = 10;
this->pictureBox1->TabStop = false;
// 
// dataGridView1
// 
this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
this->dataGridView1->Location = System::Drawing::Point(416, 37);
this->dataGridView1->Name = L"dataGridView1";

this->dataGridView1->RowHeadersVisible = false;
this->dataGridView1->RowHeadersWidth = 51;
this->dataGridView1->RowTemplate->Height = 24;
this->dataGridView1->Size = System::Drawing::Size(389, 259);
this->dataGridView1->TabIndex = 11;
// 
// label5
// 
this->label5->AutoSize = true;
this->label5->Location = System::Drawing::Point(505, 9);
this->label5->Name = L"label5";
this->label5->Size = System::Drawing::Size(192, 16);
this->label5->TabIndex = 12;
this->label5->Text = L"Таблица значений функции";
// 
// label6
// 
this->label6->AutoSize = true;
this->label6->Location = System::Drawing::Point(393, 309);
this->label6->Name = L"label6";
this->label6->Size = System::Drawing::Size(153, 16);
this->label6->TabIndex = 13;
this->label6->Text = L"Максим.знач.функции";
// 
// label7
// 
this->label7->AutoSize = true;
this->label7->Location = System::Drawing::Point(638, 309);
this->label7->Name = L"label7";
this->label7->Size = System::Drawing::Size(147, 16);
this->label7->TabIndex = 14;
this->label7->Text = L"Миним.знач.функции";
// 
// textBox5
// 
this->textBox5->Location = System::Drawing::Point(416, 342);
this->textBox5->Name = L"textBox5";
this->textBox5->ReadOnly = true;
this->textBox5->Size = System::Drawing::Size(100, 22);
this->textBox5->TabIndex = 15;
// 
// textBox6
// 
this->textBox6->Location = System::Drawing::Point(651, 342);
this->textBox6->Name = L"textBox6";
this->textBox6->ReadOnly = true;
this->textBox6->Size = System::Drawing::Size(100, 22);
this->textBox6->TabIndex = 16;
// 
// label8
// 
this->label8->AutoSize = true;
this->label8->Location = System::Drawing::Point(334, 37);
this->label8->Name = L"label8";
this->label8->Size = System::Drawing::Size(68, 16);
this->label8->TabIndex = 17;
this->label8->Text = L"если x<=0";
// 
// label9
// 
this->label9->AutoSize = true;
this->label9->Location = System::Drawing::Point(327, 124);
this->label9->Name = L"label9";
this->label9->Size = System::Drawing::Size(83, 16);
this->label9->TabIndex = 18;
this->label9->Text = L"если 0<x<=a";
// 
// label10
// 
this->label10->AutoSize = true;
this->label10->Location = System::Drawing::Point(334, 196);
this->label10->Name = L"label10";
this->label10->Size = System::Drawing::Size(62, 16);
this->label10->TabIndex = 19;
this->label10->Text = L"если x>a";
// 
// MyForm
// 
this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
this->ClientSize = System::Drawing::Size(815, 478);
this->Controls->Add(this->label10);
this->Controls->Add(this->label9);
this->Controls->Add(this->label8);
this->Controls->Add(this->textBox6);
this->Controls->Add(this->textBox5);
this->Controls->Add(this->label7);
this->Controls->Add(this->label6);
this->Controls->Add(this->label5);
this->Controls->Add(this->dataGridView1);
this->Controls->Add(this->pictureBox1);
this->Controls->Add(this->label4);
this->Controls->Add(this->label3);
this->Controls->Add(this->label2);
this->Controls->Add(this->label1);
this->Controls->Add(this->textBox4);
this->Controls->Add(this->textBox3);
this->Controls->Add(this->textBox2);
this->Controls->Add(this->textBox1);
this->Controls->Add(this->button2);
this->Controls->Add(this->button1);
this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
this->Name = L"MyForm";
this->Text = L"Цыбульский К.В.,23-кф";
this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);

(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
this->ResumeLayout(false);
this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        double xn, xk, xh, x, y, a, ymax, ymin, yt;
        int n, i;
        if ((textBox1->Text != "") && (textBox2->Text != "") &&
            (textBox3->Text != "") && (textBox4->Text != ""))
        {
            xn = Convert::ToDouble(textBox1->Text);
            xk = Convert::ToDouble(textBox2->Text);
            xh = Convert::ToDouble(textBox3->Text);
            a = Convert::ToDouble(textBox4->Text);
            dataGridView1->Columns->Clear();
            dataGridView1->ColumnCount = 2;
            dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
            dataGridView1->Columns[0]->Name = " X";
            dataGridView1->Columns[1]->Name = " Y";
            i = 0;
            x = xn;
            ymax = -1.8e307; ymin = 1.8e307;
            while (x <= xk)
            {
                if (x <= 0) { y = pow(x, 3) + pow(fabs(x) + 1, 0.1); }
                else if (x > 0 && x <= a) {
                    y = pow(x - 1, 3) + cos(pow(x, 3));
                }
                else
                {
                    y = 2 * x + tan(pow(x, 2) + 2);
                }
                dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
                yt = ceil(y * 100) / 100;
                dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
                if (y > ymax) ymax = ceil(y * 100) / 100; if
                    (y < ymin) ymin = ceil(y * 100) / 100;
                x = x + xh;
                i++;
            }
            textBox5->Text = Convert::ToString(ymax);
            textBox6->Text = Convert::ToString(ymin);
        }
        else {
            MessageBox::Show("Заполните,  пожалуйста, данные", "Ошибка ввода данных",

                MessageBoxButtons::OK, MessageBoxIcon::Exclamation

            );
        }
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }
    private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
        int l, t, k;
        bool a = true;
        String^ str;
        str = textBox1->Text;
        l = str->Length;
        t = 0;
        k = 0;

        if (l > 0) {
            if (str[t] == '-')
                t++;
            if (str[t] == ',')
                a = false;

            while (t < l) {
                if (str[t] == ',') {
                    if (t == l - 1 ⠵⠺⠵⠟⠵⠺⠵⠞⠺⠞⠵⠟⠟⠺⠺⠵⠟⠞⠞⠟⠞⠵⠵⠟⠞⠺⠟⠵⠵⠞⠞⠞⠟⠺⠺⠟⠞⠺⠺⠟⠺⠞⠟⠟⠞⠞⠟⠵⠵⠞⠺⠞⠟⠟⠺⠟⠺⠟⠞⠟⠺⠞⠵⠵⠟⠞⠵⠞⠺⠟⠞⠵⠞⠵⠟⠟⠺⠺ str[t] > '9')
                        a = false;
                    t++;
                }

                if (a == false) {
                    MessageBox::Show("Параметр XN не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                }
            }
        }
    private: System::Void textBox2_Leave(System::Object ^ sender, System::EventArgs ^ e) {
        int l, t, k;
        bool a = true;
        String^ str;
        str = textBox2->Text;
        l = str->Length;
        t = 0;
        k = 0;

        if (l > 0) {
            if (str[t] == '-')
                t++;
            if (str[t] == ',')
                a = false;

            while (t < l) {
                if (str[t] == ',') {
                    if (t == l - 1 ⠺⠺⠺⠟⠞⠺⠞⠞⠵⠵⠞⠞⠵⠟⠵⠞⠞⠺⠟⠵⠞⠵⠞⠞⠟⠵⠞⠵⠟⠞⠺⠟⠵⠞⠵⠞⠟⠵⠵⠵⠟⠞⠵⠞⠵⠟⠞⠟⠞⠺⠞⠺⠵⠟⠵⠟⠞⠺⠞⠟⠟⠞⠟⠞⠟⠵⠺⠵⠞⠟⠞⠟⠞⠺⠺⠞⠵⠵ str[t] > '9')
                        a = false;
                    t++;
                }

                if (a == false) {
                    MessageBox::Show("Параметр XK не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                }
            }
        }
    private: System::Void textBox3_Leave(System::Object ^ sender, System::EventArgs ^ e) {
        int l, t, k;
        bool a = true;
        String^ str;
        str = textBox3->Text;
        l = str->Length;
        t = 0;
        k = 0;

        if (l > 0) {
            if (str[t] == '-')
                t++;
            if (str[t] == ',')
                a = false;

            while (t < l) {
                if (str[t] == ',') {
                    if (t == l - 1 ⠟⠺⠵⠵⠵⠺⠺⠟⠟⠟⠵⠞⠺⠺⠟⠺⠟⠞⠺⠞⠺⠞⠵⠟⠺⠺⠞⠺⠺⠞⠞⠟⠟⠟⠵⠺⠟⠵⠞⠵⠵⠟⠟⠵⠵⠵⠟⠟⠺⠵⠵⠺⠺⠺⠟⠵⠟⠞⠞⠵⠵⠺⠟⠟⠵⠟⠞⠟⠵⠟⠵⠺⠞⠟⠺⠵⠟⠵ str[t] > '9')
                        a = false;
                    t++;
                }

if (a == false) {
    MessageBox::Show("Параметр XH не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}
            }
        }
    private: System::Void textBox4_Leave(System::Object ^ sender, System::EventArgs ^ e) {
        int l, t, k;
        bool a = true;
        String^ str;
        str = textBox4->Text;
        l = str->Length;
        t = 0;
        k = 0;

        if (l > 0) {
            if (str[t] == '-')
                t++;
            if (str[t] == ',')
                a = false;

            while (t < l) {
                if (str[t] == ',') {
                    if (t == l - 1 ⠟⠞⠞⠺⠟⠞⠟⠞⠟⠟⠟⠵⠞⠟⠟⠟⠺⠞⠺⠟⠺⠞⠟⠞⠺⠵⠟⠵⠞⠺⠵⠵⠞⠟⠺⠞⠞⠵⠞⠞⠺⠺⠺⠞⠟⠺⠵⠟⠟⠟⠞⠞⠺⠵⠺⠟⠵⠟⠵⠞⠟⠺⠺⠺⠵⠵⠟⠞⠟⠟⠵⠞⠞⠺⠺⠞⠺⠟ str[t] > '9')
                        a = false;
                    t++;
                }

                if (a == false) {
                    MessageBox::Show("Параметр a не является числом", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                }
            }
        }
    };
    }