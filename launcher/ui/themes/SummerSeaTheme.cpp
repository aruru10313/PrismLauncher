// SPDX-License-Identifier: GPL-3.0-only
/*
 *  XmasLegacy - Minecraft Launcher
 *  Christmas Night Theme (Warm Charcoal & Coral Red Edition)
 *  A cozy, warm, and highly polished theme.
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
    return QObject::tr("A cozy dark theme with warm charcoal backgrounds and coral red accents.");
}

bool SummerSeaTheme::hasStyleSheet()
{
    return true;
}

QString SummerSeaTheme::appStyleSheet()
{
    // ──────────────────────────────────────────────────
    // Design System — Cozy Charcoal & Coral Red
    //
    // Surface 0 (Window BG): #15161a  — Warm charcoal
    // Surface 1 (Cards, Tab):#1e1f25  — Slightly lighter gray
    // Surface 2 (Hover):     #292a31  — Interaction color
    // Border:                #2e2f37  — Clean subtle boundary
    //
    // Text primary:          #f0f6fc  — Clean white
    // Text secondary:        #8b949e  — Muted frost gray
    // Accent (Coral Red):    #e05a47  — Friendly, warm red
    // Accent Hover:          #eb7362  — Glowing coral red
    // ──────────────────────────────────────────────────
    return
        // ── Base ─────────────────────────────────────────
        "* {"
        "    font-family: 'Segoe UI', 'Inter', 'Malgun Gothic', sans-serif;"
        "}"

        "QWidget {"
        "    background-color: #15161a;"
        "    color: #f0f6fc;"
        "    font-size: 12px;"
        "}"

        "QMainWindow, QDialog {"
        "    background-color: #15161a;"
        "}"

        // ── Tooltip ──────────────────────────────────────
        "QToolTip {"
        "    color: #f0f6fc;"
        "    background-color: #1e1f25;"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 4px;"
        "    padding: 4px 8px;"
        "}"

        // ── Labels ───────────────────────────────────────
        "QLabel {"
        "    background: transparent;"
        "}"

        // ── GroupBox ─────────────────────────────────────
        "QGroupBox {"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 6px;"
        "    margin-top: 8px;"
        "    padding-top: 12px;"
        "}"
        "QGroupBox::title {"
        "    subcontrol-origin: margin;"
        "    left: 10px;"
        "    padding: 0 4px;"
        "    color: #8b949e;"
        "}"

        // ── Inputs ───────────────────────────────────────
        "QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QDoubleSpinBox {"
        "    background-color: #1e1f25;"
        "    color: #f0f6fc;"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 5px;"
        "    padding: 5px 8px;"
        "    selection-background-color: #e05a47;"
        "    selection-color: #ffffff;"
        "}"
        "QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus {"
        "    border-color: #e05a47;"
        "}"

        // ── ComboBox ─────────────────────────────────────
        "QComboBox {"
        "    background-color: #1e1f25;"
        "    color: #f0f6fc;"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 5px;"
        "    padding: 4px 8px;"
        "}"
        "QComboBox QAbstractItemView {"
        "    background-color: #1e1f25;"
        "    border: 1px solid #2e2f37;"
        "    color: #f0f6fc;"
        "    selection-background-color: #e05a47;"
        "    selection-color: #ffffff;"
        "    outline: none;"
        "}"

        // ── QPushButton ──────────────────────────────────
        "QPushButton {"
        "    background-color: #1e1f25;"
        "    color: #f0f6fc;"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 5px;"
        "    padding: 6px 14px;"
        "    font-weight: 600;"
        "}"
        "QPushButton:hover {"
        "    background-color: #292a31;"
        "    border-color: #e05a47;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #e05a47;"
        "    color: #ffffff;"
        "    border-color: #e05a47;"
        "}"
        "QPushButton:disabled {"
        "    background-color: #15161a;"
        "    color: #4f5056;"
        "    border-color: #1e1f25;"
        "}"
        "QPushButton:default {"
        "    background-color: #e05a47;"
        "    color: #ffffff;"
        "    border-color: #e05a47;"
        "}"
        "QPushButton:default:hover {"
        "    background-color: #eb7362;"
        "}"

        // ── Menu ─────────────────────────────────────────
        "QMenu {"
        "    background-color: #1e1f25;"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 4px;"
        "    padding: 4px 0;"
        "}"
        "QMenu::item {"
        "    padding: 5px 24px 5px 12px;"
        "    color: #f0f6fc;"
        "}"
        "QMenu::item:selected {"
        "    background-color: #292a31;"
        "}"
        "QMenu::separator {"
        "    height: 1px;"
        "    background: #2e2f37;"
        "    margin: 4px 8px;"
        "}"
        "QMenuBar {"
        "    background-color: #1e1f25;"
        "    border-bottom: 1px solid #2e2f37;"
        "}"
        "QMenuBar::item {"
        "    padding: 4px 10px;"
        "    background: transparent;"
        "}"
        "QMenuBar::item:selected {"
        "    background-color: #292a31;"
        "    border-radius: 4px;"
        "}"

        // ── ToolBar ──────────────────────────────────────
        "QToolBar {"
        "    background-color: #1e1f25;"
        "    border: none;"
        "    border-bottom: 1px solid #2e2f37;"
        "    padding: 3px 6px;"
        "    spacing: 4px;"
        "}"
        "QToolBar::separator {"
        "    background: #2e2f37;"
        "    width: 1px;"
        "    margin: 4px 4px;"
        "}"

        // ── ToolBar Buttons ──────────────────────────────
        "QToolBar QToolButton {"
        "    background: transparent;"
        "    color: #f0f6fc;"
        "    border: none;"
        "    border-radius: 4px;"
        "    padding: 4px 6px;"
        "}"
        "QToolBar QToolButton:hover {"
        "    background-color: #292a31;"
        "}"
        "QToolBar QToolButton:pressed, QToolBar QToolButton:checked {"
        "    background-color: #e05a47;"
        "    color: #ffffff;"
        "}"

        // ── Active Account Profile Card (Pill Shape) ─────────
        "QToolButton#actionAccountsButton, QToolButton[objectName='actionAccountsButton'] {"
        "    background-color: #292a31;"
        "    border: 1px solid #e05a47;"
        "    border-radius: 12px;"
        "    padding: 3px 8px;"
        "    font-weight: bold;"
        "    color: #f0f6fc;"
        "}"
        "QToolButton#actionAccountsButton:hover {"
        "    background-color: #e05a47;"
        "    color: #ffffff;"
        "    border-color: #eb7362;"
        "}"

        // ── WideBar (Instance sidebar) ───────────────────
        "WideBar {"
        "    background-color: #1e1f25;"
        "    border-left: 1px solid #2e2f37;"
        "}"
        "WideBar QToolButton {"
        "    background-color: transparent;"
        "    border: none;"
        "    border-radius: 4px;"
        "    padding: 5px 8px;"
        "    color: #f0f6fc;"
        "    text-align: left;"
        "}"
        "WideBar QToolButton:hover {"
        "    background-color: #292a31;"
        "}"

        // ── ScrollBars ───────────────────────────────────
        "QScrollBar:vertical {"
        "    background: transparent;"
        "    width: 6px;"
        "    margin: 0;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background-color: #2e2f37;"
        "    min-height: 20px;"
        "    border-radius: 3px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background-color: #8b949e;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical,"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "    background: transparent;"
        "    height: 0;"
        "}"

        // ── Instance List View ───────────────────────────
        "QListView, QTreeView, QTableView {"
        "    background-color: #15161a;"
        "    border: none;"
        "    outline: none;"
        "}"
        "QListView::item {"
        "    background-color: #1e1f25;"
        "    border: 1px solid transparent;"
        "    border-radius: 6px;"
        "    padding: 8px;"
        "    margin: 3px;"
        "}"
        "QListView::item:hover {"
        "    background-color: #292a31;"
        "    border-color: #2e2f37;"
        "}"
        "QListView::item:selected {"
        "    background-color: #292a31;"
        "    border-left: 3px solid #e05a47;"
        "    border-color: #2e2f37;"
        "}"

        // ── TreeView / TableView ─────────────────────────
        "QTreeView::item, QTableView::item {"
        "    padding: 4px;"
        "}"
        "QTreeView::item:hover, QTableView::item:hover {"
        "    background-color: #292a31;"
        "}"
        "QTreeView::item:selected, QTableView::item:selected {"
        "    background-color: #292a31;"
        "    color: #ffffff;"
        "}"
        "QHeaderView::section {"
        "    background-color: #1e1f25;"
        "    color: #8b949e;"
        "    border: none;"
        "    border-bottom: 1px solid #2e2f37;"
        "    padding: 4px 8px;"
        "    font-weight: 600;"
        "}"

        // ── TabWidget ────────────────────────────────────
        "QTabWidget::pane {"
        "    border: 1px solid #2e2f37;"
        "    border-radius: 6px;"
        "    background-color: #1e1f25;"
        "}"
        "QTabBar::tab {"
        "    background: transparent;"
        "    color: #8b949e;"
        "    padding: 6px 14px;"
        "    border-bottom: 2px solid transparent;"
        "}"
        "QTabBar::tab:selected {"
        "    color: #f0f6fc;"
        "    border-bottom-color: #e05a47;"
        "}"
        "QTabBar::tab:hover {"
        "    color: #f0f6fc;"
        "}"

        // ── ProgressBar ──────────────────────────────────
        "QProgressBar {"
        "    background-color: #1e1f25;"
        "    border: none;"
        "    border-radius: 3px;"
        "    text-align: center;"
        "    color: #f0f6fc;"
        "    font-size: 11px;"
        "    max-height: 6px;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #e05a47;"
        "    border-radius: 3px;"
        "}"

        // ── CheckBox & RadioButton ───────────────────────
        "QCheckBox::indicator, QRadioButton::indicator {"
        "    width: 14px;"
        "    height: 14px;"
        "    border: 1.5px solid #2e2f37;"
        "    background-color: #1e1f25;"
        "}"
        "QCheckBox::indicator {"
        "    border-radius: 3px;"
        "}"
        "QRadioButton::indicator {"
        "    border-radius: 7px;"
        "}"
        "QCheckBox::indicator:checked, QRadioButton::indicator:checked {"
        "    background-color: #e05a47;"
        "    border-color: #e05a47;"
        "}"

        // ── StatusBar ────────────────────────────────────
        "QStatusBar {"
        "    background-color: #1e1f25;"
        "    border-top: 1px solid #2e2f37;"
        "    color: #8b949e;"
        "}"

        // ── Splitter ─────────────────────────────────────
        "QSplitter::handle {"
        "    background-color: #2e2f37;"
        "}"
        ;
}

QPalette SummerSeaTheme::colorScheme()
{
    QPalette palette;
    palette.setColor(QPalette::Window,          QColor(21, 22, 26));     // #15161a
    palette.setColor(QPalette::Base,            QColor(30, 31, 37));     // #1e1f25
    palette.setColor(QPalette::AlternateBase,   QColor(41, 42, 49));     // #292a31

    palette.setColor(QPalette::WindowText,      QColor(240, 246, 252));  // #f0f6fc
    palette.setColor(QPalette::Text,            QColor(240, 246, 252));
    palette.setColor(QPalette::BrightText,      QColor(245, 197, 24));   // #f5c518 gold
    palette.setColor(QPalette::PlaceholderText, QColor(139, 148, 158));  // #8b949e

    palette.setColor(QPalette::Button,          QColor(30, 31, 37));
    palette.setColor(QPalette::ButtonText,      QColor(240, 246, 252));

    palette.setColor(QPalette::Highlight,       QColor(224, 90, 71));    // #e05a47 coral red
    palette.setColor(QPalette::HighlightedText, QColor(255, 255, 255));

    palette.setColor(QPalette::Light,           QColor(41, 42, 49));
    palette.setColor(QPalette::Midlight,        QColor(46, 47, 55));
    palette.setColor(QPalette::Mid,             QColor(46, 47, 55));
    palette.setColor(QPalette::Dark,            QColor(21, 22, 26));
    palette.setColor(QPalette::Shadow,          QColor(0, 0, 0));

    palette.setColor(QPalette::Link,            QColor(224, 90, 71));
    palette.setColor(QPalette::LinkVisited,     QColor(235, 115, 98));

    return fadeInactive(palette, fadeAmount(), fadeColor());
}

double SummerSeaTheme::fadeAmount()
{
    return 0.5;
}

QColor SummerSeaTheme::fadeColor()
{
    return QColor(21, 22, 26);
}
