/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fb6a0; name: FUN_004fb6a0
 */


bool FUN_004fb6a0(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return true;
  case 2:
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x44) <= *(int *)(param_2[-1] + 0x44)) {
      return true;
    }
    *param_1 = param_2[-1];
LAB_004fb868:
    param_2[-1] = lVar7;
    return true;
  case 3:
    lVar7 = *param_1;
    lVar5 = param_1[1];
    lVar9 = param_2[-1];
    iVar8 = *(int *)(lVar5 + 0x44);
    iVar1 = *(int *)(lVar7 + 0x44);
    if (iVar8 < iVar1) {
      if (*(int *)(lVar9 + 0x44) < iVar8) {
        *param_1 = lVar9;
      }
      else {
        *param_1 = lVar5;
        param_1[1] = lVar7;
        if (iVar1 <= *(int *)(param_2[-1] + 0x44)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      goto LAB_004fb868;
    }
    if (iVar8 <= *(int *)(lVar9 + 0x44)) {
      return true;
    }
    param_1[1] = lVar9;
    param_2[-1] = lVar5;
    lVar7 = *param_1;
    lVar5 = param_1[1];
    if (*(int *)(lVar7 + 0x44) <= *(int *)(lVar5 + 0x44)) {
      return true;
    }
    goto LAB_004fb994;
  case 4:
    lVar7 = *param_1;
    lVar5 = param_1[1];
    lVar9 = param_1[2];
    iVar8 = *(int *)(lVar5 + 0x44);
    iVar1 = *(int *)(lVar7 + 0x44);
    iVar2 = *(int *)(lVar9 + 0x44);
    if (iVar8 < iVar1) {
      if (iVar2 < iVar8) {
        *param_1 = lVar9;
        param_1[2] = lVar7;
        lVar5 = lVar7;
      }
      else {
        *param_1 = lVar5;
        param_1[1] = lVar7;
        if (iVar1 <= iVar2) goto LAB_004fb898;
        param_1[1] = lVar9;
        param_1[2] = lVar7;
        lVar5 = lVar7;
      }
    }
    else if (iVar2 < iVar8) {
      param_1[1] = lVar9;
      param_1[2] = lVar5;
      if (iVar2 < iVar1) {
        *param_1 = lVar9;
        param_1[1] = lVar7;
      }
    }
    else {
LAB_004fb898:
      lVar5 = lVar9;
    }
    if (*(int *)(lVar5 + 0x44) <= *(int *)(param_2[-1] + 0x44)) {
      return true;
    }
    param_1[2] = param_2[-1];
    param_2[-1] = lVar5;
    lVar7 = param_1[1];
    lVar5 = param_1[2];
    iVar8 = *(int *)(lVar5 + 0x44);
    if (*(int *)(lVar7 + 0x44) <= iVar8) {
      return true;
    }
    param_1[1] = lVar5;
    param_1[2] = lVar7;
    lVar7 = *param_1;
    if (*(int *)(lVar7 + 0x44) <= iVar8) {
      return true;
    }
LAB_004fb994:
    *param_1 = lVar5;
    param_1[1] = lVar7;
    return true;
  case 5:
    FUN_004fb4c0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    return true;
  }
  lVar7 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  iVar8 = *(int *)(lVar5 + 0x44);
  iVar1 = *(int *)(lVar7 + 0x44);
  iVar2 = *(int *)(lVar6 + 0x44);
  lVar9 = lVar6;
  if (iVar8 < iVar1) {
    if (iVar2 < iVar8) {
      *param_1 = lVar6;
    }
    else {
      *param_1 = lVar5;
      param_1[1] = lVar7;
      if (iVar1 <= iVar2) goto joined_r0x004fb8ac;
      param_1[1] = lVar6;
    }
    param_1[2] = lVar7;
    lVar9 = lVar7;
  }
  else if (iVar2 < iVar8) {
    param_1[1] = lVar6;
    param_1[2] = lVar5;
    lVar9 = lVar5;
    if (iVar2 < iVar1) {
      *param_1 = lVar6;
      param_1[1] = lVar7;
      if (param_1 + 3 == param_2) {
        return true;
      }
      goto LAB_004fb8b0;
    }
  }
joined_r0x004fb8ac:
  lVar5 = lVar9;
  if (param_1 + 3 == param_2) {
    return true;
  }
LAB_004fb8b0:
  lVar7 = 0;
  iVar8 = 0;
  plVar3 = param_1 + 3;
  do {
    lVar9 = *plVar3;
    iVar1 = *(int *)(lVar9 + 0x44);
    if (iVar1 < *(int *)(lVar5 + 0x44)) {
      lVar5 = lVar7;
      do {
        lVar6 = lVar5;
        *(undefined8 *)((long)param_1 + lVar6 + 0x18) =
             *(undefined8 *)((long)param_1 + lVar6 + 0x10);
        if (lVar6 == -0x10) {
          plVar4 = param_1;
          goto LAB_004fb908;
        }
        lVar5 = lVar6 + -8;
      } while (iVar1 < *(int *)(*(long *)((long)param_1 + lVar6 + 8) + 0x44));
      plVar4 = (long *)((long)param_1 + lVar6 + 0x10);
LAB_004fb908:
      iVar8 = iVar8 + 1;
      *plVar4 = lVar9;
      if (iVar8 == 8) {
        return plVar3 + 1 == param_2;
      }
    }
    if (plVar3 + 1 == param_2) {
      return true;
    }
    lVar5 = *plVar3;
    lVar7 = lVar7 + 8;
    plVar3 = plVar3 + 1;
  } while( true );
}


