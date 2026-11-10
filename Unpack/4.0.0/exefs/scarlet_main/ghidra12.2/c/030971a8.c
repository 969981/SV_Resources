/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030971a8; name: FUN_030971a8
 */


void FUN_030971a8(undefined4 *param_1,long param_2,undefined8 *param_3,int *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  ushort uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar27;
  undefined8 uVar26;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  iVar2 = *param_4;
  uVar12 = 0;
  fVar14 = 0.0;
  lVar8 = *(long *)(param_2 + 0x18);
  fVar19 = 3.40282e+38;
  lVar7 = *(long *)(param_2 + 0x28);
  lVar6 = *(long *)(param_2 + 0x38);
  uVar26 = param_5[1];
  uVar24 = *param_5;
  *param_1 = 0xffffffff;
  uVar1 = *(ushort *)(lVar8 + (long)iVar2 * 0x10 + 8);
  if (0 < (short)uVar1) {
    uVar18 = param_3[1];
    fVar11 = (float)uVar24;
    fVar16 = (float)*param_3;
    fVar19 = fVar11 * fVar16;
    fVar13 = (float)((ulong)uVar24 >> 0x20);
    fVar17 = (float)((ulong)*param_3 >> 0x20);
    fVar21 = fVar13 * fVar17;
    fVar15 = (float)uVar26;
    fVar23 = fVar15 * (float)uVar18;
    fVar20 = fVar19 + fVar21 + fVar23;
    fVar22 = fVar19 + fVar21 + fVar23;
    uVar24 = NEON_fmov(0x3f800000,4);
    uVar9 = (ulong)*(int *)(lVar8 + (long)iVar2 * 0x10);
    fVar19 = 3.40282e+38;
    lVar8 = uVar9 + uVar1;
    piVar5 = (int *)(lVar7 + uVar9 * 0x14 + 8);
    uVar10 = 0xffffffff;
    fVar21 = fVar23;
    do {
      if (*piVar5 == -1) {
LAB_03097240:
        puVar3 = (undefined8 *)(lVar6 + (long)piVar5[-1] * 0x10);
        uVar29 = *puVar3;
        puVar4 = (undefined8 *)(lVar6 + (long)piVar5[-2] * 0x10);
        uVar26 = *puVar4;
        fVar25 = (float)uVar26;
        fVar30 = fVar11 * fVar25;
        fVar27 = (float)((ulong)uVar26 >> 0x20);
        fVar34 = fVar13 * fVar27;
        fVar28 = (float)puVar4[1];
        fVar37 = fVar15 * fVar28;
        fVar31 = fVar37 + fVar30 + fVar34;
        fVar25 = fVar25 - fVar11 * fVar31;
        fVar27 = fVar27 - fVar13 * (fVar37 + fVar30 + fVar34);
        fVar28 = fVar28 - fVar15 * fVar31;
        fVar30 = (float)uVar29;
        fVar32 = fVar11 * fVar30;
        fVar31 = (float)((ulong)uVar29 >> 0x20);
        fVar35 = fVar13 * fVar31;
        fVar34 = (float)puVar3[1];
        fVar38 = fVar15 * fVar34;
        fVar33 = fVar32 + fVar35 + fVar38;
        fVar37 = fVar25 - (fVar16 - fVar11 * fVar20);
        fVar36 = fVar27 - (fVar17 - fVar13 * fVar22);
        fVar39 = fVar28 - ((float)uVar18 - fVar15 * fVar20);
        fVar25 = fVar25 - (fVar30 - fVar11 * fVar33);
        fVar27 = fVar27 - (fVar31 - fVar13 * (fVar32 + fVar35 + fVar38));
        fVar28 = fVar28 - (fVar34 - fVar15 * fVar33);
        fVar30 = fVar37 * fVar25;
        fVar31 = fVar36 * fVar27;
        fVar34 = fVar39 * fVar28;
        uVar26 = NEON_fminnm(CONCAT44((fVar30 + fVar31 + fVar34) /
                                      (fVar25 * fVar25 + fVar27 * fVar27 + fVar28 * fVar28),
                                      (fVar30 + fVar31 + fVar34) /
                                      (fVar25 * fVar25 + fVar27 * fVar27 + fVar28 * fVar28)),uVar24,
                             4);
        uVar26 = NEON_fmax(uVar26,0,4);
        fVar30 = (float)uVar26;
        fVar37 = fVar37 - fVar30 * fVar25;
        fVar36 = fVar36 - (float)((ulong)uVar26 >> 0x20) * fVar27;
        fVar39 = fVar39 - fVar30 * fVar28;
        fVar25 = fVar37 * fVar37 + fVar36 * fVar36 + fVar39 * fVar39;
        if (fVar25 < fVar19) {
          uVar10 = uVar9 & 0xffffffff;
          *param_1 = (int)uVar9;
          fVar23 = fVar30;
          fVar21 = fVar30;
          fVar19 = fVar25;
        }
      }
      else if ((*(byte *)(piVar5 + 2) >> 5 & 1) != 0) goto LAB_03097240;
      uVar9 = uVar9 + 1;
      piVar5 = piVar5 + 5;
    } while ((long)uVar9 < lVar8);
    if ((int)uVar10 != -1) {
      piVar5 = (int *)(lVar7 + (long)(int)uVar10 * 0x14);
      puVar3 = (undefined8 *)(lVar6 + (long)piVar5[1] * 0x10);
      uVar24 = *puVar3;
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar5 * 0x10);
      uVar12 = *puVar4;
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar14 = (float)puVar4[1];
      uVar12 = CONCAT44(fVar13 + fVar21 * ((float)((ulong)uVar24 >> 0x20) - fVar13),
                        fVar11 + fVar23 * ((float)uVar24 - fVar11));
      fVar14 = fVar14 + fVar23 * ((float)puVar3[1] - fVar14);
    }
  }
  param_6[1] = CONCAT44(fVar19,fVar14);
  *param_6 = uVar12;
  return;
}


