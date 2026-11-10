/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6c4dc; name: FUN_00c6c4dc
 */


void FUN_00c6c4dc(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  FUN_00c6c688();
  uVar7 = *param_2 - (ulong)*(byte *)((long)param_2 + 0xd);
  if (uVar7 != 0) {
    uVar6 = uVar7 | uVar7 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = uVar6 | uVar6 >> 0x20;
    uVar6 = (uVar6 >> 1 & 0x5555555555555555) + (uVar6 & 0x5555555555555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = (uVar6 >> 4 & 0x707070707070707) + (uVar6 & 0x707070707070707);
    uVar6 = (uVar6 >> 8 & 0xf000f000f000f) + (uVar6 & 0xf000f000f000f);
    lVar9 = (uVar6 >> 0x10 & 0x1f0000001f) + (uVar6 & 0x1f0000001f);
    uVar1 = (int)((ulong)lVar9 >> 0x20) + (int)lVar9;
    uVar3 = uVar1 - 1;
    uVar7 = uVar7 & (uint)~(-1 << (ulong)(uVar3 & 0x1f));
    uVar2 = (uint)(uVar7 << ((ulong)(6 - uVar1) & 0x3f));
    if (5 < uVar1) {
      uVar2 = (uint)(uVar7 >> ((ulong)(uVar1 - 6) & 0x3f));
    }
    cVar4 = (char)uVar2 >> 5;
    if ((uVar2 & 0xff) < 0x20) {
      cVar4 = '\0';
    }
    cVar4 = cVar4 + (char)uVar3;
    iVar5 = (int)cVar4;
    lVar9 = (long)cVar4 + -3;
    if ((uint)lVar9 < 5) {
      lVar9 = *(long *)(&DAT_03d64c50 + lVar9 * 8);
    }
    else {
      lVar9 = -0x81;
    }
    uVar1 = (uVar2 & 0x1f) >> (ulong)(8U - iVar5 & 0x1f);
    if (7 < iVar5) {
      uVar1 = uVar2 & 0x1f;
    }
    uVar7 = ((ulong)uVar1 & 0x1f | (long)(iVar5 + -3) << 5) + lVar9;
    if (uVar7 < (ulong)param_1[4]) {
      lVar9 = *param_1 + uVar7 * 0x20;
    }
    else {
      lVar9 = 0;
    }
    lVar8 = *(long *)(lVar9 + 0x18);
    param_2[2] = lVar9;
    param_2[3] = lVar8;
    *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) | 0x10;
    *(long **)(lVar8 + 0x10) = param_2;
    *(long **)(lVar9 + 0x18) = param_2;
    *(byte *)(lVar9 + 0xc) = *(byte *)(lVar9 + 0xc) | 0x10;
    *(byte *)((long)param_2 + 0xc) = *(byte *)((long)param_2 + 0xc) & 0xf7;
    param_1[3] = param_1[3] | 1L << ((long)(int)uVar3 & 0x3fU);
    *(uint *)(param_1[2] + (long)(int)uVar3 * 4) =
         *(uint *)(param_1[2] + (long)(int)uVar3 * 4) | 1 << (ulong)(uVar2 & 0x1f);
  }
  return;
}


