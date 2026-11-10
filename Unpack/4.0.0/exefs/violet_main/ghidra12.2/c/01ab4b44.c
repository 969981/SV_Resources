/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab4b44; name: FUN_01ab4b44
 */


void FUN_01ab4b44(long param_1)

{
  short *psVar1;
  long **pplVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  char local_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_48;
  
  local_a8 = 0x452d8fca04bfb23b;
  pcStack_a0 = "SetObjectName";
  local_98 = 0xd;
  local_90 = (long *)0x0;
  FUN_01315eac(&local_88,param_1,&local_a8);
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  bVar6 = local_88 != '\0';
  puVar11 = (undefined8 *)PTR_DAT_047d3e30;
  if (bVar6) {
    puVar11 = &uStack_80;
  }
  uVar16 = *puVar11;
  puVar11 = (undefined8 *)(PTR_DAT_047d3e30 + 8);
  if (bVar6) {
    puVar11 = &uStack_78;
  }
  uVar17 = *puVar11;
  puVar11 = (undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  if (bVar6) {
    puVar11 = &uStack_70;
  }
  uVar18 = *puVar11;
  pplVar2 = (long **)(PTR_DAT_047d3e30 + 0x18);
  if (bVar6) {
    pplVar2 = &local_68;
  }
  plVar15 = *pplVar2;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (local_88 != '\0') {
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    local_88 = '\0';
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  local_c8 = uVar16;
  uStack_c0 = uVar17;
  local_b8 = uVar18;
  local_b0 = plVar15;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  FUN_0140f318(&local_88,param_1,&local_c8);
  if (local_b0 != (long *)0x0) {
    (**(code **)(*local_b0 + 0x20))();
  }
  lVar13 = CONCAT71(uStack_87,local_88);
  if (lVar13 == 0) goto LAB_01ab4c64;
  if (*(short *)(lVar13 + 0x1a) != 0) {
    psVar1 = (short *)(lVar13 + 0x1a);
    sVar14 = *(short *)(lVar13 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar14) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01ab4d3c;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ab4d3c:
        bVar6 = false;
      }
      if (bVar6) {
        lVar12 = *(long *)(lVar13 + 0x10);
        if (lVar12 == 0) goto LAB_01ab4dc0;
        local_e8 = 0xf341fd2d945ae2c7;
        pcStack_e0 = "playables.Player";
        local_d8 = 0x10;
        local_d0 = (long *)0x0;
        FUN_0140f318(&local_a8,param_1,&local_e8);
        if (local_d0 != (long *)0x0) {
          (**(code **)(*local_d0 + 0x20))();
        }
        if (local_a8 == 0) goto LAB_01ab4da8;
        if (*(short *)(local_a8 + 0x1a) == 0) goto LAB_01ab4f9c;
        psVar1 = (short *)(local_a8 + 0x1a);
        sVar14 = *(short *)(local_a8 + 0x1a);
        goto LAB_01ab4e30;
      }
      sVar14 = sVar3;
    } while (sVar3 != 0);
    goto LAB_01ab4dbc;
  }
  goto LAB_01ab4dc0;
LAB_01ab5040:
  if (*plVar10 == 0) goto code_r0x01ab5048;
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
  bVar6 = false;
  do {
    if (*plVar10 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0xf0));
        while (*plVar10 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar6) {
            *plVar10 = lVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
          bVar6 = false;
          if (cVar5 == '\0') goto LAB_01ab4e94;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *plVar10 = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01ab4e94:
  plVar10 = (long *)FUN_02133680(*(undefined8 *)(lVar12 + 0x100),*(undefined8 *)(lVar12 + 0x108));
  if ((*(long **)(lVar12 + 0x108) == plVar10) || (*plVar10 == 0)) {
    plVar10 = (long *)FUN_02133680(*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140));
    if (*(long **)(lVar12 + 0x140) == plVar10) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      if (*plVar10 != 0) {
        lVar9 = *plVar10 + -0x20;
      }
    }
  }
  else {
    lVar9 = *plVar10 + -0x20;
  }
  if (!bVar6) {
    *(undefined8 *)(lVar12 + 0xe8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0xf0));
  }
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar13 + 0xe8);
    lVar20 = *plVar10;
    lVar19 = nn::os::GetCurrentThread();
    if (lVar19 != lVar20) {
      lVar19 = nn::os::GetCurrentThread();
      bVar6 = false;
LAB_01ab5060:
      if (*plVar10 == 0) goto code_r0x01ab5068;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
      bVar6 = false;
      do {
        if (*plVar10 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xf0));
            while (*plVar10 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar6) {
                *plVar10 = lVar19;
                cVar5 = ExclusiveMonitorsStatus();
              }
              bVar6 = false;
              if (cVar5 == '\0') goto LAB_01ab4ef0;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar19;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01ab4ef0;
    }
    bVar6 = true;
LAB_01ab4ef0:
    plVar10 = (long *)FUN_02133680(*(undefined8 *)(lVar13 + 0x100),*(undefined8 *)(lVar13 + 0x108));
    if ((*(long **)(lVar13 + 0x108) == plVar10) || (*plVar10 == 0)) {
      plVar10 = (long *)FUN_02133680(*(undefined8 *)(lVar13 + 0x138),*(undefined8 *)(lVar13 + 0x140)
                                    );
      if (*(long **)(lVar13 + 0x140) == plVar10) {
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        if (*plVar10 != 0) {
          lVar19 = *plVar10 + -0x20;
        }
      }
    }
    else {
      lVar19 = *plVar10 + -0x20;
    }
    if (!bVar6) {
      *(undefined8 *)(lVar13 + 0xe8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xf0));
    }
    if (lVar19 != 0) {
      iVar7 = FUN_02133794(lVar19);
      iVar8 = FUN_02133794(lVar9);
      if (iVar7 == iVar8) {
        local_48 = 0x87adb5d305b2412e;
        puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_48);
        *(undefined4 *)(puVar11 + 2) = 2;
      }
      else {
        FUN_0194490c(lVar9,iVar7);
        local_48 = 0x87adb5d305b2412e;
        puVar11 = (undefined8 *)FUN_01235878(param_1 + 0x158,&local_48);
        *(undefined4 *)(puVar11 + 2) = 0;
      }
      *puVar11 = PTR_LAB_047dce18;
    }
  }
  (**(code **)(*(long *)(lVar13 + -0x28) + 0x60))((long *)(lVar13 + -0x28));
  goto LAB_01ab4f98;
code_r0x01ab5048:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar4) {
    *plVar10 = lVar9;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01ab4e94;
  goto LAB_01ab5040;
code_r0x01ab5068:
  cVar5 = '\x01';
  bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
  if (bVar4) {
    *plVar10 = lVar19;
    cVar5 = ExclusiveMonitorsStatus();
  }
  if (cVar5 == '\0') goto LAB_01ab4ef0;
  goto LAB_01ab5060;
  while (sVar14 = sVar3, sVar3 != 0) {
LAB_01ab4e30:
    sVar3 = *psVar1;
    if (sVar3 == sVar14) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01ab4e54;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01ab4e54:
      bVar6 = false;
    }
    if (bVar6) {
      lVar13 = *(long *)(local_a8 + 0x10);
      if (lVar13 == 0) goto LAB_01ab4f9c;
      plVar10 = (long *)(lVar12 + 0xe8);
      lVar19 = *plVar10;
      lVar9 = nn::os::GetCurrentThread();
      if (lVar9 != lVar19) {
        lVar9 = nn::os::GetCurrentThread();
        bVar6 = false;
        goto LAB_01ab5040;
      }
      bVar6 = true;
      goto LAB_01ab4e94;
    }
  }
LAB_01ab4f98:
  if (local_a8 != 0) {
LAB_01ab4f9c:
    psVar1 = (short *)(local_a8 + 0x18);
    do {
      sVar14 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar14 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar14 == 1) {
      FUN_0116e168();
    }
    else if (sVar14 == 0) goto LAB_01ab4de0;
  }
LAB_01ab4da8:
  (**(code **)(*(long *)(lVar12 + -0x28) + 0x60))((long *)(lVar12 + -0x28));
  lVar13 = CONCAT71(uStack_87,local_88);
LAB_01ab4dbc:
  if (lVar13 == 0) goto LAB_01ab4c64;
LAB_01ab4dc0:
  psVar1 = (short *)(lVar13 + 0x18);
  do {
    sVar14 = *psVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar14 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (sVar14 == 1) {
    FUN_0116e168();
  }
  else if (sVar14 == 0) {
LAB_01ab4de0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  }
LAB_01ab4c64:
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  return;
}


