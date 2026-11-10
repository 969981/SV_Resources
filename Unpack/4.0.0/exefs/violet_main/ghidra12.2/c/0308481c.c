/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0308481c; name: FUN_0308481c
 */


void FUN_0308481c(undefined4 param_1,long param_2,long param_3,float *param_4,undefined8 *param_5,
                 undefined8 param_6)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  int iVar23;
  int iVar26;
  undefined1 auVar19 [12];
  int iVar29;
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar31;
  float fVar32;
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
  undefined8 local_360;
  long *local_358;
  float local_350;
  float local_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  float local_320;
  undefined8 local_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined4 local_300;
  long local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 *local_2c0 [2];
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 *local_288;
  undefined8 local_280;
  undefined1 auStack_278 [520];
  
  lVar12 = tpidr_el0;
  lVar9 = *(long *)(lVar12 + 0x1000b8);
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar9;
  }
  plVar14 = *(long **)(lVar9 + 0x3e0);
  if (plVar14 != (long *)0x0) {
    lVar9 = *plVar14;
    if (*(code **)(lVar9 + 0x18) != (code *)0x0) {
      (**(code **)(lVar9 + 0x18))
                ("QueryMediator::buildAabbTreeWithMerging",0x27,*(undefined8 *)(lVar9 + 0x28));
    }
    puVar1 = (undefined8 *)plVar14[2];
    uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar14[3]) && (plVar14[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtQueryMediator::buildAabbTreeWithMerging";
      uVar8 = nn::os::GetSystemTick();
      puVar1[1] = uVar8;
    }
    if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar1 = (undefined8 *)plVar14[2];
      uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar14[3]) && (plVar14[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
  }
  puVar6 = PTR_PTR_047d1a50;
  local_2f0 = 0;
  local_2e8 = -0x8000000000000000;
  iVar13 = (int)((ulong)(param_3 - param_2) >> 5);
  if (0 < iVar13) {
    FUN_02ed686c(&local_2f0,PTR_PTR_047d1a50 + 0x20,(ulong)(param_3 - param_2) >> 5 & 0xffffffff);
  }
  local_358 = &local_2f0;
  iVar16 = -(uint)(*param_4 == 0.0);
  iVar23 = -(uint)(param_4[1] == 0.0);
  iVar26 = -(uint)(param_4[2] == 0.0);
  iVar29 = -(uint)(param_4[3] == 0.0);
  auVar19._0_8_ =
       CONCAT17(~(byte)((uint)iVar23 >> 0x18),
                CONCAT16(~(byte)((uint)iVar23 >> 0x10),
                         CONCAT15(~(byte)((uint)iVar23 >> 8),
                                  CONCAT14(~(byte)iVar23,
                                           CONCAT13(~(byte)((uint)iVar16 >> 0x18),
                                                    CONCAT12(~(byte)((uint)iVar16 >> 0x10),
                                                             CONCAT11(~(byte)((uint)iVar16 >> 8),
                                                                      ~(byte)iVar16)))))));
  auVar19[8] = ~(byte)iVar26;
  auVar19[9] = ~(byte)((uint)iVar26 >> 8);
  auVar19[10] = ~(byte)((uint)iVar26 >> 0x10);
  auVar19[0xb] = ~(byte)((uint)iVar26 >> 0x18);
  auVar20[0xc] = ~(byte)iVar29;
  auVar20._0_12_ = auVar19;
  auVar20[0xd] = ~(byte)((uint)iVar29 >> 8);
  auVar20[0xe] = ~(byte)((uint)iVar29 >> 0x10);
  auVar20[0xf] = ~(byte)((uint)iVar29 >> 0x18);
  uStack_308 = auVar19._8_4_;
  uStack_304 = auVar20._12_4_;
  iVar16 = *(int *)PTR_DAT_047e4f38;
  lVar9 = *(long *)(lVar12 + 0x1000b8);
  local_360 = param_6;
  local_310 = auVar19._0_8_;
  local_300 = param_1;
  if (lVar9 == 0) {
    lVar9 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar9;
  }
  if (*(long *)(lVar9 + (long)iVar16 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (iVar13 != 0) {
    auVar20 = NEON_fmov(0x3f800000,4);
    lVar9 = 0;
    uVar11 = 0x496fa3f;
    do {
      iVar26 = (int)lVar9;
      iVar23 = iVar13 - iVar26;
      iVar16 = iVar23;
      if (0x10 < iVar23) {
        iVar16 = 0x11;
      }
      if (0 < iVar23) {
        lVar9 = (long)iVar26;
        do {
          puVar1 = (undefined8 *)(param_2 + lVar9 * 0x20);
          uStack_2c8 = puVar1[3];
          fStack_2d8 = (float)puVar1[1];
          fStack_2d4 = (float)((ulong)puVar1[1] >> 0x20);
          local_2d0 = puVar1[2];
          local_2e0 = (float)*puVar1;
          fStack_2dc = (float)((ulong)*puVar1 >> 0x20);
          fVar27 = (float)uStack_2c8;
          fVar35 = (float)((ulong)uStack_2c8 >> 0x20);
          fVar17 = (float)local_2d0;
          fVar24 = (float)((ulong)local_2d0 >> 0x20);
          if (param_5 != (undefined8 *)0x0) {
            iVar23 = -(uint)(fVar17 < local_2e0);
            iVar29 = -(uint)(fVar24 < fStack_2dc);
            iVar3 = -(uint)(fVar27 < fStack_2d8);
            if (CONCAT13((byte)((uint)iVar29 >> 0x18) | (byte)((uint)iVar23 >> 0x18) |
                         (byte)((uint)iVar3 >> 0x18),
                         CONCAT12((byte)((uint)iVar29 >> 0x10) | (byte)((uint)iVar23 >> 0x10) |
                                  (byte)((uint)iVar3 >> 0x10),
                                  CONCAT11((byte)((uint)iVar29 >> 8) | (byte)((uint)iVar23 >> 8) |
                                           (byte)((uint)iVar3 >> 8),
                                           (byte)iVar29 | (byte)iVar23 | (byte)iVar3))) == 0) {
              fVar35 = (local_2e0 + fVar17) * 0.5;
              fVar2 = (fStack_2dc + fVar24) * 0.5;
              fVar4 = (fStack_2d8 + fVar27) * 0.5;
              fVar17 = (fVar17 - local_2e0) * 0.5;
              fVar24 = (fVar24 - fStack_2dc) * 0.5;
              fVar27 = (fVar27 - fStack_2d8) * 0.5;
              fVar33 = (float)param_5[1];
              fVar34 = (float)((ulong)param_5[1] >> 0x20);
              fVar31 = (float)*param_5;
              fVar32 = (float)((ulong)*param_5 >> 0x20);
              fVar36 = (float)param_5[2];
              fVar37 = (float)((ulong)param_5[2] >> 0x20);
              fVar38 = (float)param_5[3];
              fVar39 = (float)((ulong)param_5[3] >> 0x20);
              fVar40 = (float)param_5[4];
              fVar41 = (float)((ulong)param_5[4] >> 0x20);
              fVar42 = (float)param_5[5];
              fVar43 = (float)((ulong)param_5[5] >> 0x20);
              fVar18 = ABS(fVar40 * fVar27) + ABS(fVar31 * fVar17) + ABS(fVar36 * fVar24);
              fVar25 = ABS(fVar41 * fVar27) + ABS(fVar32 * fVar17) + ABS(fVar37 * fVar24);
              fVar28 = ABS(fVar42 * fVar27) + ABS(fVar33 * fVar17) + ABS(fVar38 * fVar24);
              fVar30 = ABS(fVar43 * fVar27) + ABS(fVar34 * fVar17) + ABS(fVar39 * fVar24);
              local_2e0 = (float)param_5[6] + fVar40 * fVar4 + fVar31 * fVar35 + fVar36 * fVar2;
              fStack_2dc = (float)((ulong)param_5[6] >> 0x20) +
                           fVar41 * fVar4 + fVar32 * fVar35 + fVar37 * fVar2;
              fStack_2d8 = (float)param_5[7] + fVar42 * fVar4 + fVar33 * fVar35 + fVar38 * fVar2;
              fStack_2d4 = (float)((ulong)param_5[7] >> 0x20) +
                           fVar43 * fVar4 + fVar34 * fVar35 + fVar39 * fVar2;
              fVar17 = fVar18 + local_2e0;
              fVar24 = fVar25 + fStack_2dc;
              fVar27 = fVar28 + fStack_2d8;
              fVar35 = fVar30 + fStack_2d4;
              local_2e0 = local_2e0 - fVar18;
              fStack_2dc = fStack_2dc - fVar25;
              fStack_2d8 = fStack_2d8 - fVar28;
              fStack_2d4 = fStack_2d4 - fVar30;
            }
            uStack_2c8 = CONCAT44(fVar35,fVar27);
            local_2d0 = CONCAT44(fVar24,fVar17);
          }
          uStack_328 = CONCAT44(fVar35,fVar27);
          uStack_330 = CONCAT44(fVar24,fVar17);
          auVar21._0_4_ = fVar17 - local_2e0;
          auVar21._4_4_ = fVar24 - fStack_2dc;
          auVar21._8_4_ = fVar27 - fStack_2d8;
          auVar21._12_4_ = fVar35 - fStack_2d4;
          auVar22._8_4_ = uStack_308;
          auVar22._0_8_ = local_310;
          auVar22._12_4_ = uStack_304;
          auVar21 = auVar21 ^ (auVar21 ^ auVar20) & auVar22;
          auVar22 = NEON_ext(auVar21,auVar21,8,1);
          local_350 = auVar22._0_4_ * auVar21._0_4_ * auVar21._4_4_;
          local_340 = local_2e0;
          fStack_33c = fStack_2dc;
          fStack_338 = fStack_2d8;
          fStack_334 = fStack_2d4;
          local_320 = local_350;
          uVar8 = FUN_008702b0(local_360);
          local_2b0 = CONCAT44(fStack_2dc,local_2e0);
          auVar5._8_4_ = fStack_2d8;
          auVar5._0_8_ = local_2b0;
          auVar5._12_4_ = fStack_2d4;
          local_280 = -0x7fffff8000000000;
          uStack_2a8 = auVar5._8_8_;
          uStack_298 = uStack_2c8;
          uStack_2a0 = local_2d0;
          local_2c0[0] = &local_360;
          local_288 = auStack_278;
          FUN_030861f8(uVar8,&local_288,local_2c0);
          lVar15 = local_280;
          uVar10 = (ulong)local_280._4_4_;
          local_280 = (ulong)local_280._4_4_ << 0x20;
          if ((-1 < lVar15) && (local_288 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)puVar6 + 0x20))(puVar6,local_288,uVar10 << 2);
          }
          iVar23 = (int)local_358[1];
          if (iVar23 == 0) {
            if (0.0 < local_350) {
              FUN_0086f578(local_360,&local_2e0,local_350);
            }
          }
          else {
            if ((iVar23 != 1) && (1 < iVar23)) {
              lVar15 = 1;
              do {
                FUN_0086fc44(local_360,*(undefined4 *)(*local_358 + lVar15 * 4));
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)local_358[1]);
            }
            FUN_0086f84c(local_360,*(undefined4 *)*local_358,&local_340);
            FUN_0086f828(local_360,*(undefined4 *)*local_358,local_320);
            *(undefined4 *)(local_358 + 1) = 0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar16 + iVar26);
      }
      bVar7 = CARRY4(iVar16 * 0x3bef784,uVar11);
      uVar11 = iVar16 * 0x3bef784 + uVar11;
      if (bVar7) {
        iVar16 = *(int *)PTR_DAT_047e4f38;
        lVar15 = *(long *)(lVar12 + 0x1000b8);
        if (lVar15 == 0) {
          lVar15 = FUN_00e5d3b4();
          *(long *)(lVar12 + 0x1000b8) = lVar15;
        }
        if (*(long *)(lVar15 + (long)iVar16 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
      }
    } while ((int)lVar9 != iVar13);
  }
  lVar12 = local_2e8;
  uVar10 = (ulong)local_2e8._4_4_;
  local_2e8 = (ulong)local_2e8._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_2f0 != 0)) {
    (**(code **)(*(long *)(puVar6 + 0x20) + 0x20))(puVar6 + 0x20,local_2f0,uVar10 << 2);
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = *plVar14;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar14[6] != 0)) {
      puVar1 = (undefined8 *)plVar14[2];
      uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
      if ((uVar10 <= (ulong)plVar14[3]) && (plVar14[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
        *puVar1 = &DAT_03c4e575;
        puVar1[1] = *(undefined8 *)(plVar14[6] + 8);
      }
    }
    puVar1 = (undefined8 *)plVar14[2];
    uVar10 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar10 <= (ulong)plVar14[3]) && (plVar14[2] = uVar10, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_03c2d363;
      uVar8 = nn::os::GetSystemTick();
      puVar1[1] = uVar8;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  return;
}


