<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.components = New System.ComponentModel.Container()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.Button1 = New System.Windows.Forms.Button()
        Me.Button2 = New System.Windows.Forms.Button()
        Me.cmbPortaSerial = New System.Windows.Forms.ComboBox()
        Me.SerialPort = New System.IO.Ports.SerialPort(Me.components)
        Me.Button3 = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'TextBox1
        '
        Me.TextBox1.Font = New System.Drawing.Font("Courier New", 10.2!, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.TextBox1.Location = New System.Drawing.Point(12, 81)
        Me.TextBox1.Multiline = True
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(947, 424)
        Me.TextBox1.TabIndex = 0
        '
        'Button1
        '
        Me.Button1.Location = New System.Drawing.Point(12, 42)
        Me.Button1.Name = "Button1"
        Me.Button1.Size = New System.Drawing.Size(126, 33)
        Me.Button1.TabIndex = 1
        Me.Button1.Text = "Conectar"
        Me.Button1.UseVisualStyleBackColor = True
        '
        'Button2
        '
        Me.Button2.Location = New System.Drawing.Point(144, 42)
        Me.Button2.Name = "Button2"
        Me.Button2.Size = New System.Drawing.Size(126, 33)
        Me.Button2.TabIndex = 2
        Me.Button2.Text = "Desconectar"
        Me.Button2.UseVisualStyleBackColor = True
        '
        'cmbPortaSerial
        '
        Me.cmbPortaSerial.FormattingEnabled = True
        Me.cmbPortaSerial.Location = New System.Drawing.Point(12, 12)
        Me.cmbPortaSerial.Name = "cmbPortaSerial"
        Me.cmbPortaSerial.Size = New System.Drawing.Size(258, 24)
        Me.cmbPortaSerial.TabIndex = 3
        '
        'SerialPort
        '
        '
        'Button3
        '
        Me.Button3.Location = New System.Drawing.Point(276, 42)
        Me.Button3.Name = "Button3"
        Me.Button3.Size = New System.Drawing.Size(126, 33)
        Me.Button3.TabIndex = 4
        Me.Button3.Text = "Limpar"
        Me.Button3.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(8.0!, 16.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(1156, 517)
        Me.Controls.Add(Me.Button3)
        Me.Controls.Add(Me.cmbPortaSerial)
        Me.Controls.Add(Me.Button2)
        Me.Controls.Add(Me.Button1)
        Me.Controls.Add(Me.TextBox1)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents TextBox1 As System.Windows.Forms.TextBox
    Friend WithEvents Button1 As System.Windows.Forms.Button
    Friend WithEvents Button2 As System.Windows.Forms.Button
    Friend WithEvents cmbPortaSerial As System.Windows.Forms.ComboBox
    Friend WithEvents SerialPort As System.IO.Ports.SerialPort
    Friend WithEvents Button3 As System.Windows.Forms.Button

End Class
