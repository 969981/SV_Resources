/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111e634; name: FUN_0111e634
 */


void FUN_0111e634(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long local_80 [3];
  long *local_68;
  
  iVar11 = *(int *)(*(long *)(param_1 + 0x4a8) + 0xc);
  if ((iVar11 < 1) || (iVar10 = *(int *)(*(long *)(param_1 + 0x4a8) + 0x10), iVar10 < 1)) {
    iVar7 = -1;
    iVar8 = 0;
    iVar6 = -1;
    iVar11 = 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar7 = 0;
      iVar9 = iVar10;
      do {
        lVar5 = *(long *)(param_1 + 0x4a8);
        bVar4 = *(int *)(lVar5 + 0x1c) != 0;
        lVar2 = 0xc;
        if (bVar4) {
          lVar2 = 0x10;
        }
        iVar8 = iVar6;
        iVar1 = iVar7;
        if (bVar4) {
          iVar8 = iVar7;
          iVar1 = iVar6;
        }
        FUN_0111e884(local_80,lVar5,iVar8 + *(int *)(lVar5 + lVar2) * iVar1);
        lVar2 = local_80[0];
        lVar5 = *param_2;
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        if (lVar2 == lVar5) {
          iVar8 = 0;
          if (iVar11 <= iVar6) goto LAB_0111e794;
          goto LAB_0111e724;
        }
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar11);
    iVar6 = -1;
    iVar8 = 0;
    iVar7 = -1;
    iVar11 = 0;
  }
  goto LAB_0111e83c;
  while (iVar8 = iVar8 + 1, (iVar6 - iVar11) + iVar8 != 0) {
LAB_0111e724:
    lVar5 = *(long *)(param_1 + 0x4a8);
    lVar2 = 0xc;
    iVar1 = iVar6 + iVar8;
    iVar3 = iVar7;
    if (*(int *)(lVar5 + 0x1c) != 0) {
      lVar2 = 0x10;
      iVar1 = iVar7;
      iVar3 = iVar6 + iVar8;
    }
    FUN_0111e884(local_80,lVar5,iVar1 + *(int *)(lVar5 + lVar2) * iVar3);
    lVar2 = local_80[0];
    lVar5 = *param_2;
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (lVar2 != lVar5) goto LAB_0111e794;
  }
  iVar8 = iVar11 - iVar6;
LAB_0111e794:
  if (iVar7 < iVar10) {
    iVar10 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x4a8);
      bVar4 = *(int *)(lVar5 + 0x1c) != 0;
      lVar2 = 0xc;
      iVar11 = iVar7 + iVar10;
      if (bVar4) {
        lVar2 = 0x10;
        iVar11 = iVar6;
      }
      iVar1 = iVar6;
      if (bVar4) {
        iVar1 = iVar7 + iVar10;
      }
      FUN_0111e884(local_80,lVar5,iVar1 + *(int *)(lVar5 + lVar2) * iVar11);
      lVar2 = local_80[0];
      lVar5 = *param_2;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      iVar11 = iVar10;
    } while ((lVar2 == lVar5) &&
            (bVar4 = iVar9 + -1 != iVar10, iVar10 = iVar10 + 1, iVar11 = iVar9, bVar4));
  }
  else {
    iVar11 = 0;
  }
LAB_0111e83c:
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = CONCAT44(iVar7,iVar6);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = CONCAT44(iVar11,iVar8);
  }
  return;
}


