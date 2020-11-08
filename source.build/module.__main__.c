/* Generated code for Python module '__main__'
 * created by Nuitka version 0.6.9.3
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[94];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    loadConstantsBlob(&mod_consts[0], "__main__", 94);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "__main__", 94);
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3885514e4dac4e05fbc82ccb736f5516;
static PyCodeObject *codeobj_9ae2d69aa141d3bad70feac06ca9e2a9;
static PyCodeObject *codeobj_6d084d480b194d151e5a79b6874ae479;
static PyCodeObject *codeobj_9ea11ababce8aca795ca452aa34d8698;
static PyCodeObject *codeobj_d3f26640f5dca16662e8b4867eadd9f0;
static PyCodeObject *codeobj_d76d7ad0b1e6735a9e45957728710447;
static PyCodeObject *codeobj_45ec19904cfe264b04e601ff027bfb1e;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[40]; CHECK_OBJECT(module_filename_obj);
    codeobj_3885514e4dac4e05fbc82ccb736f5516 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[90], mod_consts[91], 0, 0, 0);
    codeobj_9ae2d69aa141d3bad70feac06ca9e2a9 = MAKE_CODEOBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[92], 0, 0, 0);
    codeobj_6d084d480b194d151e5a79b6874ae479 = MAKE_CODEOBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[93], 1, 0, 0);
    codeobj_9ea11ababce8aca795ca452aa34d8698 = MAKE_CODEOBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[93], 1, 0, 0);
    codeobj_d3f26640f5dca16662e8b4867eadd9f0 = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[91], 0, 0, 0);
    codeobj_d76d7ad0b1e6735a9e45957728710447 = MAKE_CODEOBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[91], 0, 0, 0);
    codeobj_45ec19904cfe264b04e601ff027bfb1e = MAKE_CODEOBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[91], 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function_1_Ping();


static PyObject *MAKE_FUNCTION___main__$$$function_2_statePinging();


static PyObject *MAKE_FUNCTION___main__$$$function_3_stateSuccess();


static PyObject *MAKE_FUNCTION___main__$$$function_4_stateFail();


static PyObject *MAKE_FUNCTION___main__$$$function_5_ping_thread();


static PyObject *MAKE_FUNCTION___main__$$$function_6_refresh_ping_thread();


// The module function definitions.
static PyObject *impl___main__$$$function_1_Ping(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_FNULL = NULL;
    PyObject *var_response = NULL;
    nuitka_bool var_isUpBool = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_9ae2d69aa141d3bad70feac06ca9e2a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9)) {
        Py_XDECREF(cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9 = MAKE_FUNCTION_FRAME(codeobj_9ae2d69aa141d3bad70feac06ca9e2a9, module___main__, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9->m_type_description == NULL);
    frame_9ae2d69aa141d3bad70feac06ca9e2a9 = cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9ae2d69aa141d3bad70feac06ca9e2a9);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9ae2d69aa141d3bad70feac06ca9e2a9) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_open_mode_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[0]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[0]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_1;
        tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_open_mode_1 = mod_consts[2];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        assert(var_FNULL == NULL);
        var_FNULL = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[3]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 23;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_9ae2d69aa141d3bad70feac06ca9e2a9->m_frame.f_lineno = 23;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[5];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 23;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_right_name_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[6]);
        }

        if (unlikely(tmp_mvar_value_3 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[7]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[8];
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[9]);
        }

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 24;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_4;
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 24;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[10];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 24;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[11];
        tmp_dict_value_1 = Py_False;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[12];
        CHECK_OBJECT(var_FNULL);
        tmp_dict_value_2 = var_FNULL;
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_9ae2d69aa141d3bad70feac06ca9e2a9->m_frame.f_lineno = 24;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        assert(var_response == NULL);
        var_response = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[6]);
        }

        if (unlikely(tmp_mvar_value_5 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_5;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[7]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_left_name_3 = mod_consts[13];
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[9]);
        }

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = tmp_mvar_value_6;
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 26;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_3 = mod_consts[11];
        tmp_dict_value_3 = Py_True;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[12];
        CHECK_OBJECT(var_FNULL);
        tmp_dict_value_4 = var_FNULL;
        tmp_res = PyDict_SetItem(tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_9ae2d69aa141d3bad70feac06ca9e2a9->m_frame.f_lineno = 26;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        assert(var_response == NULL);
        var_response = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_FALSE;
        var_isUpBool = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_response);
        tmp_compexpr_left_2 = var_response;
        tmp_compexpr_right_2 = mod_consts[14];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 28;
            type_description_1 = "oob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        var_isUpBool = tmp_assign_source_5;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        var_isUpBool = tmp_assign_source_6;
    }
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ae2d69aa141d3bad70feac06ca9e2a9);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ae2d69aa141d3bad70feac06ca9e2a9);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ae2d69aa141d3bad70feac06ca9e2a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ae2d69aa141d3bad70feac06ca9e2a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ae2d69aa141d3bad70feac06ca9e2a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ae2d69aa141d3bad70feac06ca9e2a9,
        type_description_1,
        var_FNULL,
        var_response,
        (int)var_isUpBool
    );


    // Release cached frame.
    if (frame_9ae2d69aa141d3bad70feac06ca9e2a9 == cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_9ae2d69aa141d3bad70feac06ca9e2a9);
    }
    cache_frame_9ae2d69aa141d3bad70feac06ca9e2a9 = NULL;

    assertFrameObject(frame_9ae2d69aa141d3bad70feac06ca9e2a9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    assert(var_isUpBool != NUITKA_BOOL_UNASSIGNED);
    tmp_return_value = (var_isUpBool == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_FNULL);
    Py_DECREF(var_FNULL);
    var_FNULL = NULL;

    CHECK_OBJECT(var_response);
    Py_DECREF(var_response);
    var_response = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_FNULL);
    var_FNULL = NULL;

    Py_XDECREF(var_response);
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_2_statePinging(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d76d7ad0b1e6735a9e45957728710447;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d76d7ad0b1e6735a9e45957728710447 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d76d7ad0b1e6735a9e45957728710447)) {
        Py_XDECREF(cache_frame_d76d7ad0b1e6735a9e45957728710447);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d76d7ad0b1e6735a9e45957728710447 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d76d7ad0b1e6735a9e45957728710447 = MAKE_FUNCTION_FRAME(codeobj_d76d7ad0b1e6735a9e45957728710447, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d76d7ad0b1e6735a9e45957728710447->m_type_description == NULL);
    frame_d76d7ad0b1e6735a9e45957728710447 = cache_frame_d76d7ad0b1e6735a9e45957728710447;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d76d7ad0b1e6735a9e45957728710447);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d76d7ad0b1e6735a9e45957728710447) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_1;
        tmp_subscript_name_1 = mod_consts[16];
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = mod_consts[18];
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[9]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_2;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_4, tmp_right_name_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[19];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[20];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[21]);
        }

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = tmp_mvar_value_3;
        tmp_right_name_4 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_4);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_4);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[22]);
        frame_d76d7ad0b1e6735a9e45957728710447->m_frame.f_lineno = 36;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d76d7ad0b1e6735a9e45957728710447);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d76d7ad0b1e6735a9e45957728710447);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d76d7ad0b1e6735a9e45957728710447, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d76d7ad0b1e6735a9e45957728710447->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d76d7ad0b1e6735a9e45957728710447, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d76d7ad0b1e6735a9e45957728710447,
        type_description_1
    );


    // Release cached frame.
    if (frame_d76d7ad0b1e6735a9e45957728710447 == cache_frame_d76d7ad0b1e6735a9e45957728710447) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_d76d7ad0b1e6735a9e45957728710447);
    }
    cache_frame_d76d7ad0b1e6735a9e45957728710447 = NULL;

    assertFrameObject(frame_d76d7ad0b1e6735a9e45957728710447);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_3_stateSuccess(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_45ec19904cfe264b04e601ff027bfb1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_45ec19904cfe264b04e601ff027bfb1e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_45ec19904cfe264b04e601ff027bfb1e)) {
        Py_XDECREF(cache_frame_45ec19904cfe264b04e601ff027bfb1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_45ec19904cfe264b04e601ff027bfb1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_45ec19904cfe264b04e601ff027bfb1e = MAKE_FUNCTION_FRAME(codeobj_45ec19904cfe264b04e601ff027bfb1e, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_45ec19904cfe264b04e601ff027bfb1e->m_type_description == NULL);
    frame_45ec19904cfe264b04e601ff027bfb1e = cache_frame_45ec19904cfe264b04e601ff027bfb1e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_45ec19904cfe264b04e601ff027bfb1e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_45ec19904cfe264b04e601ff027bfb1e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_right_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[21]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }

        tmp_left_name_1 = tmp_mvar_value_1;
        tmp_right_name_1 = mod_consts[23];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_2;
        tmp_subscript_name_1 = mod_consts[16];
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = mod_consts[24];
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[21]);
        }

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = tmp_mvar_value_3;
        tmp_right_name_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[25]);
        frame_45ec19904cfe264b04e601ff027bfb1e->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_45ec19904cfe264b04e601ff027bfb1e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_45ec19904cfe264b04e601ff027bfb1e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_45ec19904cfe264b04e601ff027bfb1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_45ec19904cfe264b04e601ff027bfb1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_45ec19904cfe264b04e601ff027bfb1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_45ec19904cfe264b04e601ff027bfb1e,
        type_description_1
    );


    // Release cached frame.
    if (frame_45ec19904cfe264b04e601ff027bfb1e == cache_frame_45ec19904cfe264b04e601ff027bfb1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_45ec19904cfe264b04e601ff027bfb1e);
    }
    cache_frame_45ec19904cfe264b04e601ff027bfb1e = NULL;

    assertFrameObject(frame_45ec19904cfe264b04e601ff027bfb1e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_4_stateFail(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d3f26640f5dca16662e8b4867eadd9f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3f26640f5dca16662e8b4867eadd9f0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_1);
    }
    if (isFrameUnusable(cache_frame_d3f26640f5dca16662e8b4867eadd9f0)) {
        Py_XDECREF(cache_frame_d3f26640f5dca16662e8b4867eadd9f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3f26640f5dca16662e8b4867eadd9f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3f26640f5dca16662e8b4867eadd9f0 = MAKE_FUNCTION_FRAME(codeobj_d3f26640f5dca16662e8b4867eadd9f0, module___main__, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d3f26640f5dca16662e8b4867eadd9f0->m_type_description == NULL);
    frame_d3f26640f5dca16662e8b4867eadd9f0 = cache_frame_d3f26640f5dca16662e8b4867eadd9f0;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d3f26640f5dca16662e8b4867eadd9f0);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d3f26640f5dca16662e8b4867eadd9f0) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_1;
        tmp_subscript_name_1 = mod_consts[16];
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[17]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = mod_consts[26];
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[21]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = tmp_mvar_value_2;
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[27]);
        frame_d3f26640f5dca16662e8b4867eadd9f0->m_frame.f_lineno = 46;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3f26640f5dca16662e8b4867eadd9f0);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3f26640f5dca16662e8b4867eadd9f0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3f26640f5dca16662e8b4867eadd9f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3f26640f5dca16662e8b4867eadd9f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3f26640f5dca16662e8b4867eadd9f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3f26640f5dca16662e8b4867eadd9f0,
        type_description_1
    );


    // Release cached frame.
    if (frame_d3f26640f5dca16662e8b4867eadd9f0 == cache_frame_d3f26640f5dca16662e8b4867eadd9f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_d3f26640f5dca16662e8b4867eadd9f0);
    }
    cache_frame_d3f26640f5dca16662e8b4867eadd9f0 = NULL;

    assertFrameObject(frame_d3f26640f5dca16662e8b4867eadd9f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl___main__$$$function_5_ping_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_window = python_pars[0];
    struct Nuitka_FrameObject *frame_6d084d480b194d151e5a79b6874ae479;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6d084d480b194d151e5a79b6874ae479 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6d084d480b194d151e5a79b6874ae479)) {
        Py_XDECREF(cache_frame_6d084d480b194d151e5a79b6874ae479);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d084d480b194d151e5a79b6874ae479 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d084d480b194d151e5a79b6874ae479 = MAKE_FUNCTION_FRAME(codeobj_6d084d480b194d151e5a79b6874ae479, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6d084d480b194d151e5a79b6874ae479->m_type_description == NULL);
    frame_6d084d480b194d151e5a79b6874ae479 = cache_frame_6d084d480b194d151e5a79b6874ae479;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6d084d480b194d151e5a79b6874ae479);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6d084d480b194d151e5a79b6874ae479) == 2); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[28]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[28]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 57;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[29]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[29]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 58;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[30], &PyTuple_GET_ITEM(mod_consts[31], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[32]);
        }

        if (unlikely(tmp_mvar_value_3 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[32]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 59;
        tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[33]);
        }

        if (unlikely(tmp_mvar_value_4 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[33]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 60;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[29]);
        }

        if (unlikely(tmp_mvar_value_5 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[29]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_5;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 61;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[30], &PyTuple_GET_ITEM(mod_consts[34], 0));

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_call_result_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[35]);
        }

        if (unlikely(tmp_mvar_value_6 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[35]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_6;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 63;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_call_result_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[29]);
        }

        if (unlikely(tmp_mvar_value_7 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[29]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_7;
        frame_6d084d480b194d151e5a79b6874ae479->m_frame.f_lineno = 64;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[30], &PyTuple_GET_ITEM(mod_consts[36], 0));

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d084d480b194d151e5a79b6874ae479);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6d084d480b194d151e5a79b6874ae479);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d084d480b194d151e5a79b6874ae479, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d084d480b194d151e5a79b6874ae479->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d084d480b194d151e5a79b6874ae479, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d084d480b194d151e5a79b6874ae479,
        type_description_1,
        par_window
    );


    // Release cached frame.
    if (frame_6d084d480b194d151e5a79b6874ae479 == cache_frame_6d084d480b194d151e5a79b6874ae479) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_6d084d480b194d151e5a79b6874ae479);
    }
    cache_frame_6d084d480b194d151e5a79b6874ae479 = NULL;

    assertFrameObject(frame_6d084d480b194d151e5a79b6874ae479);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl___main__$$$function_6_refresh_ping_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_window = python_pars[0];
    struct Nuitka_FrameObject *frame_9ea11ababce8aca795ca452aa34d8698;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ea11ababce8aca795ca452aa34d8698 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ea11ababce8aca795ca452aa34d8698)) {
        Py_XDECREF(cache_frame_9ea11ababce8aca795ca452aa34d8698);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ea11ababce8aca795ca452aa34d8698 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ea11ababce8aca795ca452aa34d8698 = MAKE_FUNCTION_FRAME(codeobj_9ea11ababce8aca795ca452aa34d8698, module___main__, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9ea11ababce8aca795ca452aa34d8698->m_type_description == NULL);
    frame_9ea11ababce8aca795ca452aa34d8698 = cache_frame_9ea11ababce8aca795ca452aa34d8698;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9ea11ababce8aca795ca452aa34d8698);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9ea11ababce8aca795ca452aa34d8698) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[28]);
        }

        if (unlikely(tmp_mvar_value_1 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[28]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_9ea11ababce8aca795ca452aa34d8698->m_frame.f_lineno = 68;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[29]);
        }

        if (unlikely(tmp_mvar_value_2 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[29]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_2;
        frame_9ea11ababce8aca795ca452aa34d8698->m_frame.f_lineno = 69;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[30], &PyTuple_GET_ITEM(mod_consts[31], 0));

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[32]);
        }

        if (unlikely(tmp_mvar_value_3 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[32]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        frame_9ea11ababce8aca795ca452aa34d8698->m_frame.f_lineno = 70;
        tmp_compexpr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_True;
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[33]);
        }

        if (unlikely(tmp_mvar_value_4 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[33]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_4;
        frame_9ea11ababce8aca795ca452aa34d8698->m_frame.f_lineno = 71;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_call_result_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[35]);
        }

        if (unlikely(tmp_mvar_value_5 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[35]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_5;
        frame_9ea11ababce8aca795ca452aa34d8698->m_frame.f_lineno = 73;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ea11ababce8aca795ca452aa34d8698);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9ea11ababce8aca795ca452aa34d8698);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ea11ababce8aca795ca452aa34d8698, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ea11ababce8aca795ca452aa34d8698->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ea11ababce8aca795ca452aa34d8698, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ea11ababce8aca795ca452aa34d8698,
        type_description_1,
        par_window
    );


    // Release cached frame.
    if (frame_9ea11ababce8aca795ca452aa34d8698 == cache_frame_9ea11ababce8aca795ca452aa34d8698) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_9ea11ababce8aca795ca452aa34d8698);
    }
    cache_frame_9ea11ababce8aca795ca452aa34d8698 = NULL;

    assertFrameObject(frame_9ea11ababce8aca795ca452aa34d8698);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_window);
    Py_DECREF(par_window);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function_1_Ping() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_1_Ping,
        mod_consts[32],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ae2d69aa141d3bad70feac06ca9e2a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_2_statePinging() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_2_statePinging,
        mod_consts[28],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d76d7ad0b1e6735a9e45957728710447,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_3_stateSuccess() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_3_stateSuccess,
        mod_consts[33],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_45ec19904cfe264b04e601ff027bfb1e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_4_stateFail() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_4_stateFail,
        mod_consts[35],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3f26640f5dca16662e8b4867eadd9f0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_5_ping_thread() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_5_ping_thread,
        mod_consts[56],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6d084d480b194d151e5a79b6874ae479,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION___main__$$$function_6_refresh_ping_thread() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function_6_refresh_ping_thread,
        mod_consts[57],
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9ea11ababce8aca795ca452aa34d8698,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );

    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable___main__[] = {
    impl___main__$$$function_1_Ping,
    impl___main__$$$function_2_statePinging,
    impl___main__$$$function_3_stateSuccess,
    impl___main__$$$function_4_stateFail,
    impl___main__$$$function_5_ping_thread,
    impl___main__$$$function_6_refresh_ping_thread,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable___main__;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable___main__) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable___main__[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module___main__,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Actual name might be different when loaded as a package.
NUITKA_MAY_BE_UNUSED static char const *module_full_name = "__main__";

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module___main__ = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module___main__;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in init__main__\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3885514e4dac4e05fbc82ccb736f5516;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    // Frame without reuse.
    frame_3885514e4dac4e05fbc82ccb736f5516 = MAKE_MODULE_FRAME(codeobj_3885514e4dac4e05fbc82ccb736f5516, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_3885514e4dac4e05fbc82ccb736f5516);
    assert(Py_REFCNT(frame_3885514e4dac4e05fbc82ccb736f5516) == 2);

    // Framed code:
    {
        PyObject *tmp_name_name_1;
        PyObject *tmp_level_name_1;
        PyObject *tmp_imported_value_1;
        tmp_name_name_1 = mod_consts[37];
        tmp_level_name_1 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_MODULE_KW(tmp_name_name_1, NULL, NULL, NULL, tmp_level_name_1);
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_1);
    }
    {
        PyObject *tmp_name_name_2;
        PyObject *tmp_level_name_2;
        PyObject *tmp_imported_value_2;
        tmp_name_name_2 = mod_consts[38];
        tmp_level_name_2 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 1;
        tmp_imported_value_2 = IMPORT_MODULE_KW(tmp_name_name_2, NULL, NULL, NULL, tmp_level_name_2);
        if (tmp_imported_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_imported_value_2);
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[40];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[44];
        tmp_globals_name_1 = (PyObject *)moduledict___main__;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_3 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[0];
        tmp_globals_name_2 = (PyObject *)moduledict___main__;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_4 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 2;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[3];
        tmp_globals_name_3 = (PyObject *)moduledict___main__;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_5 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 3;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_5);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[29];
        tmp_globals_name_4 = (PyObject *)moduledict___main__;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_6 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_6);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[46];
        tmp_globals_name_5 = (PyObject *)moduledict___main__;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_7 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[6];
        tmp_globals_name_6 = (PyObject *)moduledict___main__;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_8 = mod_consts[14];
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_10);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 8;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_1, mod_consts[47], &PyTuple_GET_ITEM(mod_consts[48], 0));

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[14];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[50];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[52];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[51]);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assign_source_15 = tmp_mvar_value_2;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_mvar_value_4;
        tmp_left_name_4 = mod_consts[18];
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[9]);
        }

        CHECK_OBJECT(tmp_mvar_value_3);
        tmp_right_name_1 = tmp_mvar_value_3;
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_4, tmp_right_name_1);
        assert(!(tmp_left_name_3 == NULL));
        tmp_right_name_2 = mod_consts[19];
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        assert(!(tmp_left_name_2 == NULL));
        tmp_right_name_3 = mod_consts[20];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        assert(!(tmp_left_name_1 == NULL));
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[21]);
        }

        CHECK_OBJECT(tmp_mvar_value_4);
        tmp_unicode_arg_1 = tmp_mvar_value_4;
        tmp_right_name_4 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_4);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION___main__$$$function_1_Ping();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION___main__$$$function_2_statePinging();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION___main__$$$function_3_stateSuccess();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION___main__$$$function_4_stateFail();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION___main__$$$function_5_ping_thread();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION___main__$$$function_6_refresh_ping_thread();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_list_element_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_list_element_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_list_element_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_args_name_3;
        PyObject *tmp_kw_name_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_13;
        PyObject *tmp_kw_name_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_mvar_value_14;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_args_name_5;
        PyObject *tmp_kw_name_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_5 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = tmp_mvar_value_5;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[58]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[55]);
        }

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[55]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_6;
        tmp_args_name_1 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kw_name_1 = PyDict_Copy(mod_consts[59]);
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 76;
        tmp_list_element_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_assign_source_23 = PyList_New(5);
        PyList_SET_ITEM(tmp_assign_source_23, 0, tmp_list_element_1);
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_7;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 77;
        tmp_list_element_3 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_2, mod_consts[60], &PyTuple_GET_ITEM(mod_consts[61], 0));

        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);

            exception_lineno = 77;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_3);
        PyList_SET_ITEM(tmp_assign_source_23, 1, tmp_list_element_1);
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_8;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[62]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = mod_consts[63];
        tmp_kw_name_2 = PyDict_Copy(mod_consts[64]);
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 78;
        tmp_list_element_4 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kw_name_2);
        if (tmp_list_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);

            exception_lineno = 78;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_4);
        PyList_SET_ITEM(tmp_assign_source_23, 2, tmp_list_element_1);
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_9;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 79;
        tmp_list_element_5 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_3, mod_consts[60], &PyTuple_GET_ITEM(mod_consts[61], 0));

        if (tmp_list_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New(1);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_5);
        PyList_SET_ITEM(tmp_assign_source_23, 3, tmp_list_element_1);
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = tmp_mvar_value_10;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[65]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_name_3 = mod_consts[66];
        tmp_kw_name_3 = PyDict_Copy(mod_consts[67]);
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 80;
        tmp_list_element_6 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kw_name_3);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = PyList_New(5);
        PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_6);
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = tmp_mvar_value_11;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 80;
        tmp_list_element_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_4, mod_consts[60], &PyTuple_GET_ITEM(mod_consts[68], 0));

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_6);
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_12;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[60]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[54]);
        }

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);
            Py_DECREF(tmp_called_name_4);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[54]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_13;
        tmp_args_name_4 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_2);
        PyTuple_SET_ITEM(tmp_args_name_4, 0, tmp_tuple_element_2);
        tmp_kw_name_4 = PyDict_Copy(mod_consts[69]);
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 80;
        tmp_list_element_6 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_4);
        Py_DECREF(tmp_kw_name_4);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_6);
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = tmp_mvar_value_14;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 80;
        tmp_list_element_6 = CALL_METHOD_WITH_ARGS1(tmp_called_instance_5, mod_consts[60], &PyTuple_GET_ITEM(mod_consts[68], 0));

        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_6);
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = tmp_mvar_value_15;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[65]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_args_name_5 = mod_consts[70];
        tmp_kw_name_5 = PyDict_Copy(mod_consts[67]);
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 80;
        tmp_list_element_6 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_kw_name_5);
        if (tmp_list_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assign_source_23);
            Py_DECREF(tmp_list_element_1);

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM(tmp_list_element_1, 4, tmp_list_element_6);
        PyList_SET_ITEM(tmp_assign_source_23, 4, tmp_list_element_1);
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_args_name_6;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_17;
        PyObject *tmp_kw_name_6;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_16 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = tmp_mvar_value_16;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[72]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[73];
        tmp_args_name_6 = PyTuple_New(2);
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_6, 0, tmp_tuple_element_3);
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[71]);
        }

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            Py_DECREF(tmp_called_name_6);
            Py_DECREF(tmp_args_name_6);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[71]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = tmp_mvar_value_17;
        Py_INCREF(tmp_tuple_element_3);
        PyTuple_SET_ITEM(tmp_args_name_6, 1, tmp_tuple_element_3);
        tmp_kw_name_6 = PyDict_Copy(mod_consts[74]);
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 83;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_name_6);
        Py_DECREF(tmp_kw_name_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_24);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_kw_name_7;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[46]);
        }

        if (unlikely(tmp_mvar_value_18 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = tmp_mvar_value_18;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[75]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[76];
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[56]);
        }

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[56]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = tmp_mvar_value_19;
        tmp_kw_name_7 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_7, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[77];
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_kw_name_7);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = tmp_mvar_value_20;
        tmp_dict_value_2 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_4);
        PyTuple_SET_ITEM(tmp_dict_value_2, 0, tmp_tuple_element_4);
        tmp_res = PyDict_SetItem(tmp_kw_name_7, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[78];
        tmp_dict_value_3 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_name_7, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 85;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_7, tmp_kw_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_kw_name_7);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 85;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[79]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_mvar_value_21;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_21 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;

            goto try_except_handler_1;
        }

        tmp_called_instance_7 = tmp_mvar_value_21;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 88;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[80]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        tmp_assign_source_25 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto try_except_handler_1;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 88;
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_27 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_27 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 88;
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 88;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_28 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_28);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_29 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_29);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[82]);
        }

        if (unlikely(tmp_mvar_value_22 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[82]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = tmp_mvar_value_22;
        tmp_compexpr_right_1 = mod_consts[84];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[46]);
        }

        if (unlikely(tmp_mvar_value_23 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_23;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 91;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[85]);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[86];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_mvar_value_24;
        PyObject *tmp_kw_name_8;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_mvar_value_25;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_26;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_call_result_3;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[46]);
        }

        if (unlikely(tmp_mvar_value_24 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[46]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = tmp_mvar_value_24;
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[75]);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = mod_consts[76];
        tmp_mvar_value_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[57]);
        }

        if (unlikely(tmp_mvar_value_25 == NULL)) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[57]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_dict_value_4 = tmp_mvar_value_25;
        tmp_kw_name_8 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kw_name_8, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[77];
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_26 == NULL)) {
            Py_DECREF(tmp_called_name_8);
            Py_DECREF(tmp_kw_name_8);
            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = tmp_mvar_value_26;
        tmp_dict_value_5 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_5);
        PyTuple_SET_ITEM(tmp_dict_value_5, 0, tmp_tuple_element_5);
        tmp_res = PyDict_SetItem(tmp_kw_name_8, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[78];
        tmp_dict_value_6 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_name_8, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 92;
        tmp_called_instance_9 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_8, tmp_kw_name_8);
        Py_DECREF(tmp_called_name_8);
        Py_DECREF(tmp_kw_name_8);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 92;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[79]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_27;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_28;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_mvar_value_29;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_mvar_value_27 == NULL)) {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[82]);
        }

        if (unlikely(tmp_mvar_value_27 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[82]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = tmp_mvar_value_27;
        tmp_compexpr_right_3 = mod_consts[87];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_mvar_value_28 == NULL)) {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[82]);
        }

        if (unlikely(tmp_mvar_value_28 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[82]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = tmp_mvar_value_28;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_mvar_value_29 == NULL)) {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[45]);
        }

        if (unlikely(tmp_mvar_value_29 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[45]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = tmp_mvar_value_29;
        tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[88]);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;

        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_mvar_value_30;
        PyObject *tmp_call_result_4;
        tmp_mvar_value_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_mvar_value_30 == NULL)) {
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[15]);
        }

        if (unlikely(tmp_mvar_value_30 == NULL)) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_10 = tmp_mvar_value_30;
        frame_3885514e4dac4e05fbc82ccb736f5516->m_frame.f_lineno = 97;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[89]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3885514e4dac4e05fbc82ccb736f5516);
#endif
    popFrameStack();

    assertFrameObject(frame_3885514e4dac4e05fbc82ccb736f5516);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3885514e4dac4e05fbc82ccb736f5516);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3885514e4dac4e05fbc82ccb736f5516, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3885514e4dac4e05fbc82ccb736f5516->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3885514e4dac4e05fbc82ccb736f5516, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module___main__;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
