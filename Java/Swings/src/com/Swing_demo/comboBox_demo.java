package com.Swing_demo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.event.*;

public class comboBox_demo extends JFrame implements ActionListener {
    JComboBox comboBox;

    comboBox_demo(){
        this.setTitle("Combo Box Demo");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setVisible(true);


        String[] animals ={"dog","cat","bird"};

        comboBox=new JComboBox(animals);
        comboBox.setBounds(60, 120, 110, 30);
        this.add(comboBox);

        comboBox.addActionListener(this);

        // to edit the menu or search through keywords
        comboBox.setEditable(true);

        // no. of items in the dropdown menu
        System.out.println(comboBox.getItemCount());

        // Add items later
        comboBox.addItem("dino");

        // adding something at a certain index
        comboBox.insertItemAt("fish",2);

        // deleting sn item
        comboBox.removeItem("dog");

        // to clear the combobox
        //comboBox.removeAllItems();

    }

    public void actionPerformed(ActionEvent e){
//        if(e.getSource()==comboBox){
//            System.out.println(comboBox.getSelectedItem());
//        }
        System.out.println(comboBox.getSelectedItem());
    }

    public static void main(String[] args) {
        new comboBox_demo();
    }
}
