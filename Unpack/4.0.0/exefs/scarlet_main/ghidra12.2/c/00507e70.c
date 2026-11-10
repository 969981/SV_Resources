/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00507e70; name: FUN_00507e70
 */


undefined8 FUN_00507e70(undefined8 param_1,long param_2,long *param_3)

{
  char *local_158;
  undefined8 uStack_150;
  undefined1 *local_128;
  long local_120;
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined8 uStack_f0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined1 *local_98;
  long local_90;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 uStack_60;
  byte local_38 [16];
  undefined8 local_28;
  
  if (param_2 < 0x80000000) {
    return 1;
  }
  local_68 = "Input size too large: ";
  uStack_60 = 0x16;
  local_98 = auStack_88;
  local_90 = FUN_00533530(param_2,auStack_88);
  local_90 = local_90 - (long)auStack_88;
  local_c8 = " bytes";
  uStack_c0 = 6;
  local_f8 = &DAT_03c262df;
  uStack_f0 = 3;
  local_128 = auStack_118;
  local_120 = FUN_00533400(0x7fffffff,auStack_118);
  local_120 = local_120 - (long)auStack_118;
  local_158 = " bytes.";
  uStack_150 = 7;
  FUN_00534080(local_38,&local_68,&local_98,&local_c8,&local_f8,&local_128,&local_158);
                    /* try { // try from 00507f34 to 00507f47 has its CatchHandler @ 00507f88 */
  (**(code **)(*param_3 + 0x10))(param_3,0xffffffff,0,local_38);
  if ((local_38[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_28);
  }
  return 0;
}


