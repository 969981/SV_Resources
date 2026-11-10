/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021cc064; name: FUN_021cc064
 */


void FUN_021cc064(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_021c4af4(param_2,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  param_2[5] = 0;
  param_2[2] = uVar1;
  param_2[6] = 0;
  param_2[3] = uVar2;
  param_2[4] = uVar4;
  FUN_00c43ef0(param_2 + 5,param_1 + 0x28);
  param_2[7] = *(undefined8 *)(param_1 + 0x38);
  param_2[8] = *(undefined8 *)(param_1 + 0x40);
  param_2[9] = *(undefined8 *)(param_1 + 0x48);
  plVar3 = *(long **)(param_1 + 0x50);
  param_2[10] = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  param_2[0xb] = *(undefined8 *)(param_1 + 0x58);
  return;
}


