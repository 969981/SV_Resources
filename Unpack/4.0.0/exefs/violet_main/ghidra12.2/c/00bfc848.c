/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bfc848; name: FUN_00bfc848
 */


void FUN_00bfc848(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  plVar2 = param_2;
  if ((param_3 == 0) && (param_4 != 0)) {
    FUN_00bf15e4(param_4,param_2);
  }
  else if (param_4 != param_3) {
    plVar2 = (long *)FUN_00bf7364(param_2,param_4);
    FUN_00bf55f0(param_2,plVar2);
    if (param_3 == 0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    iVar5 = (int)param_1[1];
    iVar4 = *(int *)((long)param_1 + 0xc);
LAB_00bfc908:
    FUN_00c11f04(param_1,(iVar4 - iVar5) + 1);
LAB_00bfc918:
    piVar3 = (int *)param_1[2];
    iVar5 = *piVar3;
  }
  else {
    iVar4 = (int)param_1[1];
    iVar5 = iVar4;
    if (iVar4 == *(int *)((long)param_1 + 0xc)) goto LAB_00bfc908;
    iVar5 = *piVar3;
    if (iVar5 == *(int *)((long)param_1 + 0xc)) {
      if ((*(long **)(piVar3 + (long)iVar4 * 2 + 2) != (long *)0x0) && (*param_1 == 0)) {
        (**(code **)(**(long **)(piVar3 + (long)iVar4 * 2 + 2) + 8))();
      }
      goto LAB_00bfc928;
    }
    if (iVar4 < iVar5) {
      *(undefined8 *)(piVar3 + (long)iVar5 * 2 + 2) = *(undefined8 *)(piVar3 + (long)iVar4 * 2 + 2);
      goto LAB_00bfc918;
    }
  }
  *piVar3 = iVar5 + 1;
LAB_00bfc928:
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + 1;
  *(long **)(param_1[2] + (long)(int)lVar1 * 8 + 8) = plVar2;
  return;
}


