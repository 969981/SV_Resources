/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c7d6d0; name: FUN_00c7d6d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c7d6d0(long param_1)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  bool bVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  short sVar12;
  uint uVar13;
  long *plVar14;
  char cVar15;
  int iVar16;
  int iVar19;
  int iVar20;
  undefined1 auVar17 [16];
  int iVar21;
  undefined1 auVar18 [16];
  float fVar32;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_78;
  undefined *puStack_70;
  undefined8 local_68;
  long *local_60;
  ulong local_58;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00e965f8();
  }
  plVar14 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar1 = DAT_0485a0e8 + 5;
    do {
      lVar11 = *plVar1;
      cVar15 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    local_78 = 0x12ee93efcc18b5c6;
    puStack_70 = PTR_s_DirectionalMain_047d8bd0;
    local_68 = 0x1f;
    local_60 = (long *)0x0;
    uVar10 = FUN_00d4e220(plVar14,&local_78,0);
    local_58 = uVar10;
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if ((uVar10 & 0xff) != 0) {
      auVar17 = FUN_00e42dbc(plVar14,&local_58);
      fVar46 = auVar17._0_4_;
      fVar44 = auVar17._8_4_;
      auVar35._4_4_ = fVar44;
      auVar35._0_4_ = fVar44;
      auVar35._8_4_ = fVar44;
      auVar35._12_4_ = fVar44;
      auVar36 = NEON_ext(auVar35,auVar17,0xc,1);
      fVar43 = auVar17._4_4_;
      auVar39._4_4_ = fVar43;
      auVar39._0_4_ = fVar43;
      auVar39._8_4_ = fVar43;
      auVar39._12_4_ = fVar43;
      fVar47 = auVar17._12_4_;
      auVar17 = NEON_ext(auVar39,auVar36,0xc,1);
      fVar48 = (float)_DAT_03cab640;
      fVar49 = (float)((ulong)_DAT_03cab640 >> 0x20);
      fVar50 = (float)_UNK_03cab648;
      fVar45 = (float)((ulong)_UNK_03cab648 >> 0x20);
      auVar23._0_4_ = -fVar46;
      fVar32 = -fVar43;
      auVar22._8_4_ = -fVar44;
      fVar42 = (float)_DAT_03caa5b0 * fVar47 + fVar46 * fVar48 * 0.0 +
               (float)DAT_03cab620 * auVar17._0_4_ * fVar48 + (float)_DAT_03caad80 * auVar36._0_4_;
      fVar43 = (float)((ulong)_DAT_03caa5b0 >> 0x20) * fVar47 + fVar43 * fVar49 * 0.0 +
               (float)((ulong)DAT_03cab620 >> 0x20) * auVar17._4_4_ * fVar49 +
               (float)((ulong)_DAT_03caad80 >> 0x20) * auVar36._4_4_;
      fVar44 = (float)_UNK_03caa5b8 * fVar47 + fVar44 * fVar50 * 0.0 +
               (float)DAT_03cab628 * auVar17._8_4_ * fVar50 + (float)_UNK_03caad88 * auVar36._8_4_;
      fVar45 = (float)((ulong)_UNK_03caa5b8 >> 0x20) * fVar47 + fVar46 * fVar45 * 0.0 +
               (float)((ulong)DAT_03cab628 >> 0x20) * auVar17._12_4_ * fVar45 +
               (float)((ulong)_UNK_03caad88 >> 0x20) * auVar36._12_4_;
      auVar22._4_4_ = auVar22._8_4_;
      auVar22._0_4_ = auVar22._8_4_;
      auVar22._12_4_ = auVar22._8_4_;
      auVar37._4_4_ = fVar44;
      auVar37._0_4_ = fVar44;
      auVar37._8_4_ = fVar44;
      auVar37._12_4_ = fVar44;
      auVar40._4_4_ = fVar43;
      auVar40._0_4_ = fVar43;
      auVar40._8_4_ = fVar43;
      auVar40._12_4_ = fVar43;
      auVar23._4_12_ = auVar22._4_12_;
      auVar25._0_8_ = auVar23._0_8_;
      auVar25._8_4_ = fVar32;
      auVar25._12_4_ = auVar22._8_4_;
      auVar24._8_8_ = auVar25._8_8_;
      auVar24._4_4_ = auVar22._8_4_;
      auVar24._0_4_ = auVar23._0_4_;
      auVar26._0_12_ = auVar24._0_12_;
      auVar26._12_4_ = auVar22._8_4_;
      auVar17._4_4_ = fVar43;
      auVar17._0_4_ = fVar42;
      auVar17._8_4_ = fVar44;
      auVar17._12_4_ = fVar45;
      auVar38 = NEON_ext(auVar37,auVar17,0xc,1);
      auVar36 = NEON_ext(auVar40,auVar38,0xc,1);
      auVar41 = NEON_ext(auVar26,auVar26,8,1);
      fVar46 = auVar41._0_4_;
      auVar27._4_12_ = auVar26._4_12_;
      auVar27._0_4_ = fVar46;
      auVar29._0_8_ = auVar27._0_8_;
      auVar29._8_4_ = auVar41._8_4_;
      auVar29._12_4_ = auVar22._8_4_;
      auVar28._8_8_ = auVar29._8_8_;
      auVar28._4_4_ = auVar23._0_4_;
      auVar28._0_4_ = fVar46;
      auVar30._0_12_ = auVar28._0_12_;
      auVar30._12_4_ = fVar32;
      auVar17 = NEON_ext(auVar30,auVar41,8,1);
      auVar17 = NEON_ext(auVar17,auVar17,0xc,1);
      fVar46 = (auVar23._0_4_ * fVar45 + fVar47 * fVar42 * fVar48 +
               auVar17._0_4_ * auVar36._0_4_ * fVar48) - auVar38._0_4_ * fVar46;
      fVar43 = (fVar32 * fVar45 + fVar47 * fVar43 * fVar49 + auVar17._4_4_ * auVar36._4_4_ * fVar49)
               - auVar38._4_4_ * auVar41._4_4_;
      fVar47 = (auVar22._8_4_ * fVar45 + fVar47 * fVar44 * fVar50 +
               auVar17._8_4_ * auVar36._8_4_ * fVar50) - auVar38._8_4_ * auVar41._8_4_;
      auVar36._0_4_ = fVar46 * fVar46 + fVar43 * fVar43;
      auVar36._4_4_ = fVar47 * fVar47 + 0.0;
      auVar36._8_4_ = fVar46 * fVar46 + fVar43 * fVar43;
      auVar36._12_4_ = fVar47 * fVar47 + 0.0;
      auVar17 = NEON_ext(auVar36,auVar36,4,1);
      auVar38._0_4_ = auVar17._0_4_ + auVar17._4_4_;
      auVar38._4_4_ = auVar17._8_4_ + auVar17._12_4_;
      auVar38._8_4_ = auVar17._0_4_ + auVar17._4_4_;
      auVar38._12_4_ = auVar17._8_4_ + auVar17._12_4_;
      auVar17 = NEON_frsqrte(auVar38,4);
      auVar33._0_4_ = auVar38._0_4_ * auVar17._0_4_;
      auVar33._4_4_ = auVar38._4_4_ * auVar17._4_4_;
      auVar33._8_4_ = auVar38._8_4_ * auVar17._8_4_;
      auVar33._12_4_ = auVar38._12_4_ * auVar17._12_4_;
      auVar36 = NEON_frsqrts(auVar17,auVar33,4);
      auVar31._0_4_ = auVar17._0_4_ * auVar36._0_4_;
      auVar31._4_4_ = auVar17._4_4_ * auVar36._4_4_;
      auVar31._8_4_ = auVar17._8_4_ * auVar36._8_4_;
      auVar31._12_4_ = auVar17._12_4_ * auVar36._12_4_;
      auVar34._0_4_ = auVar38._0_4_ * auVar31._0_4_;
      auVar34._4_4_ = auVar38._4_4_ * auVar31._4_4_;
      auVar34._8_4_ = auVar38._8_4_ * auVar31._8_4_;
      auVar34._12_4_ = auVar38._12_4_ * auVar31._12_4_;
      iVar16 = -(uint)(auVar38._0_4_ == 0.0);
      iVar19 = -(uint)(auVar38._4_4_ == 0.0);
      iVar20 = -(uint)(auVar38._8_4_ == 0.0);
      iVar21 = -(uint)(auVar38._12_4_ == 0.0);
      auVar17 = NEON_frsqrts(auVar31,auVar34,4);
      fVar46 = auVar31._0_4_ * auVar17._0_4_ * fVar46;
      fVar43 = auVar31._4_4_ * auVar17._4_4_ * fVar43;
      fVar47 = auVar31._8_4_ * auVar17._8_4_ * fVar47;
      fVar32 = auVar31._12_4_ * auVar17._12_4_ * 0.0;
      auVar41._0_8_ =
           CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                    CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                             CONCAT15((byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar19 >> 8),
                                      CONCAT14(SUB41(fVar43,0) & ~(byte)iVar19,
                                               CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                                        ~(byte)((uint)iVar16 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                                                 ~(byte)((uint)iVar16 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar46 >> 8)
                                                                          & ~(byte)((uint)iVar16 >>
                                                                                   8),
                                                                          SUB41(fVar46,0) &
                                                                          ~(byte)iVar16)))))));
      auVar41[8] = SUB41(fVar47,0) & ~(byte)iVar20;
      auVar41[9] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar20 >> 8);
      auVar41[10] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
      auVar41[0xb] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
      auVar41[0xc] = SUB41(fVar32,0) & ~(byte)iVar21;
      auVar41[0xd] = (byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar21 >> 8);
      auVar41[0xe] = (byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
      auVar41[0xf] = (byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
      uRam000000000483bdf8 = auVar41._8_8_;
      _DAT_0483bdf0 = auVar41._0_8_;
    }
    do {
      lVar11 = *plVar1;
      iVar16 = (int)lVar11 + -1;
      cVar15 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar16;
        cVar15 = ExclusiveMonitorsStatus();
      }
    } while (cVar15 != '\0');
    if (iVar16 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar6 = PTR_DAT_047d7d30;
  if (((*PTR_DAT_047d7d30 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar16 != 0)) {
    FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7d30);
  }
  puVar8 = PTR_DAT_047d7d40;
  puVar7 = PTR_DAT_047d7d38;
  lVar11 = *(long *)PTR_DAT_047d7d38;
  *(long *)PTR_DAT_047d7d40 = lVar11;
  lVar11 = *(long *)(lVar11 + 0x2f0);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    cVar15 = '\x01';
    iVar16 = FUN_00cf2c34();
    if ((iVar16 != 0) && (iVar16 != 6)) {
      cVar15 = '\0';
    }
    DAT_0456fdbc = cVar15;
  }
  if (((*puVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar16 != 0)) {
    FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7d30);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  lVar11 = *(long *)(lVar11 + 0x2f0);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    iVar16 = FUN_00d5374c();
    DAT_0456fdc0 = iVar16 == 0;
  }
  bVar5 = DAT_0456fdc4;
  DAT_0456fdc4 = DAT_0456fdc0 & DAT_0456fdbc != '\0';
  if (((*puVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar16 != 0)) {
    FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7d30);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  lVar11 = *(long *)(lVar11 + 0x2f0);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    DAT_0483bdb4 = (float)FUN_01e02bd4();
  }
  if (DAT_0456fdc4 == 0) {
    DAT_0483bdb8 = 0;
    DAT_0483bdd0 = 0;
    DAT_0483bdc0 = 0;
    DAT_0483bdc8 = 0;
  }
  else {
    uVar13 = (uint)(((DAT_0483bdb4 + -21600.0) * 16.0) / 43200.0);
    if (0xe < (int)uVar13) {
      uVar13 = 0xf;
    }
    uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
    DAT_0483bdb8 = 1L << ((ulong)uVar13 & 0x3f);
    DAT_0483bdc0 = 1L << ((ulong)(uVar13 + 0x10) & 0x3f);
    DAT_0483bdc8 = 1L << ((ulong)(uVar13 + 0x20) & 0x3f);
    DAT_0483bdd0 = 1L << ((ulong)(uVar13 + 0x30) & 0x3f);
  }
  if (bVar5 == DAT_0456fdc4) {
    if ((DAT_0483bda8 & 1) == 0) {
      if (0 < DAT_0456fdb8) {
        DAT_0483bdac = 0;
        DAT_0456fdb8 = DAT_0456fdb8 + -1;
        goto LAB_00c7da7c;
      }
      DAT_0456fdb8 = 0x708;
    }
    else {
      DAT_0456fdb8 = 0x707;
    }
  }
  else {
    DAT_0456fdb8 = 0x707;
  }
  DAT_0483bdac = 1;
LAB_00c7da7c:
  DAT_0483bda8 = 0;
  DAT_0483bdb0 = DAT_0483bdad;
  DAT_0483bdad = 0;
  if (((*puVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar16 != 0)) {
    FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7d30);
  }
  lVar11 = *(long *)puVar7;
  *(long *)puVar8 = lVar11;
  lVar11 = *(long *)(lVar11 + 0x378);
  if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
    psVar2 = (short *)(lVar11 + 0x1a);
    sVar12 = *(short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar2;
      if (sVar3 == sVar12) {
        cVar15 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar4) {
          *psVar2 = sVar12 + 1;
          cVar15 = ExclusiveMonitorsStatus();
        }
        if (cVar15 != '\0') goto LAB_00c7dc94;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00c7dc94:
        bVar4 = false;
      }
      if (bVar4) {
        if (*(long *)(lVar11 + 0x10) != 0) {
          plVar14 = (long *)(*(long *)(lVar11 + 0x10) + -0x28);
          lVar11 = (**(code **)(*plVar14 + 0x68))(plVar14);
          DAT_0483bde8 = (ulong)SUB164(*(undefined1 (*) [16])(lVar11 + 0x30),8);
          DAT_0483bde0 = SUB168(*(undefined1 (*) [16])(lVar11 + 0x30),0);
          if (((*puVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_047d7d30), iVar16 != 0))
          {
            FUN_00100190(&LAB_00a92af8,PTR_DAT_047d7d38,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d7d30);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          if ((*(char *)(lVar11 + 1000) != '\0') &&
             (*(float *)(lVar11 + 0x3ec) < (float)DAT_0483bde8)) {
            DAT_0483bde8 = CONCAT44((int)(DAT_0483bde8 >> 0x20),*(float *)(lVar11 + 0x3ec));
          }
          DAT_0483bdb1 = '\x01';
          (**(code **)(*plVar14 + 0x60))(plVar14);
        }
        break;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  if (DAT_0483bdb1 == '\x01') {
    lVar11 = *(long *)(param_1 + 0x30);
    if (lVar11 == 0) {
      FUN_01798c80(&local_58,*(undefined8 *)(param_1 + 8));
      local_78 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      FUN_020067b0(&local_78);
      uVar10 = local_58;
      local_58 = 0;
      *(ulong *)(param_1 + 0x30) = uVar10;
      FUN_020067b0(&local_58);
      lVar11 = *(long *)(param_1 + 0x30);
    }
    auVar18._8_8_ = DAT_0483bde8;
    auVar18._0_8_ = DAT_0483bde0;
    FUN_00d7a754(auVar18,lVar11,uVar9 & 1,DAT_0483bdb0);
  }
  FUN_020049e0();
  return;
}


