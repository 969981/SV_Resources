/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0309a3dc; name: FUN_0309a3dc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0309a3dc(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 (*pauVar7) [16];
  long *plVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
  float fVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  lVar6 = tpidr_el0;
  lVar3 = *(long *)(lVar6 + 0x1000b8);
  if (lVar3 == 0) {
    lVar3 = FUN_00e5d3b4();
    *(long *)(lVar6 + 0x1000b8) = lVar3;
  }
  plVar8 = *(long **)(lVar3 + 0x3e0);
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
      (**(code **)(lVar6 + 0x18))("ResolveEdgePenetration",0x16,*(undefined8 *)(lVar6 + 0x28));
    }
    puVar5 = (undefined8 *)plVar8[2];
    uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar8[3]) && (plVar8[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "TtResolveEdgePenetration";
      uVar2 = nn::os::GetSystemTick();
      puVar5[1] = uVar2;
    }
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar5 = (undefined8 *)plVar8[2];
      uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar8[3]) && (plVar8[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
  }
  auVar11._8_8_ = _UNK_03caaa68;
  auVar11._0_8_ = _DAT_03caaa60;
  local_90 = (float)*param_2;
  fStack_8c = (float)((ulong)*param_2 >> 0x20);
  fStack_88 = (float)param_2[1];
  fStack_84 = (float)((ulong)param_2[1] >> 0x20);
  pauVar7 = (undefined1 (*) [16])(param_2 + 4);
  auVar13 = *pauVar7;
  fVar9 = auVar13._0_4_;
  fVar15 = auVar13._4_4_;
  fVar16 = auVar13._8_4_;
  fVar17 = fVar15 * fVar15 + fVar9 * fVar9;
  fVar19 = fVar16 * fVar16 + fVar9 * fVar9;
  auVar22._0_12_ = auVar13._0_12_;
  auVar22._12_4_ = 0;
  auVar11 = a64_TBL(ZEXT816(0),auVar22,auVar11);
  auVar23._8_8_ = _UNK_03cabbb8;
  auVar23._0_8_ = _DAT_03cabbb0;
  auVar23 = a64_TBL(ZEXT816(0),auVar22,auVar23);
  iVar18 = -(uint)(fVar17 <= 0.0);
  iVar20 = -(uint)(fVar19 <= 0.0);
  uVar4 = CONCAT44(-(uint)(fVar19 < fVar17),-(uint)(fVar19 < fVar17)) & 0x100000001;
  iVar28 = (int)uVar4;
  iVar29 = (int)(uVar4 >> 0x20);
  auVar27._4_4_ = (iVar29 << 0x1f) >> 0x1f;
  auVar27._0_4_ = (iVar28 << 0x1f) >> 0x1f;
  auVar27._8_4_ = (iVar28 << 0x1f) >> 0x1f;
  auVar27._12_4_ = (iVar29 << 0x1f) >> 0x1f;
  auVar11 = auVar11 ^ (auVar11 ^ auVar23) & ~auVar27;
  auVar23 = NEON_fmov(0x3f800000,4);
  fVar24 = auVar23._4_4_ / SQRT(fVar17);
  fVar25 = auVar23._8_4_ / SQRT(fVar19);
  fStack_a0 = -auVar11._0_4_;
  fStack_9c = auVar11._4_4_;
  auVar23 = NEON_ext(auVar11,auVar11,8,1);
  auVar27 = NEON_ext(auVar13,auVar13,8,1);
  uVar26 = NEON_ext(auVar13._0_8_,auVar27._0_8_,4,1);
  uVar2 = NEON_ext(CONCAT44(fStack_9c,fStack_a0),auVar23._0_8_,4,1);
  uVar1 = CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                   CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                            CONCAT11((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                     SUB41(fVar24,0) & ~(byte)iVar18)));
  uVar21 = CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                    CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                             CONCAT11((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                      SUB41(fVar25,0) & ~(byte)iVar20)));
  auVar12._0_4_ = fVar9 * (float)uVar2 - (float)uVar26 * fStack_a0;
  auVar12._4_4_ =
       fVar15 * (float)((ulong)uVar2 >> 0x20) - (float)((ulong)uVar26 >> 0x20) * fStack_9c;
  auVar12._8_4_ = fVar16 * fStack_a0 - fVar9 * auVar11._8_4_;
  auVar12._12_4_ = auVar13._12_4_ * fStack_9c - fVar15 * auVar11._12_4_;
  auVar23 = NEON_ext(auVar12,auVar12,4,1);
  auVar13._8_8_ = auVar12._8_8_;
  uVar4 = CONCAT44(uVar21,uVar21);
  uVar4 = uVar4 ^ (uVar4 ^ CONCAT44(uVar1,uVar1)) &
                  CONCAT44(-(uint)(fVar19 < fVar17),-(uint)(fVar19 < fVar17));
  fVar9 = (float)uVar4;
  fStack_a0 = fVar9 * fStack_a0;
  fVar15 = (float)(uVar4 >> 0x20);
  fStack_9c = fVar15 * fStack_9c;
  fStack_98 = fVar9 * auVar11._8_4_;
  fStack_94 = fVar15 * auVar11._12_4_;
  local_b0 = CONCAT44(fVar15 * auVar23._4_4_,fVar9 * auVar23._0_4_);
  uStack_a8 = CONCAT44(fVar15 * 0.0,fVar9 * auVar12._0_4_);
  fVar9 = *(float *)((long)param_2 + 0x14);
  auVar13._4_4_ = (float)*(undefined4 *)(param_2 + 3);
  auVar13._0_4_ = (float)*(undefined4 *)(param_2 + 3);
  if (*(int *)(param_2 + 7) < 0) {
    puVar5 = param_2 + 8;
  }
  else {
    puVar5 = (undefined8 *)
             (*(long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x18) +
                       (long)(int)*(long *)((long)param_2 + 0x34) * 0x18) +
             (*(long *)((long)param_2 + 0x34) >> 0x20) * 0x18);
  }
  iVar18 = *(int *)((long)param_2 + 0x1c);
  if (0 < iVar18) {
    uVar2 = *puVar5;
    iVar20 = 0;
    do {
      uVar26 = auVar13._0_8_;
      fVar15 = auVar13._0_4_;
      fVar16 = auVar13._4_4_;
      if ((iVar20 == iVar18 + -1) || (uVar10 = uVar26, fVar9 < fVar15)) {
        uVar26 = CONCAT44(fVar16 + (fVar9 - fVar16) * *(float *)((long)param_2 + 0x24),
                          fVar15 + (fVar9 - fVar15) * *(float *)*pauVar7);
        uVar10 = CONCAT44(fVar16 + (fVar9 - fVar16) * *(float *)((long)param_2 + 0x2c),
                          fVar15 + (fVar9 - fVar15) * *(float *)(param_2 + 5));
      }
      fVar17 = (float)((ulong)uVar26 >> 0x20);
      auVar14._0_8_ = CONCAT44(fStack_8c - fVar17,local_90 - (float)uVar26);
      auVar14._8_4_ = fStack_88 - (float)uVar10;
      fVar19 = (float)((ulong)uVar10 >> 0x20);
      auVar14._12_4_ = fStack_84 - fVar19;
      uStack_c0 = CONCAT44(fVar17 + fStack_8c,(float)uVar26 + local_90);
      uStack_b8 = CONCAT44(fVar19 + fStack_84,(float)uVar10 + fStack_88);
      uStack_c8 = auVar14._8_8_;
      local_d8 = CONCAT44(*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 2));
      local_d0 = auVar14._0_8_;
      iVar18 = FUN_0309d4a0(param_1,*(undefined4 *)(param_2 + 6),uVar2,param_2[9],param_2[10],
                            pauVar7,&fStack_a0,&local_b0,&local_90,&local_d8,&local_d0,param_3,
                            param_4);
      if (iVar18 == 0) {
        iVar18 = *(int *)((long)param_2 + 0x1c);
      }
      else {
        fVar17 = (float)*param_3 - local_90;
        fVar19 = (float)((ulong)*param_3 >> 0x20) - fStack_8c;
        fVar24 = (float)param_3[1] - fStack_88;
        if ((SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar24 * fVar24) < fVar15) ||
           (iVar18 = *(int *)((long)param_2 + 0x1c), iVar20 == iVar18 + -1)) {
          uVar2 = 1;
          goto joined_r0x0309a6fc;
        }
      }
      auVar13._0_4_ = fVar15 + fVar15;
      auVar13._4_4_ = fVar16 + fVar16;
      auVar13._8_8_ = 0;
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar18);
  }
  uVar2 = 0;
joined_r0x0309a6fc:
  if (plVar8 != (long *)0x0) {
    lVar6 = *plVar8;
    if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar8[6] != 0)) {
      puVar5 = (undefined8 *)plVar8[2];
      uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
      if ((uVar4 <= (ulong)plVar8[3]) && (plVar8[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
        *puVar5 = &DAT_03c4e575;
        puVar5[1] = *(undefined8 *)(plVar8[6] + 8);
      }
    }
    puVar5 = (undefined8 *)plVar8[2];
    uVar4 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar4 <= (ulong)plVar8[3]) && (plVar8[2] = uVar4, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03c2d363;
      uVar26 = nn::os::GetSystemTick();
      puVar5[1] = uVar26;
    }
    if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
      (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
    }
  }
  return uVar2;
}


