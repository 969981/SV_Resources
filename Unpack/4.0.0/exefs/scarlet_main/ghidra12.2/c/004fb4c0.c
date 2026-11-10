/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fb4c0; name: FUN_004fb4c0
 */


int FUN_004fb4c0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  lVar3 = *param_3;
  iVar2 = *(int *)(lVar5 + 0x44);
  iVar1 = *(int *)(lVar4 + 0x44);
  if (iVar2 < iVar1) {
    if (*(int *)(lVar3 + 0x44) < iVar2) {
      *param_1 = lVar3;
      iVar2 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar4;
      lVar3 = *param_3;
      if (iVar1 <= *(int *)(lVar3 + 0x44)) {
        iVar2 = 1;
        goto LAB_004fb574;
      }
      iVar2 = 2;
      *param_2 = lVar3;
    }
    *param_3 = lVar4;
    lVar3 = lVar4;
  }
  else if (*(int *)(lVar3 + 0x44) < iVar2) {
    *param_2 = lVar3;
    *param_3 = lVar5;
    lVar3 = *param_1;
    if (*(int *)(*param_2 + 0x44) < *(int *)(lVar3 + 0x44)) {
      *param_1 = *param_2;
      iVar2 = 2;
      *param_2 = lVar3;
      lVar3 = *param_3;
    }
    else {
      iVar2 = 1;
      lVar3 = lVar5;
    }
  }
  else {
    iVar2 = 0;
  }
LAB_004fb574:
  if (*(int *)(*param_4 + 0x44) < *(int *)(lVar3 + 0x44)) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(int *)(*param_3 + 0x44) < *(int *)(lVar3 + 0x44)) {
      *param_2 = *param_3;
      *param_3 = lVar3;
      lVar3 = *param_1;
      if (*(int *)(*param_2 + 0x44) < *(int *)(lVar3 + 0x44)) {
        iVar2 = iVar2 + 3;
        *param_1 = *param_2;
        *param_2 = lVar3;
      }
      else {
        iVar2 = iVar2 + 2;
      }
    }
    else {
      iVar2 = iVar2 + 1;
    }
  }
  lVar3 = *param_4;
  if (*(int *)(*param_5 + 0x44) < *(int *)(lVar3 + 0x44)) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_3;
    if (*(int *)(lVar3 + 0x44) <= *(int *)(*param_4 + 0x44)) {
      return iVar2 + 1;
    }
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(int *)(lVar3 + 0x44) <= *(int *)(*param_3 + 0x44)) {
      return iVar2 + 2;
    }
    *param_2 = *param_3;
    *param_3 = lVar3;
    lVar3 = *param_1;
    if (*(int *)(lVar3 + 0x44) <= *(int *)(*param_2 + 0x44)) {
      return iVar2 + 3;
    }
    iVar2 = iVar2 + 4;
    *param_1 = *param_2;
    *param_2 = lVar3;
  }
  return iVar2;
}


