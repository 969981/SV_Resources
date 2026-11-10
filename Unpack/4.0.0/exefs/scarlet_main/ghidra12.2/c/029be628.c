/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029be628; name: FUN_029be628
 */


void FUN_029be628(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  
  param_2[2] = param_2[2] + 1;
  param_2[3] = param_2[3] +
               (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) * -0x3333333333333333;
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  for (puVar1 = *(undefined8 **)(param_1 + 0x38); puVar1 != puVar2; puVar1 = puVar1 + 5) {
    plVar3 = (long *)FUN_00d2b5d0(*(undefined8 *)(param_1 + 0x30),*puVar1);
    if ((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x28))(), (uVar4 & 1) == 0)) {
      *param_2 = *param_2 + 1;
    }
    else {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
    }
  }
  return;
}


