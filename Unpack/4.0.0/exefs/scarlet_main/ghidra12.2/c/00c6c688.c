/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c6c688; name: FUN_00c6c688
 */


void FUN_00c6c688(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar8 = *param_2 - (ulong)*(byte *)((long)param_2 + 0xd);
  if (uVar8 != 0) {
    bVar6 = *(byte *)((long)param_2 + 0xc);
    if ((bVar6 >> 4 & 1) != 0) {
      *(long *)(param_2[2] + 0x18) = param_2[3];
      *(long *)(param_2[3] + 0x10) = param_2[2];
      bVar6 = *(byte *)((long)param_2 + 0xc) & 0xef;
      *(byte *)((long)param_2 + 0xc) = bVar6;
    }
    *(byte *)((long)param_2 + 0xc) = bVar6 | 8;
    uVar7 = uVar8 | uVar8 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = uVar7 | uVar7 >> 0x20;
    uVar7 = (uVar7 >> 1 & 0x5555555555555555) + (uVar7 & 0x5555555555555555);
    uVar7 = (uVar7 >> 2 & 0x3333333333333333) + (uVar7 & 0x3333333333333333);
    uVar7 = (uVar7 >> 4 & 0x707070707070707) + (uVar7 & 0x707070707070707);
    uVar7 = (uVar7 >> 8 & 0xf000f000f000f) + (uVar7 & 0xf000f000f000f);
    lVar10 = (uVar7 >> 0x10 & 0x1f0000001f) + (uVar7 & 0x1f0000001f);
    uVar1 = (int)((ulong)lVar10 >> 0x20) + (int)lVar10;
    uVar3 = uVar1 - 1;
    uVar8 = uVar8 & (uint)~(-1 << (ulong)(uVar3 & 0x1f));
    uVar2 = (uint)(uVar8 << ((ulong)(6 - uVar1) & 0x3f));
    if (5 < uVar1) {
      uVar2 = (uint)(uVar8 >> ((ulong)(uVar1 - 6) & 0x3f));
    }
    cVar4 = (char)uVar2 >> 5;
    if ((uVar2 & 0xff) < 0x20) {
      cVar4 = '\0';
    }
    cVar4 = cVar4 + (char)uVar3;
    iVar5 = (int)cVar4;
    lVar10 = (long)cVar4 + -3;
    if ((uint)lVar10 < 5) {
      lVar10 = *(long *)(&DAT_03d64c50 + lVar10 * 8);
    }
    else {
      lVar10 = -0x81;
    }
    uVar1 = (uVar2 & 0x1f) >> (ulong)(8U - iVar5 & 0x1f);
    if (7 < iVar5) {
      uVar1 = uVar2 & 0x1f;
    }
    uVar8 = ((ulong)uVar1 & 0x1f | (long)(iVar5 + -3) << 5) + lVar10;
    if (((((ulong)param_1[4] <= uVar8) || (*param_1 == 0)) ||
        (lVar10 = *param_1 + uVar8 * 0x20, lVar9 = *(long *)(lVar10 + 0x18),
        lVar9 == lVar10 || lVar9 == 0)) &&
       (*(uint *)(param_1[2] + (long)(int)uVar3 * 4) =
             *(uint *)(param_1[2] + (long)(int)uVar3 * 4) &
             (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU),
       *(int *)(param_1[2] + (long)(int)uVar3 * 4) == 0)) {
      param_1[3] = param_1[3] & (1L << ((long)(int)uVar3 & 0x3fU) ^ 0xffffffffffffffffU);
    }
  }
  return;
}


