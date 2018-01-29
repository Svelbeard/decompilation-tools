#include <idc.idc>

static initNames(void)
{
    // Functions
    MakeName(0x004014DF, "fptc");
    MakeName(0x0040194E, "dsound_sound_load");
    MakeName(0x00401999, "dsound_sound_start");
    MakeName(0x00401A05, "dsound_sound_stop");
    MakeName(0x00401B34, "create_ddraw");
    MakeName(0x00401B57, "dd_release");
    MakeName(0x00401B6E, "video_create_ddcontext");
    MakeName(0x00401B7F, "ddraw_count_display_modes_callback");
    MakeName(0x00401B8B, "ddraw_count_display_modes");
    MakeName(0x00401BBA, "ddraw_get_display_modes_callback");
    MakeName(0x00401C49, "ddraw_get_display_modes");
    MakeName(0x004034FC, "ddraw_lock_psurface");
    MakeName(0x00403575, "ddraw_unlock_psurface");
    MakeName(0x00403718, "video_set_gdi_interface");
    MakeName(0x004041F1, "return_1");
    MakeName(0x0040447F, "create_dinput");
    MakeName(0x004045C2, "dispose_dinput");
    MakeName(0x00404642, "acquire_dinput_mouse");
    MakeName(0x004046CD, "unacquire_dinput_mouse");
    MakeName(0x004046E0, "read_input_state");
    MakeName(0x004046EA, "read_mouse_state");
    MakeName(0x0040477F, "read_keyboard_state");
    MakeName(0x00404ACD, "free_dsound");
    MakeName(0x00404B68, "audio_prepare_sound");
    MakeName(0x00404CD3, "sound_stop");
    MakeName(0x00404D4E, "has_sound_finished");
    MakeName(0x00404D7A, "audio_play_sound");
    MakeName(0x00404DD2, "dsound_set_frequency");
    MakeName(0x00404DED, "dsound_set_pan");
    MakeName(0x00404E08, "dsound_set_volume");
    MakeName(0x00404E58, "dispose_dsound");
    MakeName(0x00404E8C, "get_num_dsound_devices");
    MakeName(0x00404F29, "create_dsound_0");
    MakeName(0x004053BB, "enum_displaymodes_callback");
    MakeName(0x00405409, "create_game_window");
    MakeName(0x004054A3, "update_palette");
    MakeName(0x004056BC, "video_create");
    MakeName(0x00406386, "game_loop");
    MakeName(0x00406520, "set_window_pos_wrapper");
    MakeName(0x00406C12, "free_wrapper");
    MakeName(0x00406FBA, "enqueue_key");
    MakeName(0x00406FEC, "enqueue_input");
    MakeName(0x00407028, "get_next_key");
    MakeName(0x0040704B, "DialogFunc");
    MakeName(0x00407247, "dequeue_input");
    MakeName(0x0040726D, "ui_process_messages");
    MakeName(0x00407366, "wndproc");
    MakeName(0x004078B5, "post_quit_message");
    MakeName(0x004078BE, "get_system_time");
    MakeName(0x004078FE, "get_system_info");
    MakeName(0x00407BA3, "set_cursor_wrapper");
    MakeName(0x00407BB4, "load_cursor_wrapper");
    MakeName(0x00407BC5, "read_registry_things");
    MakeName(0x00407FCD, "get_cursor_pos_wrapper");
    MakeName(0x00407FFD, "check_mutex");
    MakeName(0x00408163, "loadingwindow_destory");
    MakeName(0x0040817B, "loadingwindow_setrange");
    MakeName(0x004081FE, "read_file_wrapper");
    MakeName(0x00408271, "write_file_wrapper");
    MakeName(0x00408297, "close_handle_wrapper");
    MakeName(0x004082AD, "create_file_for_reading");
    MakeName(0x004082CA, "create_file_for_writing");
    MakeName(0x0040830E, "find_first_file_wrapper");
    MakeName(0x0040831D, "find_next_file_wrapper");
    MakeName(0x0040832C, "find_close_wrapper");
    MakeName(0x00408337, "get_current_directory_wrapper");
    MakeName(0x0040FB38, "SEH_12A329C");
    MakeName(0x0040FB99, "SEH_12A4A1C");
    MakeName(0x0040FBD9, "SEH_12A719C");
    MakeName(0x0040FC61, "SEH_12A7E8C");
    MakeName(0x0040FC79, "SEH_12A7F2C");
    MakeName(0x00431315, "do_game_command");
    MakeName(0x00431A8A, "window_error_open");
    MakeName(0x00431E32, "toggle_pause");
    MakeName(0x004392BD, "resize_interface");
    MakeName(0x0043AF37, "top_toolbar_view_menu_dropdown");
    MakeName(0x0043BFCB, "load_or_quit_game");
    MakeName(0x0043C590, "show_tutorial");
    MakeName(0x0043C70E, "stop_tutorial");
    MakeName(0x0043C7CF, "write_tutorial_input");
    MakeName(0x0043C88C, "reset_all");
    MakeName(0x0043CD35, "window_resize_gui_scenario_editor");
    MakeName(0x0043D7DC, "show_scenario_editor");
    MakeName(0x004402F4, "update_misc_things");
    MakeName(0x004405CD, "update_misc_thing");
    MakeName(0x00440BEB, "create_black_smoke");
    MakeName(0x004412CE, "init_directories");
    MakeName(0x00441400, "startup_checks");
    MakeName(0x004414C5, "check_files_integrity");
    MakeName(0x0044154B, "check_file_paths");
    MakeName(0x0044155B, "check_file_path");
    MakeName(0x004416B5, "get_file_path");
    MakeName(0x00441A6C, "config_read");
    MakeName(0x00441BB8, "config_write");
    MakeName(0x00441C26, "save_scenario_or_game");
    MakeName(0x00442BBF, "write_cs_chunk");
    MakeName(0x004436E0, "scenario_write_checksum");
    MakeName(0x00443807, "window_levelselect_init_tabs");
    MakeName(0x0044400C, "scenario_start");
    MakeName(0x004442C4, "load_title");
    MakeName(0x0044452F, "load_scenario_index");
    MakeName(0x00444B61, "scenario_scores_save");
    MakeName(0x00444C1B, "scenario_basic_name_compare");
    MakeName(0x00444D27, "scenario_basic_name_insertion_sort_single");
    MakeName(0x00445A30, "get_tutorial_scenario_filename");
    MakeName(0x00445AB9, "window_load_game_open");
    MakeName(0x00446CF4, "editor_object_flags_free");
    MakeName(0x00446F6B, "window_prompt_ok_cancel_open");
    MakeName(0x0044733C, "load_g1");
    MakeName(0x00447485, "gfx_clear");
    MakeName(0x004474BA, "gfx_fill_rect");
    MakeName(0x00447C21, "pixel_is_present_bmp");
    MakeName(0x00448C79, "draw_image");
    MakeName(0x00448FB3, "gfx_bmp_sprite_to_buffer");
    MakeName(0x0044933B, "gfx_rle_sprite_to_buffer");
    MakeName(0x00451025, "gfx_draw_string");
    MakeName(0x00451DCB, "copy_rect");
    MakeName(0x00452001, "load_cursors");
    MakeName(0x0045235D, "init_display");
    MakeName(0x004523F4, "load_palette");
    MakeName(0x00452457, "gfx_transpose_palette");
    MakeName(0x004524C1, "update_display");
    MakeName(0x00452667, "save_screenshot");
    MakeName(0x00452A5B, "DrawLightRain");
    MakeName(0x00452AB4, "DrawHeavyRain");
    MakeName(0x00452B5F, "update_rain_animation");
    MakeName(0x00452BA4, "DrawRainAnimation");
    MakeName(0x00452BED, "DrawRainWindow");
    MakeName(0x00452D1A, "redraw_peep_and_rain");
    MakeName(0x00452DA4, "gfx_draw_line");
    MakeName(0x0045308A, "gfx_draw_line_on_buffer");
    MakeName(0x004530F8, "set_vehicle_type_image_max_sizes");
    MakeName(0x0045A0E7, "viewport_render");
    MakeName(0x0045A1A4, "viewport_paint");
    MakeName(0x0045E779, "paint_attach_to_previous_ps");
    MakeName(0x0045E7B5, "paint_arrange_structs");
    MakeName(0x0045F1A7, "screen_get_map_xy");
    MakeName(0x0045FD8E, "screen_pos_to_map_pos");
    MakeName(0x0045FE05, "screen_get_map_xy_quadrant_with_z");
    MakeName(0x0045FE4C, "screen_get_map_xy_side");
    MakeName(0x004610F2, "invalidate_map_selection_rect");
    MakeName(0x0046112C, "invalidate_map_selection_tiles");
    MakeName(0x004612A6, "map_animation_create");
    MakeName(0x004612EC, "invalidate_animated_map_areas");
    MakeName(0x00461348, "map_update_tile_pointers");
    MakeName(0x00461393, "map_check_free_elements_and_reorganise");
    MakeName(0x0046148F, "reorganise_map_elements");
    MakeName(0x004616D6, "insert_map_element");
    MakeName(0x00462893, "vehicle_check_collision");
    MakeName(0x00467297, "map_element_height");
    MakeName(0x00468FD3, "show_gridlines");
    MakeName(0x00468FFE, "hide_gridlines");
    MakeName(0x0046A794, "game_loop_iteration");
    MakeName(0x0046AD7D, "load_title_screen");
    MakeName(0x0046AE0C, "intro_update");
    MakeName(0x0046B5C0, "window_map_center_on_view_point");
    MakeName(0x0046FC83, "sprite_set_position");
    MakeName(0x0046FDFD, "reset_things");
    MakeName(0x0046FED5, "sprite_clear_all_unused");
    MakeName(0x004700A5, "create_thing");
    MakeName(0x0047019F, "move_sprite_to_list");
    MakeName(0x00470F3C, "load_object_index");
    MakeName(0x0047176D, "get_scenario_text_from_object");
    MakeName(0x00471B95, "free_scenario_text_from_object");
    MakeName(0x00471FF8, "unload_object");
    MakeName(0x00472031, "unload_all_objects");
    MakeName(0x00472172, "object_get_localised_text");
    MakeName(0x0047237D, "reset_loaded_objects");
    MakeName(0x004723F1, "scenario_write_available_items");
    MakeName(0x0047247E, "read_and_load_objects");
    MakeName(0x00472633, "scenario_write_packed_objects");
    MakeName(0x00472687, "object_load_packed");
    MakeName(0x00472C84, "reset_selected_object_count_and_size");
    MakeName(0x00472CFD, "window_editor_object_selection_select_required_objects");
    MakeName(0x00473B91, "editor_object_flags_free_0");
    MakeName(0x00473BC7, "object_create_identifier_name");
    MakeName(0x00473D1D, "window_editor_object_selection_select_object");
    MakeName(0x00474821, "unload_unselected_objects");
    MakeName(0x00474874, "editor_load_selected_objects");
    MakeName(0x004775A5, "remove_road");
    MakeName(0x004899E4, "init_audio");
    MakeName(0x00489BA1, "audio_close");
    MakeName(0x00489C34, "audio_pause_sounds");
    MakeName(0x00489C58, "unpause_sounds");
    MakeName(0x00489CB5, "audio_play_sound_panned");
    MakeName(0x0048AC2B, "stop_title_music");
    MakeName(0x0048AC66, "play_title_screen_music");
    MakeName(0x0048EF02, "window_station_2_draw_rating_bar");
    MakeName(0x0048F210, "open_station_window");
    MakeName(0x0048F29F, "window_station_create");
    MakeName(0x00492793, "update_station_cargo");
    MakeName(0x00494B3F, "draw_string_494B3F");
    MakeName(0x00494BBF, "draw_string_494BBF");
    MakeName(0x00494C78, "draw_string_494C78");
    MakeName(0x00494CB2, "draw_string_underline");
    MakeName(0x00494D78, "draw_string_left_underline");
    MakeName(0x00494DE8, "draw_string_centred");
    MakeName(0x00494E33, "draw_string_centred_raw");
    MakeName(0x00494ECF, "gfx_draw_string_centred_wrapped");
    MakeName(0x00495224, "gfx_draw_string_left_wrapped");
    MakeName(0x00495301, "gfx_wrap_string");
    MakeName(0x00495685, "gfx_get_string_width");
    MakeName(0x00495715, "gfx_get_string_width_new_lined");
    MakeName(0x004958C6, "format_string");
    MakeName(0x0049598C, "formatSprite");
    MakeName(0x004959F3, "formatDistance");
    MakeName(0x00495A2F, "formatHeight");
    MakeName(0x00495A89, "formatPower");
    MakeName(0x00495AC5, "formatTimeHM");
    MakeName(0x00495B0F, "formatTimeMS");
    MakeName(0x00495BC9, "formatVelocity");
    MakeName(0x00495C05, "formatStringId");
    MakeName(0x00495C2E, "formatStringId2");
    MakeName(0x00495C40, "format");
    MakeName(0x00495C55, "formatPop16");
    MakeName(0x00495C5D, "formatPush16");
    MakeName(0x00495C65, "calc_date");
    MakeName(0x00495CB5, "formatDayMonthFull");
    MakeName(0x00495CE0, "formatDayMonthAbbrev");
    MakeName(0x00495D09, "formatDayMonthYearFull");
    MakeName(0x00495D41, "formatDayMonthYearAbbrev");
    MakeName(0x00495D77, "formatMonthYearFull");
    MakeName(0x00495DA0, "formatMonthYearAbbrev");
    MakeName(0x00495DC7, "formatMonthYearAbbrev_0");
    MakeName(0x00495DF4, "formatMonthFull");
    MakeName(0x00495E10, "formatMonthAbbrev");
    MakeName(0x00495E2A, "format_int");
    MakeName(0x00495F35, "format_comma");
    MakeName(0x00496052, "formatNumeric_2");
    MakeName(0x004962F1, "format_comma2dp32");
    MakeName(0x004963FC, "formatNumeric_4");
    MakeName(0x0049650E, "emptyUserStrings");
    MakeName(0x00496522, "user_string_allocate");
    MakeName(0x004965A6, "getUserString");
    MakeName(0x0049678D, "getStringWidth_maybe");
    MakeName(0x004968C7, "date_tick");
    MakeName(0x004969DA, "get_local_time");
    MakeName(0x00498EAF, "window_town_prepare_0");
    MakeName(0x00499B7E, "window_town_open");
    MakeName(0x0049C7F2, "build_track");
    MakeName(0x004A0A18, "viewport_set_visibility");
    MakeName(0x004A0AB0, "window_close_construction_windows");
    MakeName(0x004A8826, "update_vehicles");
    MakeName(0x004B5088, "track_design_save_reset_scenery");
    MakeName(0x004B6033, "window_vehicle_create");
    MakeName(0x004B671C, "get_vehicle_status_format");
    MakeName(0x004B8405, "paint_small_scenery_entry");
    MakeName(0x004BE3F3, "reset_keyboard_shortcuts");
    MakeName(0x004BE621, "exit_with_error");
    MakeName(0x004BE92A, "process_keyboard_input");
    MakeName(0x004BEC5B, "process_keyboard_input_2");
    MakeName(0x004BF12C, "rotate_view");
    MakeName(0x004BF18A, "shortcut_underground_view_toggle");
    MakeName(0x004BF194, "shortcut_remove_base_land_toggle");
    MakeName(0x004BF19E, "shortcut_remove_vertical_land_toggle");
    MakeName(0x004BF1A8, "shortcut_see_through_rides_toggle");
    MakeName(0x004BF1BC, "shortcut_invisible_supports_toggle");
    MakeName(0x004BF1FC, "show_plant_trees");
    MakeName(0x004BF33E, "show_map_window");
    MakeName(0x004BF3AB, "take_screenshot");
    MakeName(0x004BF3B3, "toggle_last_announcement");
    MakeName(0x004BF3DC, "send_chat");
    MakeName(0x004C57C0, "viewport_init_all");
    MakeName(0x004C58C7, "gfx_fill_rect_inset");
    MakeName(0x004C5C69, "gfx_set_dirty_blocks");
    MakeName(0x004C5CFA, "gfx_draw_dirty_blocks");
    MakeName(0x004C5DD5, "gfx_redraw_screen_rect");
    MakeName(0x004C5EA9, "window_draw");
    MakeName(0x004C6118, "window_update_all");
    MakeName(0x004C6E65, "update_cursor_position");
    MakeName(0x004C6EE6, "game_get_next_input");
    MakeName(0x004C7174, "window_process_mouse_input");
    MakeName(0x004C877D, "window_drag_start");
    MakeName(0x004C8B85, "input_state_normal_left_down_scroll_vbottom");
    MakeName(0x004C8CFD, "input_scroll_drag_continue");
    MakeName(0x004C8EF0, "widget_scroll_get_part");
    MakeName(0x004C906B, "window_tooltip_open");
    MakeName(0x004C9513, "window_find_widget_from_point");
    MakeName(0x004C96E7, "handle_input");
    MakeName(0x004C9984, "invalidate_all_windows_after_input");
    MakeName(0x004C99B9, "window_invalidate_pressed_image_buttons");
    MakeName(0x004C9A95, "window_find_from_point");
    MakeName(0x004C9AFA, "widget_find_from_point");
    MakeName(0x004C9B56, "find_window");
    MakeName(0x004C9F5D, "window_create");
    MakeName(0x004CA115, "update_scroll_widgets");
    MakeName(0x004CA17F, "window_init_scroll_widgets");
    MakeName(0x004CA1ED, "widget_scroll_update_thumbs");
    MakeName(0x004CA4BD, "window_invalidate");
    MakeName(0x004CA4DF, "window_draw_widgets");
    MakeName(0x004CB966, "window_invalidate_by_id");
    MakeName(0x004CBA2D, "station_invalidate");
    MakeName(0x004CBE5F, "map_invalidate_tile_full");
    MakeName(0x004CC692, "window_close_by_id");
    MakeName(0x004CC750, "window_bring_to_front");
    MakeName(0x004CC7CB, "window_set_disabled_widgets_and_invalidate");
    MakeName(0x004CC807, "show_text_dropdown_custom_width");
    MakeName(0x004CCA6D, "show_text_dropdown");
    MakeName(0x004CCC7C, "show_text_dropdown_2");
    MakeName(0x004CCDE7, "show_image_dropdown");
    MakeName(0x004CCF8C, "show_colour_dropdown");
    MakeName(0x004CD3A9, "window_bring_to_front_by_id");
    MakeName(0x004CD406, "gfx_invalidate_screen");
    MakeName(0x004CD47A, "process_mouse_over");
    MakeName(0x004CD658, "viewport_interaction_get_item_left");
    MakeName(0x004CDB2B, "viewport_interaction_get_item");
    MakeName(0x004CE3D6, "tool_cancel");
    MakeName(0x004CE438, "window_get_main");
    MakeName(0x004CE523, "open_textinput");
    MakeName(0x004CE6F2, "textinput_cancel");
    MakeName(0x004CEC25, "viewport_update_pointers");
    MakeName(0x004CEC50, "clip_drawpixelinfo");
    MakeName(0x004CF142, "set_cursor_to_1");
    MakeName(0x004CF167, "set_cursor");
    MakeName(0x004CF5C5, "progressbar_begin");
    MakeName(0x004CF60B, "progressbar_end");
    MakeName(0x004CF621, "progressbar_increment");
    MakeName(0x004D2D3F, "__cropzeros");
    MakeName(0x004D2D8D, "__positive");
    // Data
    MakeName(0x0040FB79, "SEH_12A405C");
    MakeName(0x004D1090, "LeadUp1");
    MakeName(0x004D10BC, "LeadUp2");
    MakeName(0x004D1178, "TrailUp0");
    MakeName(0x004D46EC, "LeadUp2_0");
    MakeName(0x004D47A8, "TrailUp0_0");
    MakeName(0x004D728C, "wsprintfA");
    MakeName(0x004D72EC, "lpClassName");
    MakeName(0x004FAE28, "file_paths");
    MakeName(0x004FD2E8, "map_animation_event_handlers");
    MakeName(0x004FE0B8, "entry_pointers");
    MakeName(0x004FE0BC, "entry_pointers_p4");
    MakeName(0x004FE1C8, "paint_entry_table");
    MakeName(0x004FE250, "object_entry_group_counts");
    MakeName(0x004FE3A6, "window_editor_object_selection_default_objects_flags");
    MakeName(0x004FEF98, "month_table");
    MakeName(0x00503DD0, "keyboard_shortcut_actions");
    MakeName(0x005046FA, "appropriate_image_dropdown_items_per_row");
    MakeName(0x00504C78, "SrcStr");
    MakeName(0x005060D0, "Data");
    MakeName(0x00508F08, "game_command_nest_level");
    MakeName(0x00508F12, "screen_age");
    MakeName(0x00508F14, "screen_flags");
    MakeName(0x00508F16, "screenshot_countdown");
    MakeName(0x00508F17, "is_paused");
    MakeName(0x00508F18, "place_object_modifier");
    MakeName(0x00508F19, "on_tutorial");
    MakeName(0x00508F1A, "game_speed");
    MakeName(0x0050AE8C, "scenario_list");
    MakeName(0x0050AEA0, "num_scenarios");
    MakeName(0x0050AEB4, "config_data_start");
    MakeName(0x0050AEB8, "saved_resolution_width");
    MakeName(0x0050AEBA, "saved_resolution_height");
    MakeName(0x0050AEDE, "keyboard_shortcuts");
    MakeName(0x0050B0CE, "path_install");
    MakeName(0x0050B1CF, "path_1p_saves");
    MakeName(0x0050B2EC, "path_2p_saves");
    MakeName(0x0050B406, "path_scenarios");
    MakeName(0x0050B518, "path_landscapes");
    MakeName(0x0050B635, "path_objects");
    MakeName(0x0050B85C, "g1_buffer");
    MakeName(0x0050B884, "screen_dpi");
    MakeName(0x0050B888, "screen_dpi_left");
    MakeName(0x0050B88A, "screen_dpi_top");
    MakeName(0x0050B88C, "screen_dpi_width");
    MakeName(0x0050B88E, "screen_dpi_height");
    MakeName(0x0050B890, "screen_dpi_pitch");
    MakeName(0x0050B894, "ui_width");
    MakeName(0x0050B896, "ui_height");
    MakeName(0x0050B8A0, "dirty_blocks_width");
    MakeName(0x0050B8A2, "dirty_blocks_height");
    MakeName(0x0050B8A4, "dirty_blocks_width_2");
    MakeName(0x0050B8A8, "dirty_blocks_height_2");
    MakeName(0x0050B8AC, "dirty_blocks_columns");
    MakeName(0x0050B8AD, "dirty_blocks_rows");
    MakeName(0x0050B8AE, "dirty_blocks_initialised");
    MakeName(0x0050BC60, "draw_rain_function");
    MakeName(0x0050C194, "game_initialized");
    MakeName(0x0050C195, "intro_state");
    MakeName(0x0050C19C, "ticks_since_last_update");
    MakeName(0x0050C19E, "last_tick_count");
    MakeName(0x0050C1A6, "game_loop_iteration_esp");
    MakeName(0x0050D13C, "installed_object_list");
    MakeName(0x0050D154, "total_num_images");
    MakeName(0x0050D1E8, "current_sound_device");
    MakeName(0x0050D5B4, "playing_title_music");
    MakeName(0x005183FC, "strings");
    MakeName(0x005230C8, "map_elements");
    MakeName(0x00523338, "cursor_x_2");
    MakeName(0x0052333C, "cursor_y_2");
    MakeName(0x00523368, "input_flags");
    MakeName(0x0052336D, "input_state");
    MakeName(0x0052336F, "cursor_down_windowclass");
    MakeName(0x00523370, "cursor_down_windownumber");
    MakeName(0x00523372, "cursor_down_widget_index");
    MakeName(0x00523378, "cursor_drag_last_x");
    MakeName(0x0052337A, "cursor_drag_last_y");
    MakeName(0x0052337C, "cursor_drag_windownumber");
    MakeName(0x0052337E, "cursor_drag_windowclass");
    MakeName(0x0052338C, "tooltip_not_shown_ticks");
    MakeName(0x00523390, "tool_window_number");
    MakeName(0x00523392, "tool_window_class");
    MakeName(0x00523393, "current_tool");
    MakeName(0x00523394, "tool_widget_index");
    MakeName(0x005233A4, "last_scroll_cursor_x");
    MakeName(0x005233A6, "last_scroll_cursor_y");
    MakeName(0x005233B6, "modal_window_type");
    MakeName(0x005233B8, "window_dpi_dst_ptr");
    MakeName(0x005233BC, "window_dpi_left");
    MakeName(0x005233BE, "window_dpi_top");
    MakeName(0x005233C0, "window_dpi_width");
    MakeName(0x005233C2, "window_dpi_height");
    MakeName(0x005233C4, "window_dpi_pitch");
    MakeName(0x00523814, "cchMultiByte");
    MakeName(0x00524120, "uTimerID");
    MakeName(0x0052412C, "Target");
    MakeName(0x00524144, "ddraw_psurface");
    MakeName(0x00524168, "ddraw_num_display_modes");
    MakeName(0x005251DC, "dinput");
    MakeName(0x005251E0, "dinput_device_mouse");
    MakeName(0x005251E4, "dinput_device_keyboard");
    MakeName(0x005251F0, "num_dsound_devices");
    MakeName(0x005251F4, "dsound_devices");
    MakeName(0x0052524C, "video_interface_update_palette");
    MakeName(0x00525314, "ppv");
    MakeName(0x00525320, "hWnd");
    MakeName(0x00525330, "cursor_wheel");
    MakeName(0x00525380, "key_queue_write_index");
    MakeName(0x00525384, "key_queue_read_index");
    MakeName(0x00525394, "input_queue_index");
    MakeName(0x00525E18, "srand_0");
    MakeName(0x00525E1C, "srand_1");
    MakeName(0x00525E2C, "current_day");
    MakeName(0x00525E30, "day_counter");
    MakeName(0x00525E32, "current_year");
    MakeName(0x00525E34, "current_month");
    MakeName(0x00525E35, "current_day_of_month");
    MakeName(0x00525E36, "saved_view_x");
    MakeName(0x00525E38, "saved_view_y");
    MakeName(0x00525E3A, "saved_view_zoom_and_rotation");
    MakeName(0x00525E3E, "sprites_next_index");
    MakeName(0x00525E40, "things_head_null");
    MakeName(0x00525E42, "things_head_vehicle");
    MakeName(0x00525E46, "things_head_misc");
    MakeName(0x00525F5E, "scenario_ticks");
    MakeName(0x00525F64, "scenario_ticks");
    MakeName(0x00525F6C, "map_animations_count");
    MakeName(0x00531780, "current_rain_level");
    MakeName(0x005B825C, "towns");
    MakeName(0x005E6EDC, "stations");
    MakeName(0x006DB6DC, "things");
    MakeName(0x0094C6DC, "map_animations");
    MakeName(0x009C68E0, "game_command_map_x");
    MakeName(0x009C68E2, "game_command_map_y");
    MakeName(0x009C68E4, "game_command_map_z");
    MakeName(0x009C68E6, "game_command_error_reason_stringid");
    MakeName(0x009CCA34, "scenario_header_chunk");
    MakeName(0x009D118E, "path_buffer");
    MakeName(0x009D1C9C, "save_scenario_or_game_flags");
    MakeName(0x009D1CBC, "common_hfile");
    MakeName(0x009D9D4D, "write_chunk_encoding_type");
    MakeName(0x009D9D52, "decoded_chunk_size");
    MakeName(0x009D9D63, "prompt_browse_type");
    MakeName(0x009D9D64, "prompt_browse_title");
    MakeName(0x009D9E64, "prompt_browse_filter");
    MakeName(0x009D9E84, "prompt_browse_directory");
    MakeName(0x00E025C4, "dirty_blocks");
    MakeName(0x00E04320, "screenshot_buffer");
    MakeName(0x00E04328, "screenshot_hfile");
    MakeName(0x00E0C408, "paint_entry_2");
    MakeName(0x00E0C40C, "paint_entry");
    MakeName(0x00E3F0B8, "current_rotation");
    MakeName(0x00E400C0, "_paintQuadrantBackIndex");
    MakeName(0x00E400C4, "_paintQuadrantFrontIndex");
    MakeName(0x00E400C8, "g_saved_ps_cur");
    MakeName(0x00E400CC, "g_saved_ps_cur3");
    MakeName(0x00E40134, "tile_map_element_pointers");
    MakeName(0x00F24484, "map_selection_flags");
    MakeName(0x00F24486, "map_selection_a_x");
    MakeName(0x00F24488, "map_selection_b_x");
    MakeName(0x00F2448A, "map_selection_a_y");
    MakeName(0x00F2448C, "map_selection_b_y");
    MakeName(0x00F24490, "map_selected_tiles");
    MakeName(0x00F2533F, "gridlines_state");
    MakeName(0x00F253A2, "num_logic_updates");
    MakeName(0x0112A110, "installed_object_list_count");
    MakeName(0x0112A128, "loaded_object_entry");
    MakeName(0x0112C810, "current_day_in_olympiad");
    MakeName(0x0112C824, "current_font_flags");
    MakeName(0x0112C826, "common_format_args");
    MakeName(0x0112C876, "current_font_sprite_base");
    MakeName(0x0112C884, "font_character_widths");
    MakeName(0x0112CC04, "buffer_string_format");
    MakeName(0x0112D408, "character_bitmap_array");
    MakeName(0x011369A0, "textinput_buffer");
    MakeName(0x01136F94, "window_dropdown_onpaint_cell_x");
    MakeName(0x01136F96, "window_dropdown_onpaint_cell_y");
    MakeName(0x011370AC, "window_list");
    MakeName(0x0113D754, "new_window_pointer");
    MakeName(0x0113D820, "new_viewport_pointer");
    MakeName(0x0113D84C, "dropdown_num_items");
    MakeName(0x0113D84E, "dropdown_highlighted_index");
    MakeName(0x0113D850, "dropdown_items_format");
    MakeName(0x0113D8A0, "dropdown_items_args");
    MakeName(0x0113DC60, "dropdown_items_disabled");
    MakeName(0x0113DC64, "dropdown_checked");
    MakeName(0x0113DC68, "dropdown_item_height");
    MakeName(0x0113DC6C, "dropdown_item_width");
    MakeName(0x0113DC70, "dropdown_num_columns");
    MakeName(0x0113DC74, "dropdown_num_rows");
    MakeName(0x0113DE00, "cursor_pointer");
    MakeName(0x0113DF34, "Locale");
    MakeName(0x0113DF44, "CodePage");
    MakeName(0x0113DF54, "Filename");
    MakeName(0x0113E0AC, "lpString");
    MakeName(0x0113E0B0, "os_time_month");
    MakeName(0x0113E0B4, "hinst");
    MakeName(0x0113E0B8, "min_window_height");
    MakeName(0x0113E1E0, "os_time_dayofweek");
    MakeName(0x0113E228, "Buffer");
    MakeName(0x0113E300, "key_queue");
    MakeName(0x0113E724, "min_window_width");
    MakeName(0x0113E72C, "cursor_x");
    MakeName(0x0113E730, "cursor_y");
    MakeName(0x0113E844, "screen_height");
    MakeName(0x0113E87C, "exception_code_os");
    MakeName(0x0113E8C0, "WindowName");
    MakeName(0x0113E9C4, "os_time_day");
    MakeName(0x0113E9D4, "queue_cursor_x");
    MakeName(0x0113E9D8, "queue_cursor_y");
    MakeName(0x0113E9DC, "os_time_year");
    MakeName(0x0113ECE0, "screen_width");
    MakeName(0x0113ED00, "nPriority");
    MakeName(0x0113F128, "dwPriorityClass");
    MakeName(0x0113FFE8, "current_dddisplaymode_index");
    MakeName(0x01140020, "dddisplaymodes_width");
    MakeName(0x01140022, "dddisplaymodes_height");
    MakeName(0x01140024, "dddisplaymodes_depth");
    MakeName(0x01140624, "X");
    MakeName(0x01140628, "Y");
    MakeName(0x01140740, "keyboard_state");
    MakeName(0x01140840, "mouse_state_rely");
    MakeName(0x0114084C, "mouse_state_relx");
    MakeName(0x011427E0, "uNumber");
    MakeName(0x011427F8, "lpMem");
    MakeName(0x011427FC, "hHeap");
}
