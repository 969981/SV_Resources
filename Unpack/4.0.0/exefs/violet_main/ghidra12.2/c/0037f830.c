/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037f830; name: FUN_0037f830
 */


ulong FUN_0037f830(ulong param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  byte *pbVar23;
  
  uVar19 = param_1 >> 0x10 & 0xffff;
  param_1 = param_1 & 0xffff;
  if (param_3 - 1 == 0) {
    param_1 = param_1 + *param_2;
    uVar21 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar21 = param_1;
    }
    uVar20 = (uVar21 + uVar19) * 0x10000;
    uVar17 = uVar20 - 0xfff10000;
    if (uVar21 + uVar19 < 0xfff1) {
      uVar17 = uVar20;
    }
    return uVar17 | uVar21;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar21 = param_3;
      if ((param_3 & 1) != 0) {
        param_1 = param_1 + *param_2;
        uVar19 = param_1 + uVar19;
        uVar21 = param_3 - 1;
        param_2 = param_2 + 1;
      }
      if (param_3 != 1) {
        do {
          lVar16 = param_1 + *param_2;
          pbVar23 = param_2 + 1;
          param_2 = param_2 + 2;
          param_1 = lVar16 + (ulong)*pbVar23;
          uVar21 = uVar21 - 2;
          uVar19 = param_1 + lVar16 + uVar19;
        } while (uVar21 != 0);
      }
    }
    uVar21 = param_1 - 0xfff1;
    if (param_1 < 0xfff1) {
      uVar21 = param_1;
    }
    return uVar21 | (uVar19 % 0xfff1) * 0x10000;
  }
  if (param_3 >> 4 < 0x15b) {
LAB_0037f9f4:
    do {
      lVar16 = param_1 + *param_2;
      lVar2 = lVar16 + (ulong)param_2[1];
      lVar3 = lVar2 + (ulong)param_2[2];
      lVar4 = lVar3 + (ulong)param_2[3];
      lVar5 = lVar4 + (ulong)param_2[4];
      lVar6 = lVar5 + (ulong)param_2[5];
      lVar7 = lVar6 + (ulong)param_2[6];
      lVar8 = lVar7 + (ulong)param_2[7];
      lVar9 = lVar8 + (ulong)param_2[8];
      lVar10 = lVar9 + (ulong)param_2[9];
      lVar11 = lVar10 + (ulong)param_2[10];
      lVar12 = lVar11 + (ulong)param_2[0xb];
      lVar13 = lVar12 + (ulong)param_2[0xc];
      lVar14 = lVar13 + (ulong)param_2[0xd];
      lVar15 = lVar14 + (ulong)param_2[0xe];
      param_3 = param_3 - 0x10;
      param_1 = lVar15 + (ulong)param_2[0xf];
      uVar19 = lVar16 + uVar19 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
               lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
      param_2 = param_2 + 0x10;
    } while (0xf < param_3);
    if (param_3 != 0) goto LAB_0037fac8;
  }
  else {
    do {
      param_3 = param_3 - 0x15b0;
      iVar22 = -0x15b;
      pbVar23 = param_2;
      do {
        lVar16 = param_1 + *pbVar23;
        lVar2 = lVar16 + (ulong)pbVar23[1];
        lVar3 = lVar2 + (ulong)pbVar23[2];
        lVar4 = lVar3 + (ulong)pbVar23[3];
        lVar5 = lVar4 + (ulong)pbVar23[4];
        lVar6 = lVar5 + (ulong)pbVar23[5];
        lVar7 = lVar6 + (ulong)pbVar23[6];
        lVar8 = lVar7 + (ulong)pbVar23[7];
        lVar9 = lVar8 + (ulong)pbVar23[8];
        lVar10 = lVar9 + (ulong)pbVar23[9];
        lVar11 = lVar10 + (ulong)pbVar23[10];
        lVar12 = lVar11 + (ulong)pbVar23[0xb];
        lVar13 = lVar12 + (ulong)pbVar23[0xc];
        lVar14 = lVar13 + (ulong)pbVar23[0xd];
        lVar15 = lVar14 + (ulong)pbVar23[0xe];
        pbVar1 = pbVar23 + 0xf;
        pbVar23 = pbVar23 + 0x10;
        param_1 = lVar15 + (ulong)*pbVar1;
        uVar19 = lVar16 + uVar19 + lVar2 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
                 lVar10 + lVar11 + lVar12 + lVar13 + lVar14 + lVar15 + param_1;
        bVar18 = iVar22 != -1;
        iVar22 = iVar22 + 1;
      } while (bVar18);
      param_1 = param_1 % 0xfff1;
      uVar19 = uVar19 % 0xfff1;
      param_2 = param_2 + 0x15b0;
    } while (0x15a < param_3 >> 4);
    if (param_3 == 0) goto LAB_0037fbd0;
    if (0xf < param_3) goto LAB_0037f9f4;
LAB_0037fac8:
    uVar21 = param_3;
    if ((param_3 & 1) != 0) {
      param_1 = param_1 + *param_2;
      uVar19 = param_1 + uVar19;
      param_2 = param_2 + 1;
      uVar21 = param_3 - 1;
    }
    if (param_3 != 1) {
      do {
        lVar16 = param_1 + *param_2;
        pbVar23 = param_2 + 1;
        param_2 = param_2 + 2;
        param_1 = lVar16 + (ulong)*pbVar23;
        uVar21 = uVar21 - 2;
        uVar19 = param_1 + lVar16 + uVar19;
      } while (uVar21 != 0);
    }
  }
  param_1 = param_1 % 0xfff1;
  uVar19 = uVar19 % 0xfff1;
LAB_0037fbd0:
  return param_1 | uVar19 << 0x10;
}


