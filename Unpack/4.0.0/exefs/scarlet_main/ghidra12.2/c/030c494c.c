/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c494c; name: FUN_030c494c
 */


void FUN_030c494c(long param_1,int *param_2,int *param_3)

{
  undefined1 (*pauVar1) [12];
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  long lVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  float extraout_s0;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 extraout_var;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined8 uVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar51;
  undefined1 auVar50 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 local_d0 [6];
  undefined8 local_a0 [8];
  
  uVar20 = 4;
  if (*(char *)((long)param_2 + 6) != '\0') {
    uVar20 = 6;
  }
  uVar21 = 8;
  if (*(char *)((long)param_3 + 6) != '\0') {
    uVar21 = 9;
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_030c4dc4(param_1,param_2,uVar20);
    FUN_030c4dc4(param_1,param_3,uVar21);
    return;
  }
  local_a0[0] = 0x2fffffffe;
  FUN_030c4fa0(param_1,param_2,local_a0);
  FUN_030c4dc4(param_1,local_a0,uVar20);
  iVar4 = *param_2;
  iVar22 = *param_3;
  fVar53 = extraout_s0;
  if (iVar4 < iVar22) {
    lVar28 = (long)iVar4 << 7;
    uVar25 = (long)iVar4;
    do {
      uVar2 = uVar25 + 1;
      if ((long)*(int *)(param_1 + 0x20) <= (long)uVar2) break;
      lVar23 = *(long *)(param_1 + 0x40) + lVar28;
      pauVar1 = (undefined1 (*) [12])(param_1 + 0x90);
      fVar41 = (float)*(undefined8 *)(param_1 + 0x98);
      fVar42 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
      uVar49 = *(undefined8 *)*pauVar1;
      fVar39 = (float)uVar49;
      fVar40 = (float)((ulong)uVar49 >> 0x20);
      fVar32 = *(float *)(lVar23 + 0xb0);
      fVar33 = *(float *)(lVar23 + 0xb4);
      fVar34 = *(float *)(lVar23 + 0xb8);
      fVar35 = (float)*(undefined8 *)(lVar23 + 0xc0) - fVar32;
      fVar36 = (float)((ulong)*(undefined8 *)(lVar23 + 0xc0) >> 0x20) - fVar33;
      fVar37 = (float)*(undefined8 *)(lVar23 + 200) - fVar34;
      fVar38 = (float)((ulong)*(undefined8 *)(lVar23 + 200) >> 0x20) - *(float *)(lVar23 + 0xbc);
      auVar10._12_4_ = fVar42;
      auVar10._0_12_ = *pauVar1;
      auVar11._12_4_ = fVar42;
      auVar11._0_12_ = *pauVar1;
      auVar44 = NEON_ext(auVar10,auVar11,8,1);
      uVar49 = NEON_ext(uVar49,auVar44._0_8_,4,1);
      auVar44._4_4_ = fVar36;
      auVar44._0_4_ = fVar35;
      auVar44._8_4_ = fVar37;
      auVar44._12_4_ = fVar38;
      auVar50._4_4_ = fVar36;
      auVar50._0_4_ = fVar35;
      auVar50._8_4_ = fVar37;
      auVar50._12_4_ = fVar38;
      auVar44 = NEON_ext(auVar44,auVar50,4,1);
      fVar54 = fVar39 * auVar44._0_4_ - fVar35 * (float)uVar49;
      fVar56 = fVar40 * auVar44._4_4_ - fVar36 * (float)((ulong)uVar49 >> 0x20);
      fVar58 = fVar41 * fVar35 - fVar37 * fVar39;
      fVar60 = fVar42 * fVar36 - fVar38 * fVar40;
      auVar16._4_4_ = fVar56;
      auVar16._0_4_ = fVar54;
      auVar16._8_4_ = fVar58;
      auVar16._12_4_ = fVar60;
      auVar17._4_4_ = fVar56;
      auVar17._0_4_ = fVar54;
      auVar17._8_4_ = fVar58;
      auVar17._12_4_ = fVar60;
      auVar50 = NEON_ext(auVar16,auVar17,4,1);
      fVar48 = auVar50._0_4_;
      fVar51 = auVar50._4_4_;
      fVar61 = fVar48 * fVar48 + fVar51 * fVar51 + fVar54 * fVar54;
      fVar59 = 0.0;
      fVar52 = 0.0;
      fVar55 = 0.0;
      fVar57 = 0.0;
      fVar56 = fVar55;
      fVar58 = fVar57;
      fVar60 = fVar59;
      if (fVar61 != 0.0) {
        fVar61 = SQRT(fVar61);
        fVar52 = SQRT(fVar48 * fVar48 + fVar51 * fVar51 + fVar54 * fVar54);
        fVar56 = fVar48 / fVar61;
        fVar58 = fVar51 / fVar52;
        fVar60 = fVar54 / fVar61;
        fVar52 = 0.0 / fVar52;
      }
      fVar63 = -(fVar32 * fVar56 + fVar33 * fVar58 + fVar34 * fVar60);
      fVar48 = (float)param_2[4];
      fVar51 = (float)param_2[5];
      fVar61 = (float)param_2[6];
      fVar54 = (float)param_2[7];
      auVar62._0_4_ = fVar48 * fVar56;
      auVar62._4_4_ = fVar51 * fVar58;
      auVar62._8_4_ = fVar61 * fVar60;
      auVar62._12_4_ = fVar54 * fVar63;
      auVar50 = NEON_ext(auVar62,auVar62,8,1);
      fVar30 = auVar50._0_4_ + fVar63;
      fVar64 = fVar56 * (float)param_3[4];
      fVar65 = fVar58 * (float)param_3[5];
      fVar66 = fVar60 * (float)param_3[6];
      fVar67 = fVar63 * (float)param_3[7];
      auVar18._4_4_ = fVar65;
      auVar18._0_4_ = fVar64;
      auVar18._8_4_ = fVar66;
      auVar18._12_4_ = fVar67;
      auVar19._4_4_ = fVar65;
      auVar19._0_4_ = fVar64;
      auVar19._8_4_ = fVar66;
      auVar19._12_4_ = fVar67;
      auVar50 = NEON_ext(auVar18,auVar19,8,1);
      fVar31 = auVar50._0_4_ + fVar63;
      fVar66 = auVar62._0_4_ + auVar62._4_4_ + fVar30;
      fVar30 = auVar62._0_4_ + auVar62._4_4_ + fVar30;
      fVar67 = fVar64 + fVar65 + fVar31;
      if (((0.0 < fVar66) && (fVar67 < 0.0)) || ((fVar66 < 0.0 && (0.0 < fVar67)))) {
        fVar66 = fVar66 / (fVar66 - fVar67);
        fVar30 = fVar30 / (fVar30 - (fVar64 + fVar65 + fVar31));
        fVar48 = fVar48 + ((float)param_3[4] - fVar48) * fVar66;
        fVar51 = fVar51 + ((float)param_3[5] - fVar51) * fVar30;
        fVar61 = fVar61 + ((float)param_3[6] - fVar61) * fVar66;
        auVar12._4_4_ = fVar58;
        auVar12._0_4_ = fVar56;
        auVar12._8_4_ = fVar60;
        auVar12._12_4_ = fVar52;
        auVar13._4_4_ = fVar58;
        auVar13._0_4_ = fVar56;
        auVar13._8_4_ = fVar60;
        auVar13._12_4_ = fVar52;
        auVar50 = NEON_ext(auVar12,auVar13,4,1);
        fVar52 = fVar35 * auVar50._0_4_ - auVar44._0_4_ * fVar56;
        fVar53 = fVar36 * auVar50._4_4_ - auVar44._4_4_ * fVar58;
        fVar56 = fVar37 * fVar56 - fVar35 * fVar60;
        fVar58 = fVar38 * fVar58 - fVar36 * fVar63;
        auVar14._4_4_ = fVar53;
        auVar14._0_4_ = fVar52;
        auVar14._8_4_ = fVar56;
        auVar14._12_4_ = fVar58;
        auVar15._4_4_ = fVar53;
        auVar15._0_4_ = fVar52;
        auVar15._8_4_ = fVar56;
        auVar15._12_4_ = fVar58;
        auVar44 = NEON_ext(auVar14,auVar15,4,1);
        fVar53 = auVar44._0_4_;
        fVar56 = auVar44._4_4_;
        fVar58 = fVar52 * fVar52 + fVar53 * fVar53 + fVar56 * fVar56;
        if (fVar58 != 0.0) {
          fVar58 = SQRT(fVar58);
          fVar55 = fVar53 / fVar58;
          fVar57 = fVar56 / SQRT(fVar52 * fVar52 + fVar53 * fVar53 + fVar56 * fVar56);
          fVar59 = fVar52 / fVar58;
        }
        fVar53 = fVar48 * fVar55;
        fVar58 = fVar51 * fVar57;
        fVar60 = fVar61 * fVar59;
        fVar56 = ((fVar32 * fVar55 + fVar33 * fVar57 + fVar34 * fVar59) - (fVar53 + fVar58 + fVar60)
                 ) / (fVar41 * fVar59 + fVar39 * fVar55 + fVar40 * fVar57);
        fVar58 = ((fVar32 * fVar55 + fVar33 * fVar57 + fVar34 * fVar59) - (fVar53 + fVar58 + fVar60)
                 ) / (fVar41 * fVar59 + fVar39 * fVar55 + fVar40 * fVar57);
        fVar53 = fVar48 + fVar39 * fVar56;
        fVar51 = fVar51 + fVar40 * fVar58;
        auVar45._0_8_ = CONCAT44(fVar51,fVar53);
        auVar45._8_4_ = fVar61 + fVar41 * fVar56;
        auVar45._12_4_ = fVar54 + ((float)param_3[7] - fVar54) * fVar30 + fVar42 * fVar58;
        fVar32 = fVar35 * (fVar53 - fVar32);
        fVar33 = fVar36 * (fVar51 - fVar33);
        fVar34 = fVar37 * (auVar45._8_4_ - fVar34);
        fVar56 = fVar38 * (auVar45._12_4_ - *(float *)(lVar23 + 0xbc));
        auVar5._4_4_ = fVar33;
        auVar5._0_4_ = fVar32;
        auVar5._8_4_ = fVar34;
        auVar5._12_4_ = fVar56;
        auVar6._4_4_ = fVar33;
        auVar6._0_4_ = fVar32;
        auVar6._8_4_ = fVar34;
        auVar6._12_4_ = fVar56;
        auVar44 = NEON_ext(auVar5,auVar6,8,1);
        fVar32 = fVar32 + fVar33 + auVar44._0_4_;
        if (0.0 <= fVar32) {
          fVar35 = fVar35 * fVar35;
          fVar36 = fVar36 * fVar36;
          auVar8._4_4_ = fVar36;
          auVar8._0_4_ = fVar35;
          auVar8._8_4_ = fVar37 * fVar37;
          auVar8._12_4_ = fVar38 * fVar38;
          auVar9._4_4_ = fVar36;
          auVar9._0_4_ = fVar35;
          auVar9._8_4_ = fVar37 * fVar37;
          auVar9._12_4_ = fVar38 * fVar38;
          auVar44 = NEON_ext(auVar8,auVar9,8,1);
          if (fVar32 <= auVar44._0_4_ + fVar35 + fVar36) {
            puVar24 = (undefined8 *)(param_1 + 0x30);
            puVar26 = (uint *)(param_1 + 0x104);
            if ((-2 < (int)uVar25) && (*(int *)(param_1 + 0x20) != 0)) {
              puVar26 = (uint *)(**(long **)(param_1 + 0x68) + (uVar2 & 0xffffffff) * 4);
              puVar24 = (undefined8 *)
                        (*(long *)(param_1 + 0x40) + (uVar2 & 0xffffffff) * 0x80 + 0x70);
            }
            puVar27 = *(undefined8 **)(param_1 + 0xc0);
            uVar3 = *puVar26;
            uVar7 = puVar24[1];
            uVar49 = *puVar24;
            plVar29 = (long *)*puVar27;
            auVar46 = auVar45;
            if (plVar29 != (long *)0x0) {
              iVar22 = (int)plVar29[1];
              lVar23 = (long)iVar22;
              if ((int)(*(uint *)((long)plVar29 + 0xc) & 0x7fffffff) <= iVar22) {
                FUN_0308eb60(plVar29,PTR_PTR_047d1a50,lVar23 + 1);
                auVar46._8_8_ = auVar45._8_8_;
                auVar46._0_8_ = auVar45._0_8_;
                iVar22 = (int)plVar29[1];
              }
              puVar24 = (undefined8 *)(*plVar29 + (long)iVar22 * 0x30);
              *(undefined4 *)(puVar24 + 4) = 0;
              *(uint *)((long)puVar24 + 0x24) = uVar3 >> 0x16;
              puVar24[1] = auVar46._8_8_;
              *puVar24 = auVar46._0_8_;
              puVar24[3] = uVar7;
              puVar24[2] = uVar49;
              *(undefined1 *)(puVar24 + 5) = 0;
              *(int *)(plVar29 + 1) = (int)(lVar23 + 1);
            }
            puVar24 = (undefined8 *)puVar27[1];
            uVar43 = auVar46._0_8_;
            uVar47 = auVar46._8_8_;
            if ((puVar24 != (undefined8 *)0x0) &&
               (*(int *)((long)puVar27 + 0x14) < *(int *)(puVar27 + 2))) {
              puVar24[1] = uVar47;
              *puVar24 = uVar43;
              puVar24[3] = uVar7;
              puVar24[2] = uVar49;
              *(undefined4 *)(puVar24 + 4) = 0;
              *(uint *)((long)puVar24 + 0x24) = uVar3 >> 0x16;
              *(undefined1 *)(puVar24 + 5) = 0;
              puVar27[1] = puVar27[1] + 0x30;
              *(int *)((long)puVar27 + 0x14) = *(int *)((long)puVar27 + 0x14) + 1;
            }
            if (0 < *(int *)(puVar27 + 3)) {
              fVar32 = (float)puVar27[4] - auVar46._0_4_;
              fVar33 = (float)((ulong)puVar27[4] >> 0x20) - auVar46._4_4_;
              fVar34 = (float)puVar27[5] - auVar46._8_4_;
              fVar32 = fVar32 * fVar32;
              fVar33 = fVar33 * fVar33;
              fVar34 = fVar34 * fVar34;
              puVar27[6] = CONCAT44((float)((ulong)puVar27[6] >> 0x20) +
                                    SQRT(fVar32 + fVar33 + fVar34),
                                    (float)puVar27[6] + SQRT(fVar32 + fVar33 + fVar34));
            }
            *(int *)(puVar27 + 3) = *(int *)(puVar27 + 3) + 1;
            puVar27[5] = uVar47;
            puVar27[4] = uVar43;
            *(ulong *)(param_1 + 0xd0) = uVar2 & 0xffffffff | 0x200000000;
            *(undefined8 *)(param_1 + 0xe8) = uVar47;
            *(undefined8 *)(param_1 + 0xe0) = uVar43;
            *(ulong *)(param_1 + 0xf8) = CONCAT44(extraout_var,auVar45._8_4_);
            *(ulong *)(param_1 + 0xf0) = CONCAT44(fVar51,fVar53);
            iVar22 = *param_3;
          }
        }
      }
      lVar28 = lVar28 + 0x80;
      uVar25 = uVar2;
    } while ((long)uVar2 < (long)iVar22);
  }
  local_d0[0] = 0x2fffffffe;
  FUN_030c4fa0(fVar53,param_1,param_3,local_d0);
  FUN_030c4dc4(param_1,local_d0,uVar21);
  return;
}


