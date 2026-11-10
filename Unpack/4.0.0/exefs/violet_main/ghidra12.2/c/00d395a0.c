/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d395a0; name: FUN_00d395a0
 */


void FUN_00d395a0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_8 [8];
  
  *param_1 = &DAT_045d0910;
  param_1[4] = &PTR_LAB_045d0950;
  FUN_00d395f0();
  uVar1 = *(uint *)(param_1 + 6);
  FUN_00d56620(uVar1,uVar1 ^ (int)uVar1 >> 0x1f,auStack_8,param_1 + 7,in_x4,in_x5,0,0);
  return;
}


