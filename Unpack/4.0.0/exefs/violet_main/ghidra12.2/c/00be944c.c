/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00be944c; name: FUN_00be944c
 */


uint FUN_00be944c(long param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  int *piVar9;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (iVar4 != -1) {
switchD_00be94ac_default:
    lVar6 = 0;
    if (iVar4 != -1) {
      lVar6 = param_2 + iVar4;
    }
    if (*(char *)(param_3 + 0x44) == '\0') {
      plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    uVar2 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
    uVar5 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar5 = uVar2;
    }
    return *(uint *)(lVar6 + (long)((int)uVar5 >> 5) * 4) >> (ulong)(uVar2 & 0x1f) & 1;
  }
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(param_3 + 0x3c) * 4)) {
  case 1:
  case 3:
  case 8:
    lVar6 = *(long *)(param_3 + 0x58);
    if (lVar6 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
LAB_00be9880:
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    else {
      lVar6 = lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40) >> 4;
      uVar7 = lVar6 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar6 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar7;
        goto LAB_00be9880;
      }
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
    }
    uVar5 = *(uint *)(param_2 + *piVar9);
    break;
  case 2:
  case 4:
    goto switchD_00be94ac_caseD_2;
  case 5:
    lVar6 = *(long *)(param_3 + 0x58);
    if (lVar6 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
LAB_00be99a4:
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    else {
      lVar6 = lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40) >> 4;
      uVar7 = lVar6 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar6 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar7;
        goto LAB_00be99a4;
      }
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
    }
    bVar3 = *(double *)(param_2 + *piVar9) == 0.0;
    goto LAB_00be9ad8;
  case 6:
    lVar6 = *(long *)(param_3 + 0x58);
    if (lVar6 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
LAB_00be99d0:
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    else {
      lVar6 = lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40) >> 4;
      uVar7 = lVar6 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar6 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar7;
        goto LAB_00be99d0;
      }
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
    }
    bVar3 = *(float *)(param_2 + *piVar9) == 0.0;
    goto LAB_00be9ad8;
  case 7:
    lVar6 = *(long *)(param_3 + 0x58);
    if (lVar6 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
LAB_00be99fc:
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    else {
      lVar6 = lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40) >> 4;
      uVar7 = lVar6 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar6 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar7;
        goto LAB_00be99fc;
      }
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
    }
    uVar5 = (uint)*(byte *)(param_2 + *piVar9);
    break;
  case 9:
    lVar6 = *(long *)(param_3 + 0x58);
    if (lVar6 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
LAB_00be9a28:
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    else {
      lVar6 = lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40) >> 4;
      uVar7 = lVar6 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar6 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar7;
        goto LAB_00be9a28;
      }
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
    }
    bVar1 = **(byte **)(param_2 + *piVar9);
    if ((bVar1 & 1) == 0) {
      uVar7 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar7 = *(ulong *)(*(byte **)(param_2 + *piVar9) + 8);
    }
    goto LAB_00be991c;
  case 10:
    if ((*(int *)(param_1 + 0x3c) != -1) && (*(char *)(param_2 + *(int *)(param_1 + 0x3c)) != '\0'))
    {
      return 0;
    }
switchD_00be94ac_caseD_2:
    lVar6 = *(long *)(param_3 + 0x58);
    if (lVar6 == 0) {
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      iVar4 = (int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39;
LAB_00be98ac:
      piVar9 = (int *)(*(long *)(param_1 + 0x20) + (long)iVar4 * 4);
    }
    else {
      lVar6 = lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x40) >> 4;
      uVar7 = lVar6 * -0x5555555555555555;
      if (*(int *)(param_2 + *(int *)(param_1 + 0x2c) +
                  (-(uVar7 >> 0x1f & 1) & 0xfffffffc00000000 |
                  lVar6 * -0x5555555555555554 & 0x3fffffffcU)) == *(int *)(param_3 + 0x38)) {
        iVar4 = *(int *)(*(long *)(param_1 + 8) + 0x2c) + (int)uVar7;
        goto LAB_00be98ac;
      }
      param_2 = *(long *)(param_1 + 0x18);
      if (*(char *)(param_3 + 0x44) == '\0') {
        plVar8 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
      }
      else if (*(long *)(param_3 + 0x60) == 0) {
        plVar8 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
      }
      else {
        plVar8 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
      }
      piVar9 = (int *)(*(long *)(param_1 + 0x20) +
                      ((long)((ulong)(uint)((int)((ulong)(param_3 - *plVar8) >> 4) * 0x38e38e39) <<
                             0x20) >> 0x1e));
    }
    uVar7 = *(ulong *)(param_2 + *piVar9);
LAB_00be991c:
    bVar3 = uVar7 == 0;
    goto LAB_00be9ad8;
  default:
    goto switchD_00be94ac_default;
  }
  bVar3 = uVar5 == 0;
LAB_00be9ad8:
  return (uint)!bVar3;
}


