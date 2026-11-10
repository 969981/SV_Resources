/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033cd780; name: FUN_033cd780
 */


undefined8 FUN_033cd780(int param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_60 [40];
  uint local_38;
  uint local_34;
  int iStack_30;
  
  uVar5 = (ulong)param_2;
  if (param_1 == 1) {
    uVar2 = param_2 >> 1;
    uVar5 = (ulong)uVar2;
    if (uVar2 * -0x55555555 < 0x55555556) {
      iVar6 = 1;
      iVar7 = 1;
      uVar8 = uVar5;
      do {
        uVar5 = uVar8 / 3;
        uVar1 = uVar8 / 3;
        iVar7 = iVar7 * 3;
        iVar6 = iVar6 + 1;
        uVar8 = uVar5;
      } while ((uint)((int)uVar1 * -0x55555555) < 0x55555556);
    }
    else {
      iVar6 = 1;
      iVar7 = 1;
    }
    if ((uVar5 & 3) == 0) {
      iVar10 = 0;
      uVar8 = uVar5;
      do {
        uVar5 = uVar8 >> 2;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 << 2;
        uVar1 = uVar8 & 0xc;
        uVar8 = uVar5;
      } while (uVar1 == 0);
    }
    else {
      iVar10 = 0;
    }
    if ((uint)((int)uVar5 * -0x33333333) < 0x33333334) {
      iVar9 = 0;
      uVar8 = uVar5;
      do {
        uVar5 = uVar8 / 5;
        uVar1 = uVar8 / 5;
        iVar7 = iVar7 * 5;
        iVar9 = iVar9 + 1;
        uVar8 = uVar5;
      } while ((uint)((int)uVar1 * -0x33333333) < 0x33333334);
    }
    else {
      iVar9 = 0;
    }
    bVar3 = iVar7 << (ulong)(iVar10 != 0 && (uVar5 & 1) == 0) == uVar2;
    iVar10 = iVar10 + iVar6;
  }
  else {
    if (param_2 * -0x55555555 < 0x55555556) {
      iVar6 = 0;
      iVar7 = 1;
      uVar8 = (ulong)param_2;
      do {
        uVar5 = uVar8 / 3;
        uVar1 = uVar8 / 3;
        iVar7 = iVar7 * 3;
        iVar6 = iVar6 + 1;
        uVar8 = uVar5;
      } while ((uint)((int)uVar1 * -0x55555555) < 0x55555556);
    }
    else {
      iVar6 = 0;
      iVar7 = 1;
    }
    if ((uVar5 & 3) == 0) {
      iVar10 = 0;
      uVar8 = uVar5;
      do {
        uVar5 = uVar8 >> 2;
        iVar10 = iVar10 + 1;
        iVar7 = iVar7 << 2;
        uVar1 = uVar8 & 0xc;
        uVar8 = uVar5;
      } while (uVar1 == 0);
    }
    else {
      iVar10 = 0;
    }
    if ((uint)((int)uVar5 * -0x33333333) < 0x33333334) {
      iVar9 = 0;
      uVar8 = uVar5;
      do {
        uVar5 = uVar8 / 5;
        uVar1 = uVar8 / 5;
        iVar7 = iVar7 * 5;
        iVar9 = iVar9 + 1;
        uVar8 = uVar5;
      } while ((uint)((int)uVar1 * -0x33333333) < 0x33333334);
    }
    else {
      iVar9 = 0;
    }
    bVar3 = iVar7 << (ulong)(iVar10 != 0 && (uVar5 & 1) == 0) == param_2;
    iVar10 = iVar10 + iVar6;
  }
  local_38 = iVar10 + iVar9 + (uint)!bVar3;
  if (local_38 == 0) {
    return 0;
  }
  uVar5 = (ulong)local_38;
  local_34 = param_2;
  iStack_30 = param_1;
  FUN_033cd3b0(auStack_60 + -(uVar5 * 4 + 0xf & 0x7fffffff0));
  uVar4 = FUN_033cd650(auStack_60,auStack_60 + -(uVar5 * 4 + 0xf & 0x7fffffff0));
  return uVar4;
}


