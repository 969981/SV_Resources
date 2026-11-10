/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f4b50; name: FUN_005f4b50
 */


int FUN_005f4b50(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_2;
  lVar3 = *param_1;
  lVar2 = *param_3;
  if (lVar5 < lVar3) {
    if (lVar2 < lVar5) {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar3;
      lVar2 = *param_3;
      if (lVar3 <= lVar2) {
        iVar1 = 1;
        lVar4 = *param_4;
        if (lVar4 < lVar2) goto LAB_005f4c28;
        goto LAB_005f4c7c;
      }
      iVar1 = 2;
      *param_2 = lVar2;
    }
    *param_3 = lVar3;
    lVar4 = *param_4;
    lVar2 = lVar3;
    if (lVar4 < lVar3) goto LAB_005f4c28;
  }
  else if (lVar2 < lVar5) {
    *param_2 = lVar2;
    *param_3 = lVar5;
    lVar2 = *param_1;
    if (*param_2 < lVar2) {
      *param_1 = *param_2;
      iVar1 = 2;
      *param_2 = lVar2;
      lVar4 = *param_4;
      lVar2 = *param_3;
      if (lVar4 < *param_3) {
LAB_005f4c28:
        *param_3 = lVar4;
        *param_4 = lVar2;
        lVar2 = *param_2;
        if (*param_3 < lVar2) {
          *param_2 = *param_3;
          *param_3 = lVar2;
          lVar2 = *param_1;
          if (*param_2 < lVar2) {
            iVar1 = iVar1 + 3;
            *param_1 = *param_2;
            *param_2 = lVar2;
            lVar2 = *param_5;
            lVar3 = *param_4;
            if (lVar3 <= lVar2) {
              return iVar1;
            }
          }
          else {
            iVar1 = iVar1 + 2;
            lVar2 = *param_5;
            lVar3 = *param_4;
            if (lVar3 <= lVar2) {
              return iVar1;
            }
          }
          goto LAB_005f4c8c;
        }
        iVar1 = iVar1 + 1;
      }
    }
    else {
      iVar1 = 1;
      lVar4 = *param_4;
      lVar2 = lVar5;
      if (lVar4 < lVar5) goto LAB_005f4c28;
    }
  }
  else {
    iVar1 = 0;
    lVar4 = *param_4;
    if (lVar4 < lVar2) goto LAB_005f4c28;
  }
LAB_005f4c7c:
  lVar2 = *param_5;
  lVar3 = *param_4;
  if (lVar3 <= lVar2) {
    return iVar1;
  }
LAB_005f4c8c:
  *param_4 = lVar2;
  *param_5 = lVar3;
  lVar2 = *param_3;
  if (lVar2 <= *param_4) {
    return iVar1 + 1;
  }
  *param_3 = *param_4;
  *param_4 = lVar2;
  lVar2 = *param_2;
  if (lVar2 <= *param_3) {
    return iVar1 + 2;
  }
  *param_2 = *param_3;
  *param_3 = lVar2;
  lVar2 = *param_1;
  if (*param_2 < lVar2) {
    *param_1 = *param_2;
    *param_2 = lVar2;
    return iVar1 + 4;
  }
  return iVar1 + 3;
}


