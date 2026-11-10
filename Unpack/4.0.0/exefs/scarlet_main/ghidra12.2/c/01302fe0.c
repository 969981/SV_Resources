/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01302fe0; name: FUN_01302fe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01302fe0(long param_1)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  code *pcVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined1 auVar20 [16];
  int iVar21;
  int iVar23;
  int iVar24;
  undefined1 auVar22 [16];
  int iVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  undefined1 auVar27 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long local_300;
  undefined8 *local_2f8;
  char local_2f0;
  undefined7 uStack_2ef;
  undefined8 local_2e8;
  long local_d0;
  long *plStack_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [8];
  undefined8 *local_80;
  char local_78;
  long *local_70 [2];
  
  fVar26 = (float)((ulong)_DAT_03caa980 >> 0x20);
  auVar22._0_4_ = (float)_DAT_03caa980 + fVar26;
  fVar28 = (float)((ulong)_UNK_03caa988 >> 0x20);
  auVar22._4_4_ = (float)_UNK_03caa988 + fVar28;
  auVar22._8_4_ = (float)_DAT_03caa980 + fVar26;
  auVar22._12_4_ = (float)_UNK_03caa988 + fVar28;
  auVar22 = NEON_ext(auVar22,auVar22,4,1);
  auVar20._0_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar20._4_4_ = auVar22._8_4_ + auVar22._12_4_;
  auVar20._8_4_ = auVar22._0_4_ + auVar22._4_4_;
  auVar20._12_4_ = auVar22._8_4_ + auVar22._12_4_;
  auVar22 = NEON_frsqrte(auVar20,4);
  auVar31._0_4_ = auVar20._0_4_ * auVar22._0_4_;
  auVar31._4_4_ = auVar20._4_4_ * auVar22._4_4_;
  auVar31._8_4_ = auVar20._8_4_ * auVar22._8_4_;
  auVar31._12_4_ = auVar20._12_4_ * auVar22._12_4_;
  auVar32 = NEON_frsqrts(auVar22,auVar31,4);
  auVar27._0_4_ = auVar22._0_4_ * auVar32._0_4_;
  auVar27._4_4_ = auVar22._4_4_ * auVar32._4_4_;
  auVar27._8_4_ = auVar22._8_4_ * auVar32._8_4_;
  auVar27._12_4_ = auVar22._12_4_ * auVar32._12_4_;
  auVar33._0_4_ = auVar20._0_4_ * auVar27._0_4_;
  auVar33._4_4_ = auVar20._4_4_ * auVar27._4_4_;
  auVar33._8_4_ = auVar20._8_4_ * auVar27._8_4_;
  auVar33._12_4_ = auVar20._12_4_ * auVar27._12_4_;
  iVar21 = -(uint)(auVar20._0_4_ == 0.0);
  iVar23 = -(uint)(auVar20._4_4_ == 0.0);
  iVar24 = -(uint)(auVar20._8_4_ == 0.0);
  iVar25 = -(uint)(auVar20._12_4_ == 0.0);
  auVar22 = NEON_frsqrts(auVar27,auVar33,4);
  fVar26 = auVar27._0_4_ * auVar22._0_4_ * (float)_DAT_03cabdc0;
  fVar28 = auVar27._4_4_ * auVar22._4_4_ * (float)((ulong)_DAT_03cabdc0 >> 0x20);
  fVar29 = auVar27._8_4_ * auVar22._8_4_ * (float)_UNK_03cabdc8;
  fVar30 = auVar27._12_4_ * auVar22._12_4_ * (float)((ulong)_UNK_03cabdc8 >> 0x20);
  auVar32._0_8_ =
       CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                         CONCAT15((byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar23 >> 8),
                                  CONCAT14(SUB41(fVar28,0) & ~(byte)iVar23,
                                           CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                    ~(byte)((uint)iVar21 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                             ~(byte)((uint)iVar21 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar26 >> 8) &
                                                                      ~(byte)((uint)iVar21 >> 8),
                                                                      SUB41(fVar26,0) &
                                                                      ~(byte)iVar21)))))));
  auVar32[8] = SUB41(fVar29,0) & ~(byte)iVar24;
  auVar32[9] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar24 >> 8);
  auVar32[10] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
  auVar32[0xb] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
  auVar32[0xc] = SUB41(fVar30,0) & ~(byte)iVar25;
  auVar32[0xd] = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar25 >> 8);
  auVar32[0xe] = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10);
  auVar32[0xf] = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18);
  *(long *)(param_1 + 0x288) = auVar32._8_8_;
  *(undefined8 *)(param_1 + 0x280) = auVar32._0_8_;
  lVar6 = FUN_013062e4(*(undefined8 *)(param_1 + 8));
  local_d0 = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar21 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar21 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 == -1) {
LAB_013047f4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_300 = *(long *)(param_1 + 0x4a8);
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  FUN_01304a8c(&local_300);
  local_d0 = 0;
  *(long *)(param_1 + 0x4a8) = lVar6;
  FUN_01304a8c(&local_d0);
  local_2f8 = *(undefined8 **)(param_1 + 0x288);
  local_300 = *(long *)(param_1 + 0x280);
  FUN_0130539c(*(undefined8 *)(param_1 + 0x4a8),&local_300);
  lVar6 = 0;
  do {
    *(undefined4 *)(param_1 + lVar6 * 4 + 0x520) = 0x3dcccccd;
    lVar17 = *(long *)(param_1 + 8);
    local_d0 = lVar17;
    local_70[0] = (long *)FUN_01304bbc(lVar17);
    if (local_70[0] != (long *)0x0) {
      plVar10 = local_70[0] + 5;
      do {
        lVar7 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_013047f4;
    }
    FUN_01304890(&local_300,lVar17,&local_d0,local_70);
    lVar7 = local_300;
    lVar17 = param_1 + lVar6 * 0x40;
    local_300 = 0;
    lVar12 = *(long *)(lVar17 + 0x558);
    *(long *)(lVar17 + 0x558) = lVar7;
    if (lVar12 != 0) {
      FUN_028c0014((undefined8 *)(lVar17 + 0x560));
    }
    *(ulong *)(lVar17 + 0x568) = CONCAT71(uStack_2ef,local_2f0);
    *(undefined8 *)(lVar17 + 0x570) = local_2e8;
    *(undefined8 *)(lVar17 + 0x560) = local_2f8;
    local_300 = 0;
    if (local_70[0] != (long *)0x0) {
      plVar10 = local_70[0] + 5;
      do {
        lVar17 = *plVar10;
        iVar21 = (int)lVar17 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar21;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      else if ((int)lVar17 == 0) goto LAB_013043d8;
    }
    lVar17 = *(long *)(param_1 + 8);
    local_d0 = lVar17;
    local_70[0] = (long *)FUN_01304bbc(lVar17);
    if (local_70[0] != (long *)0x0) {
      plVar10 = local_70[0] + 5;
      do {
        lVar7 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = (int)lVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar7 == -1) goto LAB_013047f4;
    }
    lVar19 = lVar6 << 1;
    FUN_01304890(&local_300,lVar17,&local_d0,local_70);
    lVar7 = local_300;
    lVar17 = param_1 + (lVar6 << 6 | 0x20U);
    local_300 = 0;
    lVar12 = *(long *)(lVar17 + 0x558);
    *(long *)(lVar17 + 0x558) = lVar7;
    if (lVar12 != 0) {
      FUN_028c0014((undefined8 *)(lVar17 + 0x560));
    }
    *(ulong *)(lVar17 + 0x568) = CONCAT71(uStack_2ef,local_2f0);
    *(undefined8 *)(lVar17 + 0x570) = local_2e8;
    *(undefined8 *)(lVar17 + 0x560) = local_2f8;
    local_300 = 0;
    if (local_70[0] != (long *)0x0) {
      plVar10 = local_70[0] + 5;
      do {
        lVar17 = *plVar10;
        iVar21 = (int)lVar17 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *(int *)plVar10 = iVar21;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar21 == 0) {
        (**(code **)(*local_70[0] + 0x10))();
      }
      else if ((int)lVar17 == 0) goto LAB_013043d8;
    }
    lVar17 = lVar6 * 8;
    lVar6 = lVar6 + 1;
    *(long *)(param_1 + lVar17 + 0x6b8) = lVar19;
  } while (lVar6 != 4);
  FUN_01304f3c(&local_300,*(undefined8 *)(param_1 + 8));
  plVar10 = (long *)(param_1 + 0xd0);
  FUN_01304af8(plVar10);
  *(long *)(param_1 + 0xd0) = local_300;
  *(undefined4 *)(local_300 + 0x350) = 2;
  FUN_01304f3c(&local_300,*(undefined8 *)(param_1 + 8));
  lVar6 = param_1 + 0xd8;
  FUN_01304af8(lVar6);
  lVar17 = local_300;
  *(long *)(param_1 + 0xd8) = local_300;
  plVar8 = (long *)(local_300 + 0x1d0);
  lVar7 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303298;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303298;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303298:
  lVar12 = *plVar10;
  lVar7 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar7 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar7 == lVar12) goto LAB_01304864;
  FUN_00da3100(lVar17);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x350) = 2;
  local_300 = 0;
  lVar17 = FUN_0145b26c(&local_d0,*(undefined8 *)(param_1 + 8),&local_300);
  if (lVar17 == 0) goto LAB_01303334;
  lVar7 = *(long *)(lVar17 + 0x30);
  *(ulong *)(lVar17 + 0x1b8) = *(ulong *)(lVar17 + 0x1b8) | 8;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0130481c;
  psVar2 = (short *)(lVar7 + 0x1a);
  do {
    sVar3 = *psVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar5) {
      *psVar2 = sVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 != 0) {
    if (sVar3 != -1) goto LAB_01303334;
LAB_0130483c:
    pcVar11 = "count != 0";
    pcVar13 = "AddReference";
    pcVar14 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar15 = "Reference counter overflows.";
LAB_0130485c:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar11,pcVar13,pcVar14,0x58,pcVar15);
  }
  uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
  *(undefined8 *)(lVar7 + 8) = uVar9;
  *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
LAB_01303334:
  plVar8 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[6];
    psVar2 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_013046a8;
  }
  *(long *)(param_1 + 0xe8) = lVar17;
  pcVar16 = *(code **)(lVar17 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar17 + 0x390) = 0;
    *(undefined8 *)(lVar17 + 0x398) = 0;
    *(undefined8 *)(lVar17 + 0x380) = 0;
    *(undefined8 *)(lVar17 + 0x388) = 0;
    (*pcVar16)(lVar17 + 0x3a0);
  }
  *(undefined1 **)(lVar17 + 0x3a8) = &LAB_00f38a28;
  *(undefined1 **)(lVar17 + 0x388) = &LAB_02de7a4c;
  *(long *)(lVar17 + 0x3a0) = param_1;
  *(undefined8 *)(lVar17 + 0x3b0) = 0;
  *(undefined1 **)(lVar17 + 0x380) = &LAB_02de7a30;
  *(undefined1 **)(lVar17 + 0x390) = &LAB_02de7a50;
  *(undefined1 **)(lVar17 + 0x398) = &LAB_02de7a64;
  plVar18 = *(long **)(param_1 + 0xe8);
  *(undefined4 *)(plVar18 + 0x6e) = 1;
  plVar8 = plVar18;
  if ((long *)plVar18[0x36] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x36];
  }
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  plVar8 = plVar18;
  if ((long *)plVar18[0x35] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x35];
  }
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0xe8) + 0x350) = 2;
  (**(code **)(**(long **)(param_1 + 0xe8) + 0x68))(*(long **)(param_1 + 0xe8),0);
  lVar17 = param_1 + 0x120;
  lVar7 = param_1 + 0x348;
  FUN_013057c4(param_1,param_1 + 0x1d0,lVar6,lVar17,lVar7,param_1 + 0x40,param_1 + 0x58);
  FUN_013057c4(param_1,param_1 + 0x1d8,lVar6,lVar17,lVar7,param_1 + 0x48,param_1 + 0x59);
  FUN_013057c4(param_1,param_1 + 0x1e0,lVar6,lVar17,lVar7,param_1 + 0x50,param_1 + 0x5a);
  lVar17 = *(long *)(param_1 + 0x1d0);
  plStack_c8 = (undefined8 *)0x0;
  local_c0 = local_c0 & 0xffffffffffffff00;
  plVar8 = (long *)(lVar17 + 0x1d0);
  local_d0 = lVar17;
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303494;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303494;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303494:
  if ((char)local_c0 != '\0') {
    *plStack_c8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plStack_c8 + 1));
  }
  local_c0 = CONCAT71(local_c0._1_7_,1);
  plStack_c8 = plVar8;
  FUN_01304e70(&local_300,&local_d0,param_1 + 0x1d8);
  FUN_01304e70(auStack_88,&local_300,param_1 + 0x1e0);
  if (local_78 != '\0') {
    *local_80 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_80 + 1));
  }
  if (local_2f0 != '\0') {
    *local_2f8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_2f8 + 1));
  }
  if ((char)local_c0 != '\0') {
    *plStack_c8 = 0;
    nn::os::SignalLightEvent((LightEventType *)(plStack_c8 + 1));
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x18,0x10);
  *(undefined8 *)(param_1 + 0x1f0) = uVar9;
  uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x18,0x10);
  *(undefined8 *)(param_1 + 0x1e8) = uVar9;
  uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),0x18,0x10);
  plVar8 = *(long **)(param_1 + 0x1f0);
  lVar6 = *(long *)(param_1 + 0x1d8);
  *(undefined8 *)(param_1 + 0x1f8) = uVar9;
  *plVar8 = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8 = *(long **)(param_1 + 0x1e8);
  lVar6 = *(long *)(param_1 + 0x1d0);
  *plVar8 = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  plVar8 = *(long **)(param_1 + 0x1f8);
  lVar6 = *(long *)(param_1 + 0x1e0);
  *plVar8 = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar6 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      *(undefined8 *)(lVar6 + 8) = uVar9;
      *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8[1] = 0;
  plVar8[2] = 0;
  lVar6 = FUN_01305c24(*(undefined8 *)(param_1 + 8));
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) | 8;
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_013046a8;
  }
  *(long *)(param_1 + 0xf8) = lVar6;
  pcVar16 = *(code **)(lVar6 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar16)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x380) = &LAB_02de864c;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02de8768;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02de876c;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02de8778;
  FUN_01305a80(*(undefined8 *)(param_1 + 0xf8),1);
  *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x350) = 2;
  (**(code **)(**(long **)(param_1 + 0xf8) + 0x68))(*(long **)(param_1 + 0xf8),0);
  local_300 = 0;
  lVar6 = FUN_0145b26c(&local_d0,*(undefined8 *)(param_1 + 8),&local_300);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) | 8;
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8 = *(long **)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_013046a8;
  }
  *(long *)(param_1 + 0xe0) = lVar6;
  pcVar16 = *(code **)(lVar6 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar16)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x380) = &LAB_02de8784;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02de8ab4;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02de8ab8;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02de8ac4;
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x358) = 1;
  plVar18 = *(long **)(param_1 + 0xe0);
  plVar8 = plVar18;
  if ((long *)plVar18[0x36] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x36];
  }
  *(undefined4 *)(plVar18 + 0x6e) = 1;
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  plVar8 = plVar18;
  if ((long *)plVar18[0x35] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x35];
  }
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0xe0) + 0x350) = 2;
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x68))(*(long **)(param_1 + 0xe0),0);
  local_300 = 0;
  lVar6 = FUN_0145b26c(&local_d0,*(undefined8 *)(param_1 + 8),&local_300);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) | 8;
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_013046a8;
  }
  *(long *)(param_1 + 0x100) = lVar6;
  pcVar16 = *(code **)(lVar6 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar16)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x380) = &LAB_00f7a170;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02de8ad0;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02de8ad4;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02de8ae0;
  plVar18 = *(long **)(param_1 + 0x100);
  *(undefined4 *)(plVar18 + 0x6e) = 1;
  plVar8 = plVar18;
  if ((long *)plVar18[0x36] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x36];
  }
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  plVar8 = plVar18;
  if ((long *)plVar18[0x35] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x35];
  }
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x350) = 2;
  lVar17 = *(long *)(param_1 + 0x100);
  plVar8 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303954;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303954;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303954:
  lVar12 = *plVar10;
  lVar6 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar6 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar6 == lVar12) goto LAB_01304864;
  FUN_00da3100(lVar17);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  (**(code **)(**(long **)(param_1 + 0x100) + 0x68))(*(long **)(param_1 + 0x100),0);
  local_300 = 0;
  lVar6 = FUN_0145b26c(&local_d0,*(undefined8 *)(param_1 + 8),&local_300);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) | 8;
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar8 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (plVar8 != (long *)0x0) {
    lVar17 = plVar8[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_013046a8;
  }
  *(long *)(param_1 + 0x108) = lVar6;
  pcVar16 = *(code **)(lVar6 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar16)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x3a8) = &LAB_02de25c0;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined8 *)(lVar6 + 0x3b0) = 0;
  *(undefined1 **)(lVar6 + 0x380) = &LAB_02de7a30;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02de7a4c;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02de7a50;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02de7a64;
  *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x358) = 1;
  plVar18 = *(long **)(param_1 + 0x108);
  plVar8 = plVar18;
  if ((long *)plVar18[0x36] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x36];
  }
  *(undefined4 *)(plVar18 + 0x6e) = 1;
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  plVar8 = plVar18;
  if ((long *)plVar18[0x35] != (long *)0x0) {
    plVar8 = (long *)plVar18[0x35];
  }
  if (plVar8 != plVar18) {
    (**(code **)(*plVar8 + 0x88))(plVar8,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x350) = 0;
  lVar17 = *(long *)(param_1 + 0x108);
  plVar8 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303ab4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar8 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar5) {
            *plVar8 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303ab4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar5) {
      *plVar8 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303ab4:
  lVar12 = *plVar10;
  lVar6 = lVar12;
  if (*(long *)(lVar12 + 0x1a8) != 0) {
    lVar6 = *(long *)(lVar12 + 0x1a8);
  }
  if (*(long *)(lVar12 + 0x1b0) != 0) {
    lVar12 = *(long *)(lVar12 + 0x1b0);
  }
  if (lVar6 == lVar12) {
LAB_01304864:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("input != output","InsertDependencyToTarget",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\engine/mt/sync_object.h"
               ,700);
  }
  FUN_00da3100(lVar17);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  (**(code **)(**(long **)(param_1 + 0x108) + 0x68))(*(long **)(param_1 + 0x108),0);
  local_300 = 0;
  lVar6 = FUN_0145b26c(&local_d0,*(undefined8 *)(param_1 + 8),&local_300);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) | 8;
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_0130481c;
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar10 = *(long **)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = 0;
  if (plVar10 != (long *)0x0) {
    lVar17 = plVar10[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_013046a8;
  }
  *(long *)(param_1 + 0x118) = lVar6;
  pcVar16 = *(code **)(lVar6 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar16)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x3a8) = &LAB_028c0674;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined8 *)(lVar6 + 0x3b0) = 0;
  *(undefined1 **)(lVar6 + 0x380) = &LAB_02de7a30;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02de7a4c;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02de7a50;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02de7a64;
  plVar8 = *(long **)(param_1 + 0x118);
  *(undefined4 *)(plVar8 + 0x6e) = 1;
  plVar10 = plVar8;
  if ((long *)plVar8[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar8[0x36];
  }
  if (plVar10 != plVar8) {
    (**(code **)(*plVar10 + 0x88))(plVar10,1);
  }
  plVar10 = plVar8;
  if ((long *)plVar8[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar8[0x35];
  }
  if (plVar10 != plVar8) {
    (**(code **)(*plVar10 + 0x88))(plVar10,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x118) + 0x350) = 0;
  (**(code **)(**(long **)(param_1 + 0x118) + 0x68))(*(long **)(param_1 + 0x118),0);
  local_300 = 0;
  lVar6 = FUN_0145b26c(&local_d0,*(undefined8 *)(param_1 + 8),&local_300);
  if (lVar6 != 0) {
    lVar17 = *(long *)(lVar6 + 0x30);
    *(ulong *)(lVar6 + 0x1b8) = *(ulong *)(lVar6 + 0x1b8) | 8;
    if (*(long *)(lVar17 + 0x10) == 0) {
LAB_0130481c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar9;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_0130483c;
  }
  plVar10 = *(long **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar10 != (long *)0x0) {
    lVar17 = plVar10[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_013046a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(long *)(param_1 + 0x110) = lVar6;
  pcVar16 = *(code **)(lVar6 + 0x388);
  if (pcVar16 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x390) = 0;
    *(undefined8 *)(lVar6 + 0x398) = 0;
    *(undefined8 *)(lVar6 + 0x380) = 0;
    *(undefined8 *)(lVar6 + 0x388) = 0;
    (*pcVar16)(lVar6 + 0x3a0);
  }
  *(undefined1 **)(lVar6 + 0x3a8) = &LAB_00ee8000;
  *(long *)(lVar6 + 0x3a0) = param_1;
  *(undefined8 *)(lVar6 + 0x3b0) = 0;
  *(undefined1 **)(lVar6 + 0x380) = &LAB_02de7a30;
  *(undefined1 **)(lVar6 + 0x388) = &LAB_02de7a4c;
  *(undefined1 **)(lVar6 + 0x390) = &LAB_02de7a50;
  *(undefined1 **)(lVar6 + 0x398) = &LAB_02de7a64;
  plVar8 = *(long **)(param_1 + 0x110);
  *(undefined4 *)(plVar8 + 0x6e) = 1;
  plVar10 = plVar8;
  if ((long *)plVar8[0x36] != (long *)0x0) {
    plVar10 = (long *)plVar8[0x36];
  }
  if (plVar10 != plVar8) {
    (**(code **)(*plVar10 + 0x88))(plVar10,1);
  }
  plVar10 = plVar8;
  if ((long *)plVar8[0x35] != (long *)0x0) {
    plVar10 = (long *)plVar8[0x35];
  }
  if (plVar10 != plVar8) {
    (**(code **)(*plVar10 + 0x88))(plVar10,1);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x110) + 0x350) = 2;
  (**(code **)(**(long **)(param_1 + 0x110) + 0x68))(*(long **)(param_1 + 0x110),0);
  lVar17 = *(long *)(param_1 + 0xe0);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303d24;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303d24;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303d24:
  FUN_00e220f4(lVar17,0,*(undefined8 *)(param_1 + 0xe8));
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0xe8);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303d64;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303d64;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303d64:
  FUN_00e220f4(lVar17,0,*(undefined8 *)(param_1 + 0xf8));
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0xf8);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303da4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303da4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303da4:
  FUN_00e220f4(lVar17,0,*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0x100);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303de4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303de4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303de4:
  FUN_00e220f4(lVar17,0,*(undefined8 *)(param_1 + 0xd8));
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0x100);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303e24;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303e24;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303e24:
  FUN_00e220f4(lVar17,0,*(undefined8 *)(param_1 + 0x108));
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0x108);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303e64;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303e64;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303e64:
  FUN_00e220f4(lVar17,*(undefined8 *)(param_1 + 0xd8),0);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0x118);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303ea4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303ea4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303ea4:
  FUN_00e220f4(lVar17,*(undefined8 *)(param_1 + 0xd0),0);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  lVar17 = *(long *)(param_1 + 0x110);
  plVar10 = (long *)(lVar17 + 0x1d0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar10 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_01303ee4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar17 + 0x1d8));
        while (*plVar10 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_01303ee4;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar5) {
      *plVar10 = lVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_01303ee4:
  FUN_00e220f4(lVar17,*(undefined8 *)(param_1 + 0x118),0);
  *(undefined8 *)(lVar17 + 0x1d0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar17 + 0x1d8));
  FUN_01305470(lVar7);
  FUN_00d76af4(param_1 + 0x380,0xbb9);
  plVar10 = DAT_0485a0f0;
  plStack_c8 = DAT_03cab628;
  local_d0 = DAT_03cab620;
  uStack_b8 = _UNK_03cabe68;
  local_c0 = _DAT_03cabe60;
  uStack_a8 = _UNK_03caa5b8;
  local_b0 = _DAT_03caa5b0;
  uStack_98 = _UNK_03cabe58;
  uStack_a0 = _DAT_03cabe50;
  if (DAT_0485a0f0 != (long *)0x0) {
    plVar8 = DAT_0485a0f0 + 5;
    do {
      lVar6 = *plVar8;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = (int)lVar6 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar6 == -1) goto LAB_013047f4;
  }
  FUN_01305014(param_1 + 0x200,(plVar10[7] - plVar10[6] >> 4) * -0x5555555555555555);
  FUN_01305250(ZEXT816(0),ZEXT816(0x3f860a92),ZEXT816(0x3dcccccd),0x447a0000,&local_300,&local_d0);
  FUN_01304b78(param_1 + 0x200,(plVar10[7] - plVar10[6] >> 4) * -0x5555555555555555,&local_300);
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10 + 5;
    do {
      lVar6 = *plVar8;
      iVar21 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *(int *)plVar8 = iVar21;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar21 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    else if ((int)lVar6 == 0) {
LAB_013043d8:
      pcVar11 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar13 = "DecrementReferenceInternal";
      pcVar14 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
      ;
      pcVar15 = "Reference counter underflows.";
      goto LAB_0130485c;
    }
  }
  return;
}


