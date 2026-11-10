/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a01590; name: FUN_02a01590
 */


undefined8 FUN_02a01590(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  lVar6 = *param_2;
  lVar4 = *param_1;
  if (*(char *)(lVar6 + 0x44) == '\0') {
    plVar5 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar6 + 0x60) == 0) {
    plVar5 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
  }
  else {
    plVar5 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
  }
  if (*(char *)(lVar4 + 0x44) == '\0') {
    plVar9 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar4 + 0x60) == 0) {
    plVar9 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
  }
  lVar8 = *param_3;
  if (*(char *)(lVar8 + 0x44) == '\0') {
    plVar10 = (long *)(*(long *)(lVar8 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar8 + 0x60) == 0) {
    plVar10 = (long *)(*(long *)(lVar8 + 0x30) + 0x88);
  }
  else {
    plVar10 = (long *)(*(long *)(lVar8 + 0x60) + 0x80);
  }
  if (*(char *)(lVar6 + 0x44) == '\0') {
    plVar7 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar6 + 0x60) == 0) {
    plVar7 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
  }
  else {
    plVar7 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
  }
  iVar1 = (int)((ulong)(lVar8 - *plVar10) >> 4) * 0x38e38e39;
  iVar2 = (int)((ulong)(lVar6 - *plVar7) >> 4) * 0x38e38e39;
  if ((int)((ulong)(lVar6 - *plVar5) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar4 - *plVar9) >> 4) * 0x38e38e39) {
    if (iVar1 < iVar2) {
      *param_1 = lVar8;
      uVar3 = 1;
    }
    else {
      *param_1 = lVar6;
      *param_2 = lVar4;
      lVar6 = *param_3;
      if (*(char *)(lVar6 + 0x44) == '\0') {
        plVar5 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar6 + 0x60) == 0) {
        plVar5 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
      }
      else {
        plVar5 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
      }
      if (*(char *)(lVar4 + 0x44) == '\0') {
        plVar9 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
      }
      else if (*(long *)(lVar4 + 0x60) == 0) {
        plVar9 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
      }
      else {
        plVar9 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
      }
      if ((int)((ulong)(lVar4 - *plVar9) >> 4) * 0x38e38e39 <=
          (int)((ulong)(lVar6 - *plVar5) >> 4) * 0x38e38e39) {
        return 1;
      }
      uVar3 = 2;
      *param_2 = lVar6;
    }
    *param_3 = lVar4;
    return uVar3;
  }
  if (iVar2 <= iVar1) {
    return 0;
  }
  *param_2 = lVar8;
  *param_3 = lVar6;
  lVar6 = *param_2;
  lVar4 = *param_1;
  if (*(char *)(lVar6 + 0x44) == '\0') {
    plVar5 = (long *)(*(long *)(lVar6 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar6 + 0x60) == 0) {
    plVar5 = (long *)(*(long *)(lVar6 + 0x30) + 0x88);
  }
  else {
    plVar5 = (long *)(*(long *)(lVar6 + 0x60) + 0x80);
  }
  if (*(char *)(lVar4 + 0x44) == '\0') {
    plVar9 = (long *)(*(long *)(lVar4 + 0x50) + 0x30);
  }
  else if (*(long *)(lVar4 + 0x60) == 0) {
    plVar9 = (long *)(*(long *)(lVar4 + 0x30) + 0x88);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar4 + 0x60) + 0x80);
  }
  if ((int)((ulong)(lVar6 - *plVar5) >> 4) * 0x38e38e39 <
      (int)((ulong)(lVar4 - *plVar9) >> 4) * 0x38e38e39) {
    *param_1 = lVar6;
    *param_2 = lVar4;
    return 2;
  }
  return 1;
}


