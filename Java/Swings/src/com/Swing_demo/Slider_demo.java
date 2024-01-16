package com.Swing_demo;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.event.*;

public class Slider_demo extends JFrame implements ChangeListener {
    JLabel tmp, result;
    JSlider tmpCtrl;

    Slider_demo(){
        this.setTitle("JavaSlider");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setVisible(true);

        result=new JLabel("Result");
        result.setBounds(60, 500, 110, 30);
        this.add(result);

        tmp=new JLabel("Temperature");
        tmp.setBounds(60, 100, 110, 30);
        this.add(tmp);

        tmpCtrl=new JSlider(0,100);
        tmpCtrl.setBounds(60, 140, 800, 60);
        this.add(tmpCtrl);

        tmpCtrl.setPreferredSize(new Dimension(400,300));

        tmpCtrl.setPaintTicks(true);
        tmpCtrl.setMinorTickSpacing(5);

        //tmpCtrl.setPaintTrack(true);
        tmpCtrl.setMajorTickSpacing(10);

        tmpCtrl.setPaintLabels(true);
        tmpCtrl.setFont(new Font("Times New Roman",Font.PLAIN,15));

        //if the slider needs to be vertical
        //tmpCtrl.setOrientation(SwingConstants.VERTICAL);

        result.setText(tmpCtrl.getValue()+" C");

        tmpCtrl.addChangeListener(this);
    }

    @Override
    public void stateChanged(ChangeEvent e) {
        result.setText(tmpCtrl.getValue()+" C");

    }

    public static void main(String[] args) {
        new Slider_demo();
    }

}

