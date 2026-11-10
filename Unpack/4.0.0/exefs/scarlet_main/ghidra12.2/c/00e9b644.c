/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9b644; name: FUN_00e9b644
 */


void FUN_00e9b644(undefined8 param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong local_d8;
  long *local_d0;
  undefined1 local_c4 [4];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  long *local_a0;
  undefined1 *puStack_98;
  ulong *local_90;
  
  FUN_00d64f48(&local_d0);
  plVar3 = local_d0;
  if (local_d0 != (long *)0x0) {
    plVar5 = local_d0 + 0x10;
    plVar11 = local_d0 + 0x60;
    lVar9 = nn::os::GetCurrentThread();
LAB_00e9b680:
    if (*plVar11 == 0) goto code_r0x00e9b688;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x61));
    do {
      if (*plVar11 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(plVar3 + 0x61));
          while (*plVar11 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar7) {
              *plVar11 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_00e9b690;
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
LAB_00e9b690:
    plVar11 = (long *)plVar3[0x10];
    plVar4 = (long *)plVar3[0x11];
    plVar10 = plVar11;
    if ((plVar11 != plVar4) && (*plVar11 != -0x3f2e63c9690744f1)) {
      do {
        plVar10 = plVar10 + 0xb;
        if (plVar4 == plVar10) {
          plVar10 = plVar4;
          goto LAB_00e9b6d4;
        }
      } while (*plVar10 != -0x3f2e63c9690744f1);
    }
LAB_00e9b6d4:
    if (plVar4 == plVar10) {
      plVar3[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x61));
      local_d8 = 0;
    }
    else {
      plVar3[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar3 + 0x61));
      local_d8 = (ulong)(uint)((int)((ulong)((long)plVar10 - (long)plVar11) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      local_c4 = (undefined1  [4])0x2;
      if (plVar3[0x37] == 0) {
        local_a0 = (long *)local_c4;
        local_c0 = &LAB_02e657b0;
        local_b8 = FUN_02e657f0;
        local_b0 = &LAB_02e657f4;
        puStack_a8 = &LAB_02e65800;
      }
      else {
        puStack_98 = local_c4;
        local_a0 = plVar3;
        local_90 = &local_d8;
        local_c0 = &LAB_029e901c;
        local_b8 = FUN_02e65784;
        local_b0 = &LAB_02e65788;
        puStack_a8 = &LAB_02e6579c;
      }
      FUN_00c837c0(plVar3,plVar5,&local_d8,&local_c0);
      pcVar8 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar8)(&local_a0);
      }
    }
    lVar9 = plVar3[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar2 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar3 + 0x50))(plVar3);
    }
    else if (sVar2 == 0) goto LAB_00e9ba9c;
  }
  FUN_00d64f48(&local_d0,param_1);
  if (local_d0 == (long *)0x0) {
    return;
  }
  plVar3 = local_d0 + 0x60;
  lVar9 = nn::os::GetCurrentThread();
  while (*plVar3 == 0) {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00e9b830;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_d0 + 0x61));
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_d0 + 0x61));
        while (*plVar3 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar9;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00e9b830;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar9;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00e9b830:
  plVar3 = (long *)local_d0[0x1e];
  plVar5 = (long *)local_d0[0x1f];
  plVar11 = plVar3;
  if ((plVar3 != plVar5) && (*plVar3 != -0x3aa15713c3797e8e)) {
    do {
      plVar11 = plVar11 + 0xb;
      if (plVar5 == plVar11) {
        plVar11 = plVar5;
        goto LAB_00e9b874;
      }
    } while (*plVar11 != -0x3aa15713c3797e8e);
  }
LAB_00e9b874:
  if (plVar5 == plVar11) {
    local_d0[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d0 + 0x61));
    local_d8 = 0;
  }
  else {
    local_d0[0x60] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d0 + 0x61));
    local_d8 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar3) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_c4[0] = 1;
    if (local_d0[0x51] == 0) {
      local_a0 = (long *)local_c4;
      local_c0 = &LAB_02e658c0;
      local_b8 = FUN_02e65908;
      local_b0 = &LAB_02e6590c;
      puStack_a8 = &LAB_02e65918;
    }
    else {
      puStack_98 = local_c4;
      local_a0 = local_d0;
      local_90 = &local_d8;
      local_c0 = &LAB_029e9640;
      local_b8 = FUN_02e65894;
      local_b0 = &LAB_02e65898;
      puStack_a8 = &LAB_02e658ac;
    }
    FUN_00c837c0(local_d0,local_d0 + 0x1e,&local_d8,&local_c0);
    pcVar8 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar8)(&local_a0);
    }
  }
  lVar9 = local_d0[6];
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar2 = *psVar1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar7) {
      *psVar1 = sVar2 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (sVar2 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_d0 + 0x50))(local_d0);
    return;
  }
  if (sVar2 != 0) {
    return;
  }
LAB_00e9ba9c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x00e9b688:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar11,0x10);
  if (bVar7) {
    *plVar11 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00e9b690;
  goto LAB_00e9b680;
}


