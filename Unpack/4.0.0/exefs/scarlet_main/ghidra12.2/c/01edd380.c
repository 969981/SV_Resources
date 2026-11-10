/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01edd380; name: FUN_01edd380
 */


void FUN_01edd380(long param_1)

{
  short local_8 [2];
  short local_4 [2];
  
  local_4[0] = *(short *)(param_1 + 0x18);
  local_8[0] = *(short *)(param_1 + 0x1a);
  if ((local_4[0] != 0 && local_8[0] != 0) && (DAT_04839d80 != (code *)0x0)) {
    (*DAT_04839d80)(&DAT_04839da0,local_4,local_8);
  }
  local_4[0] = *(short *)(param_1 + 0x1c);
  if (((local_4[0] != 0) && (local_8[0] = *(short *)(param_1 + 0x1e), local_8[0] != 0)) &&
     (DAT_04839d80 != (code *)0x0)) {
    (*DAT_04839d80)(&DAT_04839da0,local_4,local_8);
  }
  local_4[0] = *(short *)(param_1 + 0x20);
  if (((local_4[0] != 0) && (local_8[0] = *(short *)(param_1 + 0x22), local_8[0] != 0)) &&
     (DAT_04839d80 != (code *)0x0)) {
    (*DAT_04839d80)(&DAT_04839da0,local_4,local_8);
  }
  local_4[0] = *(short *)(param_1 + 0x24);
  if (((local_4[0] != 0) && (local_8[0] = *(short *)(param_1 + 0x26), local_8[0] != 0)) &&
     (DAT_04839d80 != (code *)0x0)) {
    (*DAT_04839d80)(&DAT_04839da0,local_4,local_8);
  }
  local_4[0] = *(short *)(param_1 + 0x28);
  if (((local_4[0] != 0) && (local_8[0] = *(short *)(param_1 + 0x2a), local_8[0] != 0)) &&
     (DAT_04839d80 != (code *)0x0)) {
    (*DAT_04839d80)(&DAT_04839da0,local_4,local_8);
  }
  local_4[0] = *(short *)(param_1 + 0x2c);
  if (((local_4[0] != 0) && (local_8[0] = *(short *)(param_1 + 0x2e), local_8[0] != 0)) &&
     (DAT_04839d80 != (code *)0x0)) {
    (*DAT_04839d80)(&DAT_04839da0,local_4,local_8);
  }
  return;
}


