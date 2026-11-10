/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021033d8; name: FUN_021033d8
 */


undefined8 FUN_021033d8(long param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar4 = FUN_010e161c(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x290),*param_3);
  iVar3 = *param_2;
  if (iVar3 == 2) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 0x340))(*(long **)(param_1 + 0x1b0),uVar4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (iVar3 == 1) {
      uVar6 = (**(code **)(**(long **)(param_1 + 0x1b0) + 800))(*(long **)(param_1 + 0x1b0),uVar4);
      if ((uVar6 & 1) == 0) {
        return 0;
      }
      plVar5 = *(long **)(param_1 + 0x1b0);
    }
    else {
      if (iVar3 != 0) {
        return 1;
      }
      plVar5 = *(long **)(param_1 + 0x1b0);
      uVar2 = uVar1;
    }
    (**(code **)(*plVar5 + 0x318))(plVar5,uVar4,uVar2);
  }
  *param_2 = *param_2 + 1;
  return 0;
}


