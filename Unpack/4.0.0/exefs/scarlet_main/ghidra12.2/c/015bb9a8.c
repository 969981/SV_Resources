/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bb9a8; name: FUN_015bb9a8
 */


void FUN_015bb9a8(long param_1,undefined2 *param_2,long *param_3,uint param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  undefined8 *puVar5;
  char cVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  bool bVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  code *local_330;
  code *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  long lStack_310;
  long local_308;
  undefined8 uStack_300;
  long local_2f8;
  undefined8 uStack_2f0;
  long local_2e8;
  undefined8 uStack_2e0;
  long local_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  uint local_2b8;
  undefined4 uStack_2b4;
  undefined1 local_2b0;
  long *local_2a0;
  undefined8 auStack_298 [2];
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [8];
  undefined8 local_228;
  undefined1 local_220;
  undefined1 local_218;
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [168];
  undefined1 auStack_158 [128];
  long *local_d8;
  long *local_d0;
  undefined8 *local_c8 [2];
  undefined8 *local_b8 [2];
  undefined8 *local_a8 [2];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 *local_88 [2];
  long local_78;
  undefined8 local_70 [2];
  
  if (*param_3 == 0) {
    return;
  }
  local_78 = *(long *)(*param_3 + 0x10);
  if (local_78 == 0) {
    return;
  }
  local_78 = local_78 + -0x28;
  local_2a0 = &local_78;
  FUN_015be3cc(local_88,&local_2a0);
  lVar12 = local_78;
  plVar10 = (long *)(local_78 + 0x110);
  lVar15 = *plVar10;
  lVar9 = nn::os::GetCurrentThread();
  if (lVar9 != lVar15) {
    lVar9 = nn::os::GetCurrentThread();
LAB_015bba24:
    if (*plVar10 == 0) goto code_r0x015bba2c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
    do {
      if (*plVar10 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x118));
          while (*plVar10 == 0) {
            cVar6 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar13) {
              *plVar10 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_015bba34;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar13) {
        *plVar10 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_015bba34:
    bVar13 = false;
    goto LAB_015bba38;
  }
  bVar13 = true;
LAB_015bba38:
  plVar10 = (long *)FUN_015bd1d0(lVar12 + 0x128);
  if (plVar10 == (long *)0x0) {
    plVar10 = (long *)FUN_015bd1d0(lVar12 + 0x160);
  }
  if (!bVar13) {
    *(undefined8 *)(lVar12 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x118));
  }
  if (plVar10 == (long *)0x0) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
  }
  else {
    lVar12 = plVar10[0x13];
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 0) {
      uVar16 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar16;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    local_2a0 = (long *)0x0;
    auStack_298[0] = 0;
    FUN_00c43ef0(&local_2a0,plVar10 + 0x13);
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    if ((long *)local_2a0[2] == plVar10 + 5) {
      FUN_00d94688(&local_98,&local_2a0);
    }
    plVar7 = local_2a0;
    if (local_2a0 != (long *)0x0) {
      plVar2 = local_2a0 + 3;
      do {
        sVar4 = (short)*plVar2;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar13) {
          *(short *)plVar2 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_2a0 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar6 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar13) {
            *piVar3 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_330 = (code *)*plVar7;
          FUN_00c44438(lVar12 + 0x8040,&local_330);
        }
      }
      else if (sVar4 == 0) goto LAB_015bbe7c;
    }
    lVar12 = plVar10[0x13];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar4 == 0) goto LAB_015bbd58;
  }
  local_2a0 = &local_78;
  FUN_015be1b4(local_a8,&local_2a0);
  local_2a0 = &local_78;
  FUN_015bddec(local_b8,&local_2a0);
  local_2a0 = &local_78;
  FUN_015be614(local_c8,&local_2a0);
  if ((local_98 == (undefined8 *)0x0) || (*(short *)((long)local_98 + 0x1a) == 0)) {
    local_d0 = (long *)0x0;
  }
  else {
    FUN_018368ac(&local_d0,*(undefined8 *)(param_1 + 8),&local_98);
  }
  if ((local_a8[0] == (undefined8 *)0x0) || (*(short *)((long)local_a8[0] + 0x1a) == 0)) {
    local_d8 = (long *)0x0;
  }
  else {
    FUN_01835abc(&local_d8,*(undefined8 *)(param_1 + 8),param_3);
  }
  uVar16 = *(undefined8 *)(param_1 + 0x38);
  local_2a0 = (long *)((ulong)local_2a0 & 0xffffffffffff0000);
  memset(auStack_298,0,0x74);
  local_228 = CONCAT44(0x904,(undefined4)local_228);
  local_220 = 1;
  local_218 = 0;
  FUN_015bc504(auStack_210,uVar16);
  local_328 = (code *)0x0;
  local_320 = (undefined1 *)0x0;
  local_330 = (code *)CONCAT62(local_330._2_6_,*param_2);
  FUN_00ca1a48(&local_328,param_3);
  local_318 = (undefined1 *)0x0;
  lStack_310 = 0;
  FUN_00c6c994(&local_318,local_88);
  local_308 = 0;
  uStack_300 = 0;
  FUN_00d4ca00(&local_308,&local_98);
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_01277088(&local_2f8,local_a8);
  local_2e8 = 0;
  uStack_2e0 = 0;
  FUN_01084328(&local_2e8,local_b8);
  local_2d8 = 0;
  uStack_2d0 = 0;
  FUN_0112bdf8(&local_2d8,local_c8);
  FUN_01835e4c(auStack_2c8,&local_d0);
  FUN_01835f0c(auStack_2c0,&local_d8);
  uStack_2b4 = 0x904;
  local_2b0 = 1;
  local_2a0 = (long *)CONCAT62(local_2a0._2_6_,local_330._0_2_);
  local_2b8 = param_4;
  FUN_00ca1ea4(auStack_298,&local_328);
  FUN_00cacc64(auStack_288,&local_318);
  FUN_00d48230(auStack_278,&local_308);
  FUN_0127739c(auStack_268,&local_2f8);
  FUN_0108458c(auStack_258,&local_2e8);
  FUN_010f6758(auStack_248,&local_2d8);
  FUN_00dea484(auStack_238,auStack_2c8);
  FUN_00dea51c(auStack_230,auStack_2c0);
  local_228 = CONCAT44(uStack_2b4,local_2b8);
  local_220 = local_2b0;
  FUN_01836250(&local_330);
  local_218 = 0;
  if ((param_4 < 7) && ((1 << (ulong)(param_4 & 0x1f) & 0x46U) != 0)) {
    local_220 = 0;
  }
  if ((local_98 != (undefined8 *)0x0) && (lVar12 = local_98[2], lVar12 != 0)) {
    lStack_310 = lVar12 + -0x28;
    local_330 = FUN_00d5ea14;
    local_328 = FUN_00b1ba8c;
    local_320 = &LAB_00b1ba90;
    local_318 = &LAB_00b1ba9c;
    puVar14 = *(undefined8 **)(lVar12 + 0x150);
    puVar5 = *(undefined8 **)(lVar12 + 0x158);
    pcVar11 = FUN_00b1ba8c;
    if (puVar14 != puVar5) {
      local_70[0] = *puVar14;
      FUN_00d5ea14(&lStack_310,local_70);
      if (puVar14 + 1 != puVar5) {
        local_70[0] = puVar14[1];
        (*local_330)(&lStack_310,local_70);
        if (puVar14 + 2 != puVar5) {
          local_70[0] = puVar14[2];
          (*local_330)(&lStack_310,local_70);
          if (puVar14 + 3 != puVar5) {
            local_70[0] = puVar14[3];
            (*local_330)(&lStack_310,local_70);
            for (puVar14 = puVar14 + 4; puVar14 != puVar5; puVar14 = puVar14 + 1) {
              local_70[0] = *puVar14;
              (*local_330)(&lStack_310,local_70);
            }
          }
        }
      }
      pcVar11 = local_328;
      if (local_328 == (code *)0x0) goto LAB_015bbc84;
    }
    local_320 = (undefined1 *)0x0;
    local_318 = (undefined1 *)0x0;
    local_330 = (code *)0x0;
    local_328 = (code *)0x0;
    (*pcVar11)(&lStack_310);
  }
LAB_015bbc84:
  FUN_015bce24(param_1 + 0x4090,&local_2a0);
  FUN_015bc5f4(auStack_158);
  FUN_015bca58(auStack_200);
  FUN_01836250(&local_2a0);
  if (local_d8 != (long *)0x0) {
    lVar12 = local_d8[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_d8 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_015bbd58;
  }
  if (local_d0 != (long *)0x0) {
    lVar12 = local_d0[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_d0 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_015bbd58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (local_c8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_c8[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_c8[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_2a0 = (long *)*local_c8[0];
        FUN_00c44438(lVar12 + 0x8040,&local_2a0);
      }
    }
    else if (sVar4 == 0) goto LAB_015bbe7c;
  }
  if (local_b8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b8[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_b8[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_2a0 = (long *)*local_b8[0];
        FUN_00c44438(lVar12 + 0x8040,&local_2a0);
      }
    }
    else if (sVar4 == 0) goto LAB_015bbe7c;
  }
  if (local_a8[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_a8[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_a8[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_2a0 = (long *)*local_a8[0];
        FUN_00c44438(lVar12 + 0x8040,&local_2a0);
      }
    }
    else if (sVar4 == 0) goto LAB_015bbe7c;
  }
  puVar14 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_98 + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_98 + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_2a0 = (long *)*puVar14;
        FUN_00c44438(lVar12 + 0x8040,&local_2a0);
      }
    }
    else if (sVar4 == 0) goto LAB_015bbe7c;
  }
  if (local_88[0] != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88[0] + 3);
    do {
      sVar4 = *psVar1;
      cVar6 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar13) {
        *psVar1 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 == 1) {
      piVar3 = (int *)((long)local_88[0] + 0x1c);
      do {
        iVar8 = *piVar3;
        cVar6 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar13) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_2a0 = (long *)*local_88[0];
        FUN_00c44438(lVar12 + 0x8040,&local_2a0);
      }
    }
    else if (sVar4 == 0) {
LAB_015bbe7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x015bba2c:
  cVar6 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar13) {
    *plVar10 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_015bba34;
  goto LAB_015bba24;
}


