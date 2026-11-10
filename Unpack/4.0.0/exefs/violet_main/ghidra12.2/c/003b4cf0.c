/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b4cf0; name: FUN_003b4cf0
 */


void FUN_003b4cf0(uint *param_1)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  
  lVar8 = *(long *)(param_1 + 0x154);
  if (lVar8 == 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x2a);
  if ((*(long *)(lVar8 + 8) == 0) && (*(long *)(lVar8 + 0x10) == 0)) {
    bVar5 = *(int *)(lVar8 + 0x18) != 0;
  }
  else {
    bVar5 = true;
  }
  if (*(long *)(lVar8 + 0x110) == 0) {
    bVar3 = true;
    lVar10 = *(long *)(lVar8 + 0xe8);
  }
  else {
    bVar3 = *(long *)(lVar8 + 0x118) == 0;
    lVar10 = *(long *)(lVar8 + 0xe8);
  }
  if (lVar10 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(long *)(lVar8 + 0xf0) == 0;
  }
  uVar9 = (ulong)*(uint *)(lVar12 + 0x310) & 1;
  uVar7 = 0;
  if (!(bool)(bVar3 & bVar4)) {
    uVar7 = 0x80;
  }
  if ((*(long *)(lVar8 + 0xc0) == 0) || (*(long *)(lVar8 + 200) == 0)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    uVar7 = uVar7 | 0x20;
  }
  uVar11 = 0;
  if (!(bool)(bVar3 & bVar4 & bVar2)) {
    uVar11 = 0x10;
  }
  uVar11 = uVar11 | uVar9;
  uVar1 = uVar11 | 2;
  if (!bVar5) {
    uVar1 = uVar11;
  }
  if (((int)uVar9 != 0) ||
     ((((*(long *)(lVar8 + 0x48) != 0 && (*(long *)(lVar8 + 0x50) != 0)) &&
       ((*(byte *)(lVar12 + 0x315) & 1) != 0)) && (*param_1 == 0x303)))) {
    uVar7 = uVar7 | 1;
  }
  uVar7 = uVar7 | (*(uint *)(lVar12 + 0x318) & 1) << 1;
  uVar13 = uVar7 | 4;
  if ((*(uint *)(lVar12 + 0x31c) & 1) != 0) {
    uVar6 = FUN_00499a30(*(undefined8 *)(lVar8 + 0x98));
    if ((*(byte *)(lVar12 + 0x31c) & 2) != 0 && (uVar6 & 0x80) != 0) {
      uVar13 = uVar7 | 0xc;
    }
  }
  if ((((uVar13 >> 3 & 1) == 0) && (*(long *)(*(long *)(param_1 + 0x154) + 0x138) != 0)) &&
     ((*(long *)(*(long *)(param_1 + 0x154) + 0x140) != 0 &&
      (((*(byte *)(lVar12 + 0x32d) & 1) != 0 && ((*param_1 & 0xffffff00) == 0x300)))))) {
    uVar7 = uVar13 | 8;
    if (*param_1 != 0x303) {
      uVar7 = uVar13;
    }
    uVar13 = uVar7;
  }
  if (((((uVar13 >> 3 & 1) == 0) && (*(long *)(*(long *)(param_1 + 0x154) + 0x160) != 0)) &&
      (*(long *)(*(long *)(param_1 + 0x154) + 0x168) != 0)) &&
     (((*(byte *)(lVar12 + 0x331) & 1) != 0 && ((*param_1 & 0xffffff00) == 0x300)))) {
    uVar7 = uVar13 | 8;
    if (*param_1 != 0x303) {
      uVar7 = uVar13;
    }
    uVar13 = uVar7;
  }
  uVar7 = 0xc;
  if ((uVar1 & 1) != 0) {
    uVar7 = 0x4c;
  }
  lVar8 = *(long *)(param_1 + 0x2a);
  *(uint *)(lVar8 + 0x334) = (uint)uVar1 | ((uint)(uVar1 >> 1) & 1) << 8 | uVar7 | 0x80;
  *(uint *)(lVar8 + 0x338) = uVar13 | 0x10;
  return;
}


