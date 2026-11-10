/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021b5450; name: FUN_021b5450
 */


void FUN_021b5450(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_00ca1ea4(param_2,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  param_2[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 5) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_2[6] = uVar2;
  return;
}


