/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030ebad0; name: FUN_030ebad0
 */


void FUN_030ebad0(long param_1,long param_2,long param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long local_70;
  ulong local_68;
  
  uVar11 = param_2 - param_1;
  lVar4 = tpidr_el0;
  lVar3 = *(long *)(lVar4 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar4 + 0x1000b8) = lVar3;
  }
  lVar4 = (long)(uVar11 * 0x20000000) >> 0x20;
  lVar10 = lVar4 * 4;
  lVar3 = *(long *)(*(long *)(lVar3 + 0x3d0) + 0x10);
  local_70 = lVar10;
  if ((*(long *)(lVar3 + 8) == 0) && (lVar3 != 0)) {
    local_68 = lVar10 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(lVar3 + 0x28)) {
      piVar2 = *(int **)(lVar3 + 0x38);
      if (local_68 + (long)piVar2 <= *(ulong *)(lVar3 + 0x40)) {
        *(ulong *)(lVar3 + 0x38) = local_68 + (long)piVar2;
        goto LAB_030ebbd4;
      }
    }
    piVar2 = (int *)FUN_031cf3b4(lVar3,&local_68);
  }
  else {
    piVar2 = (int *)(**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
    lVar3 = 0;
  }
LAB_030ebbd4:
  iVar12 = (int)(uVar11 >> 3);
  uVar13 = uVar11 >> 3 & 0xffffffff;
  if (0 < iVar12) {
    uVar11 = uVar11 >> 3 & 3;
    if (uVar13 - 1 < 3) {
      uVar7 = 0;
      uVar5 = 0;
    }
    else {
      uVar7 = 0;
      piVar6 = piVar2 + 2;
      do {
        iVar8 = (int)uVar7;
        piVar6[-2] = iVar8;
        piVar6[-1] = iVar8 + 1;
        uVar7 = uVar7 + 4;
        *piVar6 = iVar8 + 2;
        piVar6[1] = iVar8 + 3;
        piVar6 = piVar6 + 4;
      } while (uVar13 - uVar11 != uVar7);
      uVar5 = uVar7 & 0xffffffff;
    }
    if (uVar11 != 0) {
      piVar6 = piVar2 + uVar7;
      do {
        *piVar6 = (int)uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
        uVar11 = uVar11 - 1;
        piVar6 = piVar6 + 1;
      } while (uVar11 != 0);
    }
    if (1 < iVar12) {
      FUN_030eda50(piVar2,0,iVar12 + -1,param_3);
    }
  }
  if ((int)(*(uint *)((long)param_5 + 0xc) & 0x7fffffff) < iVar12) {
    FUN_030edb34(param_5,lVar4);
  }
  if ((int)param_5[1] != iVar12) {
    *(int *)(param_5 + 1) = iVar12;
  }
  if ((int)(*(uint *)((long)param_6 + 0xc) & 0x7fffffff) < iVar12) {
    FUN_030edc48(param_6,lVar4);
  }
  if ((int)param_6[1] != iVar12) {
    *(int *)(param_6 + 1) = iVar12;
  }
  if (0 < iVar12) {
    lVar4 = 0;
    piVar6 = piVar2;
    do {
      puVar1 = (undefined4 *)(param_1 + (long)*piVar6 * 8);
      lVar9 = *param_5;
      *(undefined4 *)(lVar9 + lVar4) = *puVar1;
      ((undefined4 *)(lVar9 + lVar4))[1] = puVar1[1];
      *(undefined8 *)(*param_6 + lVar4) = *(undefined8 *)(param_3 + (long)*piVar6 * 8);
      lVar4 = lVar4 + 8;
      piVar6 = piVar6 + 1;
    } while (uVar13 * 8 != lVar4);
  }
  if (lVar3 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,piVar2,lVar10);
    return;
  }
  uVar11 = lVar10 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(lVar3 + 0x28) < uVar11) || (*(long *)(lVar3 + 0x38) != uVar11 + (long)piVar2)) {
    if (piVar2 == (int *)0x0) {
      return;
    }
    if (*(ulong *)(lVar3 + 0x28) < uVar11 + 0x40) {
      *(int *)(*(long *)(lVar3 + 0x30) + 0x20) = *(int *)(*(long *)(lVar3 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(lVar3 + 0x10) + 0x18))
                (*(long **)(lVar3 + 0x10),(long)piVar2 - (long)piVar2[-1],uVar11 + 0x44);
      return;
    }
    if (*(long *)(lVar3 + 0x38) != uVar11 + (long)piVar2) {
      FUN_031cf778(lVar3,piVar2);
      return;
    }
    *(int **)(lVar3 + 0x38) = piVar2;
  }
  else {
    *(int **)(lVar3 + 0x38) = piVar2;
    if (*(int **)(lVar3 + 0x48) != piVar2) {
      return;
    }
  }
  FUN_031cf578(lVar3);
  return;
}


