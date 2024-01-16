package com.Swing_demo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class JTable_demo extends JFrame{
    JTable t;
    JTable_demo(){
        this.setVisible(true);
        this.setSize(400,400);
        this.setTitle("Jtable");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.setLayout(null);

        String [] column={"Name","age","gender"};
        String[][] data={{"amy","18","m"},{"daisy","19","f"},{"jake","13","m"}};
        t=new JTable(data,column);
        t.setPreferredScrollableViewportSize(new Dimension(450,300));
        this.add(t);
        t.setFillsViewportHeight(true);
        add(new JScrollPane(t));
    }

    public static void main(String[] args) {
        new JTable_demo();
    }
}
