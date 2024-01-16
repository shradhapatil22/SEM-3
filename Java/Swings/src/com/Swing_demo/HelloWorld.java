package com.Swing_demo;

import javax.swing.*;

public class HelloWorld extends JFrame{
    HelloWorld(){
        this.setVisible(true);
        this.setSize(400,400);
        this.setTitle("Hello World!");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);

        JLabel label1= new JLabel("Hello World");
        label1.setBounds(60, 100, 110, 30);
        this.add(label1);

        JLabel label2=new JLabel("Welcome Amy!");
        label2.setBounds(160, 100, 110, 30);
        this.add(label2);
    }

    public static void main(String[] args) {
        HelloWorld h =new HelloWorld();

    }
}
