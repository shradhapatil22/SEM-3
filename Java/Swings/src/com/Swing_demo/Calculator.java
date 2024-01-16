package com.Swing_demo;

import javax.imageio.stream.ImageInputStream;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.*;

public class Calculator extends JFrame implements ActionListener{
    JLabel lb1,lb2,lb3;
    JTextField t1,t2,t3;
    JButton b1,b2;

    Calculator(){
        this.setVisible(true);
        this.setSize(400,400);
        this.setTitle("Addition");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);

        lb1=new JLabel("First Number");
        lb1.setBounds(60, 100, 110, 30);
        this.add(lb1);

        t1=new JTextField();
        t1.setBounds(160, 100, 110, 30);
        this.add(t1);

        lb2=new JLabel("Second Number");
        lb2.setBounds(60, 140, 110, 30);
        this.add(lb2);

        t2=new JTextField();
        t2.setBounds(160, 140, 110, 30);
        this.add(t2);

        b1=new JButton("ADD");
        b1.setBounds(100, 200, 100, 30);
        b1.addActionListener(this);
        this.add(b1);

        b2=new JButton("SUBTRACT");
        b2.setBounds(210, 200, 100, 30);
        b2.addActionListener(this);
        this.add(b2);


        lb3=new JLabel("Result");
        lb3.setBounds(60,300, 110, 30);
        this.add(lb3);

        t3=new JTextField();
        t3.setBounds(160, 300, 110, 30);
        this.add(t3);
    }

    public static void main(String[] args) {
        new Calculator();
    }

    public void actionPerformed(ActionEvent ae){
        int num1=Integer.parseInt(t1.getText());
        int num2=Integer.parseInt(t2.getText());
        int result = 0;
        if (ae.getActionCommand()=="ADD"){
            result=num1+num2;
        }

        if (ae.getActionCommand()=="SUBTRACT"){
            result=num1-num2;
        }
        t3.setText(""+result);

    }
}
