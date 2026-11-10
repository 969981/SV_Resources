/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045b110; name: FUN_0045b110
 */


undefined8 FUN_0045b110(int *param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  uVar9 = (uint)((ulong)param_3 >> 0x20);
  lVar4 = param_3 / 0x15180 + ((long)(int)uVar9 >> 0x1f) + (ulong)(uVar9 >> 0x1f);
  lVar10 = lVar4 + param_2;
  uVar9 = (int)param_3 + (int)lVar4 * -0x15180 + param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1;
  if ((int)uVar9 < 0x15180) {
    if ((uVar9 & 0x80000000) != 0) {
      uVar9 = uVar9 + 0x15180;
      lVar10 = lVar10 + -1;
    }
  }
  else {
    lVar10 = lVar10 + 1;
    uVar9 = uVar9 - 0x15180;
  }
  iVar8 = (param_1[4] + -0xd) / 0xc;
  iVar1 = param_1[5] + iVar8;
  iVar6 = iVar1 * 0x5b5;
  iVar2 = iVar6 + 0x955d1c;
  iVar6 = iVar6 + 0x955d1f;
  if (-1 < iVar2) {
    iVar6 = iVar2;
  }
  iVar2 = ((iVar1 + 0x1a90) / 100) * 3;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  lVar10 = lVar10 + (((param_1[3] + (iVar6 >> 2) +
                      ((param_1[4] + iVar8 * -0xc) * 0x16f + -0x16f) / 0xc) - (iVar1 >> 2)) +
                    -0x7d4b);
  if (-1 < lVar10) {
    uVar5 = lVar10 + 0x10bd9;
    lVar4 = (long)(uVar5 * 4) / 0x23ab1 + ((long)(uVar5 * 4) >> 0x3f) +
            ((uVar5 & 0x3fffffffffffffff) >> 0x3d);
    lVar12 = lVar4 * 0x23ab1;
    lVar10 = lVar12 + 3;
    lVar12 = lVar12 + 6;
    if (-1 < lVar10) {
      lVar12 = lVar10;
    }
    lVar11 = uVar5 - (lVar12 >> 2);
    lVar12 = (lVar11 * 4000 + 4000) / 0x164b09;
    lVar13 = lVar12 * 0x5b5;
    lVar10 = lVar13 + 3;
    if (-1 < lVar13) {
      lVar10 = lVar13;
    }
    lVar10 = (lVar11 - (lVar10 >> 2)) + 0x1f;
    lVar11 = lVar10 * 0x50;
    iVar1 = (int)(lVar11 / 0x6925);
    uVar3 = ((int)lVar12 + (int)lVar4 * 100 + iVar1) - 0x1a90;
    if (uVar3 >> 2 < 0x7e9) {
      lVar11 = lVar11 / 0x98f;
      param_1[4] = (int)lVar11 + iVar1 * -0xc + 1;
      param_1[5] = uVar3;
      auVar7 = SEXT816(lVar11 * 0x98f) * SEXT816(-0x6666666666666667);
      param_1[2] = (int)uVar9 / 0xe10;
      param_1[3] = ((int)(auVar7._8_8_ >> 5) - (auVar7._12_4_ >> 0x1f)) + (int)lVar10;
      *param_1 = (int)uVar9 % 0x3c;
      param_1[1] = ((int)uVar9 / 0x3c) % 0x3c;
      return 1;
    }
  }
  return 0;
}


