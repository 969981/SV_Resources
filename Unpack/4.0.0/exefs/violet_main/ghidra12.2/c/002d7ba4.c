/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002d7ba4; name: FUN_002d7ba4
 */


undefined8
FUN_002d7ba4(long *param_1,long *param_2,long *param_3,byte param_4,byte param_5,undefined8 *param_6
            ,int param_7)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  lVar9 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = lVar9;
  lVar9 = *param_3;
  param_1[4] = param_3[1];
  param_1[3] = lVar9;
  if (param_1[3] == 0) {
    lVar9 = *param_2;
    param_1[4] = param_2[1];
    param_1[3] = lVar9;
    pcVar8 = (char *)*param_1;
    cVar10 = *pcVar8;
    if (cVar10 == '\0') goto LAB_002d7c20;
  }
  else {
    pcVar8 = (char *)*param_1;
    cVar10 = *pcVar8;
    if (cVar10 == '\0') {
      cVar10 = '\0';
      goto LAB_002d7c20;
    }
  }
  if (param_1[3] != *param_2) {
    return 0;
  }
LAB_002d7c20:
  cVar3 = pcVar8[1];
  if ((cVar3 == '\0') || (param_1[3] + param_1[4] == *param_2 + param_2[1])) {
    *(char *)((long)param_1 + 0x2a) = cVar3;
    *(byte *)((long)param_1 + 0x29) = cVar3 != '\0' | param_5 & 1;
    *(byte *)(param_1 + 5) = cVar10 != '\0' | param_4 & 1;
    param_1[6] = (long)param_6;
    *(int *)(param_1 + 7) = param_7;
    if (0 < param_7) {
      *param_6 = 0;
      param_6[1] = 0;
      if (1 < (int)param_1[7]) {
        lVar9 = 1;
        lVar12 = 0x10;
        do {
          lVar13 = param_1[6];
          lVar9 = lVar9 + 1;
          *(undefined8 *)(lVar13 + lVar12) = 0;
          ((undefined8 *)(lVar13 + lVar12))[1] = 0;
          lVar12 = lVar12 + 0x10;
        } while (lVar9 < (int)param_1[7]);
      }
      pcVar8 = (char *)*param_1;
    }
    iVar4 = ((int)param_2[1] + 1) * *(int *)(pcVar8 + 0x28);
    iVar1 = iVar4 + 0x3f;
    iVar4 = iVar4 + 0x7e;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    uVar11 = iVar4 >> 6;
    uVar14 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar14);
    lVar9 = param_1[8];
    param_1[8] = (long)pvVar5;
    if (lVar9 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
      pvVar5 = (void *)param_1[8];
    }
    *(uint *)(param_1 + 9) = uVar11;
    memset(pvVar5,0,uVar14);
    uVar11 = param_7 * 2;
    if ((int)uVar11 < 3) {
      uVar11 = 2;
    }
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,(ulong)uVar11 << 3);
    lVar9 = param_1[10];
    param_1[10] = (long)pvVar5;
    if (lVar9 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
      pvVar5 = (void *)param_1[10];
    }
    *(uint *)(param_1 + 0xb) = uVar11;
    memset(pvVar5,0,(ulong)uVar11 << 3);
    lVar9 = FUN_0049e770(PTR_FUN_047cba38,0x400);
    lVar12 = param_1[0xc];
    param_1[0xc] = lVar9;
    if (lVar12 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    *(undefined4 *)(param_1 + 0xd) = 0x40;
    pvVar5 = (void *)*param_2;
    if ((char)param_1[5] != '\0') {
      *(void **)param_1[10] = pvVar5;
      uVar6 = FUN_002d774c(param_1,*(undefined4 *)(*param_1 + 8),*param_2);
      return uVar6;
    }
    if (-1 < param_2[1]) {
      pvVar2 = (void *)((long)pvVar5 + param_2[1]);
      while( true ) {
        if (pvVar5 < pvVar2) {
          lVar9 = *param_1;
          if (*(long *)(lVar9 + 0x18) != 0) {
            if (*(long *)(lVar9 + 0x18) == 1) {
              pvVar7 = memchr(pvVar5,*(int *)(lVar9 + 0x20),(long)pvVar2 - (long)pvVar5);
            }
            else {
              pvVar7 = (void *)FUN_002d3628(lVar9,pvVar5);
            }
            pvVar5 = pvVar2;
            if (pvVar7 != (void *)0x0) {
              pvVar5 = pvVar7;
            }
          }
        }
        *(void **)param_1[10] = pvVar5;
        uVar14 = FUN_002d774c(param_1,*(undefined4 *)(*param_1 + 8),pvVar5);
        if ((uVar14 & 1) != 0) break;
        if ((pvVar5 == (void *)0x0) || (pvVar5 = (void *)((long)pvVar5 + 1), pvVar2 < pvVar5)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}


