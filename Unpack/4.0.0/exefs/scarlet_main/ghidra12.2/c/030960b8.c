/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030960b8; name: FUN_030960b8
 */


void FUN_030960b8(long param_1,int *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  undefined8 *puVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar24;
  undefined8 uVar23;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  
  sVar8 = (short)param_2[2];
  uVar1 = (int)sVar8 & 0xfffffffe;
  puVar12 = (undefined8 *)*param_3;
  iVar15 = *param_2;
  lVar14 = (long)iVar15;
  if (0 < (int)uVar1) {
    uVar17 = 0;
    lVar18 = lVar14 * 0x14;
    puVar13 = puVar12;
    lVar20 = lVar14;
    do {
      lVar10 = *(long *)(param_1 + 0x20);
      if (lVar20 < *(int *)(lVar10 + 0x30)) {
        if (*(int *)(lVar10 + 0x78) == 0) {
          iVar19 = (int)lVar20;
        }
        else {
          iVar19 = *(int *)(*(long *)(lVar10 + 0x70) + lVar20 * 4);
        }
        if (iVar19 == -1) {
          piVar11 = (int *)(*(long *)(lVar10 + 0x28) + (uVar17 + lVar14) * 0x14);
        }
        else {
          piVar11 = (int *)(*(long *)(lVar10 + 0xc0) + (long)iVar19 * 0x14);
        }
      }
      else {
        piVar11 = (int *)(*(long *)(lVar10 + 0xe0) + (long)*(int *)(lVar10 + 0x30) * -0x14 + lVar18)
        ;
      }
      iVar7 = *(int *)(lVar10 + 0x40);
      uVar17 = uVar17 + 2;
      lVar18 = lVar18 + 0x28;
      iVar19 = *piVar11;
      iVar6 = piVar11[1];
      lVar4 = 0x38;
      if (iVar7 <= iVar19) {
        lVar4 = 0xf0;
      }
      iVar2 = 0;
      if (iVar7 <= iVar19) {
        iVar2 = iVar7;
      }
      lVar5 = 0x38;
      if (iVar7 <= iVar6) {
        lVar5 = 0xf0;
      }
      iVar3 = 0;
      if (iVar7 <= iVar6) {
        iVar3 = iVar7;
      }
      puVar12 = (undefined8 *)(*(long *)(lVar10 + lVar4) + (long)(iVar19 - iVar2) * 0x10);
      uVar22 = *puVar12;
      lVar20 = lVar20 + 2;
      puVar9 = (undefined8 *)(*(long *)(lVar10 + lVar5) + (long)(iVar6 - iVar3) * 0x10);
      uVar27 = *puVar9;
      fVar21 = (float)uVar22;
      fVar30 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar32 = (float)*(undefined8 *)(param_1 + 0x68);
      fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
      fVar24 = (float)((ulong)uVar22 >> 0x20);
      fVar34 = (float)*(undefined8 *)(param_1 + 0x70);
      fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      fVar37 = (float)*(undefined8 *)(param_1 + 0x78);
      fVar38 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
      fVar28 = (float)((ulong)uVar27 >> 0x20);
      fVar26 = (float)uVar27;
      fVar25 = (float)puVar12[1];
      fVar40 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar41 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      fVar42 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar43 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
      fVar29 = (float)puVar9[1];
      fVar44 = (float)*(undefined8 *)(param_1 + 0x90);
      fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
      fVar46 = (float)*(undefined8 *)(param_1 + 0x98);
      fVar47 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
      puVar12 = puVar13 + 4;
      puVar13[1] = CONCAT44(fVar47 + fVar43 * fVar25 + fVar33 * fVar21 + fVar38 * fVar24,
                            fVar46 + fVar42 * fVar25 + fVar32 * fVar21 + fVar37 * fVar24);
      *puVar13 = CONCAT44(fVar45 + fVar41 * fVar25 + fVar31 * fVar21 + fVar36 * fVar24,
                          fVar44 + fVar40 * fVar25 + fVar30 * fVar21 + fVar34 * fVar24);
      puVar13[3] = CONCAT44(fVar47 + fVar43 * fVar29 + fVar33 * fVar26 + fVar38 * fVar28,
                            fVar46 + fVar42 * fVar29 + fVar32 * fVar26 + fVar37 * fVar28);
      puVar13[2] = CONCAT44(fVar45 + fVar41 * fVar29 + fVar31 * fVar26 + fVar36 * fVar28,
                            fVar44 + fVar40 * fVar29 + fVar30 * fVar26 + fVar34 * fVar28);
      puVar13 = puVar12;
    } while (uVar17 < uVar1);
  }
  if (((int)sVar8 & 1U) == 0) goto LAB_03096274;
  iVar15 = iVar15 + sVar8 + -1;
  lVar14 = *(long *)(param_1 + 0x20);
  if (iVar15 < *(int *)(lVar14 + 0x30)) {
    lVar18 = *(long *)(lVar14 + 0x28);
    iVar19 = iVar15;
    if (*(int *)(lVar14 + 0x78) != 0) {
      iVar19 = *(int *)(*(long *)(lVar14 + 0x70) + (long)iVar15 * 4);
    }
    if (iVar19 != -1) {
      plVar16 = (long *)(lVar14 + 0xc0);
      iVar15 = iVar19;
      goto LAB_03096218;
    }
  }
  else {
    plVar16 = (long *)(lVar14 + 0xe0);
    iVar15 = iVar15 - *(int *)(lVar14 + 0x30);
LAB_03096218:
    lVar18 = *plVar16;
  }
  iVar19 = *(int *)(lVar14 + 0x40);
  iVar15 = *(int *)(lVar18 + (long)iVar15 * 0x14);
  lVar18 = 0x38;
  if (iVar19 <= iVar15) {
    lVar18 = 0xf0;
  }
  uVar22 = *(undefined8 *)(param_1 + 0x60);
  uVar27 = *(undefined8 *)(param_1 + 0x70);
  uVar35 = *(undefined8 *)(param_1 + 0x80);
  uVar39 = *(undefined8 *)(param_1 + 0x90);
  iVar6 = 0;
  if (iVar19 <= iVar15) {
    iVar6 = iVar19;
  }
  puVar13 = (undefined8 *)(*(long *)(lVar14 + lVar18) + (long)(iVar15 - iVar6) * 0x10);
  uVar23 = *puVar13;
  fVar21 = (float)uVar23;
  fVar24 = (float)((ulong)uVar23 >> 0x20);
  fVar25 = (float)puVar13[1];
  puVar12[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar25 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar21 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar24,
                        (float)*(undefined8 *)(param_1 + 0x98) +
                        (float)*(undefined8 *)(param_1 + 0x88) * fVar25 +
                        (float)*(undefined8 *)(param_1 + 0x68) * fVar21 +
                        (float)*(undefined8 *)(param_1 + 0x78) * fVar24);
  *puVar12 = CONCAT44((float)((ulong)uVar39 >> 0x20) +
                      (float)((ulong)uVar35 >> 0x20) * fVar25 +
                      (float)((ulong)uVar22 >> 0x20) * fVar21 +
                      (float)((ulong)uVar27 >> 0x20) * fVar24,
                      (float)uVar39 +
                      (float)uVar35 * fVar25 + (float)uVar22 * fVar21 + (float)uVar27 * fVar24);
LAB_03096274:
  puVar12 = (undefined8 *)*param_3;
  lVar14 = param_3[1];
  uVar22 = *puVar12;
  puVar12[(long)(int)lVar14 * 2 + -1] = puVar12[1];
  puVar12[(long)(int)lVar14 * 2 + -2] = uVar22;
  return;
}


