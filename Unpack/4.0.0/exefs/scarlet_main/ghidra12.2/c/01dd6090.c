/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd6090; name: FUN_01dd6090
 */


void FUN_01dd6090(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01195854();
  uVar2 = FUN_0196c644(*param_2);
  FUN_01dd60e4(uVar1,uVar2,*(int *)(param_1 + 0x2a4) + -1);
  FUN_014e3420(param_1,*(undefined4 *)(param_1 + 0x2a4));
  return;
}


