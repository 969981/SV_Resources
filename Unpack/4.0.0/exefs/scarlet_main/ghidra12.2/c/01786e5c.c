/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01786e5c; name: FUN_01786e5c
 */


void FUN_01786e5c(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_01786f88();
  *param_1 = &DAT_04553cc0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((long)param_1 + 0x41) = param_3;
  param_1[4] = &PTR_LAB_04553d08;
  param_1[5] = &PTR_LAB_04553d28;
  param_1[6] = &PTR_LAB_04553d48;
  param_1[7] = param_2;
  memset(param_1 + 9,0,0x4028);
  param_1[0x80e] = param_2;
  param_1[0x80f] = 0x1745d1745d1745d;
  param_1[0x810] = 0;
  *(undefined4 *)(param_1 + 0x811) = 0;
  param_1[0x816] = 0x8fb823ee08fb82;
  param_1[0x812] = 0;
  param_1[0x813] = 0;
  param_1[0x814] = 0;
  param_1[0x815] = param_2;
  param_1[0x817] = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  param_1[0x819] = 0;
  param_1[0x81a] = 0;
  param_1[0x81b] = 0;
  param_1[0x81c] = param_2;
  param_1[0x81d] = 0xfffffffffffffff;
  param_1[0x81e] = 0;
  *(undefined4 *)(param_1 + 0x81f) = 0;
  param_1[0x822] = 0;
  param_1[0x821] = 0;
  param_1[0x820] = 0;
  param_1[0x823] = param_2;
  param_1[0x824] = 0xfffffffffffffff;
  param_1[0x825] = 0;
  *(undefined4 *)(param_1 + 0x826) = 0;
  param_1[0x828] = 0;
  param_1[0x829] = 0;
  param_1[0x82a] = 0;
  param_1[0x82b] = 0;
  *(undefined1 *)(param_1 + 0x838) = 0;
  param_1[0x83a] = 0;
  param_1[0x83b] = 0;
  param_1[0x83c] = 0;
  param_1[0x83d] = 0;
  param_1[0x84d] = 0;
  param_1[0x84c] = 0;
  param_1[0x84b] = 0;
  param_1[0x84a] = 0;
  return;
}


