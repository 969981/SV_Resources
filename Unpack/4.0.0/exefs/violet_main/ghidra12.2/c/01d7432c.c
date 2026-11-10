/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d7432c; name: FUN_01d7432c
 */


undefined1  [16] FUN_01d7432c(float param_1,long *param_2,float *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined1 auVar5 [16];
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  int iVar18;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar25;
  float fVar27;
  int iVar28;
  undefined1 auVar26 [16];
  int iVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte local_90;
  byte bStack_8f;
  byte bStack_8e;
  byte bStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  byte bStack_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if (((DAT_04837608 & 1) == 0) && (iVar25 = __cxa_guard_acquire(&DAT_04837608), iVar25 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  DAT_04837610 = DAT_048375f8;
  lVar9 = *param_2;
  auVar26 = ZEXT816(0);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d74414;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d74414:
        bVar13 = false;
      }
      if (bVar13) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return auVar26;
        }
        plVar11 = (long *)(lVar9 + -0x28);
        lVar6 = (**(code **)(*plVar11 + 0x68))(auVar26,plVar11);
        local_70 = *(float *)(lVar6 + 0x30);
        fStack_6c = *(float *)(lVar6 + 0x34);
        fStack_68 = *(float *)(lVar6 + 0x38);
        fStack_64 = 0.0;
        if (param_1 <= 1.1920929e-07) goto LAB_01d74468;
        plVar7 = (long *)(lVar9 + 0xe8);
        fVar19 = local_70 - *param_3;
        fVar23 = fStack_68 - param_3[2];
        fVar24 = 0.0 - param_3[3];
        fVar27 = (fStack_6c - param_3[1]) * (fStack_6c - param_3[1]);
        auVar26._0_4_ = fVar19 * fVar19 + fVar27;
        auVar26._4_4_ = fVar23 * fVar23 + fVar24 * fVar24;
        auVar26._8_4_ = fVar19 * fVar19 + fVar27;
        auVar26._12_4_ = fVar23 * fVar23 + fVar24 * fVar24;
        auVar26 = NEON_ext(auVar26,auVar26,4,1);
        auVar21._0_4_ = auVar26._0_4_ + auVar26._4_4_;
        auVar21._4_4_ = auVar26._8_4_ + auVar26._12_4_;
        auVar21._8_4_ = auVar26._0_4_ + auVar26._4_4_;
        auVar21._12_4_ = auVar26._8_4_ + auVar26._12_4_;
        auVar26 = NEON_frsqrte(auVar21,4);
        auVar31._0_4_ = auVar21._0_4_ * auVar26._0_4_;
        auVar31._4_4_ = auVar21._4_4_ * auVar26._4_4_;
        auVar31._8_4_ = auVar21._8_4_ * auVar26._8_4_;
        auVar31._12_4_ = auVar21._12_4_ * auVar26._12_4_;
        auVar32 = NEON_frsqrts(auVar26,auVar31,4);
        auVar30._0_4_ = auVar26._0_4_ * auVar32._0_4_;
        auVar30._4_4_ = auVar26._4_4_ * auVar32._4_4_;
        auVar30._8_4_ = auVar26._8_4_ * auVar32._8_4_;
        auVar30._12_4_ = auVar26._12_4_ * auVar32._12_4_;
        auVar33._0_4_ = auVar21._0_4_ * auVar30._0_4_;
        auVar33._4_4_ = auVar21._4_4_ * auVar30._4_4_;
        auVar33._8_4_ = auVar21._8_4_ * auVar30._8_4_;
        auVar33._12_4_ = auVar21._12_4_ * auVar30._12_4_;
        iVar25 = -(uint)(auVar21._0_4_ == 0.0);
        iVar28 = -(uint)(auVar21._8_4_ == 0.0);
        iVar29 = -(uint)(auVar21._12_4_ == 0.0);
        auVar26 = NEON_frsqrts(auVar30,auVar33,4);
        fVar19 = fVar19 * auVar30._0_4_ * auVar26._0_4_;
        fVar23 = fVar23 * auVar30._8_4_ * auVar26._8_4_;
        fVar24 = fVar24 * auVar30._12_4_ * auVar26._12_4_;
        fVar27 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                                 CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                          ~(byte)((uint)iVar25 >> 0x10),
                                          CONCAT11((byte)((uint)fVar19 >> 8) &
                                                   ~(byte)((uint)iVar25 >> 8),
                                                   SUB41(fVar19,0) & ~(byte)iVar25)));
        fVar19 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                 CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                          ~(byte)((uint)iVar28 >> 0x10),
                                          CONCAT11((byte)((uint)fVar23 >> 8) &
                                                   ~(byte)((uint)iVar28 >> 8),
                                                   SUB41(fVar23,0) & ~(byte)iVar28)));
        fVar23 = (float)(CONCAT17((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                  CONCAT16((byte)((uint)fVar24 >> 0x10) &
                                           ~(byte)((uint)iVar29 >> 0x10),
                                           CONCAT15((byte)((uint)fVar24 >> 8) &
                                                    ~(byte)((uint)iVar29 >> 8),
                                                    CONCAT14(SUB41(fVar24,0) & ~(byte)iVar29,fVar19)
                                                   ))) >> 0x20);
        auVar32._0_4_ = fVar27 * fVar27 + 0.0;
        auVar32._4_4_ = fVar19 * fVar19 + fVar23 * fVar23;
        auVar32._8_4_ = fVar27 * fVar27 + 0.0;
        auVar32._12_4_ = fVar19 * fVar19 + fVar23 * fVar23;
        auVar26 = NEON_ext(auVar32,auVar32,4,1);
        auVar14._0_4_ = auVar26._0_4_ + auVar26._4_4_;
        auVar14._4_4_ = auVar26._8_4_ + auVar26._12_4_;
        auVar14._8_4_ = auVar26._0_4_ + auVar26._4_4_;
        auVar14._12_4_ = auVar26._8_4_ + auVar26._12_4_;
        auVar26 = NEON_frsqrte(auVar14,4);
        auVar20._0_4_ = auVar14._0_4_ * auVar26._0_4_;
        auVar20._4_4_ = auVar14._4_4_ * auVar26._4_4_;
        auVar20._8_4_ = auVar14._8_4_ * auVar26._8_4_;
        auVar20._12_4_ = auVar14._12_4_ * auVar26._12_4_;
        auVar21 = NEON_frsqrts(auVar26,auVar20,4);
        auVar22._0_4_ = auVar26._0_4_ * auVar21._0_4_;
        auVar22._4_4_ = auVar26._4_4_ * auVar21._4_4_;
        auVar22._8_4_ = auVar26._8_4_ * auVar21._8_4_;
        auVar22._12_4_ = auVar26._12_4_ * auVar21._12_4_;
        auVar16._0_4_ = auVar14._0_4_ * auVar22._0_4_;
        auVar16._4_4_ = auVar14._4_4_ * auVar22._4_4_;
        auVar16._8_4_ = auVar14._8_4_ * auVar22._8_4_;
        auVar16._12_4_ = auVar14._12_4_ * auVar22._12_4_;
        auVar26 = NEON_frsqrts(auVar22,auVar16,4);
        lVar12 = *plVar7;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar12) {
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_01d7451c;
        }
        bVar13 = true;
        goto LAB_01d74530;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  return auVar26;
LAB_01d7451c:
  if (*plVar7 == 0) {
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar13) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01d7452c;
    goto LAB_01d7451c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
  do {
    if (*plVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0xf0));
        while (*plVar7 == 0) {
          cVar4 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar13) {
            *plVar7 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01d7452c;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar13) {
      *plVar7 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01d7452c:
  bVar13 = false;
LAB_01d74530:
  iVar25 = -(uint)(auVar14._0_4_ == 0.0);
  iVar28 = -(uint)(auVar14._4_4_ == 0.0);
  iVar29 = -(uint)(auVar14._8_4_ == 0.0);
  iVar18 = -(uint)(auVar14._12_4_ == 0.0);
  plVar7 = (long *)FUN_01174c30(*(undefined8 *)(lVar9 + 0x100),*(undefined8 *)(lVar9 + 0x108));
  if ((*(long **)(lVar9 + 0x108) == plVar7) || (*plVar7 == 0)) {
    plVar7 = (long *)FUN_01174c30(*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
    if (*(long **)(lVar9 + 0x140) == plVar7) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      if (*plVar7 != 0) {
        lVar6 = *plVar7 + -0x20;
      }
    }
  }
  else {
    lVar6 = *plVar7 + -0x20;
  }
  local_90 = (byte)iVar25;
  bStack_8f = (byte)((uint)iVar25 >> 8);
  bStack_8e = (byte)((uint)iVar25 >> 0x10);
  bStack_8d = (byte)((uint)iVar25 >> 0x18);
  bStack_8c = (byte)iVar28;
  bStack_8b = (byte)((uint)iVar28 >> 8);
  bStack_8a = (byte)((uint)iVar28 >> 0x10);
  bStack_89 = (byte)((uint)iVar28 >> 0x18);
  bStack_88 = (byte)iVar29;
  bStack_87 = (byte)((uint)iVar29 >> 8);
  bStack_86 = (byte)((uint)iVar29 >> 0x10);
  bStack_85 = (byte)((uint)iVar29 >> 0x18);
  bStack_84 = (byte)iVar18;
  bStack_83 = (byte)((uint)iVar18 >> 8);
  bStack_82 = (byte)((uint)iVar18 >> 0x10);
  bStack_81 = (byte)((uint)iVar18 >> 0x18);
  fVar27 = fVar27 * auVar22._0_4_ * auVar26._0_4_;
  fVar24 = auVar22._4_4_ * auVar26._4_4_ * 0.0;
  fVar19 = fVar19 * auVar22._8_4_ * auVar26._8_4_;
  fVar23 = fVar23 * auVar22._12_4_ * auVar26._12_4_;
  if (!bVar13) {
    *(undefined8 *)(lVar9 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0xf0));
  }
  fVar27 = (float)CONCAT13((byte)((uint)fVar27 >> 0x18) & ~bStack_8d,
                           CONCAT12((byte)((uint)fVar27 >> 0x10) & ~bStack_8e,
                                    CONCAT11((byte)((uint)fVar27 >> 8) & ~bStack_8f,
                                             SUB41(fVar27,0) & ~local_90)));
  auVar15._0_8_ =
       CONCAT17((byte)((uint)fVar24 >> 0x18) & ~bStack_89,
                CONCAT16((byte)((uint)fVar24 >> 0x10) & ~bStack_8a,
                         CONCAT15((byte)((uint)fVar24 >> 8) & ~bStack_8b,
                                  CONCAT14(SUB41(fVar24,0) & ~bStack_8c,fVar27))));
  auVar15[8] = SUB41(fVar19,0) & ~bStack_88;
  auVar15[9] = (byte)((uint)fVar19 >> 8) & ~bStack_87;
  auVar15[10] = (byte)((uint)fVar19 >> 0x10) & ~bStack_86;
  auVar15[0xb] = (byte)((uint)fVar19 >> 0x18) & ~bStack_85;
  auVar17[0xc] = SUB41(fVar23,0) & ~bStack_84;
  auVar17._0_12_ = auVar15;
  auVar17[0xd] = (byte)((uint)fVar23 >> 8) & ~bStack_83;
  auVar17[0xe] = (byte)((uint)fVar23 >> 0x10) & ~bStack_82;
  auVar17[0xf] = (byte)((uint)fVar23 >> 0x18) & ~bStack_81;
  fStack_78 = auVar15._8_4_;
  fStack_74 = auVar17._12_4_;
  fStack_7c = (float)((ulong)auVar15._0_8_ >> 0x20);
  if (lVar6 == 0) {
    local_70 = local_70 + fVar27 * -0.58;
    fStack_6c = fStack_6c + fStack_7c * -0.58;
    fStack_68 = fStack_68 + fStack_78 * -0.58;
    fStack_64 = fStack_74 * -0.58 + 0.0;
    goto LAB_01d74468;
  }
  FUN_00e92dbc(local_50,lVar6);
  if (local_50[0] == (undefined8 *)0x0) goto LAB_01d74468;
  if (*(short *)((long)local_50[0] + 0x1a) != 0) {
    psVar1 = (short *)((long)local_50[0] + 0x1a);
    sVar10 = *(short *)((long)local_50[0] + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar13) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01d7467c;
        bVar13 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01d7467c:
        bVar13 = false;
      }
      if (bVar13) {
        plVar7 = (long *)0x0;
        if (local_50[0][2] != 0) {
          plVar7 = (long *)(local_50[0][2] + -0x28);
        }
        goto LAB_01d74690;
      }
      sVar10 = sVar3;
      if (sVar3 == 0) break;
    } while( true );
  }
  plVar7 = (long *)0x0;
LAB_01d74690:
  psVar1 = (short *)(local_50[0] + 3);
  do {
    sVar10 = *psVar1;
    cVar4 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar13) {
      *psVar1 = sVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar10 == 1) {
    piVar2 = (int *)((long)local_50[0] + 0x1c);
    do {
      iVar25 = *piVar2;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar13) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar25 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar25 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar9 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar9;
      local_28 = *local_50[0];
      FUN_00c44438(lVar9 + 0x8040,&local_28);
    }
  }
  else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
  if (plVar7 != (long *)0x0) {
    uVar8 = FUN_01e08308(plVar7);
    if ((uVar8 & 0xff) != 0) {
      fVar19 = (float)(uVar8 >> 0x20);
      local_70 = local_70 - (fVar27 * param_1 + fVar27 * fVar19);
      fStack_6c = fStack_6c - (fStack_7c * param_1 + fStack_7c * fVar19);
      fStack_68 = fStack_68 - (fStack_78 * param_1 + fStack_78 * fVar19);
      fStack_64 = 0.0 - (fStack_74 * param_1 + fStack_74 * fVar19);
    }
    lVar9 = plVar7[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_01d74468:
  (**(code **)(*plVar11 + 0x60))(plVar11);
  auVar5._4_4_ = fStack_6c;
  auVar5._0_4_ = local_70;
  auVar5._8_4_ = fStack_68;
  auVar5._12_4_ = fStack_64;
  return auVar5;
}


