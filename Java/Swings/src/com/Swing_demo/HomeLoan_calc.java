package com.Swing_demo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.event.*;

public class HomeLoan_calc extends JFrame {

    JTextField nameTxt;
    JLabel nameLbl,loanLbl,yearLbl;
    JSlider lAmtslider,yearSlider;
    JComboBox comboBox;
    JButton compute;


    HomeLoan_calc(){
        this.setTitle("Combo Box Demo");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setVisible(true);

    }
}
