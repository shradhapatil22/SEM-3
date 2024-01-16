package com.Swing_demo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.*;
import javax.swing.JRadioButton;


public class Radio_button_demo extends JFrame implements ActionListener {
    JLabel nameLabel,genderLabel ,greeting;
    JButton welcomeBtn;
    JTextField nameText;
    JRadioButton male,female;

    Radio_button_demo(){
        this.setTitle("Swing Gui demo");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setVisible(true);

        nameLabel= new JLabel("Enter Name");
        nameLabel.setBounds(60, 100, 110, 30);
        this.add(nameLabel);

        nameText=new JTextField();
        nameText.setBounds(155, 100, 110, 30);
        this.add(nameText);

        genderLabel=new JLabel("Check Gender");
        genderLabel.setBounds(60, 150, 110, 30);
        this.add(genderLabel);

        female=new JRadioButton("Female");
        female.setBounds(180, 150, 110, 30);
        this.add(female);

        male=new JRadioButton("Male");
        male.setBounds(300, 150, 110, 30);
        this.add(male);

        greeting=new JLabel("Greeting");
        greeting.setBounds(200, 250, 110, 30);
        this.add(greeting);

        ButtonGroup bg =new ButtonGroup();
        bg.add(female);
        bg.add(male);

        welcomeBtn=new JButton("Welcome");
        welcomeBtn.setBounds(155, 200, 110, 30);
        welcomeBtn.addActionListener(this);
        this.add(welcomeBtn);

    }

    public static void main(String[] args) {
        new Radio_button_demo();
    }

    public void actionPerformed(ActionEvent ae){
        String name=nameText.getText();

        if(female.isSelected())
            name="Welcome Ms. "+name;
        if(male.isSelected())
            name="Welcome Mr. "+name;

        greeting.setText(name);
    }


}
