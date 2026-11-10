/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a8044; name: FUN_024a8044
 */


long * FUN_024a8044(undefined8 *param_1,long *param_2,long *param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  
  if (param_1 + 1 == param_2) {
LAB_024a80d4:
    plVar8 = (long *)*param_2;
    plVar9 = param_2;
    if ((long *)*param_1 != param_2) {
      if (plVar8 == (long *)0x0) {
        plVar7 = param_2;
        do {
          plVar9 = (long *)plVar7[2];
          bVar5 = (long *)*plVar9 == plVar7;
          plVar7 = plVar9;
        } while (bVar5);
      }
      else {
        plVar7 = plVar8;
        do {
          plVar9 = plVar7;
          plVar7 = (long *)plVar9[1];
        } while ((long *)plVar9[1] != (long *)0x0);
      }
      iVar2 = *param_5;
      iVar3 = (int)plVar9[4];
      bVar5 = SBORROW4(iVar3,iVar2);
      iVar1 = iVar3 - iVar2;
      if (iVar3 == iVar2) {
        if (iVar2 != 1) goto LAB_024a8168;
        bVar5 = SBORROW4((int)plVar9[5],param_5[2]);
        iVar1 = (int)plVar9[5] - param_5[2];
      }
      if (iVar1 < 0 == bVar5) goto LAB_024a8168;
    }
    if (plVar8 == (long *)0x0) {
      *param_3 = (long)param_2;
      return param_2;
    }
    *param_3 = (long)plVar9;
    return plVar9 + 1;
  }
  iVar2 = *param_5;
  iVar1 = (int)param_2[4];
  iVar3 = param_5[2];
  if (iVar1 == iVar2) {
    if (iVar2 != 1) goto LAB_024a8100;
    iVar4 = (int)param_2[5];
    bVar5 = SBORROW4(iVar4,iVar3);
    iVar1 = iVar4 - iVar3;
    if (iVar3 < iVar4) goto LAB_024a80d4;
  }
  else {
    if (iVar2 < iVar1) goto LAB_024a80d4;
    bVar5 = SBORROW4(iVar1,iVar2);
    iVar1 = iVar1 - iVar2;
  }
  if (iVar1 < 0 == bVar5) {
LAB_024a8100:
    *param_3 = (long)param_2;
    *param_4 = (long)param_2;
    return param_4;
  }
  plVar9 = (long *)param_2[1];
  if (plVar9 == (long *)0x0) {
    plVar9 = param_2 + 2;
    plVar8 = (long *)*plVar9;
    if ((long *)*plVar8 != param_2) {
      do {
        lVar10 = *plVar9;
        plVar9 = (long *)(lVar10 + 0x10);
        plVar8 = (long *)*plVar9;
      } while (*plVar8 != lVar10);
    }
  }
  else {
    do {
      plVar8 = plVar9;
      plVar9 = (long *)*plVar8;
    } while ((long *)*plVar8 != (long *)0x0);
  }
  if (plVar8 != param_1 + 1) {
    iVar4 = (int)plVar8[4];
    bVar6 = SBORROW4(iVar4,iVar2);
    iVar1 = iVar4 - iVar2;
    bVar5 = false;
    if (iVar4 == iVar2) {
      if (iVar2 != 1) goto LAB_024a8168;
      iVar2 = (int)plVar8[5];
      bVar6 = SBORROW4(iVar2,iVar3);
      iVar1 = iVar2 - iVar3;
      bVar5 = iVar2 == iVar3;
    }
    if (bVar5 || iVar1 < 0 != bVar6) {
LAB_024a8168:
      plVar9 = (long *)FUN_024a6ff8(param_1,param_3,param_5);
      return plVar9;
    }
  }
  if (param_2[1] == 0) {
    *param_3 = (long)param_2;
    return param_2 + 1;
  }
  *param_3 = (long)plVar8;
  return plVar8;
}


