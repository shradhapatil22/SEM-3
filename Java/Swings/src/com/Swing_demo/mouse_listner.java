package com.Swing_demo;

import  javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class mouse_listner extends JFrame {

    public static void main(String[] args) {
        new demo();
    }

}

class demo extends JFrame{
    demo(){
        addMouseListener(new MouseAdapter() {
            @Override
            public void mousePressed(MouseEvent e) {
                super.mousePressed(e);
                int x=e.getX();
                int y=e.getY();
                System.out.println(x+" , "+y);
            }
        });
        this.setTitle("Swing Gui Mouse Listener demo");
        this.setSize(400,400);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setLayout(null);
        this.setVisible(true);
    }
}
