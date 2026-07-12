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
    // XmasLegacy – Christmas Night Theme (Compact Premium Edition)
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
        "    font-size: 12px;"
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
        "    padding: 4px 8px;"
        "    font-size: 11px;"
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
        "    border-radius: 6px;"
        "    padding: 6px 10px;"
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
        "    border-radius: 6px;"
        "    padding: 5px 10px;"
        "    min-height: 18px;"
        "}"
        "QComboBox:hover {"
        "    border: 1px solid #8b949e;"
        "    background-color: #1b2030;"
        "}"

        // ── Buttons (Lunar/Feather Gaming Style - Compact) ────
        "QPushButton {"
        "    background-color: #e85d4a;"
        "    color: #ffffff;"
        "    border: none;"
        "    border-radius: 6px;"
        "    padding: 6px 12px;"
        "    font-weight: bold;"
        "    font-size: 12px;"
        "    min-height: 18px;"
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

        // ── Main ToolBar & Right Side Instance ToolBar ────────
        "QToolBar {"
        "    background-color: #121620;"
        "    border: none;"
        "    border-bottom: 1px solid #222a36;"
        "    padding: 4px 8px;"
        "    spacing: 6px;"
        "}"
        "QToolBar::separator {"
        "    background-color: #222a36;"
        "    width: 1px;"
        "    margin: 4px 6px;"
        "}"

        // ── ToolBar Buttons (Compact) ────────────────────────
        "QToolBar QToolButton {"
        "    background-color: transparent;"
        "    color: #f0f6fc;"
        "    border: 1px solid transparent;"
        "    border-radius: 5px;"
        "    padding: 4px 8px;"
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

        // ── Active Account Profile Card (Pill Shape) ─────────
        "QToolButton#actionAccountsButton, QToolButton[objectName='actionAccountsButton'] {"
        "    background-color: #1b2030;"
        "    border: 1px solid #e85d4a;"
        "    border-radius: 12px;"
        "    padding: 4px 10px;"
        "    font-weight: bold;"
        "    color: #f0f6fc;"
        "}"
        "QToolButton#actionAccountsButton:hover {"
        "    background-color: #e85d4a;"
        "    color: #ffffff;"
        "    border-color: #ff7663;"
        "}"

        // ── Custom WideBar / Instance Side ToolBar (Compact) ──
        "WideBar {"
        "    background-color: #121620;"
        "    border-left: 1px solid #222a36;"
        "    padding: 8px;"
        "    spacing: 8px;"
        "}"
        "WideBar QToolButton {"
        "    background-color: #1b2030;"
        "    border: 1px solid #222a36;"
        "    border-radius: 6px;"
        "    padding: 6px 8px;"
        "    font-weight: bold;"
        "    min-width: 90px;"
        "}"
        "WideBar QToolButton:hover {"
        "    background-color: #ff7663;"
        "    color: #ffffff;"
        "    border-color: #ff7663;"
        "}"

        // ── ScrollBar ─────────────────────────────────────────
        "QScrollBar:vertical {"
        "    background-color: #0a0d14;"
        "    width: 6px;"
        "    margin: 0;"
        "    border-radius: 3px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background-color: #222a36;"
        "    min-height: 24px;"
        "    border-radius: 3px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background-color: #e85d4a;"
        "}"

        // ── Instance View Cards (Minecraft Card Layout) ────────
        "QListView {"
        "    background-color: #0a0d14;"
        "    border: none;"
        "    outline: none;"
        "    padding: 8px;"
        "}"
        "QListView::item {"
        "    background-color: #121620;"
        "    border: 1px solid #222a36;"
        "    border-radius: 8px;"
        "    padding: 10px;"
        "    margin: 4px;"
        "    color: #f0f6fc;"
        "}"
        "QListView::item:hover {"
        "    background-color: #1b2030;"
        "    border: 1px solid #e85d4a;"
        "}"
        "QListView::item:selected {"
        "    background-color: #1b2030;"
        "    border: 1.5px solid #e85d4a;"
        "    color: #ffffff;"
        "}"

        // ── TabWidget / Settings ──────────────────────────────
        "QTabWidget::pane {"
        "    border: 1px solid #222a36;"
        "    border-radius: 8px;"
        "    background-color: #121620;"
        "}"
        "QTabBar::tab {"
        "    background-color: transparent;"
        "    color: #8b949e;"
        "    padding: 8px 16px;"
        "    font-weight: bold;"
        "}"
        "QTabBar::tab:selected {"
        "    color: #f0f6fc;"
        "    border-bottom: 2.5px solid #e85d4a;"
        "}"

        // ── Progress Bar ──────────────────────────────────────
        "QProgressBar {"
        "    background-color: #121620;"
        "    border-radius: 6px;"
        "    border: 1px solid #222a36;"
        "    text-align: center;"
        "    color: #ffffff;"
        "    font-weight: bold;"
        "    height: 16px;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
        "        stop:0 #e85d4a, stop:1 #f5c518);"
        "    border-radius: 6px;"
        "}"

        // ── CheckBox ──────────────────────────────────────────
        "QCheckBox::indicator {"
        "    width: 16px;"
        "    height: 16px;"
        "    border-radius: 4px;"
        "    border: 1.5px solid #222a36;"
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
