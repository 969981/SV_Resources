/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c86d00; name: FUN_00c86d00
 */


long FUN_00c86d00(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  
  if (param_2 == 0) {
    cVar5 = -1;
  }
  else {
    uVar6 = param_2 | param_2 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    uVar6 = (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = (uVar6 >> 4 & 0x707070707070707) + (uVar6 & 0x707070707070707);
    uVar6 = (uVar6 >> 8 & 0xf000f000f000f) + (uVar6 & 0xf000f000f000f);
    lVar8 = (uVar6 >> 0x10 & 0x1f0000001f) + (uVar6 & 0x1f0000001f);
    cVar5 = (char)((ulong)lVar8 >> 0x20) + (char)lVar8 + -1;
  }
  uVar3 = (uint)cVar5;
  param_2 = (uint)~(-1 << (ulong)(uVar3 & 0x1f)) & param_2;
  cVar9 = (char)(param_2 << ((ulong)(5 - (int)cVar5) & 0x3f));
  if (4 < (int)uVar3) {
    cVar9 = (char)(param_2 >> ((ulong)(uVar3 - 5) & 0x3f));
  }
  uVar3 = -1 << (ulong)((int)cVar9 + 1U & 0x1f) & *(uint *)(param_1[2] + (long)cVar5 * 4);
  if ((int)cVar9 + 1U < 0x20 && uVar3 != 0) {
    uVar6 = (ulong)uVar3 | (ulong)uVar3 << 1;
    uVar6 = uVar6 | uVar6 << 2;
    uVar6 = uVar6 | uVar6 << 4;
    uVar6 = uVar6 | uVar6 << 8;
    uVar6 = uVar6 | uVar6 << 0x10;
    uVar6 = uVar6 | uVar6 << 0x20;
    uVar6 = (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = (uVar6 >> 4 & 0x707070707070707) + (uVar6 & 0x707070707070707);
    uVar6 = (uVar6 >> 8 & 0xf000f000f000f) + (uVar6 & 0xf000f000f000f);
    lVar8 = (uVar6 >> 0x10 & 0x1f0000001f) + (uVar6 & 0x1f0000001f);
    uVar3 = 0x40 - ((int)((ulong)lVar8 >> 0x20) + (int)lVar8);
    cVar9 = (char)((int)(uVar3 * 0x1000000) >> 0x1d);
    uVar6 = (ulong)(uVar3 & 0x1f);
    if ((uVar3 & 0xff) < 0x20) {
      cVar9 = '\0';
    }
  }
  else {
    uVar6 = param_1[3] & -1L << ((ulong)((int)cVar5 + 1) & 0x3f);
    if (uVar6 == 0) {
      return 0;
    }
    uVar6 = uVar6 | uVar6 << 1;
    uVar6 = uVar6 | uVar6 << 2;
    uVar6 = uVar6 | uVar6 << 4;
    uVar6 = uVar6 | uVar6 << 8;
    uVar6 = uVar6 | uVar6 << 0x10;
    uVar6 = uVar6 | uVar6 << 0x20;
    uVar6 = (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = (uVar6 >> 4 & 0x707070707070707) + (uVar6 & 0x707070707070707);
    uVar6 = (uVar6 >> 8 & 0xf000f000f000f) + (uVar6 & 0xf000f000f000f);
    lVar8 = (uVar6 >> 0x10 & 0x1f0000001f) + (uVar6 & 0x1f0000001f);
    cVar5 = '@' - ((char)((ulong)lVar8 >> 0x20) + (char)lVar8);
    uVar3 = *(uint *)(param_1[2] + (long)cVar5 * 4);
    if (uVar3 == 0) {
      cVar9 = -1;
      uVar6 = 0x1f;
    }
    else {
      uVar6 = (ulong)uVar3 | (ulong)uVar3 << 1;
      uVar6 = uVar6 | uVar6 << 2;
      uVar6 = uVar6 | uVar6 << 4;
      uVar6 = uVar6 | uVar6 << 8;
      uVar6 = uVar6 | uVar6 << 0x10;
      uVar6 = uVar6 | uVar6 << 0x20;
      uVar6 = (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555);
      uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
      uVar6 = (uVar6 >> 4 & 0x707070707070707) + (uVar6 & 0x707070707070707);
      uVar6 = (uVar6 >> 8 & 0xf000f000f000f) + (uVar6 & 0xf000f000f000f);
      lVar8 = (uVar6 >> 0x10 & 0x1f0000001f) + (uVar6 & 0x1f0000001f);
      uVar3 = 0x40 - ((int)((ulong)lVar8 >> 0x20) + (int)lVar8);
      uVar6 = (ulong)(uVar3 & 0x1f);
      if ((uVar3 & 0xff) < 0x20) {
        cVar9 = '\0';
      }
      else {
        cVar9 = (char)((int)(uVar3 * 0x1000000) >> 0x1d);
      }
    }
  }
  iVar4 = (int)(char)(cVar9 + cVar5);
  lVar8 = (long)(char)(cVar9 + cVar5) + -3;
  if ((uint)lVar8 < 5) {
    lVar8 = *(long *)(&DAT_03d64c50 + lVar8 * 8);
  }
  else {
    lVar8 = -0x81;
  }
  uVar1 = (ulong)((uint)uVar6 >> (ulong)(8U - iVar4 & 0x1f));
  if (7 < iVar4) {
    uVar1 = uVar6;
  }
  uVar6 = (uVar1 & 0x1f | (long)(iVar4 + -3) << 5) + lVar8;
  if (((ulong)param_1[4] <= uVar6) || (*param_1 == 0)) {
    return 0;
  }
  lVar8 = *param_1 + uVar6 * 0x20;
  lVar7 = *(long *)(lVar8 + 0x18);
  lVar2 = 0;
  if (lVar7 != lVar8) {
    lVar2 = lVar7;
  }
  return lVar2;
}


