/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0326c774; name: FUN_0326c774
 */


void FUN_0326c774(long *param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  
  uVar17 = param_2[2] & 0xffffffff;
  lVar15 = (long)param_2[2] >> 0x20;
  uVar19 = *param_3 & 0xffffffff;
  lVar18 = (long)*param_3 >> 0x20;
  uVar22 = param_3[1] & 0xffffffff;
  lVar16 = (long)param_3[1] >> 0x20;
  uVar21 = param_3[2] & 0xffffffff;
  lVar20 = (long)param_3[2] >> 0x20;
  uVar12 = param_2[1] & 0xffffffff;
  lVar11 = (long)param_2[1] >> 0x20;
  uVar5 = uVar22 * lVar15 + (uVar22 * uVar17 >> 0x20);
  lVar1 = lVar16 * uVar17 + (uVar5 & 0xffffffff);
  uVar14 = *param_2 & 0xffffffff;
  lVar13 = (long)*param_2 >> 0x20;
  uVar6 = uVar19 * lVar15 + (uVar19 * uVar17 >> 0x20);
  lVar2 = lVar18 * uVar17 + (uVar6 & 0xffffffff);
  uVar8 = uVar19 * uVar17 & 0xffffffff | lVar2 << 0x20;
  uVar9 = uVar22 * uVar17 & 0xffffffff | lVar1 << 0x20;
  uVar17 = uVar21 * lVar11 + (uVar21 * uVar12 >> 0x20);
  lVar3 = lVar20 * uVar12 + (uVar17 & 0xffffffff);
  uVar7 = uVar21 * lVar13 + (uVar21 * uVar14 >> 0x20);
  uVar10 = uVar21 * uVar12 & 0xffffffff | lVar3 << 0x20;
  lVar4 = lVar20 * uVar14 + (uVar7 & 0xffffffff);
  uVar21 = uVar21 * uVar14 & 0xffffffff | lVar4 << 0x20;
  *param_1 = uVar10 - uVar9;
  param_1[1] = (((lVar20 * lVar11 + ((long)uVar17 >> 0x20)) -
                (((long)uVar5 >> 0x20) + (lVar1 >> 0x20) + lVar16 * lVar15)) + (lVar3 >> 0x20)) -
               (ulong)(uVar10 < uVar9);
  uVar5 = uVar22 * lVar13 + (uVar22 * uVar14 >> 0x20);
  uVar17 = uVar19 * lVar11 + (uVar19 * uVar12 >> 0x20);
  lVar1 = lVar18 * uVar12 + (uVar17 & 0xffffffff);
  uVar9 = uVar19 * uVar12 & 0xffffffff | lVar1 << 0x20;
  param_1[2] = uVar8 - uVar21;
  param_1[3] = ((lVar18 * lVar15 + ((long)uVar6 >> 0x20) + (lVar2 >> 0x20)) -
               (lVar20 * lVar13 + ((long)uVar7 >> 0x20) + (lVar4 >> 0x20))) -
               (ulong)(uVar8 < uVar21);
  lVar2 = lVar16 * uVar14 + (uVar5 & 0xffffffff);
  uVar6 = uVar22 * uVar14 & 0xffffffff | lVar2 << 0x20;
  param_1[4] = uVar6 - uVar9;
  param_1[5] = ((lVar16 * lVar13 + ((long)uVar5 >> 0x20) + (lVar2 >> 0x20)) -
               (lVar18 * lVar11 + ((long)uVar17 >> 0x20) + (lVar1 >> 0x20))) -
               (ulong)(uVar6 < uVar9);
  return;
}


