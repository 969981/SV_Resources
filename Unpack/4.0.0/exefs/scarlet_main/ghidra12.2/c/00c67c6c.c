/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c67c6c; name: FUN_00c67c6c
 */


void FUN_00c67c6c(long param_1,short param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  
  lVar7 = (long)param_2;
  lVar8 = (long)*(short *)(*(long *)(param_1 + 0x2b8) + lVar7 * 2);
  lVar3 = *(long *)(param_1 + 0x248) + lVar7 * 0x30;
  uVar17 = *(undefined8 *)(lVar3 + 0x20);
  uVar2 = *(ushort *)(*(long *)(param_1 + 0xd8) + lVar7 * 2);
  lVar9 = *(long *)(param_1 + 0x2f0);
  fVar20 = (float)*(undefined8 *)(lVar3 + 0x28);
  if (-1 < (short)uVar2) {
    if ((*(uint *)(*(long *)(param_1 + 0x110) + ((ulong)(uVar2 >> 3) & 0x1ffc)) >>
         (ulong)(uVar2 & 0x1f) & 1) != 0) {
      FUN_00c66040(param_1,(uint)uVar2);
    }
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x280) + (ulong)uVar2 * 0x40);
    fVar10 = (float)uVar17;
    fVar13 = (float)((ulong)uVar17 >> 0x20);
    uVar17 = CONCAT44((float)((ulong)puVar1[6] >> 0x20) +
                      (float)((ulong)*puVar1 >> 0x20) * fVar10 +
                      (float)((ulong)puVar1[2] >> 0x20) * fVar13 +
                      (float)((ulong)puVar1[4] >> 0x20) * fVar20,
                      (float)puVar1[6] +
                      (float)*puVar1 * fVar10 + (float)puVar1[2] * fVar13 +
                      (float)puVar1[4] * fVar20);
    fVar20 = (float)puVar1[7] +
             (float)puVar1[1] * fVar10 + (float)puVar1[3] * fVar13 + (float)puVar1[5] * fVar20;
  }
  uVar2 = *(ushort *)(lVar9 + lVar8 * 0xd0);
  uVar5 = (ulong)(short)uVar2;
  if ((*(uint *)(*(long *)(param_1 + 0x110) + (uVar5 >> 3 & 0x1ffffffffffffffc)) >>
       (ulong)(uVar2 & 0x1f) & 1) != 0) {
    FUN_00c66040(param_1,uVar5 & 0xffffffff);
  }
  lVar3 = *(long *)(param_1 + 0x280);
  uVar11 = *(undefined8 *)(lVar3 + uVar5 * 0x40 + 0x30);
  uVar5 = (ulong)(uint)fVar20;
  if (*(int *)(lVar9 + lVar8 * 0xd0 + 0x70) == 0) {
    lVar4 = lVar9 + lVar8 * 0xd0;
    uVar6 = *(ulong *)(lVar4 + 0x68);
    uVar24 = *(undefined8 *)(lVar4 + 0x60);
  }
  else {
    uVar2 = *(ushort *)(lVar9 + lVar8 * 0xd0 + 2);
    uVar6 = (ulong)(short)uVar2;
    if ((*(uint *)(*(long *)(param_1 + 0x110) + (uVar6 >> 3 & 0x1ffffffffffffffc)) >>
         (ulong)(uVar2 & 0x1f) & 1) != 0) {
      FUN_00c66040(param_1,uVar6 & 0xffffffff);
      lVar3 = *(long *)(param_1 + 0x280);
    }
    lVar4 = lVar3 + uVar6 * 0x40;
    uVar24 = *(undefined8 *)(lVar4 + 0x30);
    uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar17 >> 0x20),
                      (float)uVar24 - (float)uVar17);
    uVar6 = (ulong)(uint)((float)*(undefined8 *)(lVar4 + 0x38) - fVar20);
  }
  uVar29 = 0;
  uVar32 = 0;
  uVar18 = uVar17;
  auVar12 = FUN_0271b3e0(uVar11);
  lVar9 = lVar9 + lVar8 * 0xd0;
  uVar11 = *(undefined8 *)(lVar9 + 0x38);
  puVar1 = (undefined8 *)(lVar3 + lVar7 * 0x40);
  fVar38 = (float)*(undefined8 *)(lVar9 + 0x20);
  fVar10 = auVar12._0_4_;
  fVar13 = auVar12._4_4_;
  fVar14 = auVar12._8_4_;
  fVar15 = auVar12._12_4_;
  fVar34 = (float)*(undefined8 *)(lVar9 + 0x10);
  fVar39 = (float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20);
  fVar16 = (float)uVar18;
  fVar19 = (float)((ulong)uVar18 >> 0x20);
  fVar21 = (float)uVar5;
  fVar22 = (float)(uVar5 >> 0x20);
  fVar42 = (float)*(undefined8 *)(lVar9 + 0x30);
  fVar35 = (float)((ulong)*(undefined8 *)(lVar9 + 0x10) >> 0x20);
  fVar40 = (float)*(undefined8 *)(lVar9 + 0x28);
  fVar23 = (float)uVar24;
  fVar25 = (float)((ulong)uVar24 >> 0x20);
  fVar26 = (float)uVar6;
  fVar27 = (float)(uVar6 >> 0x20);
  fVar36 = (float)*(undefined8 *)(lVar9 + 0x18);
  fVar41 = (float)((ulong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
  fVar28 = (float)uVar29;
  fVar30 = (float)((ulong)uVar29 >> 0x20);
  fVar31 = (float)uVar32;
  fVar33 = (float)((ulong)uVar32 >> 0x20);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar9 + 0x18) >> 0x20);
  fVar43 = (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
  fVar44 = (float)uVar11;
  puVar1[1] = CONCAT44(fVar15 * fVar34 + fVar22 * fVar35 + fVar27 * fVar36 + fVar33 * fVar37,
                       fVar14 * fVar34 + fVar21 * fVar35 + fVar26 * fVar36 + fVar31 * fVar37);
  *puVar1 = CONCAT44(fVar13 * fVar34 + fVar19 * fVar35 + fVar25 * fVar36 + fVar30 * fVar37,
                     fVar10 * fVar34 + fVar16 * fVar35 + fVar23 * fVar36 + fVar28 * fVar37);
  puVar1[3] = CONCAT44(fVar15 * fVar38 + fVar22 * fVar39 + fVar27 * fVar40 + fVar33 * fVar41,
                       fVar14 * fVar38 + fVar21 * fVar39 + fVar26 * fVar40 + fVar31 * fVar41);
  puVar1[2] = CONCAT44(fVar13 * fVar38 + fVar19 * fVar39 + fVar25 * fVar40 + fVar30 * fVar41,
                       fVar10 * fVar38 + fVar16 * fVar39 + fVar23 * fVar40 + fVar28 * fVar41);
  fVar34 = (float)((ulong)uVar11 >> 0x20);
  puVar1[5] = CONCAT44(fVar15 * fVar42 + fVar22 * fVar43 + fVar27 * fVar44 + fVar33 * fVar34,
                       fVar14 * fVar42 + fVar21 * fVar43 + fVar26 * fVar44 + fVar31 * fVar34);
  puVar1[4] = CONCAT44(fVar13 * fVar42 + fVar19 * fVar43 + fVar25 * fVar44 + fVar30 * fVar34,
                       fVar10 * fVar42 + fVar16 * fVar43 + fVar23 * fVar44 + fVar28 * fVar34);
  puVar1[7] = CONCAT44(0x3f800000,fVar20);
  puVar1[6] = uVar17;
  return;
}


