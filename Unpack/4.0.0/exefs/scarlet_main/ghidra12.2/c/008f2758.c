/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008f2758; name: FUN_008f2758
 */


void FUN_008f2758(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b0 [128];
  
  (**(code **)PTR_DAT_047d2cf0)(auStack_b0,*param_3);
  FUN_008f1714(auStack_b0,param_4);
  uVar1 = (**(code **)PTR_DAT_047d2d68)(auStack_b0);
  *param_1 = uVar1;
  uVar1 = (**(code **)PTR_DAT_047d2d70)(auStack_b0);
  *param_2 = uVar1;
  return;
}


