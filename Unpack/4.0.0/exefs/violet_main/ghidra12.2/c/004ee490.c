/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ee490; name: FUN_004ee490
 */


long FUN_004ee490(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  
  plVar3 = (long *)FUN_004ee394();
  lVar7 = *plVar3;
  piVar8 = *(int **)(lVar7 + 0x10);
  if (piVar8 != (int *)0x0) {
    iVar1 = *(int *)(lVar7 + 8);
    if (iVar1 < *piVar8) {
      *(int *)(lVar7 + 8) = iVar1 + 1;
      if (*(long *)(piVar8 + (long)iVar1 * 2 + 2) != 0) {
        return *(long *)(piVar8 + (long)iVar1 * 2 + 2);
      }
      lVar7 = *plVar3;
    }
  }
  if (*(int *)(lVar7 + 8) == 0) {
    uVar5 = FUN_004a5124(param_2);
    plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3,uVar5);
  }
  else {
    plVar4 = *(long **)(*(long *)(lVar7 + 0x10) + 8);
  }
  lVar7 = (**(code **)(*plVar4 + 0x20))(plVar4,*param_1);
  lVar6 = *plVar3;
  piVar8 = *(int **)(lVar6 + 0x10);
  if (piVar8 != (int *)0x0) {
    iVar1 = *piVar8;
    if (iVar1 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(lVar6 + 8);
      if (iVar2 < iVar1) {
        *(undefined8 *)(piVar8 + (long)iVar1 * 2 + 2) =
             *(undefined8 *)(piVar8 + (long)iVar2 * 2 + 2);
      }
      *(long *)(piVar8 + (long)iVar2 * 2 + 2) = lVar7;
      *(int *)(lVar6 + 8) = iVar2 + 1;
      **(int **)(lVar6 + 0x10) = **(int **)(lVar6 + 0x10) + 1;
      return lVar7;
    }
  }
  FUN_004ef91c(lVar6,lVar7);
  return lVar7;
}


