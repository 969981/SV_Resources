/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a01a00; name: FUN_02a01a00
 */


int FUN_02a01a00(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = FUN_02a01800();
  lVar5 = *param_5;
  lVar6 = *param_4;
  if (*(char *)(lVar5 + 0x44) == '\0') {
    plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar5 + 0x60) == 0) {
    plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
  }
  else {
    plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
  }
  if (*(char *)(lVar6 + 0x44) == '\0') {
    plVar4 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar6 + 0x60) == 0) {
    plVar4 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
  }
  else {
    plVar4 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
  }
  iVar2 = iVar1;
  if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar6 - *plVar4) >> 4) * 0x38e38e39) {
    *param_4 = lVar5;
    *param_5 = lVar6;
    lVar5 = *param_4;
    lVar6 = *param_3;
    if (*(char *)(lVar5 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar5 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
    }
    iVar2 = iVar1 + 1;
    if (*(char *)(lVar6 + 0x44) == '\0') {
      plVar4 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
    }
    else if (*(long *)(lVar6 + 0x60) == 0) {
      plVar4 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
    }
    else {
      plVar4 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
    }
    if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
        (int)((ulong)(lVar6 - *plVar4) >> 4) * 0x38e38e39) {
      *param_3 = lVar5;
      *param_4 = lVar6;
      lVar5 = *param_3;
      lVar6 = *param_2;
      if (*(char *)(lVar5 + 0x44) == '\0') {
        plVar3 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar5 + 0x60) == 0) {
        plVar3 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
      }
      else {
        plVar3 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
      }
      iVar2 = iVar1 + 2;
      if (*(char *)(lVar6 + 0x44) == '\0') {
        plVar4 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar6 + 0x60) == 0) {
        plVar4 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
      }
      else {
        plVar4 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
      }
      if ((int)((ulong)(lVar5 - *plVar3) >> 4) * 0x38e38e39 <
          (int)((ulong)(lVar6 - *plVar4) >> 4) * 0x38e38e39) {
        *param_2 = lVar5;
        *param_3 = lVar6;
        lVar6 = *param_2;
        lVar5 = *param_1;
        if (*(char *)(lVar6 + 0x44) == '\0') {
          plVar3 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar6 + 0x60) == 0) {
          plVar3 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
        }
        else {
          plVar3 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
        }
        iVar2 = iVar1 + 3;
        if (*(char *)(lVar5 + 0x44) == '\0') {
          plVar4 = (long *)(*(long *)(lVar5 + 0x50) + 0x30);
        }
        else if (*(long *)(lVar5 + 0x60) == 0) {
          plVar4 = (long *)(*(long *)(lVar5 + 0x30) + 0x88);
        }
        else {
          plVar4 = (long *)(*(long *)(lVar5 + 0x60) + 0x80);
        }
        if ((int)((ulong)(lVar6 - *plVar3) >> 4) * 0x38e38e39 <
            (int)((ulong)(lVar5 - *plVar4) >> 4) * 0x38e38e39) {
          iVar2 = iVar1 + 4;
          *param_1 = lVar6;
          *param_2 = lVar5;
        }
      }
    }
  }
  return iVar2;
}


