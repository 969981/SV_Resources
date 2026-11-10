/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0272db00; name: FUN_0272db00
 */


void FUN_0272db00(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_8 [8];
  
  *param_1 = (long)&PTR_FUN_045d6208;
  param_1[4] = (long)&PTR_LAB_045d6248;
  FUN_0272db74(param_1 + 0x11);
  puVar1 = PTR_DAT_047d8e00 + 0x50;
  *param_1 = (long)(PTR_DAT_047d8e00 + 0x10);
  param_1[4] = (long)puVar1;
  FUN_00d395f0(param_1);
  uVar2 = *(uint *)(param_1 + 6);
  FUN_00d56620(uVar2,uVar2 ^ (int)uVar2 >> 0x1f,auStack_8,param_1 + 7,in_x4,in_x5,0,0);
  return;
}


