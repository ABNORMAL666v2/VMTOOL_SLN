using System;
using System.Windows.Forms;

namespace gui
{
    public partial class MainForm : Form
    {
        private ProgressBar progressBar;
        private CheckBox exportCheckBox;
        private Button deleteKeysButton;

        public MainForm()
        {
            InitializeComponent();
        }

        private void InitializeComponent()
        {
            progressBar = new ProgressBar();
            exportCheckBox = new CheckBox();
            deleteKeysButton = new Button();
            SuspendLayout();
            // 
            // progressBar
            // 
            progressBar.Dock = DockStyle.Bottom;
            progressBar.Location = new Point(0, 341);
            progressBar.Name = "progressBar";
            progressBar.Size = new Size(822, 23);
            progressBar.TabIndex = 0;
            // 
            // exportCheckBox
            // 
            exportCheckBox.Checked = true;
            exportCheckBox.CheckState = CheckState.Checked;
            exportCheckBox.Location = new Point(0, 0);
            exportCheckBox.Name = "exportCheckBox";
            exportCheckBox.Size = new Size(104, 24);
            exportCheckBox.TabIndex = 1;
            exportCheckBox.Text = "Export Registry File";
            // 
            // deleteKeysButton
            // 
            deleteKeysButton.Location = new Point(0, 0);
            deleteKeysButton.Name = "deleteKeysButton";
            deleteKeysButton.Size = new Size(75, 23);
            deleteKeysButton.TabIndex = 2;
            deleteKeysButton.Text = "Delete Keys";
            deleteKeysButton.Click += DeleteKeysButton_Click;
            // 
            // MainForm
            // 
            ClientSize = new Size(822, 364);
            Controls.Add(progressBar);
            Controls.Add(exportCheckBox);
            Controls.Add(deleteKeysButton);
            FormBorderStyle = FormBorderStyle.FixedSingle;
            MaximizeBox = false;
            Name = "MainForm";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Registry Manager";
            ResumeLayout(false);
        }

        private void DeleteKeysButton_Click(object sender, EventArgs e)
        {
            // Simulate deleting keys
            MessageBox.Show("Keys deleted!");

            // Simulate exporting registry file
            if (exportCheckBox.Checked)
            {
                MessageBox.Show("Registry file exported!");
            }
        }
    }
}
