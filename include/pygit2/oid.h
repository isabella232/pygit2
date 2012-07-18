/*
 * Copyright 2010-2012 The pygit2 contributors
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2,
 * as published by the Free Software Foundation.
 *
 * In addition to the permissions in the GNU General Public License,
 * the authors give you unlimited permission to link the compiled
 * version of this file into combinations with other programs,
 * and to distribute those combinations without any restriction
 * coming from the use of this file.  (The General Public License
 * restrictions do apply in other respects; for example, they cover
 * modification of the file, and distribution when not linked into
 * a combined executable.)
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDE_pygit2_oid_h
#define INCLUDE_pygit2_oid_h

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <git2.h>

int py_str_to_git_oid(PyObject *py_str, git_oid *oid);
int py_str_to_git_oid_expand(git_repository *repo, PyObject *py_str,
                              git_oid *oid);
PyObject* git_oid_to_py_str(const git_oid *oid);

#define git_oid_to_python(id) \
        PyString_FromStringAndSize((const char*)id, GIT_OID_RAWSZ)

#endif
