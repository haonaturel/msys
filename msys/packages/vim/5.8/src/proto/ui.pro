/* ui.c */
void ui_write __ARGS((char_u *s, int len));
void ui_inchar_undo __ARGS((char_u *s, int len));
int ui_inchar __ARGS((char_u *buf, int maxlen, long wtime));
int ui_char_avail __ARGS((void));
void ui_delay __ARGS((long msec, int ignoreinput));
void ui_suspend __ARGS((void));
void suspend_shell __ARGS((void));
int ui_get_winsize __ARGS((void));
void ui_set_winsize __ARGS((void));
void ui_breakcheck __ARGS((void));
void clip_init __ARGS((int can_use));
void clip_update_selection __ARGS((void));
void clip_own_selection __ARGS((void));
void clip_lose_selection __ARGS((void));
void clip_copy_selection __ARGS((void));
void clip_auto_select __ARGS((void));
int clip_isautosel __ARGS((void));
void clip_start_selection __ARGS((int button, int x, int y, int repeated_click, int_u modifiers));
void clip_process_selection __ARGS((int button, int x, int y, int repeated_click, int_u modifiers));
void clip_may_redraw_selection __ARGS((int row, int col, int len));
void clip_clear_selection __ARGS((void));
void clip_may_clear_selection __ARGS((int row1, int row2));
void clip_scroll_selection __ARGS((int rows));
int clip_gen_own_selection __ARGS((void));
void clip_gen_lose_selection __ARGS((void));
void clip_gen_set_selection __ARGS((void));
void clip_gen_request_selection __ARGS((void));
int vim_is_input_buf_full __ARGS((void));
int vim_is_input_buf_empty __ARGS((void));
int vim_free_in_input_buf __ARGS((void));
int vim_used_in_input_buf __ARGS((void));
void add_to_input_buf __ARGS((char_u *s, int len));
void push_raw_key __ARGS((char_u *s, int len));
void trash_input_buf __ARGS((void));
int read_from_input_buf __ARGS((char_u *buf, long maxlen));
void fill_input_buf __ARGS((int exit_on_error));
void read_error_exit __ARGS((void));
void ui_cursor_shape __ARGS((void));
int check_col __ARGS((int col));
int check_row __ARGS((int row));
void open_app_context __ARGS((void));
void x11_setup_atoms __ARGS((Display *dpy));
void clip_x11_request_selection __ARGS((Widget myShell, Display *dpy));
void clip_x11_lose_selection __ARGS((Widget myShell));
int clip_x11_own_selection __ARGS((Widget myShell));
void clip_x11_set_selection __ARGS((void));
