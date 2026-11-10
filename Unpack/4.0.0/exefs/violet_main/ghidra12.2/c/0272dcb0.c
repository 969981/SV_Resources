/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0272dcb0; name: FUN_0272dcb0
 */


void FUN_0272dcb0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_8 [8];
  
  *param_1 = (long)&PTR_FUN_045d6278;
  param_1[4] = (long)&PTR_LAB_045d62b8;
  FUN_0272dd24(param_1 + 0x11);
  puVar1 = PTR_DAT_047d8e00 + 0x50;
  *param_1 = (long)(PTR_DAT_047d8e00 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_00d395f0(param_1);
  uVar2 = *(uint *)(param_1 + 6);
  FUN_00d56620(uVar2,uVar2 ^ (int)uVar2 >> 0x1f,auStack_8,param_1 + 7,in_x4,in_x5,0,0);
  return;
}


