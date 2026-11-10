/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018bf378; name: FUN_018bf378
 */


bool FUN_018bf378(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  long *plVar1;
  int *piVar2;
  short *psVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  code *pcVar14;
  uint *puVar15;
  short sVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  undefined1 auVar22 [12];
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  long local_140;
  long *local_138;
  undefined8 *local_130;
  float fStack_128;
  float local_114;
  long *local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  int local_d4;
  uint *local_d0;
  uint *local_c8;
  long local_c0;
  long *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  long local_80 [2];
  
  plVar11 = (long *)(param_1 + 0xa0);
  lVar9 = nn::os::GetCurrentThread();
LAB_018bf3b8:
  if (*plVar11 == 0) goto code_r0x018bf3c0;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa8));
        while (*plVar11 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar7) {
            *plVar11 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_018bf3c8;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar7) {
      *plVar11 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_018bf3c8:
  if (*(long *)(param_1 + 0x1b8) != *(long *)(param_1 + 0x1b0)) {
    bVar7 = false;
    goto LAB_018bf3d8;
  }
  FUN_00d0a71c((long *)(param_1 + 0x88),param_2);
  *(undefined8 *)(param_1 + 0x1e8) = *param_3;
  *(undefined1 *)(param_1 + 0x170) = *(undefined1 *)((long)param_4 + 0x12);
  *(undefined4 *)(param_1 + 0x16c) = *param_4;
  *(undefined4 *)(param_1 + 0x98) = param_4[5];
  *(undefined4 *)(param_1 + 0x168) = 0;
  FUN_0190498c(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0x1b0));
  FUN_016acf3c(param_1 + 0x178,*(undefined8 *)(param_1 + 0x180));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(long *)(param_1 + 0x178) = param_1 + 0x180;
  *(undefined8 *)(param_1 + 0x180) = 0;
  local_88 = 0;
  local_98 = 0xf4b17a579f18960;
  uStack_90 = 0x82a2b175229d6a5b;
  FUN_00d1af18(&local_98);
  uVar17 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  plStack_b8 = *(long **)(param_1 + 8);
  local_d0 = (uint *)0x0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_b0 = 0x3fffffffffffffff;
  uStack_a8 = 0;
  local_a0 = 0;
  FUN_018c05b4(&local_d0,(long)(uVar17 * 0x10000000) >> 0x20);
  iVar21 = (int)(uVar17 >> 4);
  if (iVar21 < 1) goto LAB_018bf684;
  iVar4 = param_4[1];
  fVar25 = 3.4028235e+38;
  if (9 < iVar4) {
    fVar25 = 0.0;
  }
  iVar18 = 0;
LAB_018bf548:
  uVar20 = 0;
  local_d4 = 0;
  local_114 = fVar25;
LAB_018bf554:
  lVar19 = uVar20 * 0x10;
  lVar9 = *(long *)(*(long *)(param_1 + 0x40) + lVar19);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar3 = (short *)(lVar9 + 0x1a);
    sVar16 = *(short *)(lVar9 + 0x1a);
    do {
      sVar5 = *psVar3;
      if (sVar5 == sVar16) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar16 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 != '\0') goto LAB_018bf740;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_018bf740:
        bVar7 = false;
      }
      if (bVar7) {
        if (*(long *)(lVar9 + 0x10) != 0) {
          plVar11 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
          if (*(char *)((long)param_4 + 0x11) != '\0') goto LAB_018bf76c;
          local_100 = (long *)0x0;
          uStack_f8 = 0;
          lVar9 = *(long *)(param_1 + 0x78);
          if ((lVar9 == 0) ||
             (local_130 = *(undefined8 **)(lVar9 + 8), local_130 == (undefined8 *)0x0))
          goto LAB_018bfa34;
          if (((*PTR_DAT_047d6520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
            uVar10 = FUN_0151c130();
            *(undefined8 *)PTR_DAT_047d6528 = uVar10;
            __cxa_guard_release(PTR_DAT_047d6520);
          }
          goto LAB_018bf978;
        }
        break;
      }
      sVar16 = sVar5;
    } while (sVar5 != 0);
  }
  goto LAB_018bf564;
code_r0x018bf3c0:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar7) {
    *plVar11 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_018bf3c8;
  goto LAB_018bf3b8;
  while (local_130 = (undefined8 *)*local_130, local_130 != (undefined8 *)0x0) {
LAB_018bf978:
    if (local_130 == (undefined8 *)PTR_DAT_047d6528) {
      FUN_00d7c390(&local_100,(long *)(param_1 + 0x78));
      break;
    }
  }
LAB_018bfa34:
  plVar1 = local_100;
  if (local_100 == (long *)0x0) {
    local_138 = (long *)0x0;
  }
  else {
    local_138 = (long *)*local_100;
  }
  plVar13 = *(long **)(*(long *)(param_1 + 0x40) + lVar19);
  if (plVar13 == (long *)0x0) {
    local_140 = 0;
  }
  else {
    local_140 = *plVar13;
  }
  if (local_100 != (long *)0x0) {
    plVar13 = local_100 + 3;
    do {
      sVar16 = (short)*plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(short *)plVar13 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_80[0] = *plVar1;
        FUN_00c44438(lVar9 + 0x8040,local_80);
      }
    }
    else if (sVar16 == 0) goto LAB_018bfd30;
  }
  if (local_138 == (long *)local_140) goto LAB_018bf824;
LAB_018bf76c:
  if (iVar4 == 3) {
    lVar9 = *(long *)(param_1 + 0x88);
    fStack_128 = 0.0;
    local_130 = (undefined8 *)0x0;
    if (lVar9 != 0) {
      fStack_128 = 0.0;
      local_130 = (undefined8 *)0x0;
      if (*(short *)(lVar9 + 0x1a) != 0) {
        psVar3 = (short *)(lVar9 + 0x1a);
        sVar16 = *(short *)(lVar9 + 0x1a);
        do {
          sVar5 = *psVar3;
          if (sVar5 == sVar16) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
            if (bVar7) {
              *psVar3 = sVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 != '\0') goto LAB_018bfb94;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_018bfb94:
            bVar7 = false;
          }
          if (bVar7) {
            fStack_128 = 0.0;
            local_130 = (undefined8 *)0x0;
            if (*(long *)(lVar9 + 0x10) == 0) goto LAB_018bf78c;
            local_138 = (long *)(*(long *)(lVar9 + 0x10) + -0x28);
            lVar9 = (**(code **)(*local_138 + 0x68))(local_138);
            fStack_128 = (float)*(undefined8 *)(lVar9 + 0x38);
            local_130 = *(undefined8 **)(lVar9 + 0x30);
            pcVar14 = *(code **)(*local_138 + 0x60);
            goto LAB_018bfbe8;
          }
          sVar16 = sVar5;
        } while (sVar5 != 0);
LAB_018bfa8c:
        auVar22 = SUB1612(ZEXT816(0),0);
LAB_018bf8ac:
        fStack_128 = auVar22._8_4_;
        local_130 = auVar22._0_8_;
      }
    }
  }
  else if (iVar4 < 2) {
    if (iVar4 == 0) {
LAB_018bf8d4:
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x40) + lVar19);
      if (puVar12 == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *puVar12;
      }
      FUN_01e1ba8c(&local_100,param_1,uVar10);
      auVar22 = SUB1612(ZEXT816(0),0);
      bVar7 = false;
      iVar8 = 1;
      if (*(char *)(param_1 + 0xc0) == '\0') {
LAB_018bf924:
        fStack_128 = auVar22._8_4_;
        local_130 = auVar22._0_8_;
      }
      else {
        fStack_128 = 0.0;
        local_130 = (undefined8 *)0x0;
        if ((char)local_100 != '\0') {
          bVar7 = true;
          iVar8 = 8;
          auVar22._0_4_ = *(float *)(param_1 + 0xd0) + local_f0;
          auVar22._4_4_ = *(float *)(param_1 + 0xd4) + fStack_ec;
          auVar22._8_4_ = *(float *)(param_1 + 0xd8) + (float)uStack_e8;
          goto LAB_018bf924;
        }
      }
      if ((char)local_100 != '\0') {
        local_100 = (long *)((ulong)local_100 & 0xffffffffffffff00);
      }
      if (!bVar7) {
        (**(code **)(*plVar11 + 0x60))();
        goto LAB_018bf688;
      }
    }
    else {
      fStack_128 = 0.0;
      local_130 = (undefined8 *)0x0;
      if (iVar4 == 1) {
        if (*(char *)(param_1 + 0xc0) == '\0') goto LAB_018bfa10;
        auVar22 = SUB1612(*(undefined1 (*) [16])(param_1 + 0xd0),0);
        goto LAB_018bf8ac;
      }
    }
  }
  else if (iVar4 == 2) {
    if ((*(long *)(param_1 + 0x78) == 0) || (*(short *)(*(long *)(param_1 + 0x78) + 0x1a) == 0)) {
LAB_018bfa10:
      (**(code **)(*plVar11 + 0x60))();
      iVar8 = 1;
      goto LAB_018bf688;
    }
    local_100 = (long *)0x0;
    uStack_f8 = 0;
    lVar9 = *(long *)(param_1 + 0x78);
    if ((lVar9 != 0) && (puVar12 = *(undefined8 **)(lVar9 + 8), puVar12 != (undefined8 *)0x0)) {
      if (((*PTR_DAT_047d6520 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
        uVar10 = FUN_0151c130();
        *(undefined8 *)PTR_DAT_047d6528 = uVar10;
        __cxa_guard_release(PTR_DAT_047d6520);
      }
      do {
        if (puVar12 == (undefined8 *)PTR_DAT_047d6528) {
          FUN_00d7c390(&local_100,(long *)(param_1 + 0x78));
          break;
        }
        puVar12 = (undefined8 *)*puVar12;
      } while (puVar12 != (undefined8 *)0x0);
    }
    plVar1 = local_100;
    if (local_100 == (long *)0x0) goto LAB_018bfa8c;
    if (*(short *)((long)local_100 + 0x1a) != 0) {
      psVar3 = (short *)((long)local_100 + 0x1a);
      sVar16 = *(short *)((long)local_100 + 0x1a);
      do {
        sVar5 = *psVar3;
        if (sVar5 == sVar16) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_018bfc64;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_018bfc64:
          bVar7 = false;
        }
        if (bVar7) {
          local_138 = (long *)0x0;
          if (local_100[2] != 0) {
            local_138 = (long *)(local_100[2] + -0x28);
          }
          goto LAB_018bfc90;
        }
        sVar16 = sVar5;
      } while (sVar5 != 0);
    }
    local_138 = (long *)0x0;
LAB_018bfc90:
    plVar13 = local_100 + 3;
    do {
      sVar16 = (short)*plVar13;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar7) {
        *(short *)plVar13 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_80[0] = *plVar1;
        FUN_00c44438(lVar9 + 0x8040,local_80);
      }
    }
    else if (sVar16 == 0) goto LAB_018bfd30;
    fStack_128 = 0.0;
    local_130 = (undefined8 *)0x0;
    if (local_138 != (long *)0x0) {
      lVar9 = (**(code **)(*local_138 + 0x68))(local_138);
      local_130 = *(undefined8 **)(lVar9 + 0x30);
      lVar19 = local_138[6];
      psVar3 = (short *)(lVar19 + 0x1a);
      fStack_128 = (float)*(undefined8 *)(lVar9 + 0x38);
      do {
        sVar16 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar16 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar16 == 1) {
        *(undefined8 *)(lVar19 + 0x10) = 0;
        pcVar14 = *(code **)(*local_138 + 0x50);
LAB_018bfbe8:
        (*pcVar14)(local_138);
      }
      else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  else {
    fStack_128 = 0.0;
    local_130 = (undefined8 *)0x0;
    if (iVar4 == 0xb) goto LAB_018bf8d4;
  }
LAB_018bf78c:
  lVar9 = (**(code **)(*plVar11 + 0x68))();
  auVar23 = *(undefined1 (*) [16])(lVar9 + 0x30);
  puVar15 = local_d0;
  if ((local_d0 != local_c8) && (uVar20 != *local_d0)) {
    do {
      puVar15 = puVar15 + 1;
      if (local_c8 == puVar15) {
        puVar15 = local_c8;
        break;
      }
    } while (uVar20 != *puVar15);
  }
  if (local_c8 == puVar15) {
    fVar26 = SUB84(local_130,0) - auVar23._0_4_;
    fVar24 = (float)((ulong)local_130 >> 0x20) - auVar23._4_4_;
    fStack_128 = fStack_128 - auVar23._8_4_;
    fVar26 = fVar26 * fVar26;
    fVar24 = fVar24 * fVar24;
    fStack_128 = fStack_128 * fStack_128;
    auVar23._0_4_ = fVar26 + fVar24;
    auVar23._4_4_ = fStack_128 + 0.0;
    auVar23._8_4_ = fVar26 + fVar24;
    auVar23._12_4_ = fStack_128 + 0.0;
    auVar23 = NEON_ext(auVar23,auVar23,4,1);
    fVar26 = auVar23._0_4_ + auVar23._4_4_;
    if (iVar4 < 10) {
      if (local_114 < fVar26) goto LAB_018bf824;
    }
    else if (fVar26 < local_114) goto LAB_018bf824;
    local_d4 = (int)uVar20;
    local_114 = fVar26;
  }
LAB_018bf824:
  (**(code **)(*plVar11 + 0x60))();
LAB_018bf564:
  uVar20 = uVar20 + 1;
  if (uVar20 == (uVar17 >> 4 & 0xffffffff)) goto code_r0x018bf570;
  goto LAB_018bf554;
code_r0x018bf570:
  FUN_018bfe3c(&local_d0,&local_d4);
  fVar26 = 0.0;
  if (*(char *)(param_4 + 4) != '\0') {
    uVar20 = uStack_90 + local_98;
    uStack_90 = uStack_90 ^ local_98;
    local_98 = uStack_90 ^ (local_98 >> 0x28 | local_98 << 0x18) ^ uStack_90 << 0x10;
    uStack_90 = uStack_90 >> 0x1b | uStack_90 << 0x25;
    fVar26 = (float)param_4[2] +
             ((float)param_4[3] - (float)param_4[2]) * (float)uVar20 * 5.421011e-20 + 0.0;
  }
  local_100 = (long *)0x0;
  uStack_f8 = 0;
  FUN_00d0a71c(&local_100,*(long *)(param_1 + 0x40) + (long)local_d4 * 0x10);
  local_f0 = fVar26;
  FUN_018bfe50(param_1 + 0x1b0,&local_100);
  plVar11 = local_100;
  if (local_100 != (long *)0x0) {
    plVar1 = local_100 + 3;
    do {
      sVar16 = (short)*plVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(short *)plVar1 = sVar16 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_100 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_80[0] = *plVar11;
        FUN_00c44438(lVar9 + 0x8040,local_80);
      }
    }
    else if (sVar16 == 0) {
LAB_018bfd30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  iVar18 = iVar18 + 1;
  if (iVar18 == iVar21) {
LAB_018bf684:
    iVar8 = 0;
LAB_018bf688:
    plVar11 = plStack_b8;
    puVar15 = local_d0;
    if (local_d0 != (uint *)0x0) {
      local_c8 = local_d0;
      lVar9 = local_c0 - (long)local_d0;
      uVar17 = (**(code **)(*plStack_b8 + 0xf8))(plStack_b8);
      if (((uVar17 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar15,lVar9,4);
      }
      else {
        FUN_00c48fe8(plVar11,puVar15,lVar9,4);
      }
    }
    bVar7 = iVar8 == 0;
LAB_018bf3d8:
    *(undefined8 *)(param_1 + 0xa0) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa8));
    return bVar7;
  }
  goto LAB_018bf548;
}


