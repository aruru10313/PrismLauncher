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
    // XmasLegacy – Christmas Night Theme
    // Color Palette:
    //   Background Deep:  #0d1117   (dark navy)
    //   Background Card:  #161b22   (slightly lighter panel)
    //   Background Hover: #1c2430   (hover state)
    //   Accent Red:       #e85d4a   (Christmas crimson)
    //   Accent Red Hover: #ff7059   (lighter crimson on hover)
    //   Accent Gold:      #f5c518   (Christmas gold)
    //   Accent Green:     #3fb950   (active / success)
    //   Text Primary:     #f0f6fc   (near-white snow)
    //   Text Secondary:   #8b949e   (muted gray)
    //   Border:           #30363d   (subtle border)
    //   Border Accent:    #e85d4a   (red border on focus)
    //   Highlight:        #58a6ff   (blue link highlight)
    // ─────────────────────────────────────────────────────────
    return
        // ── Global base ──────────────────────────────────────
        "QWidget {"
        "    background-color: #0d1117;"
        "    color: #f0f6fc;"
        "    font-family: 'Segoe UI', 'Inter', Arial, sans-serif;"
        "    font-size: 13px;"
        "}"

        "QMainWindow, QDialog {"
        "    background-color: #0d1117;"
        "}"

        // ── ToolTip ───────────────────────────────────────────
        "QToolTip {"
        "    color: #f0f6fc;"
        "    background-color: #161b22;"
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
        "    background-color: #161b22;"
        "    color: #f0f6fc;"
        "    border: 1px solid #30363d;"
        "    border-radius: 8px;"
        "    padding: 7px 12px;"
        "    selection-background-color: #e85d4a;"
        "    selection-color: #f0f6fc;"
        "}"
        "QLineEdit:hover, QTextEdit:hover, QSpinBox:hover {"
        "    border: 1px solid #8b949e;"
        "    background-color: #1c2430;"
        "}"
        "QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus, QSpinBox:focus {"
        "    border: 1px solid #e85d4a;"
        "    background-color: #1c2430;"
        "}"
        "QLineEdit:disabled, QSpinBox:disabled {"
        "    background-color: #0d1117;"
        "    color: #484f58;"
        "    border: 1px solid #21262d;"
        "}"

        // ── ComboBox ─────────────────────────────────────────
        "QComboBox {"
        "    background-color: #161b22;"
        "    color: #f0f6fc;"
        "    border: 1px solid #30363d;"
        "    border-radius: 8px;"
        "    padding: 7px 12px;"
        "    min-height: 20px;"
        "}"
        "QComboBox:hover {"
        "    border: 1px solid #8b949e;"
        "    background-color: #1c2430;"
        "}"
        "QComboBox:focus {"
        "    border: 1px solid #e85d4a;"
        "}"
        "QComboBox::drop-down {"
        "    border: none;"
        "    width: 24px;"
        "}"
        "QComboBox::down-arrow {"
        "    image: none;"
        "    border-left: 5px solid transparent;"
        "    border-right: 5px solid transparent;"
        "    border-top: 6px solid #8b949e;"
        "    margin-right: 8px;"
        "}"
        "QComboBox QAbstractItemView {"
        "    background-color: #161b22;"
        "    border: 1px solid #30363d;"
        "    border-radius: 8px;"
        "    color: #f0f6fc;"
        "    selection-background-color: #e85d4a;"
        "    selection-color: #f0f6fc;"
        "    padding: 4px;"
        "    outline: none;"
        "}"

        // ── Buttons ───────────────────────────────────────────
        "QPushButton {"
        "    background-color: #e85d4a;"
        "    color: #ffffff;"
        "    border: none;"
        "    border-radius: 8px;"
        "    padding: 9px 18px;"
        "    font-weight: 600;"
        "    font-size: 13px;"
        "    min-height: 20px;"
        "}"
        "QPushButton:hover {"
        "    background-color: #ff7059;"
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
        "QPushButton:flat:hover {"
        "    color: #ff7059;"
        "    background-color: rgba(232,93,74,0.1);"
        "    border-radius: 8px;"
        "}"

        // ── ToolButton ────────────────────────────────────────
        "QToolButton {"
        "    background-color: #161b22;"
        "    color: #f0f6fc;"
        "    border: 1px solid #30363d;"
        "    border-radius: 8px;"
        "    padding: 7px 10px;"
        "    font-size: 13px;"
        "}"
        "QToolButton:hover {"
        "    background-color: #1c2430;"
        "    border: 1px solid #8b949e;"
        "}"
        "QToolButton:pressed, QToolButton:checked {"
        "    background-color: #e85d4a;"
        "    color: #ffffff;"
        "    border: 1px solid #e85d4a;"
        "}"
        "QToolButton::menu-indicator {"
        "    image: none;"
        "}"

        // ── MenuBar ───────────────────────────────────────────
        "QMenuBar {"
        "    background-color: #161b22;"
        "    color: #f0f6fc;"
        "    border-bottom: 1px solid #30363d;"
        "    padding: 2px 4px;"
        "    spacing: 2px;"
        "}"
        "QMenuBar::item {"
        "    background: transparent;"
        "    border-radius: 6px;"
        "    padding: 6px 12px;"
        "}"
        "QMenuBar::item:selected, QMenuBar::item:pressed {"
        "    background-color: rgba(232,93,74,0.15);"
        "    color: #e85d4a;"
        "}"

        // ── Menu ──────────────────────────────────────────────
        "QMenu {"
        "    background-color: #161b22;"
        "    color: #f0f6fc;"
        "    border: 1px solid #30363d;"
        "    border-radius: 10px;"
        "    padding: 6px 0px;"
        "}"
        "QMenu::item {"
        "    padding: 8px 32px 8px 16px;"
        "    border-radius: 6px;"
        "    margin: 2px 6px;"
        "}"
        "QMenu::item:selected {"
        "    background-color: rgba(232,93,74,0.15);"
        "    color: #e85d4a;"
        "}"
        "QMenu::separator {"
        "    height: 1px;"
        "    background-color: #30363d;"
        "    margin: 4px 16px;"
        "}"

        // ── ToolBar ───────────────────────────────────────────
        "QToolBar {"
        "    background-color: #161b22;"
        "    border: none;"
        "    border-bottom: 1px solid #30363d;"
        "    padding: 4px 6px;"
        "    spacing: 4px;"
        "}"
        "QToolBar::separator {"
        "    background-color: #30363d;"
        "    width: 1px;"
        "    margin: 4px 6px;"
        "}"

        // ── StatusBar ─────────────────────────────────────────
        "QStatusBar {"
        "    background-color: #161b22;"
        "    color: #8b949e;"
        "    border-top: 1px solid #30363d;"
        "    padding: 2px 8px;"
        "}"

        // ── TabWidget ─────────────────────────────────────────
        "QTabWidget::pane {"
        "    border: 1px solid #30363d;"
        "    border-radius: 10px;"
        "    background-color: #161b22;"
        "    top: -1px;"
        "}"
        "QTabBar::tab {"
        "    background-color: transparent;"
        "    color: #8b949e;"
        "    border: none;"
        "    border-bottom: 3px solid transparent;"
        "    padding: 10px 20px;"
        "    margin-right: 4px;"
        "    font-weight: 500;"
        "    font-size: 13px;"
        "}"
        "QTabBar::tab:selected {"
        "    color: #f0f6fc;"
        "    border-bottom: 3px solid #e85d4a;"
        "    font-weight: 700;"
        "}"
        "QTabBar::tab:hover:!selected {"
        "    color: #f0f6fc;"
        "    background-color: rgba(232,93,74,0.08);"
        "    border-radius: 8px 8px 0 0;"
        "}"

        // ── ScrollBar ─────────────────────────────────────────
        "QScrollBar:vertical {"
        "    background-color: #0d1117;"
        "    width: 8px;"
        "    margin: 0;"
        "    border-radius: 4px;"
        "}"
        "QScrollBar::handle:vertical {"
        "    background-color: #30363d;"
        "    min-height: 32px;"
        "    border-radius: 4px;"
        "}"
        "QScrollBar::handle:vertical:hover {"
        "    background-color: #8b949e;"
        "}"
        "QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {"
        "    height: 0;"
        "}"
        "QScrollBar:horizontal {"
        "    background-color: #0d1117;"
        "    height: 8px;"
        "    border-radius: 4px;"
        "}"
        "QScrollBar::handle:horizontal {"
        "    background-color: #30363d;"
        "    min-width: 32px;"
        "    border-radius: 4px;"
        "}"
        "QScrollBar::handle:horizontal:hover {"
        "    background-color: #8b949e;"
        "}"
        "QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {"
        "    width: 0;"
        "}"

        // ── ListView / TreeView / TableView ───────────────────
        "QListView, QTreeView, QTableView {"
        "    background-color: #161b22;"
        "    border: 1px solid #30363d;"
        "    border-radius: 10px;"
        "    color: #f0f6fc;"
        "    gridline-color: #21262d;"
        "    outline: none;"
        "    show-decoration-selected: 1;"
        "}"
        "QListView::item, QTreeView::item, QTableView::item {"
        "    padding: 8px 12px;"
        "    border-radius: 6px;"
        "    margin: 1px 4px;"
        "}"
        "QListView::item:hover, QTreeView::item:hover {"
        "    background-color: rgba(232,93,74,0.08);"
        "}"
        "QListView::item:selected, QTreeView::item:selected, QTableView::item:selected {"
        "    background-color: rgba(232,93,74,0.18);"
        "    color: #f0f6fc;"
        "    border-left: 3px solid #e85d4a;"
        "}"
        "QListView::item:selected:active, QTreeView::item:selected:active {"
        "    background-color: rgba(232,93,74,0.22);"
        "}"

        // ── HeaderView ────────────────────────────────────────
        "QHeaderView::section {"
        "    background-color: #161b22;"
        "    color: #8b949e;"
        "    padding: 10px 12px;"
        "    border: none;"
        "    border-bottom: 1px solid #30363d;"
        "    border-right: 1px solid #21262d;"
        "    font-weight: 600;"
        "    font-size: 12px;"
        "    text-transform: uppercase;"
        "}"
        "QHeaderView::section:hover {"
        "    color: #f0f6fc;"
        "    background-color: #1c2430;"
        "}"

        // ── GroupBox ──────────────────────────────────────────
        "QGroupBox {"
        "    border: 1px solid #30363d;"
        "    border-radius: 10px;"
        "    margin-top: 1.5em;"
        "    padding-top: 1em;"
        "    padding: 16px 12px 12px 12px;"
        "    font-weight: 700;"
        "    font-size: 13px;"
        "    color: #e85d4a;"
        "}"
        "QGroupBox::title {"
        "    subcontrol-origin: margin;"
        "    subcontrol-position: top left;"
        "    padding: 2px 10px;"
        "    left: 16px;"
        "    color: #e85d4a;"
        "    background-color: #0d1117;"
        "    border-radius: 4px;"
        "}"

        // ── CheckBox ──────────────────────────────────────────
        "QCheckBox {"
        "    color: #f0f6fc;"
        "    spacing: 10px;"
        "    font-size: 13px;"
        "}"
        "QCheckBox::indicator {"
        "    width: 18px;"
        "    height: 18px;"
        "    border-radius: 5px;"
        "    border: 2px solid #30363d;"
        "    background-color: #0d1117;"
        "}"
        "QCheckBox::indicator:hover {"
        "    border: 2px solid #8b949e;"
        "}"
        "QCheckBox::indicator:checked {"
        "    background-color: #e85d4a;"
        "    border: 2px solid #e85d4a;"
        "}"
        "QCheckBox::indicator:checked:hover {"
        "    background-color: #ff7059;"
        "}"

        // ── RadioButton ───────────────────────────────────────
        "QRadioButton {"
        "    color: #f0f6fc;"
        "    spacing: 10px;"
        "    font-size: 13px;"
        "}"
        "QRadioButton::indicator {"
        "    width: 18px;"
        "    height: 18px;"
        "    border-radius: 9px;"
        "    border: 2px solid #30363d;"
        "    background-color: #0d1117;"
        "}"
        "QRadioButton::indicator:hover {"
        "    border: 2px solid #8b949e;"
        "}"
        "QRadioButton::indicator:checked {"
        "    background-color: #e85d4a;"
        "    border: 2px solid #e85d4a;"
        "}"

        // ── Slider ────────────────────────────────────────────
        "QSlider::groove:horizontal {"
        "    background-color: #21262d;"
        "    border-radius: 4px;"
        "    height: 6px;"
        "}"
        "QSlider::sub-page:horizontal {"
        "    background-color: #e85d4a;"
        "    border-radius: 4px;"
        "}"
        "QSlider::handle:horizontal {"
        "    background-color: #f0f6fc;"
        "    width: 18px;"
        "    height: 18px;"
        "    margin: -6px 0;"
        "    border-radius: 9px;"
        "    border: 2px solid #e85d4a;"
        "}"
        "QSlider::handle:horizontal:hover {"
        "    background-color: #e85d4a;"
        "}"

        // ── ProgressBar ───────────────────────────────────────
        "QProgressBar {"
        "    background-color: #21262d;"
        "    border-radius: 6px;"
        "    border: none;"
        "    text-align: center;"
        "    color: #f0f6fc;"
        "    font-weight: 600;"
        "    min-height: 12px;"
        "}"
        "QProgressBar::chunk {"
        "    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0,"
        "        stop:0 #e85d4a, stop:1 #f5c518);"
        "    border-radius: 6px;"
        "}"

        // ── SplashBar / FrameBar ──────────────────────────────
        "QFrame[frameShape='4'], QFrame[frameShape='5'] {"
        "    background-color: #30363d;"
        "    max-height: 1px;"
        "    max-width: 1px;"
        "}"

        // ── Splitter ──────────────────────────────────────────
        "QSplitter::handle {"
        "    background-color: #30363d;"
        "}"
        "QSplitter::handle:horizontal {"
        "    width: 1px;"
        "}"
        "QSplitter::handle:vertical {"
        "    height: 1px;"
        "}"

        // ── MainWindow separator ──────────────────────────────
        "QMainWindow::separator {"
        "    background-color: #30363d;"
        "    width: 1px;"
        "    height: 1px;"
        "}"

        // ── DockWidget ────────────────────────────────────────
        "QDockWidget {"
        "    color: #f0f6fc;"
        "    titlebar-close-icon: none;"
        "    titlebar-normal-icon: none;"
        "}"
        "QDockWidget::title {"
        "    background-color: #161b22;"
        "    padding: 8px;"
        "    border-bottom: 1px solid #30363d;"
        "}"
        ;
}

QPalette SummerSeaTheme::colorScheme()
{
    QPalette palette;
    // Backgrounds
    palette.setColor(QPalette::Window,          QColor(13, 17, 23));     // #0d1117
    palette.setColor(QPalette::Base,            QColor(22, 27, 34));     // #161b22
    palette.setColor(QPalette::AlternateBase,   QColor(28, 36, 48));     // #1c2430

    // Text
    palette.setColor(QPalette::WindowText,      QColor(240, 246, 252));  // #f0f6fc
    palette.setColor(QPalette::Text,            QColor(240, 246, 252));
    palette.setColor(QPalette::BrightText,      QColor(245, 197, 24));   // #f5c518 gold
    palette.setColor(QPalette::PlaceholderText, QColor(139, 148, 158));  // #8b949e

    // Buttons
    palette.setColor(QPalette::Button,          QColor(22, 27, 34));     // #161b22
    palette.setColor(QPalette::ButtonText,      QColor(240, 246, 252));

    // Tooltip
    palette.setColor(QPalette::ToolTipBase,     QColor(22, 27, 34));
    palette.setColor(QPalette::ToolTipText,     QColor(240, 246, 252));

    // Highlight (selection)
    palette.setColor(QPalette::Highlight,       QColor(232, 93, 74));    // #e85d4a christmas red
    palette.setColor(QPalette::HighlightedText, QColor(255, 255, 255));

    // Links
    palette.setColor(QPalette::Link,            QColor(88, 166, 255));   // #58a6ff
    palette.setColor(QPalette::LinkVisited,     QColor(200, 130, 245));

    return fadeInactive(palette, fadeAmount(), fadeColor());
}

double SummerSeaTheme::fadeAmount()
{
    return 0.5;
}

QColor SummerSeaTheme::fadeColor()
{
    return QColor(13, 17, 23);  // #0d1117
}
