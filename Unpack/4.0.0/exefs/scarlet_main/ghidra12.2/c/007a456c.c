/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a456c; name: FUN_007a456c
 */


void FUN_007a456c(long *param_1,long param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auStack_20 [16];
  
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)((long)param_1 + 0x25) = param_5;
  *param_1 = (long)(PTR_DAT_047d0b00 + 0x10);
  param_1[1] = param_2;
  *(undefined1 *)((long)param_1 + 0x26) = param_6;
  *(undefined1 *)((long)param_1 + 0x14) = 0x32;
  param_1[3] = 0x17;
  FUN_007a21cc(auStack_20,param_7,(long)param_1 + 0x27,0x10);
  return;
}


