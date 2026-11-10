/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026f7244; name: FUN_026f7244
 */


long FUN_026f7244(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  
  uVar5 = param_1[3];
  if ((uVar5 != 0) &&
     (uVar5 = uVar5 | uVar5 >> 1, uVar5 = uVar5 | uVar5 >> 2, uVar5 = uVar5 | uVar5 >> 4,
     uVar5 = uVar5 | uVar5 >> 8, uVar5 = uVar5 | uVar5 >> 0x10, uVar5 = uVar5 | uVar5 >> 0x20,
     uVar5 = (uVar5 >> 1 & 0x5555555555555555) + (uVar5 & 0x5555555555555555),
     uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333),
     uVar5 = (uVar5 >> 4 & 0x707070707070707) + (uVar5 & 0x707070707070707),
     uVar5 = (uVar5 >> 8 & 0xf000f000f000f) + (uVar5 & 0xf000f000f000f),
     lVar8 = (uVar5 >> 0x10 & 0x1f0000001f) + (uVar5 & 0x1f0000001f),
     iVar1 = (int)((ulong)lVar8 >> 0x20) + (int)lVar8, iVar1 != 0)) {
    iVar1 = iVar1 + -1;
    uVar4 = *(uint *)(param_1[2] + (long)iVar1 * 4);
    if (uVar4 == 0) {
      cVar7 = -1;
      uVar5 = 0x1f;
    }
    else {
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar5 = ((ulong)(uVar4 >> 1) & 0x5555555555555555) + ((ulong)uVar4 & 0x5555555555555555);
      uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
      uVar5 = (uVar5 >> 4 & 0x707070707070707) + (uVar5 & 0x707070707070707);
      uVar5 = (uVar5 >> 8 & 0xf000f000f000f) + (uVar5 & 0xf000f000f000f);
      uVar4 = (int)((uVar5 >> 0x10) + (uVar5 & 0x1f0000001f)) - 1;
      uVar5 = (ulong)(uVar4 & 0x1f);
      if ((uVar4 & 0xff) < 0x20) {
        cVar7 = '\0';
      }
      else {
        cVar7 = (char)((int)uVar4 >> 5);
      }
    }
    cVar7 = cVar7 + (char)iVar1;
    iVar1 = (int)cVar7;
    lVar8 = (long)cVar7 + -3;
    if ((uint)lVar8 < 5) {
      lVar8 = *(long *)(&DAT_03d64c50 + lVar8 * 8);
    }
    else {
      lVar8 = -0x81;
    }
    uVar2 = (ulong)((uint)uVar5 >> (ulong)(8U - iVar1 & 0x1f));
    if (7 < iVar1) {
      uVar2 = uVar5;
    }
    uVar5 = (uVar2 & 0x1f | (long)(iVar1 + -3) << 5) + lVar8;
    if ((uVar5 < (ulong)param_1[4]) && (*param_1 != 0)) {
      lVar8 = *param_1 + uVar5 * 0x20;
      lVar6 = *(long *)(lVar8 + 0x18);
      lVar3 = 0;
      if (lVar6 != lVar8) {
        lVar3 = lVar6;
      }
      return lVar3;
    }
  }
  return 0;
}


