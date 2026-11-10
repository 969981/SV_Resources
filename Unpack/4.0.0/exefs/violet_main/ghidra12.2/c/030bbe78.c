/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030bbe78; name: FUN_030bbe78
 */


undefined8
FUN_030bbe78(long param_1,undefined8 param_2,ulong param_3,uint param_4,undefined8 param_5,
            uint param_6,long param_7,undefined8 param_8,undefined8 param_9,uint *param_10)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar9;
  long lVar10;
  byte bVar11;
  uint uVar12;
  
  *param_10 = 0;
  if ((int)param_6 < 1) {
    return 0;
  }
  if (param_6 == 1) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    do {
      piVar1 = (int *)(param_7 + uVar6 * 4);
      uVar5 = (uint)uVar6;
      uVar6 = uVar6 + 2;
      uVar12 = 0;
      if (*piVar1 != -1) {
        uVar12 = 1 << (ulong)(uVar5 & 0x1f);
      }
      uVar2 = 0;
      if (piVar1[1] != -1) {
        uVar2 = 1 << (ulong)(uVar5 + 1 & 0x1f);
      }
      uVar7 = uVar2 | uVar12 | uVar7;
    } while (((ulong)param_6 & 0xfffffffe) != uVar6);
  }
  if ((param_6 & 1) != 0) {
    uVar12 = 0;
    if (*(int *)(param_7 + uVar6 * 4) != -1) {
      uVar12 = 1 << (ulong)((uint)uVar6 & 0x1f);
    }
    uVar7 = uVar12 | uVar7;
  }
  if ((int)param_4 < 1) {
    return 0;
  }
  if ((uint)param_3 == 0xffffffff) {
    return 0;
  }
  if ((int)param_6 < 1) {
    return 0;
  }
  if (param_4 != param_6) {
    return 0;
  }
  if (uVar7 == 0) {
    return 0;
  }
  uVar12 = (uint)param_3 >> 0x16;
  bVar9 = true;
  bVar8 = 1;
  bVar11 = 1;
  if (*(int *)(param_1 + 0x40) <= (int)uVar12) goto LAB_030bbfb0;
  lVar10 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar12 * 0x100);
  if (lVar10 == 0) {
    bVar9 = true;
LAB_030bbfa8:
    bVar8 = 1;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x20);
    if (*(int *)(lVar10 + 0xd8) + *(int *)(lVar10 + 0x20) <= (int)(param_3 & 0x3fffff)) {
      bVar9 = false;
      goto LAB_030bbfa8;
    }
    if ((*(int *)(lVar10 + 0x108) == 0) ||
       ((*(byte *)(*(long *)(lVar10 + 0x100) + (param_3 & 0x3fffff)) & 1) == 0)) {
      bVar9 = false;
      bVar8 = 0;
      bVar11 = 0;
      goto LAB_030bbfb0;
    }
    bVar9 = false;
    bVar8 = 0;
  }
  bVar11 = 1;
LAB_030bbfb0:
  uVar6 = 0;
  uVar12 = 0;
  uVar5 = 0;
  uVar2 = 0;
  do {
    uVar4 = *(uint *)(param_7 + uVar6 * 4);
    if (uVar4 != 0xffffffff) {
      if (((int)(uVar4 >> 0x16) < *(int *)(param_1 + 0x40)) &&
         (lVar10 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar4 >> 0x16) * 0x100),
         lVar10 != 0)) {
        lVar10 = *(long *)(lVar10 + 0x20);
        uVar3 = (uint)uVar6;
        if ((int)((ulong)uVar4 & 0x3fffff) < *(int *)(lVar10 + 0xd8) + *(int *)(lVar10 + 0x20)) {
          if ((*(int *)(lVar10 + 0x108) == 0) ||
             ((*(byte *)(*(long *)(lVar10 + 0x100) + ((ulong)uVar4 & 0x3fffff)) & 1) == 0)) {
            uVar4 = 1 << (ulong)(uVar3 & 0x1f);
            uVar12 = uVar4 | uVar12;
            uVar5 = uVar4 | uVar5;
          }
          else {
            uVar3 = 1 << (ulong)(uVar3 & 0x1f);
            uVar4 = 0;
            uVar12 = uVar3 | uVar12;
            uVar5 = uVar3 | uVar5;
          }
        }
        else {
          uVar4 = 0;
          uVar12 = 1 << (ulong)(uVar3 & 0x1f) | uVar12;
        }
      }
      else {
        uVar4 = 0;
      }
      uVar2 = uVar4 | uVar2;
    }
    uVar6 = uVar6 + 1;
  } while (param_6 != uVar6);
  if (bVar9) {
    return 0;
  }
  if ((bool)(bVar11 | uVar2 == 0)) {
    return 0;
  }
  if (uVar5 == 0) {
    return 0;
  }
  if ((bool)(bVar8 | uVar12 == 0)) {
    return 0;
  }
  *param_10 = uVar2 & uVar7 & uVar5 & uVar12;
  return 1;
}


