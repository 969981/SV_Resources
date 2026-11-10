/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d15338; name: FUN_01d15338
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d15338(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047cfd80 + 0x10);
  *(undefined4 *)(param_1 + 1) = _DAT_00000009;
  FUN_01cfa5b0(param_1 + 2,0x11);
  *(undefined4 *)(param_1 + 6) = _DAT_00000031;
  FUN_01cfa5b0(param_1 + 7,0x39);
  FUN_01cfa5b0(param_1 + 0xb,0x59);
  FUN_01cfa5b0(param_1 + 0xf,0x79);
  FUN_01cfa5b0(param_1 + 0x13,0x99);
  FUN_01cfa5b0(param_1 + 0x17,0xb9);
  FUN_01cfa5b0(param_1 + 0x1b,0xd9);
  FUN_01cfa5b0(param_1 + 0x1f,0xf9);
  FUN_01cfa5b0(param_1 + 0x23,0x119);
  FUN_01cfa5b0(param_1 + 0x27,0x139);
  lVar1 = _DAT_00000161;
  param_1[0x2b] = (long)(PTR_DAT_047cfd88 + 0x10);
  param_1[0x2c] = lVar1;
  return;
}


