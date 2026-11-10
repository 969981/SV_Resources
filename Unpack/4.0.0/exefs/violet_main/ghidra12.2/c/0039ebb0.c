/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039ebb0; name: FUN_0039ebb0
 */


long FUN_0039ebb0(long param_1,char param_2,char param_3,long param_4,char param_5,char param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  
  iVar4 = (int)param_2;
  lVar7 = (param_4 % 400 - param_4) + (param_1 / 400) * 400;
  lVar9 = param_1 % 400 - (ulong)(iVar4 < 3);
  lVar8 = lVar9;
  if (lVar9 < 0) {
    lVar8 = lVar9 + -399;
  }
  iVar11 = -3;
  if (iVar4 < 3) {
    iVar11 = 9;
  }
  lVar9 = lVar9 + (lVar8 / 400) * -400;
  lVar1 = lVar9 + 3;
  if (-1 < lVar9) {
    lVar1 = lVar9;
  }
  lVar6 = SUB168(SEXT816(lVar9) * SEXT816(0x5c28f5c28f5c28f5),8) - lVar9;
  iVar5 = (int)param_5;
  lVar10 = param_4 % 400 - (ulong)(iVar5 < 3);
  lVar2 = lVar10;
  if (lVar10 < 0) {
    lVar2 = lVar10 + -399;
  }
  lVar10 = lVar10 + (lVar2 / 400) * -400;
  iVar12 = -3;
  if (iVar5 < 3) {
    iVar12 = 9;
  }
  lVar3 = lVar10 + 3;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar8 = (((lVar1 >> 2) + (long)(((iVar11 + iVar4) * 0x99 + 2) / 5 + (int)param_3 + -1) +
            ((lVar6 >> 6) - (lVar6 >> 0x3f)) +
            (long)(1 - (((iVar12 + iVar5) * 0x99 + 2) / 5 + (int)param_6)) +
           (lVar8 / 400 - lVar2 / 400) * 0x23ab1) - (lVar3 >> 2)) + lVar10 / 100 +
          (lVar9 - lVar10) * 0x16d;
  if ((lVar7 < 1) || (-1 < lVar8)) {
    if ((lVar7 < 0) && (0 < lVar8)) {
      lVar8 = lVar8 + -0x47562;
      lVar7 = lVar7 + 800;
    }
  }
  else {
    lVar8 = lVar8 + 0x47562;
    lVar7 = lVar7 + -800;
  }
  return lVar8 + (lVar7 / 400) * 0x23ab1;
}


