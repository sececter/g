// ----------------------------------------------------------------------------
//
// G Library
//
// http://www.gilgil.net
//
// Copyright (c) Gilbert Lee All rights reserved
//
// ----------------------------------------------------------------------------

#pragma once

#include <QThread>

// ----------------------------------------------------------------------------
// GThread
// ----------------------------------------------------------------------------
struct GThread : QThread {
  GThread(QObject *parent = nullptr);
};