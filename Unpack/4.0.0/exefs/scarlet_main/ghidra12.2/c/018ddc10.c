/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ddc10; name: FUN_018ddc10
 */


void FUN_018ddc10(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_0191e33c();
  *param_1 = &PTR_FUN_045e1ce8;
  param_1[9] = 0;
  param_1[4] = &PTR_LAB_045e1db8;
  param_1[5] = &DAT_045e1e08;
  param_1[8] = 0;
  FUN_00c43ef0(param_1 + 8,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x18);
  param_1[10] = uVar1;
  param_1[0xc] = 0;
  return;
}


