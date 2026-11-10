/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f78c70; name: FUN_01f78c70
 */


void FUN_01f78c70(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_047cfd80 + 0x10);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  FUN_01cfa5b0(param_1 + 2,param_2 + 0x10);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  FUN_01cfa5b0(param_1 + 7,param_2 + 0x38);
  FUN_01cfa5b0(param_1 + 0xb,param_2 + 0x58);
  FUN_01cfa5b0(param_1 + 0xf,param_2 + 0x78);
  FUN_01cfa5b0(param_1 + 0x13,param_2 + 0x98);
  FUN_01cfa5b0(param_1 + 0x17,param_2 + 0xb8);
  FUN_01cfa5b0(param_1 + 0x1b,param_2 + 0xd8);
  FUN_01cfa5b0(param_1 + 0x1f,param_2 + 0xf8);
  FUN_01cfa5b0(param_1 + 0x23,param_2 + 0x118);
  FUN_01cfa5b0(param_1 + 0x27,param_2 + 0x138);
  param_1[0x2b] = (long)(PTR_DAT_047cfd88 + 0x10);
  param_1[0x2c] = *(long *)(param_2 + 0x160);
  return;
}


