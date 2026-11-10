/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c86b08; name: FUN_00c86b08
 */


undefined8 FUN_00c86b08(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  char cVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  
  if (param_2 == 0) {
    cVar9 = -1;
  }
  else {
    uVar7 = param_2 | param_2 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = uVar7 | uVar7 >> 0x20;
    uVar7 = (uVar7 >> 1 & 0x5555555555555555) + (uVar7 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = (uVar7 >> 4 & 0x707070707070707) + (uVar7 & 0x707070707070707);
    uVar7 = (uVar7 >> 8 & 0xf000f000f000f) + (uVar7 & 0xf000f000f000f);
    lVar12 = (uVar7 >> 0x10 & 0x1f0000001f) + (uVar7 & 0x1f0000001f);
    cVar9 = (char)((ulong)lVar12 >> 0x20) + (char)lVar12 + -1;
  }
  uVar4 = (uint)cVar9;
  uVar7 = (uint)~(-1 << (ulong)(uVar4 & 0x1f)) & param_2;
  uVar1 = (uint)(uVar7 << ((ulong)(5 - (int)cVar9) & 0x3f));
  if (4 < (int)uVar4) {
    uVar1 = (uint)(uVar7 >> ((ulong)(uVar4 - 5) & 0x3f));
  }
  cVar3 = (char)uVar1 >> 5;
  if ((uVar1 & 0xff) < 0x20) {
    cVar3 = '\0';
  }
  iVar5 = (int)(char)(cVar3 + cVar9);
  lVar12 = (long)(char)(cVar3 + cVar9) + -3;
  if ((uint)lVar12 < 5) {
    lVar12 = *(long *)(&DAT_03d64c50 + lVar12 * 8);
  }
  else {
    lVar12 = -0x81;
  }
  uVar4 = (uVar1 & 0x1f) >> (ulong)(8U - iVar5 & 0x1f);
  if (7 < iVar5) {
    uVar4 = uVar1 & 0x1f;
  }
  uVar7 = ((ulong)uVar4 & 0x1f | (long)(iVar5 + -3) << 5) + lVar12;
  if (((uVar7 < (ulong)param_1[4]) && (lVar12 = *param_1, lVar12 != 0)) &&
     (plVar2 = (long *)(lVar12 + uVar7 * 0x20), plVar8 = (long *)plVar2[3],
     plVar8 != plVar2 && plVar8 != (long *)0x0)) {
    if (param_2 <= *plVar8 - (ulong)*(byte *)((long)plVar8 + 0xd)) {
LAB_00c86c58:
      lVar12 = param_3;
      if ((param_4 & 1) == 0) {
        lVar12 = 0;
      }
      uVar6 = FUN_00c8701c(param_1,plVar8,param_2 - lVar12,param_3);
      return uVar6;
    }
    uVar1 = uVar1 + 1;
    cVar3 = (char)((int)(uVar1 * 0x1000000) >> 0x1d);
    if ((uVar1 & 0xff) < 0x20) {
      cVar3 = '\0';
    }
    iVar5 = (int)(char)(cVar3 + cVar9);
    lVar11 = (long)(char)(cVar3 + cVar9) + -3;
    if ((uint)lVar11 < 5) {
      lVar11 = *(long *)(&DAT_03d64c50 + lVar11 * 8);
    }
    else {
      lVar11 = -0x81;
    }
    uVar4 = (uVar1 & 0x1f) >> (ulong)(8U - iVar5 & 0x1f);
    if (7 < iVar5) {
      uVar4 = uVar1 & 0x1f;
    }
    uVar7 = ((ulong)uVar4 & 0x1f | (long)(iVar5 + -3) << 5) + lVar11;
    if (uVar7 < (ulong)param_1[4]) {
      plVar2 = (long *)(lVar12 + uVar7 * 0x20);
      plVar10 = (long *)plVar2[3];
      plVar8 = (long *)0x0;
      if (plVar10 != plVar2) {
        plVar8 = plVar10;
      }
      if (plVar8 != (long *)0x0) goto LAB_00c86c58;
    }
  }
  return 0;
}


