package com.Swing_demo;

import  javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class calling_a_JFrame_from_another {
    public static void main(String[] args) {
            new X();
    }
}

class  X extends JFrame{
    JButton b;

    X(){
        this.setTitle("calling_a_JFrame_from_another");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setVisible(true);

        b=new JButton("Call Calculator");
        b.setBounds(60, 140, 200, 30);
        this.add(b);

        b.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                new Calculator();
            }
        });
    }
}
