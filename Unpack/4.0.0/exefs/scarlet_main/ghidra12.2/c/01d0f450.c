/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d0f450; name: FUN_01d0f450
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d0f450(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047cfbb0 + 0x10);
  FUN_01cfa5b0(param_1 + 1,9);
  FUN_01cfa5b0(param_1 + 5,0x29);
  param_1[9] = _DAT_00000049;
  FUN_01d01dc4(param_1 + 10,0x51);
  FUN_01d01dc4(param_1 + 0xe,0x71);
  lVar1 = _DAT_00000091;
  *(undefined1 *)(param_1 + 0x13) = DAT_00000099;
  param_1[0x12] = lVar1;
  FUN_01d01e08(param_1 + 0x14,0xa1);
  FUN_01d01e70(param_1 + 0x18,0xc1);
  FUN_01cfa5b0(param_1 + 0x1c,0xe1);
  FUN_01cfa5b0(param_1 + 0x20,0x101);
  lVar1 = _DAT_00000121;
  *(undefined4 *)(param_1 + 0x25) = _DAT_00000129;
  param_1[0x24] = lVar1;
  FUN_01cfa5b0(param_1 + 0x26,0x131);
  *(undefined4 *)(param_1 + 0x2a) = _DAT_00000151;
  FUN_01d01e08(param_1 + 0x2b,0x159);
  lVar2 = _DAT_00000181;
  lVar1 = _DAT_00000179;
  *(undefined1 *)(param_1 + 0x31) = DAT_00000189;
  param_1[0x2f] = lVar1;
  param_1[0x30] = lVar2;
  FUN_01d01ed8(param_1 + 0x32,0x191);
  memcpy(param_1 + 0x33,(void *)0x199,0x28);
  FUN_01cfa5b0(param_1 + 0x38,0x1c1);
  return;
}


