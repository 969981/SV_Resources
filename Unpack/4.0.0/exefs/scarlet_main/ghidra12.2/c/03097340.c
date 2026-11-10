/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03097340; name: FUN_03097340
 */


void FUN_03097340(int *param_1,long param_2,undefined8 *param_3,int *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar37;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  iVar13 = *param_4;
  uVar36 = param_5[1];
  uVar35 = *param_5;
  *param_1 = -1;
  uVar25 = param_3[1];
  if (iVar13 < *(int *)(param_2 + 0x20)) {
    lVar12 = *(long *)(param_2 + 0x18);
    iVar15 = iVar13;
    if (*(int *)(param_2 + 0x98) != 0) {
      iVar15 = *(int *)(*(long *)(param_2 + 0x90) + (long)iVar13 * 4);
    }
    if (iVar15 != -1) {
      lVar12 = *(long *)(param_2 + 0xb0);
      iVar13 = iVar15;
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 0xd0);
    iVar13 = iVar13 - *(int *)(param_2 + 0x20);
  }
  uVar4 = *(ushort *)(lVar12 + (long)iVar13 * 0x10 + 8);
  uVar26 = 0;
  fVar27 = 0.0;
  fVar28 = 3.40282e+38;
  if ((short)uVar4 < 1) goto LAB_030975f0;
  fVar22 = (float)uVar35;
  fVar33 = (float)*param_3;
  fVar28 = fVar22 * fVar33;
  fVar23 = (float)((ulong)uVar35 >> 0x20);
  fVar34 = (float)((ulong)*param_3 >> 0x20);
  fVar31 = fVar23 * fVar34;
  fVar24 = (float)uVar36;
  fVar32 = fVar24 * (float)uVar25;
  iVar5 = *(int *)(param_2 + 0x30);
  lVar19 = (long)iVar5;
  lVar20 = *(long *)(param_2 + 0xe0);
  uVar8 = (ulong)*(int *)(lVar12 + (long)iVar13 * 0x10);
  lVar17 = *(long *)(param_2 + 0x28);
  lVar12 = uVar8 + uVar4;
  fVar29 = fVar28 + fVar31 + fVar32;
  iVar13 = *(int *)(param_2 + 0x78);
  lVar21 = *(long *)(param_2 + 0x70);
  fVar30 = fVar22 * fVar29;
  fVar31 = fVar23 * (fVar28 + fVar31 + fVar32);
  lVar18 = *(long *)(param_2 + 0xc0);
  fVar33 = fVar33 - fVar30;
  fVar34 = fVar34 - fVar31;
  iVar15 = *(int *)(param_2 + 0x40);
  fVar28 = 3.40282e+38;
  lVar14 = *(long *)(param_2 + 0x38);
  lVar16 = *(long *)(param_2 + 0xf0);
  piVar9 = (int *)(lVar20 + (uVar8 - lVar19) * 0x14);
  uVar35 = NEON_fmov(0x3f800000,4);
  uVar7 = 0xffffffff;
  do {
    iVar6 = (int)uVar8;
    piVar11 = piVar9;
    if ((long)uVar8 < lVar19) {
      iVar10 = iVar6;
      if (iVar13 != 0) {
        iVar10 = *(int *)(lVar21 + uVar8 * 4);
      }
      piVar11 = (int *)(lVar18 + (long)iVar10 * 0x14);
      if (iVar10 == -1) {
        piVar11 = (int *)(lVar17 + uVar8 * 0x14);
      }
    }
    if (piVar11[2] == -1) {
LAB_0309745c:
      piVar11 = piVar9;
      if ((long)uVar8 < lVar19) {
        iVar10 = iVar6;
        if (iVar13 != 0) {
          iVar10 = *(int *)(lVar21 + uVar8 * 4);
        }
        piVar11 = (int *)(lVar18 + (long)iVar10 * 0x14);
        if (iVar10 == -1) {
          piVar11 = (int *)(lVar17 + uVar8 * 0x14);
        }
      }
      iVar10 = *piVar11;
      iVar3 = piVar11[1];
      puVar1 = (undefined8 *)(lVar14 + (long)iVar10 * 0x10);
      if (iVar15 <= iVar10) {
        puVar1 = (undefined8 *)(lVar16 + (long)(iVar10 - iVar15) * 0x10);
      }
      puVar2 = (undefined8 *)(lVar14 + (long)iVar3 * 0x10);
      if (iVar15 <= iVar3) {
        puVar2 = (undefined8 *)(lVar16 + (long)(iVar3 - iVar15) * 0x10);
      }
      fVar32 = (float)*puVar1;
      fVar38 = fVar22 * fVar32;
      fVar37 = (float)((ulong)*puVar1 >> 0x20);
      fVar40 = fVar23 * fVar37;
      fVar41 = fVar24 * (float)puVar1[1];
      fVar39 = fVar41 + fVar38 + fVar40;
      fVar32 = fVar32 - fVar22 * fVar39;
      fVar37 = fVar37 - fVar23 * (fVar41 + fVar38 + fVar40);
      fVar40 = (float)puVar1[1] - fVar24 * fVar39;
      fVar38 = (float)*puVar2;
      fVar41 = fVar22 * fVar38;
      fVar39 = (float)((ulong)*puVar2 >> 0x20);
      fVar44 = fVar23 * fVar39;
      fVar46 = fVar24 * (float)puVar2[1];
      fVar42 = fVar41 + fVar44 + fVar46;
      fVar43 = fVar32 - fVar33;
      fVar45 = fVar37 - fVar34;
      fVar47 = fVar40 - ((float)uVar25 - fVar24 * fVar29);
      fVar32 = fVar32 - (fVar38 - fVar22 * fVar42);
      fVar37 = fVar37 - (fVar39 - fVar23 * (fVar41 + fVar44 + fVar46));
      fVar40 = fVar40 - ((float)puVar2[1] - fVar24 * fVar42);
      fVar38 = fVar43 * fVar32;
      fVar39 = fVar45 * fVar37;
      fVar41 = fVar47 * fVar40;
      uVar36 = NEON_fminnm(CONCAT44((fVar38 + fVar39 + fVar41) /
                                    (fVar32 * fVar32 + fVar37 * fVar37 + fVar40 * fVar40),
                                    (fVar38 + fVar39 + fVar41) /
                                    (fVar32 * fVar32 + fVar37 * fVar37 + fVar40 * fVar40)),uVar35,4)
      ;
      uVar36 = NEON_fmax(uVar36,0,4);
      fVar38 = (float)uVar36;
      fVar43 = fVar43 - fVar38 * fVar32;
      fVar45 = fVar45 - (float)((ulong)uVar36 >> 0x20) * fVar37;
      fVar47 = fVar47 - fVar38 * fVar40;
      fVar32 = fVar43 * fVar43 + fVar45 * fVar45 + fVar47 * fVar47;
      if (fVar32 < fVar28) {
        uVar7 = uVar8 & 0xffffffff;
        *param_1 = iVar6;
        fVar30 = fVar38;
        fVar31 = fVar38;
        fVar28 = fVar32;
      }
    }
    else if ((*(byte *)(piVar11 + 4) >> 5 & 1) != 0) goto LAB_0309745c;
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 5;
  } while ((long)uVar8 < lVar12);
  iVar6 = (int)uVar7;
  if (iVar6 == -1) goto LAB_030975f0;
  if (iVar6 < iVar5) {
    if (iVar13 == 0) {
      iVar13 = iVar6;
    }
    else {
      iVar13 = *(int *)(lVar21 + (long)iVar6 * 4);
      if (iVar13 == -1) {
        piVar9 = (int *)(lVar17 + (long)iVar6 * 0x14);
        goto LAB_030975b4;
      }
    }
    piVar9 = (int *)(lVar18 + (long)iVar13 * 0x14);
  }
  else {
    piVar9 = (int *)(lVar20 + (long)(iVar6 - iVar5) * 0x14);
  }
LAB_030975b4:
  iVar13 = *piVar9;
  iVar5 = piVar9[1];
  puVar1 = (undefined8 *)(lVar14 + (long)iVar13 * 0x10);
  if (iVar15 <= iVar13) {
    puVar1 = (undefined8 *)(lVar16 + (long)(iVar13 - iVar15) * 0x10);
  }
  puVar2 = (undefined8 *)(lVar14 + (long)iVar5 * 0x10);
  if (iVar15 <= iVar5) {
    puVar2 = (undefined8 *)(lVar16 + (long)(iVar5 - iVar15) * 0x10);
  }
  fVar27 = (float)*puVar1;
  fVar22 = (float)((ulong)*puVar1 >> 0x20);
  uVar26 = CONCAT44(fVar22 + fVar31 * ((float)((ulong)*puVar2 >> 0x20) - fVar22),
                    fVar27 + fVar30 * ((float)*puVar2 - fVar27));
  fVar27 = (float)puVar1[1] + fVar30 * ((float)puVar2[1] - (float)puVar1[1]);
LAB_030975f0:
  param_6[1] = CONCAT44(fVar28,fVar27);
  *param_6 = uVar26;
  return;
}


