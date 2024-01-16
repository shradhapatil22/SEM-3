package com.Swing_demo;

import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JFrame;

public class FirstApp extends JFrame implements ActionListener {
    private JPanel panel1;
    private JButton btn1;

    public FirstApp() {
        btn1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(null,"Hello World");
            }
        });
    }

    public static void main(String[] args) {
        JFrame frame= new JFrame("FirstApp");

    }

    @Override
    public void actionPerformed(ActionEvent e) {

    }
}
