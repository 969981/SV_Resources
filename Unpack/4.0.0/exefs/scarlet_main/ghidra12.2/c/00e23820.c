/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e23820; name: FUN_00e23820
 */


int FUN_00e23820(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  iVar1 = *(int *)(lVar4 + 0x350);
  if (iVar1 < *(int *)(lVar3 + 0x350)) {
    if (*(int *)(lVar2 + 0x350) < iVar1) {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      lVar4 = *param_3;
      if (*(int *)(lVar3 + 0x350) <= *(int *)(lVar4 + 0x350)) {
        iVar1 = 1;
        goto LAB_00e2384c;
      }
      iVar1 = 2;
      *param_2 = lVar4;
    }
    *param_3 = lVar3;
    lVar4 = lVar3;
  }
  else if (*(int *)(lVar2 + 0x350) < iVar1) {
    *param_2 = lVar2;
    *param_3 = lVar4;
    lVar2 = *param_1;
    if (*(int *)(*param_2 + 0x350) < *(int *)(lVar2 + 0x350)) {
      *param_1 = *param_2;
      iVar1 = 2;
      *param_2 = lVar2;
      lVar4 = *param_3;
    }
    else {
      iVar1 = 1;
    }
  }
  else {
    iVar1 = 0;
    lVar4 = lVar2;
  }
LAB_00e2384c:
  if (*(int *)(*param_4 + 0x350) < *(int *)(lVar4 + 0x350)) {
    *param_3 = *param_4;
    *param_4 = lVar4;
    lVar4 = *param_2;
    if (*(int *)(*param_3 + 0x350) < *(int *)(lVar4 + 0x350)) {
      *param_2 = *param_3;
      *param_3 = lVar4;
      lVar4 = *param_1;
      if (*(int *)(*param_2 + 0x350) < *(int *)(lVar4 + 0x350)) {
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = lVar4;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  lVar4 = *param_4;
  if (*(int *)(*param_5 + 0x350) < *(int *)(lVar4 + 0x350)) {
    *param_4 = *param_5;
    *param_5 = lVar4;
    lVar4 = *param_3;
    if (*(int *)(*param_4 + 0x350) < *(int *)(lVar4 + 0x350)) {
      *param_3 = *param_4;
      *param_4 = lVar4;
      lVar4 = *param_2;
      if (*(int *)(*param_3 + 0x350) < *(int *)(lVar4 + 0x350)) {
        *param_2 = *param_3;
        *param_3 = lVar4;
        lVar4 = *param_1;
        if (*(int *)(*param_2 + 0x350) < *(int *)(lVar4 + 0x350)) {
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = lVar4;
        }
        else {
          iVar1 = iVar1 + 3;
        }
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


