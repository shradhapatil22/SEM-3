package com.Swing_demo;

import  javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Checkbox_demo extends JFrame implements ActionListener {
    JLabel nameLabel,genderLabel ,greeting;
    JButton welcomeBtn;
    JTextField nameText;
    JRadioButton male,female;
    JCheckBox dance,sing;

    Checkbox_demo(){
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
        greeting.setBounds(200, 250, 1100, 30);
        this.add(greeting);

        ButtonGroup bg =new ButtonGroup();
        bg.add(female);
        bg.add(male);

        dance=new JCheckBox("Dancing");
        dance.setBounds(180, 200, 110, 30);
        this.add(dance);

        sing=new JCheckBox("Singing");
        sing.setBounds(300, 200, 110, 30);
        this.add(sing);

        welcomeBtn=new JButton("Welcome");
        welcomeBtn.setBounds(155, 300, 110, 30);
        welcomeBtn.addActionListener(this);
        this.add(welcomeBtn);

    }

    public static void main(String[] args) {
        new Checkbox_demo();
    }

    public void actionPerformed(ActionEvent ae){
        String name=nameText.getText();

        if(female.isSelected())
            name="Welcome Ms. "+name;
        if(male.isSelected())
            name="Welcome Mr. "+name;

        if(dance.isSelected())
            name=name+" Dancer";
        if(sing.isSelected())
            name=name+" Singer";

        greeting.setText(name);
    }
}
