/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00501c90; name: FUN_00501c90
 */


void FUN_00501c90(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  
  puVar3 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_004f7acc(param_4,param_2);
  }
  else if (param_4 != param_3) {
    puVar3 = (undefined8 *)FUN_00502610(param_2,param_4);
    FUN_004fae68(param_2,puVar3);
    if (param_3 == 0) {
      (**(code **)*param_2)(param_2);
      FUN_0049e790(PTR_LAB_047cba48,param_2);
    }
  }
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    iVar5 = *(int *)((long)param_1 + 0xc);
LAB_00501d9c:
    FUN_00532334(param_1,iVar5 + 1);
LAB_00501da8:
    piVar4 = (int *)param_1[2];
    iVar1 = *piVar4;
  }
  else {
    iVar5 = (int)param_1[1];
    if (iVar5 == *(int *)((long)param_1 + 0xc)) goto LAB_00501d9c;
    iVar1 = *piVar4;
    if (iVar1 == *(int *)((long)param_1 + 0xc)) {
      puVar6 = *(undefined8 **)(piVar4 + (long)iVar5 * 2 + 2);
      if (puVar6 != (undefined8 *)0x0 && *param_1 == 0) {
        (**(code **)*puVar6)(puVar6);
        FUN_0049e790(PTR_LAB_047cba48,puVar6);
        piVar4 = (int *)param_1[2];
      }
      goto LAB_00501db8;
    }
    if (iVar5 < iVar1) {
      *(undefined8 *)(piVar4 + (long)iVar1 * 2 + 2) = *(undefined8 *)(piVar4 + (long)iVar5 * 2 + 2);
      goto LAB_00501da8;
    }
  }
  *piVar4 = iVar1 + 1;
LAB_00501db8:
  lVar2 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar2 + 1;
  *(undefined8 **)(piVar4 + (long)(int)lVar2 * 2 + 2) = puVar3;
  return;
}


