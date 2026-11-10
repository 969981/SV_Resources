/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0175d090; name: FUN_0175d090
 */


void FUN_0175d090(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 auStack_48 [40];
  
  FUN_0175d110(auStack_48,param_2,0xd600000);
  FUN_0175d43c(param_1,auStack_48);
  *param_1 = &PTR_LAB_045a89a0;
  FUN_0175d14c(param_1 + 0x50);
  uVar1 = FUN_012e29a0();
  if ((uVar1 & 1) == 0) {
    FUN_017601b0(*(undefined8 *)PTR_DAT_047d3a88,param_1[0x3e]);
  }
  else {
    FUN_0175d2f0();
  }
  return;
}


