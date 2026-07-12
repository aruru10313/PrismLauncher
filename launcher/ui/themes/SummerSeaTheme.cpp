// SPDX-License-Identifier: GPL-3.0-only
/*
 *  XmasLegacy - Minecraft Launcher
 *  Christmas Night Theme - A festive dark theme with Christmas colors
 */
#include "SummerSeaTheme.h"

#include <QObject>

QString SummerSeaTheme::id()
{
    return "summer_sea";
}

QString SummerSeaTheme::name()
{
    return QObject::tr("Christmas Night");
}

QString SummerSeaTheme::tooltip()
{
    return QObject::tr("A festive dark theme inspired by Christmas night — deep navy backgrounds with crimson red and gold accents.");
}

bool SummerSeaTheme::hasStyleSheet()
{
    return true;
}

QString SummerSeaTheme::appStyleSheet()
{
    // ─────────────────────────────────────────────────────────
    // XmasLegacy – Christmas Night Theme (Overhauled Premium)
    // Color Palette:
    //   Background Deep:  #0a0d14   (rich dark navy, midnight space)
    //   Background Card:  #121620   (lighter navy module card)
    //   Background Hover: #1b2030   (hover state)
    //   Accent Red:       #e85d4a   (festive crimson red)
    //   Accent Red Hover: #ff7663   (light glowing crimson)
    //   Accent Gold:      #f5c518   (Christmas star gold)
    //   Text Primary:     #f0f6fc   (near-white soft snow)
    //   Text Secondary:   #8b949e   (muted frost gray)
    //   Border:           #222a36   (subtle navy border)
    // ─────────────────────────────────────────────────────────
    return
        // ── Global base ──────────────────────────────────────
        "QWidget {"
        "    background-color: #0a0d14;"
        "    color: #f0f6fc;"
        "    font-family: 'Segoe UI', 'Inter', 'Malgun Gothic', sans-serif;"
        "    font-size: 13px;"
        "}"

        "QMainWindow, QDialog {"
        "    background-color: #0a0d14;"
        "}"

        // ── ToolTip ───────────────────────────────────────────
        "QToolTip {"
        "    color: #f0f6fc;"
        "    background-color: #121620;"
        "    border: 1px solid #e85d4a;"
        "    border-radius: 6px;"
        "    padding: 6px 10px;"
        "    font-size: 12px;"
        "}"

        // ── Labels ────────────────────────────────────────────
        "QLabel {"
        "    color: #f0f6fc;"
        "    background: transparent;"
        "}"

        // ── Inputs ────────────────────────────────────────────
        "QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QDoubleSpinBox {"
        "    background-color: #121620;"
        "    color: #f0f6fc;"
        "    border: 1px solid #222a36;"
        "    border-radius: 8px;"
        "    padding: 8px 12px;"
        "    selection-background-color: #e85d4a;"
        "    selection-color: #f0f6fc;"
        "}"
        "QLineEdit:hover, QTextEdit:hover, QSpinBox:hover {"
        "    border: 1px solid #8b949e;"
        "    background-color: #1b2030;"
        "}"
        "QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus {"
        "    border: 1px solid #e85d4a;"
        "    background-color: #1b2030;"
        "}"

        // ── ComboBox ─────────────────────────────────────────
        "QComboBox {"
        "    background-color: #121620;"
        "    color: #f0f6fc;"
        "    border: 1px solid #222a36;"
        "    border-radius: 8px;"
        "    padding: 7px 12px;"
        "    min-height: 20px;"
        "}"
        "QComboBox:hover {"
        "    border: 1px solid #8b949e;"
        "    background-color: #1b2030;"
        "}"
        "QComboBox QAbstractItemView {"
        "    background-color: #121620;"
        "    border: 1px solid #222a36;"
        "    border-radius: 8px;"
        "    color: #f0f6fc;"
        "    selection-background-color: #e85d4a;"
        "    selection-color: #ffffff;"
        "    outline: none;"
        "}"

        // ── Buttons (Lunar/Feather Gaming Style) ──────────────
        "QPushButton {"
        "    background-color: #e85d4a;"
        "    color: #ffffff;"
        "    border: none;"
        "    border-radius: 8px;"
        "    padding: 10px 20px;"
        "    font-weight: bold;"
        "    font-size: 13px;"
        "    min-height: 22px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #ff7663;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #c94535;"
        "}"
        "QPushButton:disabled {"
        "    background-color: #21262d;"
        "    color: #484f58;"
        "}"
        "QPushButton:flat {"
        "    background-color: transparent;"
        "    color: #e85d4a;"
        "    border: none;"
        "}"

        // ── Main ToolBar & Right Side Instance ToolBar ────────
        "QToolBar {"
        "    background-color: #121620;"
        "    border: none;"
        "    border-bottom: 1px solid #222a36;"
        "    padding: 6px 12px;"
        "    spacing: 8px;"
        "}"
        "QToolBar::separator {"
        "    background-color: #222a36;"
        "    width: 1px;"
        "    margin: 6px 8px;"
        "}"

        // ── ToolBar Buttons ──────────────────────────────────
        "QToolBar QToolButton {"
        "    background-color: transparent;"
        "    color: #f0f6fc;"
        "    border: 1px solid transparent;"
        "    border-radius: 6px;"
        "    padding: 6px 10px;"
        "    font-weight: 500;"
        "}"
        "QToolBar QToolButton:hover {"
        "    background-color: #1b2030;"
        "    border: 1px solid #222a36;"
        "}"
        "QToolBar QToolButton:checked, QToolBar QToolButton:pressed {"
        "    background-color: #e85d4a;"
        "    color: #ffffff;"
        "    border: 1px solid #e85d4a;"
        "}"

        // ── Custom WideBar / Instance Side ToolBar ───────────
        "WideBar {"
        "    background-color: #121620;"
        "    border-left: 1px solid #222a36;"
        "    padding: 10px;"
        "    spacing: 12px;"
        "}"
        "WideBar QToolButton {"
        "    background-color: #1b2030;"
        "    border: 1px solid #222a36;"
        "    border-radius: 8px;"
        "    padding: 10px;"
        "    font-weight: bold;"
        "    min-width: 120px;"
        "}"
        "WideBar QToolButton:hover {"
        "    background-color: #ff7663;"
        "    color: #ffffff;"
        "    border-color: #ff7663;"
        "}"

        // ── ScrollBar ─────────────────────────────────────────
        "QScrollBar:vertical {"
        "    background-color: #0a0d14;"
        "    width: 8px;"
        "    margin: 0;"
        "    border-radius: 4px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background-color: #222a36;"
        "    min-height: 30px;"
        "    border-radius: 4px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background-color: #e85d4a;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "    height: 0;"
        "}"

        // ── Instance View Cards (Minecraft Card Layout) ────────
        "QListView {"
        "    background-color: #0a0d14;"
        "    border: none;"
        "    outline: none;"
        "    padding: 10px;"
        "}"
        "QListView::item {"
        "    background-color: #121620;"
        "    border: 1px solid #222a36;"
        "    border-radius: 12px;"
        "    padding: 16px;"
        "    margin: 8px;"
        "    color: #f0f6fc;"
        "}"
        "QListView::item:hover {"
        "    background-color: #1b2030;"
        "    border: 1px solid #e85d4a;"
        "}"
        "QListView::item:selected {"
        "    background-color: #1b2030;"
        "    border: 2px solid #e85d4a;"
        "    color: #ffffff;"
        "}"

        // ── TabWidget / Settings ──────────────────────────────
        "QTabWidget::pane {"
        "    border: 1px solid #222a36;"
        "    border-radius: 12px;"
        "    background-color: #121620;"
        "}"
        "QTabBar::tab {"
        "    background-color: transparent;"
        "    color: #8b949e;"
        "    padding: 10px 20px;"
        "    font-weight: bold;"
        "}"
        "QTabBar::tab:selected {"
        "    color: #f0f6fc;"
        "    border-bottom: 3px solid #e85d4a;"
        "}"

        // ── Progress Bar (Christmas night gold-red gradient) ──
        "QProgressBar {"
        "    background-color: #121620;"
        "    border-radius: 8px;"
        "    border: 1px solid #222a36;"
        "    text-align: center;"
        "    color: #ffffff;"
        "    font-weight: bold;"
        "    height: 20px;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
        "        stop:0 #e85d4a, stop:1 #f5c518);"
        "    border-radius: 8px;"
        "}"

        // ── CheckBox ──────────────────────────────────────────
        "QCheckBox::indicator {"
        "    width: 18px;"
        "    height: 18px;"
        "    border-radius: 5px;"
        "    border: 2px solid #222a36;"
        "    background-color: #121620;"
        "}"
        "QCheckBox::indicator:checked {"
        "    background-color: #e85d4a;"
        "    border-color: #e85d4a;"
        "}"
        ;
}

QPalette SummerSeaTheme::colorScheme()
{
    QPalette palette;
    palette.setColor(QPalette::Window,          QColor(10, 13, 20));     // #0a0d14
    palette.setColor(QPalette::Base,            QColor(18, 22, 32));     // #121620
    palette.setColor(QPalette::AlternateBase,   QColor(27, 32, 48));     // #1b2030

    palette.setColor(QPalette::WindowText,      QColor(240, 246, 252));  // #f0f6fc
    palette.setColor(QPalette::Text,            QColor(240, 246, 252));
    palette.setColor(QPalette::BrightText,      QColor(245, 197, 24));   // #f5c518 gold
    palette.setColor(QPalette::PlaceholderText, QColor(139, 148, 158));  // #8b949e

    palette.setColor(QPalette::Button,          QColor(18, 22, 32));
    palette.setColor(QPalette::ButtonText,      QColor(240, 246, 252));

    palette.setColor(QPalette::Highlight,       QColor(232, 93, 74));    // #e85d4a crimson
    palette.setColor(QPalette::HighlightedText, QColor(255, 255, 255));

    return fadeInactive(palette, fadeAmount(), fadeColor());
}

double SummerSeaTheme::fadeAmount()
{
    return 0.5;
}

QColor SummerSeaTheme::fadeColor()
{
    return QColor(10, 13, 20);
}
