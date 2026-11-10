/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d900b4; name: FUN_00d900b4
 */


void FUN_00d900b4(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float local_c;
  float fStack_8;
  float local_4;
  
  if (param_2 <= 0.0) {
    param_3 = param_3 + 0x18;
  }
  else if (param_2 < 1.0) {
    if ((param_2 < 0.49999988) || (0.5000001 < param_2)) {
      if (param_2 < 0.5) {
        local_4 = param_2 + param_2;
        pfVar1 = &local_c;
        if (local_4 <= 1.0) {
          pfVar1 = &local_4;
        }
        bVar3 = 0.0 <= local_4;
        local_c = 1.0;
        fStack_8 = 0.0;
        fVar25 = param_3[0x18];
        fVar4 = param_3[0x19];
        fVar26 = param_3[0xc];
        fVar17 = param_3[0xd];
        auVar14 = NEON_fmov(0x40400000,4);
        auVar18 = NEON_fmov(0x40800000,4);
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        fVar19 = *pfVar2;
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        local_c = 1.0;
        fStack_8 = 0.0;
        fVar10 = *pfVar2;
        local_c = 1.0;
        fStack_8 = 0.0;
        fVar13 = (float)*(undefined8 *)(param_3 + 0x10);
        fVar15 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
        fVar16 = (float)*(undefined8 *)(param_3 + 0x12);
        fVar24 = (float)((ulong)*(undefined8 *)(param_3 + 0x12) >> 0x20);
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        fVar30 = *pfVar2;
        fVar7 = (float)*(undefined8 *)(param_3 + 0x1c);
        fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
        fVar11 = (float)*(undefined8 *)(param_3 + 0x1e);
        fVar27 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20);
        fVar28 = (float)*(undefined8 *)(param_3 + 4);
        fVar29 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
        fVar32 = (float)*(undefined8 *)(param_3 + 6);
        fVar34 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        local_c = 1.0;
        fStack_8 = 0.0;
        uVar6 = *(undefined8 *)(param_3 + 0x22);
        uVar5 = *(undefined8 *)(param_3 + 0x20);
        fVar31 = (float)*(undefined8 *)(param_3 + 0x14);
        fVar33 = (float)((ulong)*(undefined8 *)(param_3 + 0x14) >> 0x20);
        fVar35 = (float)*(undefined8 *)(param_3 + 0x16);
        fVar36 = (float)((ulong)*(undefined8 *)(param_3 + 0x16) >> 0x20);
        fVar4 = fVar4 + (fVar19 * ((fVar17 * 4.0 - fVar4 * 3.0) - param_3[1]) +
                        fVar19 * fVar19 * (param_3[1] + (fVar4 - (fVar17 + fVar17)))) * 0.5;
        fVar17 = (float)((ulong)uVar5 >> 0x20);
        fVar19 = (float)((ulong)uVar6 >> 0x20);
        fVar20 = (float)*(undefined8 *)(param_3 + 8);
        fVar21 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
        fVar22 = (float)*(undefined8 *)(param_3 + 10);
        fVar23 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
        fVar25 = fVar25 + (fVar10 * ((fVar26 * 4.0 - fVar25 * 3.0) - *param_3) +
                          fVar10 * fVar10 * (*param_3 + (fVar25 - (fVar26 + fVar26)))) * 0.5;
        fVar12 = *pfVar2;
        fVar7 = fVar7 + (((fVar13 * auVar18._0_4_ - fVar7 * auVar14._0_4_) - fVar28) * fVar30 +
                        (fVar28 + (fVar7 - (fVar13 + fVar13))) * fVar30 * fVar30) * 0.5;
        fVar8 = fVar8 + (((fVar15 * auVar18._4_4_ - fVar8 * auVar14._4_4_) - fVar29) * fVar30 +
                        (fVar29 + (fVar8 - (fVar15 + fVar15))) * fVar30 * fVar30) * 0.5;
        uVar9 = CONCAT44(fVar27 + (((fVar24 * auVar18._12_4_ - fVar27 * auVar14._12_4_) - fVar34) *
                                   fVar30 + (fVar34 + (fVar27 - (fVar24 + fVar24))) * fVar30 *
                                            fVar30) * 0.5,
                         fVar11 + (((fVar16 * auVar18._8_4_ - fVar11 * auVar14._8_4_) - fVar32) *
                                   fVar30 + (fVar32 + (fVar11 - (fVar16 + fVar16))) * fVar30 *
                                            fVar30) * 0.5);
        fVar13 = ((fVar31 * auVar18._0_4_ - (float)uVar5 * auVar14._0_4_) - fVar20) * fVar12;
        fVar15 = ((fVar33 * auVar18._4_4_ - fVar17 * auVar14._4_4_) - fVar21) * fVar12;
        fVar16 = ((fVar35 * auVar18._8_4_ - (float)uVar6 * auVar14._8_4_) - fVar22) * fVar12;
        fVar24 = ((fVar36 * auVar18._12_4_ - fVar19 * auVar14._12_4_) - fVar23) * fVar12;
        fVar26 = (fVar20 + ((float)uVar5 - (fVar31 + fVar31))) * fVar12 * fVar12;
        fVar17 = (fVar21 + (fVar17 - (fVar33 + fVar33))) * fVar12 * fVar12;
        fVar10 = (fVar22 + ((float)uVar6 - (fVar35 + fVar35))) * fVar12 * fVar12;
        fVar12 = (fVar23 + (fVar19 - (fVar36 + fVar36))) * fVar12 * fVar12;
      }
      else {
        local_4 = param_2 + -0.5 + param_2 + -0.5;
        local_c = 1.0;
        fStack_8 = 0.0;
        fVar25 = param_3[0xc];
        fVar4 = param_3[0xd];
        pfVar1 = &local_c;
        if (local_4 <= 1.0) {
          pfVar1 = &local_4;
        }
        bVar3 = 0.0 <= local_4;
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        fVar17 = *pfVar2;
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        local_c = 1.0;
        fStack_8 = 0.0;
        fVar19 = *pfVar2;
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        local_c = 1.0;
        fStack_8 = 0.0;
        fVar26 = *pfVar2;
        fVar7 = (float)*(undefined8 *)(param_3 + 0x10);
        fVar8 = (float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
        fVar15 = (float)*(undefined8 *)(param_3 + 0x12);
        fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 0x12) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_3 + 0x1c);
        fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 0x1c) >> 0x20);
        fVar27 = (float)*(undefined8 *)(param_3 + 0x1e);
        fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 0x1e) >> 0x20);
        fVar29 = (float)*(undefined8 *)(param_3 + 4);
        fVar32 = (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20);
        fVar34 = (float)*(undefined8 *)(param_3 + 6);
        fVar12 = (float)((ulong)*(undefined8 *)(param_3 + 6) >> 0x20);
        local_c = 1.0;
        fStack_8 = 0.0;
        uVar6 = *(undefined8 *)(param_3 + 0x16);
        uVar5 = *(undefined8 *)(param_3 + 0x14);
        fVar10 = (float)((ulong)uVar5 >> 0x20);
        fVar13 = (float)((ulong)uVar6 >> 0x20);
        fVar4 = fVar4 + (fVar17 * (param_3[1] - param_3[0x19]) +
                        fVar17 * fVar17 * (param_3[1] + (param_3[0x19] - (fVar4 + fVar4)))) * 0.5;
        pfVar2 = &fStack_8;
        if (bVar3) {
          pfVar2 = pfVar1;
        }
        fVar20 = (float)*(undefined8 *)(param_3 + 0x20);
        fVar21 = (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20);
        fVar22 = (float)*(undefined8 *)(param_3 + 0x22);
        fVar23 = (float)((ulong)*(undefined8 *)(param_3 + 0x22) >> 0x20);
        fVar24 = *pfVar2;
        fVar7 = fVar7 + ((fVar29 - fVar30) * fVar26 +
                        (fVar29 + (fVar30 - (fVar7 + fVar7))) * fVar26 * fVar26) * 0.5;
        fVar8 = fVar8 + ((fVar32 - fVar11) * fVar26 +
                        (fVar32 + (fVar11 - (fVar8 + fVar8))) * fVar26 * fVar26) * 0.5;
        uVar9 = CONCAT44(fVar16 + ((fVar12 - fVar28) * fVar26 +
                                  (fVar12 + (fVar28 - (fVar16 + fVar16))) * fVar26 * fVar26) * 0.5,
                         fVar15 + ((fVar34 - fVar27) * fVar26 +
                                  (fVar34 + (fVar27 - (fVar15 + fVar15))) * fVar26 * fVar26) * 0.5);
        fVar15 = (float)*(undefined8 *)(param_3 + 8);
        fVar16 = (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20);
        fVar30 = (float)*(undefined8 *)(param_3 + 10);
        fVar11 = (float)((ulong)*(undefined8 *)(param_3 + 10) >> 0x20);
        fVar26 = (fVar15 + (fVar20 - ((float)uVar5 + (float)uVar5))) * fVar24 * fVar24;
        fVar17 = (fVar16 + (fVar21 - (fVar10 + fVar10))) * fVar24 * fVar24;
        fVar10 = (fVar30 + (fVar22 - ((float)uVar6 + (float)uVar6))) * fVar24 * fVar24;
        fVar12 = (fVar11 + (fVar23 - (fVar13 + fVar13))) * fVar24 * fVar24;
        fVar25 = fVar25 + (fVar19 * (*param_3 - param_3[0x18]) +
                          fVar19 * fVar19 * (*param_3 + (param_3[0x18] - (fVar25 + fVar25)))) * 0.5;
        fVar13 = (fVar15 - fVar20) * fVar24;
        fVar15 = (fVar16 - fVar21) * fVar24;
        fVar16 = (fVar30 - fVar22) * fVar24;
        fVar24 = (fVar11 - fVar23) * fVar24;
      }
      param_1[1] = fVar4;
      *param_1 = fVar25;
      *(undefined8 *)(param_1 + 6) = uVar9;
      *(ulong *)(param_1 + 4) = CONCAT44(fVar8,fVar7);
      *(ulong *)(param_1 + 10) =
           CONCAT44((float)((ulong)uVar6 >> 0x20) + (fVar24 + fVar12) * 0.5,
                    (float)uVar6 + (fVar16 + fVar10) * 0.5);
      *(ulong *)(param_1 + 8) =
           CONCAT44((float)((ulong)uVar5 >> 0x20) + (fVar15 + fVar17) * 0.5,
                    (float)uVar5 + (fVar13 + fVar26) * 0.5);
      return;
    }
    param_3 = param_3 + 0xc;
  }
  memcpy(param_1,param_3,0x30);
  return;
}


