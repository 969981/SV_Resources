/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005121c0; name: FUN_005121c0
 */


undefined8 FUN_005121c0(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  
  lVar7 = *param_2;
  lVar6 = *param_1;
  cVar3 = *(char *)(lVar7 + 0x43);
  cVar4 = *(char *)(lVar6 + 0x43);
  if (cVar3 == '\0') {
    if (cVar4 == '\0') {
      iVar8 = (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      iVar9 = (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      goto LAB_00512248;
    }
    bVar1 = true;
    lVar10 = *param_3;
    if (*(char *)(lVar10 + 0x43) == '\0') goto LAB_005121f8;
LAB_0051225c:
    if (cVar3 == '\0') {
      if (!bVar1) {
        return 0;
      }
    }
    else {
      bVar2 = *(int *)(lVar10 + 0x44) < *(int *)(lVar7 + 0x44);
joined_r0x005122f0:
      if (!bVar1) {
        if (!bVar2) {
          return 0;
        }
        goto LAB_005122f8;
      }
      if (bVar2) {
LAB_00512278:
        *param_1 = lVar10;
        *param_3 = lVar6;
        return 1;
      }
    }
    *param_1 = lVar7;
    *param_2 = lVar6;
    lVar7 = *param_3;
    if (*(char *)(lVar7 + 0x43) == '\0') {
      if ((cVar4 != '\0') ||
         ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_00512370;
    }
    else if ((cVar4 != '\0') && (*(int *)(lVar7 + 0x44) < *(int *)(lVar6 + 0x44))) {
LAB_00512370:
      *param_2 = lVar7;
      *param_3 = lVar6;
      return 2;
    }
  }
  else {
    if (cVar4 == '\0') {
      bVar1 = false;
      lVar10 = *param_3;
      cVar5 = *(char *)(lVar10 + 0x43);
    }
    else {
      iVar8 = *(int *)(lVar7 + 0x44);
      iVar9 = *(int *)(lVar6 + 0x44);
LAB_00512248:
      bVar1 = iVar8 < iVar9;
      lVar10 = *param_3;
      cVar5 = *(char *)(lVar10 + 0x43);
    }
    if (cVar5 != '\0') goto LAB_0051225c;
LAB_005121f8:
    if (cVar3 == '\0') {
      bVar2 = (int)((ulong)(lVar10 - *(long *)(*(long *)(lVar10 + 0x50) + 0x28)) >> 3) * 0x286bca1b
              < (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b;
      goto joined_r0x005122f0;
    }
    if (bVar1) goto LAB_00512278;
LAB_005122f8:
    *param_2 = lVar10;
    *param_3 = lVar7;
    lVar7 = *param_2;
    lVar6 = *param_1;
    if (*(char *)(lVar7 + 0x43) == '\0') {
      if ((*(char *)(lVar6 + 0x43) != '\0') ||
         ((int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x50) + 0x28)) >> 3) * 0x286bca1b <
          (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x50) + 0x28)) >> 3) * 0x286bca1b))
      goto LAB_005123bc;
    }
    else if ((*(char *)(lVar6 + 0x43) != '\0') && (*(int *)(lVar7 + 0x44) < *(int *)(lVar6 + 0x44)))
    {
LAB_005123bc:
      *param_1 = lVar7;
      *param_2 = lVar6;
      return 2;
    }
  }
  return 1;
}


