// SPDX-License-Identifier: GPL-3.0-only
/*
 *  XmasLegacy - Minecraft Launcher
 *  Christmas Night Theme
 *  Design reference: Feather Client / Lunar Client dark UI
 *  Key principles: clean, minimal, high contrast, restrained accent usage
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
    return QObject::tr("A clean dark theme with Christmas accents, inspired by Feather Client.");
}

bool SummerSeaTheme::hasStyleSheet()
{
    return true;
}

QString SummerSeaTheme::appStyleSheet()
{
    // ──────────────────────────────────────────────────
    // Design System — Feather/Lunar inspired
    //
    // Surface 0 (deepest):   #111116  — window bg
    // Surface 1:             #1a1a22  — toolbar, sidebar
    // Surface 2:             #222230  — cards, inputs
    // Surface 3 (hover):     #2a2a3a  — hover states
    // Border:                #2e2e3e  — very subtle borders
    //
    // Text primary:          #e8e8ed  — almost white
    // Text secondary:        #7c7c8a  — muted
    //
    // Accent (Christmas):    #d94f43  — muted crimson
    // Accent hover:          #e86458  — lighter crimson
    // Accent gold:           #d4a826  — warm gold, sparingly
    // ──────────────────────────────────────────────────
    return

        // ── Base ─────────────────────────────────────────
        "* {"
        "    font-family: 'Segoe UI', 'Inter', 'Malgun Gothic', sans-serif;"
        "}"

        "QWidget {"
        "    background-color: #111116;"
        "    color: #e8e8ed;"
        "    font-size: 12px;"
        "}"

        "QMainWindow, QDialog {"
        "    background-color: #111116;"
        "}"

        // ── Tooltip ──────────────────────────────────────
        "QToolTip {"
        "    color: #e8e8ed;"
        "    background-color: #1a1a22;"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 4px;"
        "    padding: 4px 8px;"
        "}"

        // ── Labels ───────────────────────────────────────
        "QLabel {"
        "    background: transparent;"
        "}"

        // ── GroupBox ─────────────────────────────────────
        "QGroupBox {"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 6px;"
        "    margin-top: 8px;"
        "    padding-top: 12px;"
        "}"
        "QGroupBox::title {"
        "    subcontrol-origin: margin;"
        "    left: 10px;"
        "    padding: 0 4px;"
        "    color: #7c7c8a;"
        "}"

        // ── Inputs ───────────────────────────────────────
        "QLineEdit, QTextEdit, QPlainTextEdit, QSpinBox, QDoubleSpinBox {"
        "    background-color: #222230;"
        "    color: #e8e8ed;"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 4px;"
        "    padding: 5px 8px;"
        "    selection-background-color: #d94f43;"
        "    selection-color: #ffffff;"
        "}"
        "QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus {"
        "    border-color: #d94f43;"
        "}"

        // ── ComboBox ─────────────────────────────────────
        "QComboBox {"
        "    background-color: #222230;"
        "    color: #e8e8ed;"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 4px;"
        "    padding: 4px 8px;"
        "}"
        "QComboBox QAbstractItemView {"
        "    background-color: #1a1a22;"
        "    border: 1px solid #2e2e3e;"
        "    color: #e8e8ed;"
        "    selection-background-color: #d94f43;"
        "    selection-color: #ffffff;"
        "    outline: none;"
        "}"

        // ── QPushButton ──────────────────────────────────
        // Default: subtle background, not screaming red
        "QPushButton {"
        "    background-color: #222230;"
        "    color: #e8e8ed;"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 4px;"
        "    padding: 5px 14px;"
        "    font-weight: 600;"
        "}"
        "QPushButton:hover {"
        "    background-color: #2a2a3a;"
        "    border-color: #d94f43;"
        "}"
        "QPushButton:pressed {"
        "    background-color: #d94f43;"
        "    color: #ffffff;"
        "    border-color: #d94f43;"
        "}"
        "QPushButton:disabled {"
        "    background-color: #1a1a22;"
        "    color: #4a4a55;"
        "    border-color: #222230;"
        "}"
        // Primary action buttons (OK, Accept)
        "QPushButton:default {"
        "    background-color: #d94f43;"
        "    color: #ffffff;"
        "    border-color: #d94f43;"
        "}"
        "QPushButton:default:hover {"
        "    background-color: #e86458;"
        "}"

        // ── Menu ─────────────────────────────────────────
        "QMenu {"
        "    background-color: #1a1a22;"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 4px;"
        "    padding: 4px 0;"
        "}"
        "QMenu::item {"
        "    padding: 5px 24px 5px 12px;"
        "    color: #e8e8ed;"
        "}"
        "QMenu::item:selected {"
        "    background-color: #2a2a3a;"
        "}"
        "QMenu::separator {"
        "    height: 1px;"
        "    background: #2e2e3e;"
        "    margin: 4px 8px;"
        "}"
        "QMenuBar {"
        "    background-color: #1a1a22;"
        "    border-bottom: 1px solid #2e2e3e;"
        "}"
        "QMenuBar::item {"
        "    padding: 4px 10px;"
        "    background: transparent;"
        "}"
        "QMenuBar::item:selected {"
        "    background-color: #2a2a3a;"
        "    border-radius: 4px;"
        "}"

        // ── ToolBar ──────────────────────────────────────
        "QToolBar {"
        "    background-color: #1a1a22;"
        "    border: none;"
        "    border-bottom: 1px solid #2e2e3e;"
        "    padding: 2px 4px;"
        "    spacing: 2px;"
        "}"
        "QToolBar::separator {"
        "    background: #2e2e3e;"
        "    width: 1px;"
        "    margin: 4px 4px;"
        "}"

        // ── ToolBar Buttons ──────────────────────────────
        "QToolBar QToolButton {"
        "    background: transparent;"
        "    color: #e8e8ed;"
        "    border: none;"
        "    border-radius: 4px;"
        "    padding: 4px 6px;"
        "}"
        "QToolBar QToolButton:hover {"
        "    background-color: #2a2a3a;"
        "}"
        "QToolBar QToolButton:pressed, QToolBar QToolButton:checked {"
        "    background-color: #d94f43;"
        "    color: #ffffff;"
        "}"

        // ── WideBar (Instance sidebar) ───────────────────
        "WideBar {"
        "    background-color: #1a1a22;"
        "    border-left: 1px solid #2e2e3e;"
        "}"
        "WideBar QToolButton {"
        "    background-color: transparent;"
        "    border: none;"
        "    border-radius: 4px;"
        "    padding: 5px 8px;"
        "    color: #e8e8ed;"
        "    text-align: left;"
        "}"
        "WideBar QToolButton:hover {"
        "    background-color: #2a2a3a;"
        "}"

        // ── ScrollBars ───────────────────────────────────
        "QScrollBar:vertical {"
        "    background: transparent;"
        "    width: 6px;"
        "    margin: 0;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background-color: #2e2e3e;"
        "    min-height: 20px;"
        "    border-radius: 3px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background-color: #7c7c8a;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical,"
        "QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {"
        "    background: transparent;"
        "    height: 0;"
        "}"
        "QScrollBar:horizontal {"
        "    background: transparent;"
        "    height: 6px;"
        "    margin: 0;"
        "}"
        "QScrollBar::handle:horizontal {"
        "    background-color: #2e2e3e;"
        "    min-width: 20px;"
        "    border-radius: 3px;"
        "}"
        "QScrollBar::handle:horizontal:hover {"
        "    background-color: #7c7c8a;"
        "}"
        "QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal,"
        "QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal {"
        "    background: transparent;"
        "    width: 0;"
        "}"

        // ── Instance List View ───────────────────────────
        "QListView, QTreeView, QTableView {"
        "    background-color: #111116;"
        "    border: none;"
        "    outline: none;"
        "}"
        "QListView::item {"
        "    background-color: #1a1a22;"
        "    border: 1px solid transparent;"
        "    border-radius: 6px;"
        "    padding: 8px;"
        "    margin: 3px;"
        "}"
        "QListView::item:hover {"
        "    background-color: #222230;"
        "    border-color: #2e2e3e;"
        "}"
        "QListView::item:selected {"
        "    background-color: #222230;"
        "    border-color: #d94f43;"
        "}"

        // ── TreeView / TableView ─────────────────────────
        "QTreeView::item, QTableView::item {"
        "    padding: 4px;"
        "}"
        "QTreeView::item:hover, QTableView::item:hover {"
        "    background-color: #222230;"
        "}"
        "QTreeView::item:selected, QTableView::item:selected {"
        "    background-color: #2a2a3a;"
        "    color: #ffffff;"
        "}"
        "QHeaderView::section {"
        "    background-color: #1a1a22;"
        "    color: #7c7c8a;"
        "    border: none;"
        "    border-bottom: 1px solid #2e2e3e;"
        "    padding: 4px 8px;"
        "    font-weight: 600;"
        "}"

        // ── TabWidget ────────────────────────────────────
        "QTabWidget::pane {"
        "    border: 1px solid #2e2e3e;"
        "    border-radius: 6px;"
        "    background-color: #1a1a22;"
        "}"
        "QTabBar::tab {"
        "    background: transparent;"
        "    color: #7c7c8a;"
        "    padding: 6px 14px;"
        "    border-bottom: 2px solid transparent;"
        "}"
        "QTabBar::tab:selected {"
        "    color: #e8e8ed;"
        "    border-bottom-color: #d94f43;"
        "}"
        "QTabBar::tab:hover {"
        "    color: #e8e8ed;"
        "}"

        // ── ProgressBar ──────────────────────────────────
        "QProgressBar {"
        "    background-color: #222230;"
        "    border: none;"
        "    border-radius: 3px;"
        "    text-align: center;"
        "    color: #e8e8ed;"
        "    font-size: 11px;"
        "    max-height: 6px;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: #d94f43;"
        "    border-radius: 3px;"
        "}"

        // ── CheckBox & RadioButton ───────────────────────
        "QCheckBox::indicator, QRadioButton::indicator {"
        "    width: 14px;"
        "    height: 14px;"
        "    border: 1.5px solid #2e2e3e;"
        "    background-color: #222230;"
        "}"
        "QCheckBox::indicator {"
        "    border-radius: 3px;"
        "}"
        "QRadioButton::indicator {"
        "    border-radius: 7px;"
        "}"
        "QCheckBox::indicator:checked, QRadioButton::indicator:checked {"
        "    background-color: #d94f43;"
        "    border-color: #d94f43;"
        "}"

        // ── StatusBar ────────────────────────────────────
        "QStatusBar {"
        "    background-color: #1a1a22;"
        "    border-top: 1px solid #2e2e3e;"
        "    color: #7c7c8a;"
        "}"

        // ── Splitter ─────────────────────────────────────
        "QSplitter::handle {"
        "    background-color: #2e2e3e;"
        "}"
        ;
}

QPalette SummerSeaTheme::colorScheme()
{
    QPalette palette;
    palette.setColor(QPalette::Window,          QColor(17, 17, 22));     // #111116
    palette.setColor(QPalette::Base,            QColor(26, 26, 34));     // #1a1a22
    palette.setColor(QPalette::AlternateBase,   QColor(34, 34, 48));     // #222230

    palette.setColor(QPalette::WindowText,      QColor(232, 232, 237));  // #e8e8ed
    palette.setColor(QPalette::Text,            QColor(232, 232, 237));
    palette.setColor(QPalette::BrightText,      QColor(212, 168, 38));   // #d4a826
    palette.setColor(QPalette::PlaceholderText, QColor(124, 124, 138));  // #7c7c8a

    palette.setColor(QPalette::Button,          QColor(34, 34, 48));     // #222230
    palette.setColor(QPalette::ButtonText,      QColor(232, 232, 237));

    palette.setColor(QPalette::Highlight,       QColor(217, 79, 67));    // #d94f43
    palette.setColor(QPalette::HighlightedText, QColor(255, 255, 255));

    palette.setColor(QPalette::Light,           QColor(42, 42, 58));     // #2a2a3a
    palette.setColor(QPalette::Midlight,        QColor(46, 46, 62));     // #2e2e3e
    palette.setColor(QPalette::Mid,             QColor(46, 46, 62));
    palette.setColor(QPalette::Dark,            QColor(17, 17, 22));
    palette.setColor(QPalette::Shadow,          QColor(0, 0, 0));

    palette.setColor(QPalette::Link,            QColor(217, 79, 67));
    palette.setColor(QPalette::LinkVisited,     QColor(232, 100, 88));

    return fadeInactive(palette, fadeAmount(), fadeColor());
}

double SummerSeaTheme::fadeAmount()
{
    return 0.5;
}

QColor SummerSeaTheme::fadeColor()
{
    return QColor(17, 17, 22);
}
