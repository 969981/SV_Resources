/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019738c4; name: FUN_019738c4
 */


void FUN_019738c4(undefined8 param_1)

{
  uint *puVar1;
  uint *puVar2;
  short *psVar3;
  uint *puVar4;
  short sVar5;
  long *plVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong local_d8;
  uint *local_d0;
  uint local_c4;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  uint *local_a0;
  uint *puStack_98;
  ulong *local_90;
  
  FUN_00d64f48(&local_d0);
  puVar4 = local_d0;
  if (local_d0 != (uint *)0x0) {
    puVar1 = local_d0 + 0x20;
    puVar2 = local_d0 + 0xc0;
    uVar11 = nn::os::GetCurrentThread();
LAB_01973900:
    if (*(long *)puVar2 == 0) goto code_r0x01973908;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
    do {
      if (*(long *)puVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(puVar4 + 0xc2));
          while (*(long *)puVar2 == 0) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar9) {
              *(undefined8 *)puVar2 = uVar11;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_01973910;
          }
        } while( true );
      }
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *(undefined8 *)puVar2 = uVar11;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
LAB_01973910:
    plVar6 = *(long **)(puVar4 + 0x20);
    plVar7 = *(long **)(puVar4 + 0x22);
    plVar13 = plVar6;
    if ((plVar6 != plVar7) && (*plVar6 != -0x3f2e63c9690744f1)) {
      do {
        plVar13 = plVar13 + 0xb;
        if (plVar7 == plVar13) {
          plVar13 = plVar7;
          goto LAB_01973954;
        }
      } while (*plVar13 != -0x3f2e63c9690744f1);
    }
LAB_01973954:
    if (plVar7 == plVar13) {
      puVar4[0xc0] = 0;
      puVar4[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
      local_d8 = 0;
    }
    else {
      puVar4[0xc0] = 0;
      puVar4[0xc1] = 0;
      nn::os::SignalLightEvent((LightEventType *)(puVar4 + 0xc2));
      local_d8 = (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar6) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      local_c4 = 0;
      if (*(long *)(puVar4 + 0x6e) == 0) {
        local_a0 = &local_c4;
        local_c0 = &LAB_02e657b0;
        local_b8 = FUN_02e657f0;
        local_b0 = &LAB_02e657f4;
        puStack_a8 = &LAB_02e65800;
      }
      else {
        puStack_98 = &local_c4;
        local_a0 = puVar4;
        local_90 = &local_d8;
        local_c0 = &LAB_029e901c;
        local_b8 = FUN_02e65784;
        local_b0 = &LAB_02e65788;
        puStack_a8 = &LAB_02e6579c;
      }
      FUN_00c837c0(puVar4,puVar1,&local_d8,&local_c0);
      pcVar10 = local_b8;
      if (local_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        puStack_a8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_b8 = (code *)0x0;
        (*pcVar10)(&local_a0);
      }
    }
    lVar12 = *(long *)(puVar4 + 0xc);
    psVar3 = (short *)(lVar12 + 0x1a);
    do {
      sVar5 = *psVar3;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*(long *)puVar4 + 0x50))(puVar4);
    }
    else if (sVar5 == 0) goto LAB_01973d14;
  }
  FUN_00d64f48(&local_d0,param_1);
  if (local_d0 == (uint *)0x0) {
    return;
  }
  puVar4 = local_d0 + 0xc0;
  uVar11 = nn::os::GetCurrentThread();
  while (*(long *)puVar4 == 0) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar9) {
      *(undefined8 *)puVar4 = uVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') goto LAB_01973aac;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_d0 + 0xc2));
  do {
    if (*(long *)puVar4 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_d0 + 0xc2));
        while (*(long *)puVar4 == 0) {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar9) {
            *(undefined8 *)puVar4 = uVar11;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_01973aac;
        }
      } while( true );
    }
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar9) {
      *(undefined8 *)puVar4 = uVar11;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
LAB_01973aac:
  plVar6 = *(long **)(local_d0 + 0x3c);
  plVar7 = *(long **)(local_d0 + 0x3e);
  plVar13 = plVar6;
  if ((plVar6 != plVar7) && (*plVar6 != -0x3aa15713c3797e8e)) {
    do {
      plVar13 = plVar13 + 0xb;
      if (plVar7 == plVar13) {
        plVar13 = plVar7;
        goto LAB_01973af0;
      }
    } while (*plVar13 != -0x3aa15713c3797e8e);
  }
LAB_01973af0:
  if (plVar7 == plVar13) {
    local_d0[0xc0] = 0;
    local_d0[0xc1] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d0 + 0xc2));
    local_d8 = 0;
  }
  else {
    local_d0[0xc0] = 0;
    local_d0[0xc1] = 0;
    nn::os::SignalLightEvent((LightEventType *)(local_d0 + 0xc2));
    local_d8 = (ulong)(uint)((int)((ulong)((long)plVar13 - (long)plVar6) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_c4 = local_c4 & 0xffffff00;
    if (*(long *)(local_d0 + 0xa2) == 0) {
      local_a0 = &local_c4;
      local_c0 = &LAB_02e658c0;
      local_b8 = FUN_02e65908;
      local_b0 = &LAB_02e6590c;
      puStack_a8 = &LAB_02e65918;
    }
    else {
      puStack_98 = &local_c4;
      local_a0 = local_d0;
      local_90 = &local_d8;
      local_c0 = &LAB_029e9640;
      local_b8 = FUN_02e65894;
      local_b0 = &LAB_02e65898;
      puStack_a8 = &LAB_02e658ac;
    }
    FUN_00c837c0(local_d0,local_d0 + 0x3c,&local_d8,&local_c0);
    pcVar10 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar10)(&local_a0);
    }
  }
  lVar12 = *(long *)(local_d0 + 0xc);
  psVar3 = (short *)(lVar12 + 0x1a);
  do {
    sVar5 = *psVar3;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
    if (bVar9) {
      *psVar3 = sVar5 + -1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar12 + 0x10) = 0;
    (**(code **)(*(long *)local_d0 + 0x50))(local_d0);
    return;
  }
  if (sVar5 != 0) {
    return;
  }
LAB_01973d14:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x01973908:
  cVar8 = '\x01';
  bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
  if (bVar9) {
    *(undefined8 *)puVar2 = uVar11;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') goto LAB_01973910;
  goto LAB_01973900;
}


