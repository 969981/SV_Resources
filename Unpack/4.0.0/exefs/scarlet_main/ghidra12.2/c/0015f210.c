/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015f210; name: FUN_0015f210
 */


int FUN_0015f210(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar12 [16];
  
  piVar2 = param_1 + param_2;
  if (param_2 < 0x10) {
    iVar11 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar7 = 0;
    iVar8 = 0;
  }
  else {
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    do {
      iVar7 = (int)*(undefined8 *)param_1 + iVar7 + (int)*(undefined8 *)(param_1 + 4);
      iVar8 = (int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar8 +
              (int)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
      iVar9 = (int)*(undefined8 *)(param_1 + 2) + iVar9 + (int)*(undefined8 *)(param_1 + 6);
      iVar10 = (int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar10 +
               (int)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
      piVar1 = param_1 + 8;
      piVar4 = param_1 + 10;
      piVar3 = param_1 + 0xc;
      piVar5 = param_1 + 0xe;
      param_1 = param_1 + 0x10;
      iVar11 = (int)*(undefined8 *)piVar1 + iVar11 + (int)*(undefined8 *)piVar3;
      iVar13 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar13 +
               (int)((ulong)*(undefined8 *)piVar3 >> 0x20);
      iVar14 = (int)*(undefined8 *)piVar4 + iVar14 + (int)*(undefined8 *)piVar5;
      iVar15 = (int)((ulong)*(undefined8 *)piVar4 >> 0x20) + iVar15 +
               (int)((ulong)*(undefined8 *)piVar5 >> 0x20);
    } while (0x3c < (long)piVar2 - (long)param_1);
  }
  for (; 0xc < (long)piVar2 - (long)param_1; param_1 = param_1 + 4) {
    iVar7 = (int)*(undefined8 *)param_1 + iVar7;
    iVar8 = (int)((ulong)*(undefined8 *)param_1 >> 0x20) + iVar8;
    iVar9 = (int)*(undefined8 *)(param_1 + 2) + iVar9;
    iVar10 = (int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + iVar10;
  }
  iVar7 = iVar7 + iVar11;
  iVar8 = iVar8 + iVar13;
  auVar12._4_4_ = iVar8;
  auVar12._0_4_ = iVar7;
  auVar12._8_4_ = iVar9 + iVar14;
  auVar12._12_4_ = iVar10 + iVar15;
  auVar6._4_4_ = iVar8;
  auVar6._0_4_ = iVar7;
  auVar6._8_4_ = iVar9 + iVar14;
  auVar6._12_4_ = iVar10 + iVar15;
  auVar12 = NEON_ext(auVar12,auVar6,8,1);
  iVar11 = auVar12._0_4_ + iVar7 + auVar12._4_4_ + iVar8;
  for (; param_1 < piVar2; param_1 = param_1 + 1) {
    iVar11 = *param_1 + iVar11;
  }
  return iVar11;
}


