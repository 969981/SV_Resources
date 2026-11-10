/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01233358; name: FUN_01233358
 */


int FUN_01233358(long param_1,undefined1 (*param_2) [16],long param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  byte *pbVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  int iVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 *local_c0;
  byte *local_b8;
  size_t local_b0;
  long *local_a8;
  byte local_a0 [16];
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  
  if ((*(long *)(param_1 + 0x1a0) == 0) ||
     (uVar10 = FUN_00f1dff8(*(long *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8),param_4),
     (uVar10 & 1) != 0)) {
    puVar14 = &DAT_cbf29ce484222645;
    snprintf((char *)local_a0,0x10,"PLAY_PV_%04hu",*(ushort *)param_2[1]);
    local_b0 = strlen((char *)local_a0);
    if (local_a0[0] != 0) {
      pbVar12 = (byte *)((ulong)local_a0 | 1);
      do {
        puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)local_a0[0]) * 0x100000001b3);
        local_a0[0] = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (local_a0[0] != 0);
    }
    local_a8 = (long *)0x0;
    local_c0 = puVar14;
    local_b8 = local_a0;
    FUN_0173b8d4(*(undefined2 *)(param_2[1] + 2),param_3);
    FUN_0116b678(param_4,param_3);
    puVar5 = PTR_DAT_047d8280;
    if (((*PTR_DAT_047d8280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    puVar7 = PTR_DAT_047d8290;
    puVar6 = PTR_DAT_047d8288;
    lVar13 = *(long *)PTR_DAT_047d8288;
    *(long *)PTR_DAT_047d8290 = lVar13;
    plVar11 = *(long **)(*(long *)(lVar13 + 0x200) + 0x60);
    (**(code **)(*plVar11 + 0x98))(0x3f800000,plVar11,"ENV_POKE_VOICE",param_3,0,4,0);
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    lVar13 = *(long *)(lVar13 + 0x200);
    plVar11 = *(long **)(lVar13 + 0x60);
    iVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,"ENV_PV");
    if ((param_3 != -1) && (iVar8 != 0)) {
      local_90 = 0xffffffffffffffff;
      local_88 = CONCAT44(0x3f800000,iVar8);
      plVar11 = *(long **)(lVar13 + 0x60);
      (**(code **)(*plVar11 + 0x120))(plVar11,param_3,&local_90,1);
    }
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    fVar25 = *(float *)(param_1 + 0xe0);
    uVar22 = *(undefined8 *)(*param_2 + 8);
    uVar15 = *(undefined8 *)*param_2;
    auVar26 = *param_2;
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar16 = *(long *)puVar6;
    *(long *)puVar7 = lVar16;
    nn::os::LockMutex((MutexType *)(lVar16 + 0x150));
    uVar3 = *(undefined8 *)(lVar16 + 0x120);
    uVar4 = *(undefined8 *)(lVar16 + 0x128);
    uVar23 = *(undefined8 *)(lVar16 + 0x138);
    uVar19 = *(undefined8 *)(lVar16 + 0x130);
    nn::os::UnlockMutex((MutexType *)(lVar16 + 0x150));
    auVar29 = auVar26._0_12_;
    fVar32 = (float)uVar3;
    fVar18 = (float)uVar15 - fVar32;
    fVar33 = (float)((ulong)uVar3 >> 0x20);
    fVar20 = (float)((ulong)uVar15 >> 0x20) - fVar33;
    fVar34 = (float)uVar4;
    fVar21 = (float)uVar22 - fVar34;
    fVar24 = (float)((ulong)uVar22 >> 0x20) - (float)((ulong)uVar4 >> 0x20);
    fVar24 = fVar24 * fVar24;
    auVar26._0_4_ = fVar18 * fVar18 + fVar20 * fVar20;
    auVar26._4_4_ = fVar21 * fVar21 + fVar24;
    auVar26._8_4_ = fVar18 * fVar18 + fVar20 * fVar20;
    auVar26._12_4_ = fVar21 * fVar21 + fVar24;
    auVar26 = NEON_ext(auVar26,auVar26,4,1);
    auVar17._0_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar17._4_4_ = auVar26._8_4_ + auVar26._12_4_;
    auVar17._8_4_ = auVar26._0_4_ + auVar26._4_4_;
    auVar17._12_4_ = auVar26._8_4_ + auVar26._12_4_;
    if (SQRT(auVar17._0_4_) < fVar25) {
      if (SQRT(auVar17._0_4_) < 1.1920929e-07) {
        fVar18 = (float)uVar19;
        fVar20 = (float)((ulong)uVar19 >> 0x20);
        fVar21 = (float)uVar23;
      }
      else {
        auVar26 = NEON_frsqrte(auVar17,4);
        auVar30._0_4_ = auVar17._0_4_ * auVar26._0_4_;
        auVar30._4_4_ = auVar17._4_4_ * auVar26._4_4_;
        auVar30._8_4_ = auVar17._8_4_ * auVar26._8_4_;
        auVar30._12_4_ = auVar17._12_4_ * auVar26._12_4_;
        auVar30 = NEON_frsqrts(auVar26,auVar30,4);
        auVar28._0_4_ = auVar26._0_4_ * auVar30._0_4_;
        auVar28._4_4_ = auVar26._4_4_ * auVar30._4_4_;
        auVar28._8_4_ = auVar26._8_4_ * auVar30._8_4_;
        auVar28._12_4_ = auVar26._12_4_ * auVar30._12_4_;
        auVar31._0_4_ = auVar17._0_4_ * auVar28._0_4_;
        auVar31._4_4_ = auVar17._4_4_ * auVar28._4_4_;
        auVar31._8_4_ = auVar17._8_4_ * auVar28._8_4_;
        auVar31._12_4_ = auVar17._12_4_ * auVar28._12_4_;
        iVar8 = -(uint)(auVar17._0_4_ == 0.0);
        iVar9 = -(uint)(auVar17._4_4_ == 0.0);
        iVar27 = -(uint)(auVar17._8_4_ == 0.0);
        auVar26 = NEON_frsqrts(auVar28,auVar31,4);
        fVar18 = fVar18 * auVar28._0_4_ * auVar26._0_4_;
        fVar20 = fVar20 * auVar28._4_4_ * auVar26._4_4_;
        fVar21 = fVar21 * auVar28._8_4_ * auVar26._8_4_;
        fVar18 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                                 CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                          ~(byte)((uint)iVar8 >> 0x10),
                                          CONCAT11((byte)((uint)fVar18 >> 8) &
                                                   ~(byte)((uint)iVar8 >> 8),
                                                   SUB41(fVar18,0) & ~(byte)iVar8)));
        fVar21 = (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                                 CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                          ~(byte)((uint)iVar27 >> 0x10),
                                          CONCAT11((byte)((uint)fVar21 >> 8) &
                                                   ~(byte)((uint)iVar27 >> 8),
                                                   SUB41(fVar21,0) & ~(byte)iVar27)));
        fVar20 = (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar9 >> 0x18),
                                  CONCAT16((byte)((uint)fVar20 >> 0x10) &
                                           ~(byte)((uint)iVar9 >> 0x10),
                                           CONCAT15((byte)((uint)fVar20 >> 8) &
                                                    ~(byte)((uint)iVar9 >> 8),
                                                    CONCAT14(SUB41(fVar20,0) & ~(byte)iVar9,fVar18))
                                          )) >> 0x20);
      }
      auVar29._0_4_ = fVar32 + fVar18 * fVar25;
      auVar29._4_4_ = fVar33 + fVar20 * fVar25;
      auVar29._8_4_ = fVar34 + fVar21 * fVar25;
    }
    local_70 = -auVar29._8_4_;
    local_90 = 0x8000000080000000;
    local_88 = 0x3f800000;
    local_78 = auVar29._0_8_;
    local_80 = 0x800000003f800000;
    plVar11 = *(long **)(*(long *)(lVar13 + 0x200) + 0x60);
    (**(code **)(*plVar11 + 0x70))(plVar11,param_3,&local_90);
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8280);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    plVar11 = *(long **)(*(long *)(lVar13 + 0x200) + 0x60);
    iVar8 = (**(code **)(*plVar11 + 0xd0))(plVar11,local_b8,param_3,1,&LAB_01080c70,lVar13,0,0,0);
    if (iVar8 == 0) {
      local_90 = local_90 & 0xffffffff00000000;
      for (lVar13 = *(long *)(param_1 + 0x1a0); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x68)) {
        nn::os::LockMutex((MutexType *)(lVar13 + 0x100));
        iVar9 = *(int *)(lVar13 + 0x120) + -1;
        if (*(int *)(lVar13 + 0x120) < 1) {
          iVar9 = 0;
        }
        *(int *)(lVar13 + 0x120) = iVar9;
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x100));
      }
    }
    else {
      FUN_0173ba88(*(undefined8 *)(lVar13 + 0x220),&local_c0,iVar8,param_3,0,param_5,0);
      local_90 = CONCAT44(local_90._4_4_,iVar8);
      nn::os::LockMutex((MutexType *)(param_1 + 0x160));
      puVar1 = *(undefined8 **)(param_1 + 0x130);
      if (puVar1 < *(undefined8 **)(param_1 + 0x138)) {
        uVar15 = *(undefined8 *)(param_1 + 0x140);
        if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar13 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar15;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        uVar2 = *(undefined4 *)(param_1 + 0x1a8);
        *puVar1 = *param_4;
        puVar1[1] = param_4[1];
        puVar1[2] = param_4[2];
        plVar11 = (long *)param_4[3];
        puVar1[3] = plVar11;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))();
        }
        *(int *)(puVar1 + 4) = iVar8;
        *(undefined4 *)((long)puVar1 + 0x24) = uVar2;
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
        *(undefined8 **)(param_1 + 0x130) = puVar1 + 5;
      }
      else {
        FUN_018ddd74(param_1 + 0x128,param_4,&local_90,(undefined4 *)(param_1 + 0x1a8));
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x160));
    }
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  else {
    local_90 = local_90 & 0xffffffff00000000;
    (*(code *)*param_5)(param_5 + 4,&local_90);
    iVar8 = 0;
  }
  return iVar8;
}


