/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee6334; name: FUN_02ee6334
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02ee6334(long param_1,float *param_2,undefined4 *param_3,long *param_4,undefined8 *param_5)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined4 uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar31;
  uint uVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar33;
  undefined1 auVar29 [16];
  int iVar34;
  undefined1 auVar30 [16];
  int iVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  long *local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [10];
  undefined1 local_2a6;
  undefined8 local_280;
  undefined8 uStack_278;
  float fStack_270;
  float local_26c;
  float local_268;
  undefined4 uStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  long lStack_250;
  ulong uStack_248;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  
  if ((*(int *)(param_1 + 8) < 1) || (*param_2 < 0.0)) {
    local_b0 = 1;
    local_a8 = 0;
    local_a0 = &local_280;
    local_c0 = PTR_DAT_047e34b8 + 0x10;
    local_b8 = 0xffffffff;
    local_88 = 0;
    local_98 = 0;
    local_90 = 0x1bf;
    memset(&local_280,0,0x1c0);
    FUN_0322bd4c(&local_c0,
                 "No vertices or a negative convex radius supplied. Could not build a convex hull.",
                 0x50);
    uVar21 = 0xabba4d88;
    uVar17 = 0x54d;
LAB_02ee64b4:
    FUN_03226c50(uVar21,&local_280,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Collide/Shape/Convex/hknpConvexShape.cpp"
                 ,uVar17);
    return 0x80040200;
  }
  FUN_0084f37c(auStack_2b0);
  local_2a6 = *(undefined1 *)((long)param_3 + 0x11);
  iVar11 = FUN_00850208(param_4,param_1,auStack_2b0);
  if (iVar11 < 2) {
    local_b0 = 1;
    local_a8 = 0;
    local_a0 = &local_280;
    local_c0 = PTR_DAT_047e34b8 + 0x10;
    local_b8 = 0xffffffff;
    local_88 = 0;
    local_98 = 0;
    local_90 = 0x1bf;
    memset(&local_280,0,0x1c0);
    FUN_0322bd4c(&local_c0,"Face information cannot be built for 0 or 1 dimensional hulls.",0x3e);
    uVar21 = 0xabba4d89;
    uVar17 = 0x55b;
    goto LAB_02ee64b4;
  }
  FUN_00851760(param_4,0xffff);
  iVar11 = FUN_00856b80(param_4);
  if (iVar11 < 2) {
    FUN_00850208(param_4,param_1,auStack_2b0);
  }
  iVar11 = FUN_00856b80(param_4);
  if (iVar11 == 3) {
    FUN_00853f54(param_4);
  }
  iVar11 = param_3[0x12];
  if (0xfb < iVar11) {
    iVar11 = 0xfc;
  }
  if (iVar11 < 2) {
    iVar11 = 1;
  }
  iVar12 = FUN_00853bd8(param_4);
  if (iVar11 < iVar12) {
    uVar21 = NEON_fminnm(*param_3,0x34000000);
    FUN_00851760(uVar21,param_4,iVar11);
  }
  iVar11 = FUN_00856b80(param_4);
  if (iVar11 < 2) {
    FUN_00850208(param_4,param_1,auStack_2b0);
  }
  uVar7 = _UNK_03cabe58;
  uVar17 = _DAT_03cabe50;
  if (*(char *)((long)param_3 + 0x11) == '\0') goto LAB_02ee69d4;
  local_300 = (long *)0x0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2d0 = 0.0;
  fStack_2cc = 0.0;
  fStack_2c8 = 0.0;
  fStack_2c4 = 0.0;
  local_2f8 = 0x8000000000000000;
  local_2f0 = 0;
  uStack_2b8 = _UNK_03cabe58;
  local_2c0 = _DAT_03cabe50;
  FUN_00857760(param_4,0,&local_300);
  puVar9 = PTR_PTR_047d1a50;
  fVar23 = *param_2;
  if (*param_2 <= 0.0075) {
    fVar23 = 0.0075;
  }
  switch(local_2f8 & 0xffffffff) {
  case 0:
    local_b0 = 1;
    local_a8 = 0;
    local_a0 = &local_280;
    local_c0 = PTR_DAT_047e34b8 + 0x10;
    local_b8 = 0xffffffff;
    local_88 = 0;
    local_98 = 0;
    local_90 = 0x1bf;
    memset(&local_280,0,0x1c0);
    FUN_0322bd4c(&local_c0,"Degenerated hull does not have valid mass properties!",0x35);
    FUN_03226c50(0x5b234d7b,&local_280,
                 "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Physics/Physics/Collide/Shape/Convex/hknpConvexShape.cpp"
                 ,0x5a6);
    break;
  case 1:
    if (fVar23 <= 0.0) break;
    fVar38 = fVar23 * fVar23 * fVar23 * 4.1887903;
    fVar25 = (float)param_3[0xe];
    fVar36 = fVar38 * -fVar25;
    if (0.0 <= fVar25) {
      fVar36 = fVar25;
    }
    local_2f0 = CONCAT44(fVar36,fVar38);
    local_2d0 = (float)param_3[0xd] * fVar23 * fVar23 * 0.4 * fVar36;
    local_2e0 = *local_300;
    uStack_2d8 = (ulong)*(uint *)(local_300 + 1);
    uStack_2b8 = uVar7;
    local_2c0 = uVar17;
    fStack_2cc = local_2d0;
    fStack_2c8 = local_2d0;
    fStack_2c4 = local_2d0;
    goto LAB_02ee6808;
  case 2:
    iVar11 = FUN_02f052c0(fVar23,param_3 + 6,local_300,local_300 + 2,&local_2f0);
    goto LAB_02ee6804;
  case 3:
    local_280 = *local_300;
    fStack_270 = *(float *)((long)local_300 + 0x14);
    local_26c = *(float *)(local_300 + 3);
    uStack_278 = CONCAT44((int)local_300[2],(int)local_300[1]);
    local_268 = *(float *)(local_300 + 4);
    uStack_264 = *(undefined4 *)((long)local_300 + 0x24);
    local_260 = *(float *)(local_300 + 5);
    iVar11 = FUN_02f054b0(fVar23,param_3 + 6,&local_280,&local_2f0);
LAB_02ee6804:
    if (-1 < iVar11) {
LAB_02ee6808:
      puVar8 = PTR_DAT_047d1a08;
      local_280 = 0x40;
      plVar13 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_280,0);
      if (*(code **)(puVar8 + 0x10) != (code *)0x0) {
        (**(code **)(puVar8 + 0x10))(plVar13,"hknpShapeMassProperties");
      }
      plVar13[2] = 1;
      puVar8 = PTR_DAT_047e34e0;
      *(undefined2 *)(plVar13 + 3) = 0xf100;
      *plVar13 = (long)(puVar8 + 0x10);
      plVar13[1] = 0xffffffff;
      plVar14 = (long *)*param_5;
      if ((plVar14 != plVar13) && (*param_5 = plVar13, plVar14 != (long *)0x0)) {
        if (plVar14[1] != 0) {
          plVar13 = plVar14 + 2;
          do {
            lVar15 = *plVar13;
            cVar10 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar1) {
              *plVar13 = lVar15 + -1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
          if (lVar15 + -1 == 0) {
            (**(code **)(*plVar14 + 0x18))();
          }
        }
        plVar13 = (long *)*param_5;
      }
      puVar8 = PTR_DAT_047e34e8;
      uVar7 = _UNK_03caad08;
      uVar17 = _DAT_03caad00;
      auVar2._8_2_ = 0;
      auVar2._0_8_ = CONCAT17((char)((uint)(local_2e0._4_4_ * 1.0000163) >> 0x18),
                              CONCAT16((char)((uint)(local_2e0._4_4_ * 1.0000163) >> 0x10),
                                       (uint6)((((ushort)((uint)((float)local_2e0 * 1.0000163) >>
                                                         0x10) & 0xff80) & 0x7fff) << 0x10))) &
                     0x7f80ffffffffffff;
      auVar2[10] = (byte)((uint)((float)uStack_2d8 * 1.0000163) >> 0x10) & 0x80;
      auVar2[0xb] = (byte)((uint)((float)uStack_2d8 * 1.0000163) >> 0x18) & 0x7f;
      auVar2._12_2_ = 0;
      auVar2[0xe] = 0x80;
      auVar2[0xf] = 0x28;
      iVar11 = NEON_fmaxnmv(auVar2,4);
      iVar12 = iVar11 + -0x4e800000;
      iVar34 = iVar11 + -0x4e800000;
      iVar4 = iVar11 + -0x4e800000;
      auVar26._0_4_ = (int)(float)(((int)(float)local_2e0 - iVar11) + 0x4e800000);
      auVar26._4_4_ = (int)(float)(((int)local_2e0._4_4_ - iVar11) + 0x4e800000);
      auVar26._8_4_ = (int)(float)(((int)(float)uStack_2d8 - iVar11) + 0x4e800000);
      auVar26._12_4_ = (int)(float)((uStack_2d8._4_4_ - iVar11) + 0x4e800000);
      auVar3[4] = (char)iVar12;
      auVar3._0_4_ = iVar11 + -0x4e800000;
      auVar3[5] = (char)((uint)iVar12 >> 8);
      auVar3[6] = (char)((uint)iVar12 >> 0x10);
      auVar3[7] = (char)((uint)iVar12 >> 0x18);
      auVar3[8] = (char)iVar34;
      auVar3[9] = (char)((uint)iVar34 >> 8);
      auVar3[10] = (char)((uint)iVar34 >> 0x10);
      auVar3[0xb] = (char)((uint)iVar34 >> 0x18);
      auVar3[0xc] = (char)iVar4;
      auVar3[0xd] = (char)((uint)iVar4 >> 8);
      auVar3[0xe] = (char)((uint)iVar4 >> 0x10);
      auVar3[0xf] = (char)((uint)iVar4 >> 0x18);
      auVar26 = auVar26 ^ (auVar26 ^ auVar3) & ~*(undefined1 (*) [16])(PTR_DAT_047e34e8 + 0x70);
      iVar11 = (int)_DAT_03caba80;
      auVar27._0_4_ = auVar26._0_4_ + iVar11;
      iVar12 = (int)((ulong)_DAT_03caba80 >> 0x20);
      auVar27._4_4_ = auVar26._4_4_ + iVar12;
      iVar34 = (int)_UNK_03caba88;
      auVar27._8_4_ = auVar26._8_4_ + iVar34;
      iVar4 = (int)((ulong)_UNK_03caba88 >> 0x20);
      auVar27._12_4_ = auVar26._12_4_ + iVar4;
      auVar5._8_8_ = _UNK_03caad08;
      auVar5._0_8_ = _DAT_03caad00;
      auVar28 = a64_TBL(ZEXT816(0),auVar27,auVar5);
      plVar13[4] = auVar28._0_8_;
      auVar37._0_8_ =
           CONCAT17((char)((uint)(fStack_2cc * 1.0000163) >> 0x18),
                    CONCAT16((char)((uint)(fStack_2cc * 1.0000163) >> 0x10),
                             (uint6)(((uint)(local_2d0 * 1.0000163) >> 0x10 & 0x7f80) << 0x10))) &
           0x7f80ffffffffffff;
      auVar37._8_2_ = 0;
      auVar37[10] = (byte)((uint)(fStack_2c8 * 1.0000163) >> 0x10) & 0x80;
      auVar37[0xb] = (byte)((uint)(fStack_2c8 * 1.0000163) >> 0x18) & 0x7f;
      auVar37._12_2_ = 0;
      auVar37[0xe] = 0x80;
      auVar37[0xf] = 0x28;
      iVar35 = NEON_fmaxnmv(auVar37,4);
      uVar22 = (uint)(float)(((int)local_2d0 - iVar35) + 0x4e800000);
      uVar31 = (uint)(float)(((int)fStack_2cc - iVar35) + 0x4e800000);
      uVar32 = (uint)(float)(((int)fStack_2c8 - iVar35) + 0x4e800000);
      uVar33 = (uint)(float)(((int)fStack_2c4 - iVar35) + 0x4e800000);
      auVar29._0_4_ =
           (uVar22 ^ (uVar22 ^ iVar35 + 0xb1800000U) & ~*(uint *)(puVar8 + 0x70)) + iVar11;
      auVar29._4_4_ =
           (uVar31 ^ (uVar31 ^ iVar35 + 0xb1800000U) & ~*(uint *)(puVar8 + 0x74)) + iVar12;
      auVar29._8_4_ =
           (uVar32 ^ (uVar32 ^ iVar35 + 0xb1800000U) & ~*(uint *)(puVar8 + 0x78)) + iVar34;
      auVar29._12_4_ =
           (uVar33 ^ (uVar33 ^ iVar35 + 0xb1800000U) &
                     ~(uint)((ulong)*(undefined8 *)(puVar8 + 0x78) >> 0x20)) + iVar4;
      auVar6._8_8_ = uVar7;
      auVar6._0_8_ = uVar17;
      auVar28 = a64_TBL(ZEXT816(0),auVar29,auVar6);
      plVar13[5] = auVar28._0_8_;
      iVar11 = (int)(local_2c0._4_4_ * 1.96608e+09);
      iVar12 = (int)((float)uStack_2b8 * 1.96608e+09);
      iVar34 = (int)(uStack_2b8._4_4_ * 1.96608e+09);
      auVar30._0_8_ =
           CONCAT17((char)((uint)iVar11 >> 0x18),
                    CONCAT16((char)((uint)iVar11 >> 0x10),
                             CONCAT15((char)((uint)iVar11 >> 8),
                                      CONCAT14((char)iVar11,(int)((float)local_2c0 * 1.96608e+09))))
                   ) ^ 0x8000800080008000;
      auVar30[8] = (undefined1)iVar12;
      auVar30[9] = (byte)((uint)iVar12 >> 8) ^ 0x80;
      auVar30[10] = (undefined1)((uint)iVar12 >> 0x10);
      auVar30[0xb] = (byte)((uint)iVar12 >> 0x18) ^ 0x80;
      auVar30[0xc] = (undefined1)iVar34;
      auVar30[0xd] = (byte)((uint)iVar34 >> 8) ^ 0x80;
      auVar30[0xe] = (undefined1)((uint)iVar34 >> 0x10);
      auVar30[0xf] = (byte)((uint)iVar34 >> 0x18) ^ 0x80;
      auVar28 = NEON_ext(auVar30,auVar30,8,1);
      plVar13[6] = CONCAT26(auVar28._6_2_,
                            CONCAT24(auVar28._2_2_,
                                     CONCAT22((short)(auVar30._0_8_ >> 0x30),
                                              (short)(auVar30._0_8_ >> 0x10))));
      *(undefined4 *)(plVar13 + 7) = local_2f0._4_4_;
      *(undefined4 *)((long)plVar13 + 0x3c) = (undefined4)local_2f0;
    }
    break;
  default:
    iVar11 = FUN_00856b80(param_4);
    plVar13 = local_300;
    if (iVar11 < 3) {
      local_280 = 0;
      uStack_278._0_4_ = 0.0;
      uStack_278._4_4_ = 0x80000000;
      if ((int)local_2f8 == 0) {
        uVar16 = 0;
        lVar15 = 0;
      }
      else {
        lVar18 = (long)(int)local_2f8 * 0x10;
        lVar15 = 0;
        uVar16 = 0;
        while( true ) {
          lVar18 = lVar18 + -0x10;
          auVar28 = *(undefined1 (*) [16])(plVar13 + uVar16 * 2);
          if (uVar16 < (uStack_278._4_4_ & 0x7fffffff)) {
            uStack_278._0_4_ = (float)(int)uVar16;
          }
          else {
            FUN_02ee9e08(&local_280,uVar16 + 1);
            lVar15 = local_280;
          }
          puVar19 = (undefined8 *)(lVar15 + (long)(int)(float)uStack_278 * 0xc);
          *puVar19 = auVar28._0_8_;
          *(int *)(puVar19 + 1) = auVar28._8_4_;
          uStack_278._0_4_ = (float)((int)uVar16 + 1);
          if (lVar18 == 0) break;
          uVar16 = uVar16 + 1;
        }
        uVar16 = local_2f8 & 0xffffffff;
      }
      uVar22 = uStack_278._4_4_;
      iVar11 = FUN_02f05a4c(fVar23,param_3 + 6,lVar15,uVar16,&local_2f0);
      uStack_278 = (ulong)uStack_278._4_4_ << 0x20;
      if ((-1 < (int)uVar22) && (local_280 != 0)) {
        (**(code **)(*(long *)(puVar9 + 0x20) + 0x20))(puVar9 + 0x20,local_280,(ulong)uVar22 * 0xc);
      }
      goto LAB_02ee6804;
    }
    cVar10 = FUN_0085ab64(param_4);
    if (cVar10 != '\0') {
      if ((*(char *)(param_3 + 1) == '\0') && (*param_2 != 0.0)) {
        plVar13 = (long *)FUN_0084f694(param_4);
        FUN_0084f3a8(&local_280);
        fStack_270 = (float)CONCAT31(fStack_270._1_3_,1);
        FUN_00857848(plVar13,&local_280);
      }
      else {
        plVar13 = param_4;
        if (param_4[1] != 0) {
          plVar14 = param_4 + 2;
          do {
            cVar10 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar1) {
              *plVar14 = *plVar14 + 1;
              cVar10 = ExclusiveMonitorsStatus();
            }
          } while (cVar10 != '\0');
        }
      }
      FUN_0085adb4(plVar13,&local_280,&local_2d0);
      uStack_2d8 = uStack_248;
      local_2e0 = lStack_250;
      uVar17 = NEON_fmov(0x3f800000,4);
      fVar39 = fStack_258 + (float)uVar17;
      fVar40 = local_260 - (float)uStack_278;
      fVar38 = local_268 + fStack_25c;
      fVar24 = (float)uVar17 - fStack_258;
      fVar23 = fVar24 - ((float)local_280 - local_26c);
      fVar25 = local_280._4_4_ - fStack_270;
      fVar36 = (float)local_280 + local_26c + fVar39;
      if ((float)local_280 < -local_26c) {
        fVar25 = fVar39 - ((float)local_280 + local_26c);
        fVar36 = local_280._4_4_ - fStack_270;
      }
      uVar17 = CONCAT44(fVar40,local_268 - fStack_25c);
      if ((float)local_280 < -local_26c) {
        uVar17 = CONCAT44(fVar38,(float)uStack_278 + local_260);
      }
      fVar39 = (float)(CONCAT17((char)((uint)fVar40 >> 0x18),
                                CONCAT16((char)((uint)fVar40 >> 0x10),
                                         CONCAT15((char)((uint)fVar40 >> 8),
                                                  CONCAT14(SUB41(fVar40,0),fVar38)))) >> 0x20);
      if (local_26c < (float)local_280) {
        fVar38 = (float)uStack_278 + local_260;
        fVar39 = local_268 - fStack_25c;
      }
      uVar7 = CONCAT17((char)((uint)fVar23 >> 0x18),
                       CONCAT16((char)((uint)fVar23 >> 0x10),
                                CONCAT15((char)((uint)fVar23 >> 8),
                                         CONCAT14(SUB41(fVar23,0),local_280._4_4_ + fStack_270))));
      if (local_26c < (float)local_280) {
        uVar7 = CONCAT44(local_280._4_4_ + fStack_270,((float)local_280 - local_26c) + fVar24);
      }
      if (fStack_258 < 0.0) {
        uVar17 = uVar7;
        fVar25 = fVar38;
        fVar36 = fVar39;
      }
      fVar39 = (float)uVar17;
      fVar40 = (float)((ulong)uVar17 >> 0x20);
      fVar23 = fVar39 * fVar39 + fVar40 * fVar40;
      fVar24 = fVar25 * fVar25 + fVar36 * fVar36;
      fVar38 = fVar23 + fVar24;
      if (fVar38 == 0.0) {
        auVar28 = ZEXT816(0);
      }
      else {
        fVar38 = SQRT(fVar38);
        fVar23 = SQRT(fVar23 + fVar24);
        auVar28._0_4_ = fVar39 / fVar38;
        auVar28._4_4_ = fVar40 / fVar23;
        auVar28._8_4_ = fVar25 / fVar38;
        auVar28._12_4_ = fVar36 / fVar23;
      }
      uStack_2b8 = auVar28._8_8_;
      local_2c0 = auVar28._0_8_;
      fVar25 = (float)FUN_0085ac74(plVar13);
      fVar36 = (float)param_3[0xe];
      fVar23 = -fVar36 * fVar25;
      if (0.0 <= fVar36) {
        fVar23 = fVar36;
      }
      local_2f0 = CONCAT44(fVar23,fVar25);
      fVar23 = fVar23 * (float)param_3[0xd];
      local_2d0 = local_2d0 * fVar23;
      fStack_2cc = fStack_2cc * fVar23;
      fStack_2c8 = fStack_2c8 * fVar23;
      fStack_2c4 = fStack_2c4 * fVar23;
      if ((plVar13 != (long *)0x0) && (plVar13[1] != 0)) {
        plVar14 = plVar13 + 2;
        do {
          lVar15 = *plVar14;
          cVar10 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar1) {
            *plVar14 = lVar15 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      goto LAB_02ee6808;
    }
  }
  uVar16 = local_2f8;
  uVar20 = (ulong)local_2f8._4_4_;
  local_2f8 = (ulong)local_2f8._4_4_ << 0x20;
  if ((-1 < (long)uVar16) && (local_300 != (long *)0x0)) {
    (**(code **)(*(long *)puVar9 + 0x20))(puVar9,local_300,uVar20 << 4);
  }
LAB_02ee69d4:
  if ((*(char *)(param_3 + 1) != '\0') && (0.0 < *param_2)) {
    FUN_0084f3a8(&local_280);
    local_280 = CONCAT44(local_280._4_4_,2);
    uStack_278 = CONCAT44(uStack_278._4_4_,param_3[2]);
    fVar23 = (float)FUN_00857848(param_4,&local_280);
    *param_2 = -fVar23;
  }
  return 0;
}


