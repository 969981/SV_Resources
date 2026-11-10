/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b10628; name: FUN_00b10628
 */


long FUN_00b10628(char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  
  iVar14 = (int)*param_1;
  if (*param_1 < -0x40) {
    iVar14 = -0x7c;
  }
  lVar6 = FUN_0111b030(iVar14);
  uVar4 = *(ushort *)(param_1 + 2);
  uVar15 = 0xffffff84;
  if ((uint)uVar4 != ((int)(char)uVar4 & 0xffffU)) {
    uVar15 = 0xffffff85;
  }
  uVar2 = (uint)uVar4;
  if (0xbf < (ushort)(uVar4 + 0x40)) {
    uVar2 = uVar15;
  }
  lVar7 = FUN_0111b030(uVar2);
  iVar3 = *(int *)(param_1 + 4);
  iVar14 = -0x7b;
  if (iVar3 != (short)iVar3) {
    iVar14 = -0x7a;
  }
  iVar1 = 0x84;
  if (iVar3 != (char)iVar3) {
    iVar1 = iVar14;
  }
  if (iVar3 + 0x40U < 0xc0) {
    iVar1 = iVar3;
  }
  lVar8 = FUN_0111b030(iVar1);
  uVar4 = *(ushort *)(param_1 + 8);
  uVar15 = 0xffffff84;
  if ((uint)uVar4 != ((int)(char)uVar4 & 0xffffU)) {
    uVar15 = 0xffffff85;
  }
  uVar2 = (uint)uVar4;
  if (0xbf < (ushort)(uVar4 + 0x40)) {
    uVar2 = uVar15;
  }
  lVar9 = FUN_0111b030(uVar2);
  iVar14 = *(int *)(param_1 + 0xc);
  if (0xbf < iVar14 + 0x40U) {
    if (iVar14 == (char)iVar14) {
      iVar14 = 0x84;
    }
    else {
      bVar5 = iVar14 != (short)iVar14;
      iVar14 = -0x7b;
      if (bVar5) {
        iVar14 = -0x7a;
      }
    }
  }
  lVar10 = FUN_0111b030(iVar14);
  iVar14 = *(int *)(param_1 + 0x10);
  if (0xbf < iVar14 + 0x40U) {
    if (iVar14 == (char)iVar14) {
      iVar14 = 0x84;
    }
    else {
      bVar5 = iVar14 != (short)iVar14;
      iVar14 = -0x7b;
      if (bVar5) {
        iVar14 = -0x7a;
      }
    }
  }
  lVar11 = FUN_0111b030(iVar14);
  iVar14 = (int)param_1[0x14];
  if (param_1[0x14] < -0x40) {
    iVar14 = -0x7c;
  }
  lVar12 = FUN_0111b030(iVar14);
  iVar14 = (int)param_1[0x15];
  if (param_1[0x15] < -0x40) {
    iVar14 = -0x7c;
  }
  lVar13 = FUN_0111b030(iVar14);
  return lVar7 + lVar6 + lVar8 + lVar9 + lVar10 + lVar11 + lVar12 + lVar13;
}


