
Public Class Form1

    Delegate Sub SetTextCallback([text] As String)

    Private Sub Button1_Click(sender As System.Object, e As System.EventArgs) Handles Button1.Click
        If SerialPort.IsOpen() Then
            SerialPort.Close()
        End If
        SerialPort.BaudRate = 9600
        SerialPort.DataBits = 8
        SerialPort.Parity = IO.Ports.Parity.None
        SerialPort.StopBits = IO.Ports.StopBits.One
        SerialPort.PortName = cmbPortaSerial.SelectedItem
        SerialPort.Open()
    End Sub

    Private Sub Form1_Load(sender As Object, e As System.EventArgs) Handles Me.Load
        For Each sp As String In My.Computer.Ports.SerialPortNames
            Me.cmbPortaSerial.Items.Add(sp)
        Next
    End Sub

    Private Sub Button2_Click(sender As System.Object, e As System.EventArgs) Handles Button2.Click
        SerialPort.Close()
    End Sub

    Private Sub SerialPort_DataReceived(sender As Object, e As System.IO.Ports.SerialDataReceivedEventArgs) Handles SerialPort.DataReceived
        SetText(SerialPort.ReadExisting)
    End Sub

    Private Sub SetText(ByVal [text] As String)

        ' InvokeRequired required compares the thread ID of the
        ' calling thread to the thread ID of the creating thread.
        ' If these threads are different, it returns true.
        If Me.TextBox1.InvokeRequired Then
            Dim d As New SetTextCallback(AddressOf SetText)
            Me.Invoke(d, New Object() {[text]})
        Else
            Me.TextBox1.AppendText([text])
        End If
    End Sub

    Private Sub Button3_Click(sender As System.Object, e As System.EventArgs) Handles Button3.Click
        Me.TextBox1.Clear()
    End Sub
End Class
