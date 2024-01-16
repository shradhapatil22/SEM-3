package com.Swing_demo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import static javax.swing.JFrame.EXIT_ON_CLOSE;
import javax.swing.JLabel;
import javax.swing.JTextField;



public class Welcome extends JFrame {
    JLabel nameLabel,genderLabel;
    JButton welcomeBtn;
    JTextField nameText;
    Checkbox male,female,other;

    Welcome(){
        this.setTitle("Swing Gui demo");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);

        nameLabel= new JLabel("Enter Name");
        nameLabel.setBounds(60, 100, 110, 30);
        this.add(nameLabel);

        nameText=new JTextField();
        nameText.setBounds(155, 100, 110, 30);
        this.add(nameText);

        genderLabel=new JLabel("Check Gender");
        genderLabel.setBounds(60, 150, 110, 30);
        this.add(genderLabel);

        female=new Checkbox("Female");
        female.setBounds(155, 150, 110, 30);
        this.add(female);

        welcomeBtn=new JButton("Welcome");

        this.setVisible(true);

    }

    public static void main(String[] args){
        new Welcome();
    }
}


