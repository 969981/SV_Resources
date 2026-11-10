/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0121d2d0; name: FUN_0121d2d0
 */


void FUN_0121d2d0(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = (undefined1 *)0xf0e5e2f0e4c90ffc;
  pcStack_38 = "world/data/pokemon/ai/pokemon_interest_common_param/common";
  local_30 = 0x3a;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x40,&local_40);
  local_40 = (undefined1 *)0x572b703c35bb83a3;
  pcStack_38 = "world/data/pokemon/ai/pokemon_action_preset_data/pokemon_action_preset_data_array";
  local_30 = 0x51;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x1a8,&local_40);
  local_40 = (undefined1 *)0xdd5108972dcc5321;
  pcStack_38 = "world/data/pokemon/ai/pokemon_action_loop_data/pokemon_action_loop_data_array";
  local_30 = 0x4d;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x300,&local_40);
  local_40 = (undefined1 *)0x6e2fc55b431f205b;
  pcStack_38 = "world/data/pokemon/ai/pokemon_ai_nature_table/pokemon_ai_nature_table_array";
  local_30 = 0x4b;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x458,&local_40);
  local_40 = (undefined1 *)0x21b434bdc4aabe9d;
  pcStack_38 = 
  "world/data/pokemon/ai/pokemon_between_action_table/pokemon_between_action_table_array";
  local_30 = 0x55;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x5b0,&local_40);
  local_40 = (undefined1 *)0x5b4bbde8b1d4034b;
  pcStack_38 = "world/data/pokemon/ai/pokemon_nature_categorize/pokemon_nature_categorize_array";
  local_30 = 0x4f;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x708,&local_40);
  local_40 = (undefined1 *)0x46ffbf192f5702ff;
  pcStack_38 = "world/data/pokemon/ai/pokemon_species_cant_action/pokemon_species_cant_action_array"
  ;
  local_30 = 0x53;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0x860,&local_40);
  local_40 = (undefined1 *)0xe0cedcc6e62c9217;
  pcStack_38 = "world/data/pokemon/ai/pokemon_time_zone_data/time_zone_data";
  local_30 = 0x3b;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0xc68,&local_40);
  local_30 = 0x4f;
  uStack_28 = 0;
  local_40 = (undefined1 *)0x2314507def8ba7fb;
  pcStack_38 = "world/data/pokemon/wild/wild_pokemon_action_data/wild_pokemon_action_data_array";
  FUN_0121d558(param_1 + 0x9b8,&local_40);
  local_40 = &DAT_cbf29ce484222645;
  uVar1 = 0x77;
  pcVar2 = 
  "world/data/pokemon/wild/wild_pokemon_action_probability_data/wild_pokemon_action_probability_data_array"
  ;
  do {
    pcVar2 = pcVar2 + 1;
    local_40 = (undefined1 *)(((ulong)local_40 ^ uVar1) * 0x100000001b3);
    uVar1 = (ulong)(byte)*pcVar2;
  } while (*pcVar2 != 0);
  pcStack_38 = 
  "world/data/pokemon/wild/wild_pokemon_action_probability_data/wild_pokemon_action_probability_data_array"
  ;
  local_30 = 0x67;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0xb10,&local_40);
  local_40 = (undefined1 *)0xcb4cd70c5de2adfe;
  pcStack_38 = "world/data/pokemon/ai_action/define/random_time_data/random_time_data_array";
  local_30 = 0x4b;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0xdd8,&local_40);
  local_40 = (undefined1 *)0xea9cdf88fc94426;
  pcStack_38 = 
  "world/data/pokemon/common/pokemon_motion_category_data/pokemon_motion_category_data_array";
  local_30 = 0x59;
  uStack_28 = 0;
  FUN_0121d558(param_1 + 0xf30,&local_40);
  return;
}


