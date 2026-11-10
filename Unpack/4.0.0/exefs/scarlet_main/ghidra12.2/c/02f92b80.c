/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f92b80; name: FUN_02f92b80
 */


undefined8 FUN_02f92b80(long param_1,long param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar36;
  undefined1 auVar35 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  fVar17 = (float)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20);
  fVar18 = (float)((uint)*(ushort *)(*(long *)(param_3 + 0x98) + 0x38) << 0x10);
  if (fVar17 < -fVar18) {
    uVar10 = 1;
  }
  else {
    fVar30 = (float)*(undefined8 *)(param_5 + 0x40);
    fVar19 = fVar30 * (float)*param_4;
    fVar32 = (float)((ulong)*(undefined8 *)(param_5 + 0x40) >> 0x20);
    fVar20 = fVar32 * (float)((ulong)*param_4 >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_5 + 0x48);
    fVar21 = fVar33 * (float)param_4[1];
    fVar22 = (float)((ulong)*(undefined8 *)(param_5 + 0x48) >> 0x20) *
             (float)((ulong)param_4[1] >> 0x20);
    auVar25._4_4_ = fVar20;
    auVar25._0_4_ = fVar19;
    auVar25._8_4_ = fVar21;
    auVar25._12_4_ = fVar22;
    auVar35._4_4_ = fVar20;
    auVar35._0_4_ = fVar19;
    auVar35._8_4_ = fVar21;
    auVar35._12_4_ = fVar22;
    auVar25 = NEON_ext(auVar25,auVar35,8,1);
    fVar19 = -(fVar19 + fVar20 + auVar25._0_4_);
    if ((float)*(undefined8 *)(param_5 + 0x90) <= fVar19 * (float)*(undefined8 *)(param_5 + 0x60)) {
      if (*(float *)(param_3 + 4) / fVar19 <= (float)*(undefined8 *)(param_5 + 0x68)) {
        pauVar11 = *(undefined1 (**) [16])(param_2 + 0x30);
        auVar25 = *pauVar11;
        pauVar2 = pauVar11 + 1;
        uVar28 = (undefined4)((ulong)*(undefined8 *)(pauVar11[1] + 8) >> 0x20);
        fVar26 = (float)*(undefined8 *)*pauVar2;
        fVar27 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
        pauVar1 = pauVar11 + 2;
        uVar34 = (undefined4)((ulong)*(undefined8 *)(pauVar11[2] + 8) >> 0x20);
        fVar29 = (float)*(undefined8 *)*pauVar1;
        fVar31 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar39._12_4_ = uVar34;
        auVar39._0_12_ = *(undefined1 (*) [12])*pauVar1;
        auVar4._12_4_ = uVar34;
        auVar4._0_12_ = *(undefined1 (*) [12])*pauVar1;
        auVar39 = NEON_ext(auVar39,auVar4,8,1);
        auVar35 = NEON_ext(auVar25,auVar25,8,1);
        auVar38._12_4_ = uVar28;
        auVar38._0_12_ = *(undefined1 (*) [12])*pauVar2;
        auVar3._12_4_ = uVar28;
        auVar3._0_12_ = *(undefined1 (*) [12])*pauVar2;
        auVar38 = NEON_ext(auVar38,auVar3,8,1);
        fVar13 = auVar35._0_4_;
        fVar16 = auVar38._0_4_;
        fVar14 = auVar25._0_4_;
        fVar15 = auVar25._4_4_;
        puVar12 = *(undefined8 **)(param_1 + 0x30);
        fVar21 = (float)puVar12[5];
        fVar19 = (float)puVar12[4];
        fVar20 = (float)((ulong)puVar12[4] >> 0x20);
        uVar10 = 0;
        fVar36 = auVar39._0_4_;
        fVar37 = auVar39._4_4_;
        *(ulong *)(param_5 + 0xe8) =
             CONCAT44(fVar37 * fVar21 + fVar31 * fVar19 + fVar37 * fVar20,
                      fVar36 * fVar21 + fVar29 * fVar19 + fVar31 * fVar20);
        *(ulong *)(param_5 + 0xe0) =
             CONCAT44(fVar16 * fVar21 + fVar26 * fVar19 + fVar27 * fVar20,
                      fVar13 * fVar21 + fVar14 * fVar19 + fVar15 * fVar20);
        fVar21 = (float)puVar12[3];
        fVar19 = (float)puVar12[2];
        fVar20 = (float)((ulong)puVar12[2] >> 0x20);
        *(ulong *)(param_5 + 0xd8) =
             CONCAT44(fVar37 * fVar21 + fVar31 * fVar19 + fVar37 * fVar20,
                      fVar36 * fVar21 + fVar29 * fVar19 + fVar31 * fVar20);
        *(ulong *)(param_5 + 0xd0) =
             CONCAT44(fVar16 * fVar21 + fVar26 * fVar19 + fVar27 * fVar20,
                      fVar13 * fVar21 + fVar14 * fVar19 + fVar15 * fVar20);
        fVar21 = (float)puVar12[1];
        fVar19 = (float)*puVar12;
        fVar20 = (float)((ulong)*puVar12 >> 0x20);
        *(ulong *)(param_5 + 200) =
             CONCAT44(fVar37 * fVar21 + fVar31 * fVar19 + fVar37 * fVar20,
                      fVar36 * fVar21 + fVar29 * fVar19 + fVar31 * fVar20);
        *(ulong *)(param_5 + 0xc0) =
             CONCAT44(fVar16 * fVar21 + fVar26 * fVar19 + fVar27 * fVar20,
                      fVar13 * fVar21 + fVar14 * fVar19 + fVar15 * fVar20);
        fVar19 = *(float *)(puVar12 + 6);
        fVar20 = *(float *)((long)puVar12 + 0x34);
        fVar21 = *(float *)(puVar12 + 7);
        fVar22 = *(float *)(puVar12 + 8);
        fVar5 = *(float *)((long)puVar12 + 0x44);
        fVar6 = *(float *)(puVar12 + 9);
        uVar24 = *(undefined8 *)(pauVar11[4] + 8);
        uVar23 = *(undefined8 *)pauVar11[4];
        fVar7 = *(float *)pauVar11[3];
        fVar8 = *(float *)(pauVar11[3] + 4);
        fVar9 = *(float *)(pauVar11[3] + 8);
        *(ulong *)(param_5 + 0x58) =
             CONCAT44(fVar37 * fVar33 + fVar31 * fVar30 + fVar37 * fVar32,
                      fVar36 * fVar33 + fVar29 * fVar30 + fVar31 * fVar32);
        *(ulong *)(param_5 + 0x50) =
             CONCAT44(fVar16 * fVar33 + fVar26 * fVar30 + fVar27 * fVar32,
                      fVar13 * fVar33 + fVar14 * fVar30 + fVar15 * fVar32);
        fVar30 = (fVar19 - fVar7) + (fVar22 - (float)uVar23);
        fVar32 = (fVar20 - fVar8) + (fVar5 - (float)((ulong)uVar23 >> 0x20));
        fVar33 = (fVar21 - fVar9) + (fVar6 - (float)uVar24);
        *(ulong *)(param_5 + 0xf8) =
             CONCAT44(fVar37 * fVar33 + fVar31 * fVar30 + fVar37 * fVar32,
                      fVar36 * fVar33 + fVar29 * fVar30 + fVar31 * fVar32);
        *(ulong *)(param_5 + 0xf0) =
             CONCAT44(fVar16 * fVar33 + fVar26 * fVar30 + fVar27 * fVar32,
                      fVar13 * fVar33 + fVar14 * fVar30 + fVar15 * fVar32);
        fVar30 = *(float *)(*(long *)(param_1 + 0x28) + 0x20);
        fVar32 = *(float *)(*(long *)(param_2 + 0x28) + 0x20);
        *(long *)(param_5 + 0x100) = *(long *)(param_2 + 0x28);
        *(ulong *)(param_5 + 0x78) = CONCAT44(fVar17,fVar17);
        fVar30 = fVar30 + fVar32;
        uVar23 = NEON_fmax(CONCAT44(-(fVar17 - fVar30),-(fVar17 - fVar30)),0,4);
        uVar23 = NEON_fmin(CONCAT44((float)((ulong)*(undefined8 *)(param_5 + 0x70) >> 0x20) * 0.7,
                                    (float)*(undefined8 *)(param_5 + 0x70) * 0.7),
                           CONCAT44(fVar18 - (float)((ulong)uVar23 >> 0x20),fVar18 - (float)uVar23),
                           4);
        fVar18 = (float)((ulong)uVar23 >> 0x20);
        uVar24 = NEON_fmin(CONCAT44(fVar30,fVar30),CONCAT44(fVar18 * 0.5,(float)uVar23 * 0.5),4);
        fVar17 = (float)((ulong)uVar24 >> 0x20);
        *(ulong *)(param_5 + 0x108) = CONCAT44(fVar18 - fVar17,(float)uVar23 - (float)uVar24);
        *(ulong *)(param_5 + 0x80) = CONCAT44(fVar30,fVar30);
        *(ulong *)(param_5 + 0x88) = CONCAT44(fVar30 - fVar17,fVar30 - (float)uVar24);
      }
      else {
        uVar10 = 3;
      }
    }
    else {
      uVar10 = 2;
    }
  }
  return uVar10;
}


