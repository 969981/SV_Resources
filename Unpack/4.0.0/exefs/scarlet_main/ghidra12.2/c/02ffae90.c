/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ffae90; name: FUN_02ffae90
 */


void FUN_02ffae90(long param_1,long param_2,float *param_3,long *param_4)

{
  bool bVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined1 (*pauVar13) [12];
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  int iVar19;
  int iVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  undefined8 uVar42;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  
  if ((param_4 != (long *)0x0) &&
     ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) < *(int *)(param_1 + 0x20))) {
    FUN_02ffc264(param_4);
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar17 = 0;
    do {
      pfVar2 = (float *)(*(long *)(param_1 + 0x18) + lVar17 * 0x40);
      if (*(long *)(pfVar2 + 10) != -1) {
        lVar10 = (**(code **)(**(long **)(param_1 + 0x48) + 0x80))();
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)(param_1 + 0x48) + 0xf0))
                            (*(long **)(param_1 + 0x48),*(undefined8 *)(lVar10 + 0xb0),0xf001,8);
        if (puVar11 == (undefined8 *)0x0) {
          if ((*(byte *)(lVar10 + 0x54) & 5) == 0) {
            pauVar13 = (undefined1 (*) [12])
                       (**(code **)(**(long **)(param_1 + 0x48) + 0x100))
                                 (*(long **)(param_1 + 0x48),*(undefined4 *)(lVar10 + 0x80));
            local_d0 = *pfVar2;
            fStack_cc = pfVar2[1];
            local_c0 = *(undefined8 *)pfVar2;
            fStack_c8 = pfVar2[2];
            fStack_c4 = pfVar2[3];
            uStack_b8 = *(undefined8 *)(pfVar2 + 2);
            uVar16 = *(undefined8 *)(pfVar2 + 10);
            auVar18 = *(undefined1 (*) [16])(pfVar2 + 4);
            uStack_a8 = auVar18._8_8_;
            local_b0 = auVar18._0_8_;
            local_9c = *(float *)(param_2 + 8);
            fVar39 = (float)*(undefined8 *)(*pauVar13 + 8);
            fVar40 = (float)((ulong)*(undefined8 *)(*pauVar13 + 8) >> 0x20);
            uVar15 = *(undefined8 *)*pauVar13;
            auVar7._12_4_ = fVar40;
            auVar7._0_12_ = *pauVar13;
            auVar8._12_4_ = fVar40;
            auVar8._0_12_ = *pauVar13;
            auVar31 = NEON_ext(auVar7,auVar8,8,1);
            fVar37 = auVar31._4_4_ * auVar31._4_4_;
            fVar38 = fVar37 + -0.5;
            fVar37 = fVar37 + -0.5;
            auVar36 = *(undefined1 (*) [16])(pauVar13[9] + 4);
            fVar53 = (float)uVar15;
            fVar30 = auVar36._0_4_;
            fVar49 = (float)((ulong)uVar15 >> 0x20);
            fVar34 = auVar36._4_4_;
            fVar35 = auVar36._8_4_;
            fVar41 = fVar53 * fVar30 + fVar49 * fVar34 + fVar39 * fVar35;
            fVar43 = fVar53 * fVar30 + fVar49 * fVar34 + fVar39 * fVar35;
            uVar15 = NEON_ext(uVar15,auVar31._0_8_,4,1);
            fVar26 = (float)*(undefined8 *)pfVar2 - (float)*(double *)(pauVar13[1] + 4);
            fVar27 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20) - (float)*(double *)pauVar13[2];
            fVar28 = (float)*(undefined8 *)(pfVar2 + 2) - (float)*(double *)(pauVar13[2] + 8);
            fVar29 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20) - 0.0;
            auVar31 = NEON_ext(auVar36,auVar36,8,1);
            uVar42 = NEON_ext(auVar36._0_8_,auVar31._0_8_,4,1);
            auVar32._0_4_ = fVar53 * (float)uVar42 - fVar30 * (float)uVar15;
            auVar32._4_4_ =
                 fVar49 * (float)((ulong)uVar42 >> 0x20) - fVar34 * (float)((ulong)uVar15 >> 0x20);
            auVar32._8_4_ = fVar39 * fVar30 - fVar35 * fVar53;
            auVar32._12_4_ = fVar40 * fVar34 - auVar36._12_4_ * fVar49;
            auVar31 = NEON_ext(auVar32,auVar32,4,1);
            fVar30 = fVar30 * fVar38 + fVar53 * fVar41 + auVar31._0_4_ * fVar40;
            fVar34 = fVar34 * fVar37 + fVar49 * fVar43 + auVar31._4_4_ * fVar40;
            fVar35 = fVar35 * fVar38 + fVar39 * fVar41 + auVar32._0_4_ * fVar40;
            fVar37 = auVar36._12_4_ * fVar37 + fVar40 * fVar43 + fVar40 * 0.0;
            auVar36._4_4_ = fVar27;
            auVar36._0_4_ = fVar26;
            auVar36._8_4_ = fVar28;
            auVar36._12_4_ = fVar29;
            auVar31._4_4_ = fVar27;
            auVar31._0_4_ = fVar26;
            auVar31._8_4_ = fVar28;
            auVar31._12_4_ = fVar29;
            auVar31 = NEON_ext(auVar36,auVar31,4,1);
            auVar33._0_4_ = fVar30 + fVar30;
            auVar33._4_4_ = fVar34 + fVar34;
            auVar33._8_4_ = fVar35 + fVar35;
            auVar33._12_4_ = fVar37 + fVar37;
            auVar36 = NEON_ext(auVar33,auVar33,4,1);
            fVar34 = auVar31._0_4_ * auVar33._0_4_ - fVar26 * auVar36._0_4_;
            fVar30 = auVar31._4_4_ * auVar33._4_4_ - fVar27 * auVar36._4_4_;
            fVar26 = fVar26 * auVar33._8_4_ - fVar28 * auVar33._0_4_;
            fVar27 = fVar27 * auVar33._12_4_ - fVar29 * auVar33._4_4_;
            auVar3._4_4_ = fVar30;
            auVar3._0_4_ = fVar34;
            auVar3._8_4_ = fVar26;
            auVar3._12_4_ = fVar27;
            auVar4._4_4_ = fVar30;
            auVar4._0_4_ = fVar34;
            auVar4._8_4_ = fVar26;
            auVar4._12_4_ = fVar27;
            auVar36 = NEON_ext(auVar3,auVar4,4,1);
            fVar27 = auVar18._0_4_;
            fVar26 = fVar27 * (((float)*(undefined8 *)pauVar13[8] + auVar36._0_4_) -
                              *(float *)(param_1 + 0xc0));
            fVar30 = auVar18._4_4_;
            fVar29 = fVar30 * (((float)((ulong)*(undefined8 *)pauVar13[8] >> 0x20) + auVar36._4_4_)
                              - *(float *)(param_1 + 0xc4));
            fVar28 = auVar18._8_4_;
            fVar35 = fVar28 * (((float)*(undefined8 *)(pauVar13[8] + 8) + fVar34) -
                              *(float *)(param_1 + 200));
            fVar34 = auVar18._12_4_;
            fVar37 = fVar34 * (((float)((ulong)*(undefined8 *)(pauVar13[8] + 8) >> 0x20) + 0.0) -
                              *(float *)(param_1 + 0xcc));
            auVar5._4_4_ = fVar29;
            auVar5._0_4_ = fVar26;
            auVar5._8_4_ = fVar35;
            auVar5._12_4_ = fVar37;
            auVar6._4_4_ = fVar29;
            auVar6._0_4_ = fVar26;
            auVar6._8_4_ = fVar35;
            auVar6._12_4_ = fVar37;
            auVar36 = NEON_ext(auVar5,auVar6,8,1);
            local_98 = fVar26 + fVar29 + auVar36._0_4_;
            fVar26 = pfVar2[8] * *(float *)(param_2 + 0xc) * 0.4 + local_98 * -0.9;
            if (0.0 <= pfVar2[8]) {
              fVar26 = local_98 * -0.9;
            }
            if (0.0 <= fVar26) {
              local_a0 = 0.0;
              local_94 = (float)((int)(short)((ulong)*(undefined8 *)(pauVar13[5] + 4) >> 0x30) <<
                                0x10);
              auVar18 = ZEXT816(0);
              fVar53 = local_9c;
            }
            else {
              fVar35 = fVar49 + fVar49;
              fVar37 = fVar39 + fVar39;
              fVar38 = (fVar53 + fVar53) * fVar53;
              fVar29 = (fVar53 + fVar53) * fVar40;
              fVar41 = 1.0 - fVar39 * fVar37;
              fVar56 = fVar37 * fVar49 - fVar29;
              fVar29 = fVar37 * fVar49 + fVar29;
              fVar55 = fVar37 * fVar53 - fVar35 * fVar40;
              fVar45 = fVar41 - fVar35 * fVar49;
              fVar43 = fVar37 * fVar53 + fVar35 * fVar40;
              fVar44 = fVar35 * fVar53 - fVar37 * fVar40;
              fVar54 = fVar35 * fVar53 + fVar37 * fVar40;
              fVar41 = fVar41 - fVar38;
              fVar38 = (1.0 - fVar38) - fVar35 * fVar49;
              auVar20._0_4_ = local_d0 - (float)*(double *)(pauVar13[1] + 4);
              auVar20._4_4_ = fStack_cc - (float)*(double *)pauVar13[2];
              auVar20._8_4_ = fStack_c8 - (float)*(double *)(pauVar13[2] + 8);
              auVar20._12_4_ = fStack_c4 - 0.0;
              uVar15 = *(undefined8 *)(pauVar13[5] + 4);
              fVar35 = (float)((int)(short)((ulong)uVar15 >> 0x20) << 0x10);
              auVar36 = NEON_ext(auVar20,auVar20,4,1);
              fVar37 = fVar43 * fVar35;
              fVar39 = fVar56 * fVar35;
              fVar40 = fVar38 * fVar35;
              fVar35 = fVar35 * 0.0;
              fVar49 = (float)((uint)(ushort)((ulong)uVar15 >> 0x10) << 0x10);
              fVar46 = fVar44 * fVar49;
              fVar47 = fVar41 * fVar49;
              fVar48 = fVar29 * fVar49;
              fVar49 = fVar43 * fVar49;
              fVar53 = (float)((uint)(ushort)uVar15 << 0x10);
              fVar50 = fVar45 * fVar53;
              fVar51 = fVar54 * fVar53;
              fVar52 = fVar55 * fVar53;
              fVar53 = fVar56 * fVar53;
              auVar31 = NEON_ext(auVar18,auVar18,4,1);
              auVar21._0_4_ = auVar31._0_4_ * auVar20._0_4_ - fVar27 * auVar36._0_4_;
              auVar21._4_4_ = auVar31._4_4_ * auVar20._4_4_ - fVar30 * auVar36._4_4_;
              auVar21._8_4_ = fVar27 * auVar20._8_4_ - fVar28 * auVar20._0_4_;
              auVar21._12_4_ = fVar30 * auVar20._12_4_ - fVar34 * auVar20._4_4_;
              auVar36 = NEON_ext(auVar21,auVar21,4,1);
              auVar22._0_4_ =
                   auVar36._0_4_ *
                   ((fVar37 * fVar38 + fVar46 * fVar29 + fVar50 * fVar55) * auVar21._0_4_ +
                   (fVar37 * fVar43 + fVar46 * fVar44 + fVar50 * fVar45) * auVar21._4_4_ +
                   (fVar37 * fVar56 + fVar46 * fVar41 + fVar50 * fVar54) * auVar21._8_4_);
              auVar22._4_4_ =
                   auVar36._4_4_ *
                   ((fVar39 * fVar38 + fVar47 * fVar29 + fVar51 * fVar55) * auVar21._0_4_ +
                   (fVar39 * fVar43 + fVar47 * fVar44 + fVar51 * fVar45) * auVar21._4_4_ +
                   (fVar39 * fVar56 + fVar47 * fVar41 + fVar51 * fVar54) * auVar21._8_4_);
              auVar22._8_4_ =
                   auVar21._0_4_ *
                   ((fVar40 * fVar38 + fVar48 * fVar29 + fVar52 * fVar55) * auVar21._0_4_ +
                   (fVar40 * fVar43 + fVar48 * fVar44 + fVar52 * fVar45) * auVar21._4_4_ +
                   (fVar40 * fVar56 + fVar48 * fVar41 + fVar52 * fVar54) * auVar21._8_4_);
              auVar22._12_4_ =
                   ((fVar35 * fVar38 + fVar49 * fVar29 + fVar53 * fVar55) * auVar21._0_4_ +
                   (fVar35 * fVar43 + fVar49 * fVar44 + fVar53 * fVar45) * auVar21._4_4_ +
                   (fVar35 * fVar56 + fVar49 * fVar41 + fVar53 * fVar54) * auVar21._8_4_) * 0.0;
              auVar36 = NEON_ext(auVar22,auVar22,8,1);
              local_94 = (float)((int)(short)((ulong)uVar15 >> 0x30) << 0x10) +
                         auVar22._0_4_ + auVar22._4_4_ + auVar36._0_4_;
              fVar53 = *(float *)(param_2 + 8) * -*(float *)(param_1 + 0x154);
              local_a0 = fVar26 / local_94;
              if (fVar26 / local_94 < fVar53) {
                local_a0 = fVar53;
              }
              auVar18._0_4_ = fVar27 * local_a0;
              auVar18._4_4_ = fVar30 * local_a0;
              auVar18._8_4_ = fVar28 * local_a0;
              auVar18._12_4_ = fVar34 * local_a0;
              fVar53 = *(float *)(param_2 + 8);
            }
            fVar49 = *(float *)*(undefined1 (*) [16])(pfVar2 + 4);
            fVar26 = fVar49 * *param_3 * fVar53;
            fVar27 = pfVar2[5] * param_3[1] * fVar53;
            fVar30 = pfVar2[6] * param_3[2] * fVar53;
            fVar53 = fVar26 + fVar27 + fVar30;
            fVar30 = fVar26 + fVar27 + fVar30;
            uVar14 = CONCAT44(fVar30,fVar53);
            uVar14 = uVar14 ^ (uVar14 ^ CONCAT44(fVar30 - local_98,fVar53 - local_98)) &
                              CONCAT44(-(uint)(local_98 < 0.0),-(uint)(local_98 < 0.0));
            fVar53 = (float)uVar14;
            fVar27 = fVar53 * *(float *)(param_1 + 0x158);
            fVar26 = (float)(uVar14 >> 0x20);
            fVar30 = fVar26 * *(float *)(param_1 + 0x158);
            uVar14 = CONCAT44(-(uint)(fVar26 < -1.1920929e-07),-(uint)(fVar53 < -1.1920929e-07)) &
                     0x100000001;
            iVar19 = (int)uVar14;
            iVar24 = (int)(uVar14 >> 0x20);
            auVar25._0_4_ = auVar18._0_4_ + fVar49 * fVar27;
            auVar25._4_4_ = auVar18._4_4_ + pfVar2[5] * fVar30;
            auVar25._8_4_ = auVar18._8_4_ + pfVar2[6] * fVar27;
            auVar25._12_4_ = auVar18._12_4_ + pfVar2[7] * fVar30;
            auVar23._0_4_ = (iVar19 << 0x1f) >> 0x1f;
            auVar23._4_4_ = (iVar24 << 0x1f) >> 0x1f;
            auVar23._8_4_ = (iVar19 << 0x1f) >> 0x1f;
            auVar23._12_4_ = (iVar24 << 0x1f) >> 0x1f;
            auVar18 = auVar18 ^ (auVar18 ^ auVar25) & auVar23;
            uStack_d8 = auVar18._8_8_;
            local_e0 = auVar18._0_8_;
            uVar14 = (ulong)*(uint *)(param_1 + 0x100);
            local_90 = uVar16;
            if (0 < (int)*(uint *)(param_1 + 0x100)) {
              do {
                plVar12 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar14 - 1) * 8);
                (**(code **)(*plVar12 + 0x40))(plVar12,param_1,&local_c0,&local_e0);
                bVar1 = 1 < (long)uVar14;
                uVar14 = uVar14 - 1;
              } while (bVar1);
            }
            if (param_4 == (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x50) + 0xd0))
                        (*(long **)(param_1 + 0x50),uVar16,&local_e0,&local_d0,0);
            }
            else {
              iVar19 = (int)param_4[1];
              lVar10 = (long)iVar19;
              if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar19) {
                FUN_02ffc3fc(param_4,lVar10 + 1);
                iVar19 = (int)param_4[1];
              }
              puVar11 = (undefined8 *)(*param_4 + (long)iVar19 * 0x30);
              *(int *)(param_4 + 1) = (int)(lVar10 + 1);
              *puVar11 = uVar16;
              puVar11[3] = uStack_d8;
              puVar11[2] = local_e0;
              auVar9._8_4_ = fStack_c8;
              auVar9._0_8_ = CONCAT44(fStack_cc,local_d0);
              auVar9._12_4_ = fStack_c4;
              puVar11[5] = auVar9._8_8_;
              puVar11[4] = CONCAT44(fStack_cc,local_d0);
            }
          }
        }
        else {
          local_c0 = *(undefined8 *)pfVar2;
          uStack_b8 = *(undefined8 *)(pfVar2 + 2);
          uVar15 = *puVar11;
          uStack_a8 = SUB168(*(undefined1 (*) [16])(pfVar2 + 4),8);
          local_b0 = SUB168(*(undefined1 (*) [16])(pfVar2 + 4),0);
          uVar14 = (ulong)*(uint *)(param_1 + 0x100);
          if (0 < (int)*(uint *)(param_1 + 0x100)) {
            do {
              plVar12 = *(long **)(*(long *)(param_1 + 0xf8) + (uVar14 - 1) * 8);
              (**(code **)(*plVar12 + 0x38))(plVar12,param_1,uVar15,&local_c0);
              bVar1 = 1 < (long)uVar14;
              uVar14 = uVar14 - 1;
            } while (bVar1);
          }
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(param_1 + 0x20));
  }
  return;
}


