/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e0f680; name: FUN_01e0f680
 */


void FUN_01e0f680(float param_1,undefined8 param_2)

{
  float *pfVar1;
  short *psVar2;
  float *pfVar3;
  float *pfVar4;
  short sVar5;
  long *plVar6;
  long *plVar7;
  float fVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  float local_e8;
  float fStack_e4;
  ulong local_e0;
  float *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  float *local_b0;
  float *pfStack_a8;
  ulong *local_a0;
  float local_38;
  float local_34;
  
  local_e8 = 1.0;
  fStack_e4 = -1.0;
  pfVar3 = &local_e8;
  if (param_1 <= 1.0) {
    pfVar3 = &local_38;
  }
  local_38 = param_1;
  pfVar4 = &fStack_e4;
  if (-1.0 <= param_1) {
    pfVar4 = pfVar3;
  }
  fVar8 = *pfVar4;
  FUN_00d64f48(&local_d8);
  pfVar3 = local_d8;
  if (local_d8 != (float *)0x0) {
    pfVar4 = local_d8 + 0x2e;
    pfVar1 = local_d8 + 0xc0;
    uVar12 = nn::os::GetCurrentThread();
LAB_01e0f6f8:
    if (*(long *)pfVar1 == 0) goto code_r0x01e0f700;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(pfVar3 + 0xc2));
    do {
      if (*(long *)pfVar1 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(pfVar3 + 0xc2));
          while (*(long *)pfVar1 == 0) {
            cVar9 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
            if (bVar10) {
              *(undefined8 *)pfVar1 = uVar12;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_01e0f708;
          }
        } while( true );
      }
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
      if (bVar10) {
        *(undefined8 *)pfVar1 = uVar12;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
LAB_01e0f708:
    plVar6 = *(long **)(pfVar3 + 0x2e);
    plVar7 = *(long **)(pfVar3 + 0x30);
    plVar14 = plVar6;
    if ((plVar6 != plVar7) && (*plVar6 != 0x4c11a2e6098d711a)) {
      do {
        plVar14 = plVar14 + 0xb;
        if (plVar7 == plVar14) {
          plVar14 = plVar7;
          goto LAB_01e0f74c;
        }
      } while (*plVar14 != 0x4c11a2e6098d711a);
    }
LAB_01e0f74c:
    if (plVar7 == plVar14) {
      pfVar3[0xc0] = 0.0;
      pfVar3[0xc1] = 0.0;
      nn::os::SignalLightEvent((LightEventType *)(pfVar3 + 0xc2));
      local_e0 = 0;
    }
    else {
      pfVar3[0xc0] = 0.0;
      pfVar3[0xc1] = 0.0;
      nn::os::SignalLightEvent((LightEventType *)(pfVar3 + 0xc2));
      local_e0 = (ulong)(uint)((int)((ulong)((long)plVar14 - (long)plVar6) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      if (*(long *)(pfVar3 + 0x88) == 0) {
        local_b0 = &local_34;
        local_d0 = &LAB_02e65838;
        local_c8 = FUN_02e65878;
        local_c0 = &LAB_02e6587c;
        puStack_b8 = &LAB_02e65888;
      }
      else {
        pfStack_a8 = &local_34;
        local_b0 = pfVar3;
        local_a0 = &local_e0;
        local_d0 = &LAB_029e9340;
        local_c8 = FUN_02e6580c;
        local_c0 = &LAB_02e65810;
        puStack_b8 = &LAB_02e65824;
      }
      local_34 = fVar8;
      FUN_00c837c0(pfVar3,pfVar4,&local_e0,&local_d0);
      pcVar11 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar11)(&local_b0);
      }
    }
    lVar13 = *(long *)(pfVar3 + 0xc);
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar10) {
        *psVar2 = sVar5 + -1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*(long *)pfVar3 + 0x50))(pfVar3);
    }
    else if (sVar5 == 0) goto LAB_01e0fb14;
  }
  FUN_00d64f48(&local_d8,param_2);
  if (local_d8 == (float *)0x0) {
    return;
  }
  pfVar3 = local_d8 + 0xc0;
  uVar12 = nn::os::GetCurrentThread();
  while (*(long *)pfVar3 == 0) {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pfVar3,0x10);
    if (bVar10) {
      *(undefined8 *)pfVar3 = uVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 == '\0') goto LAB_01e0f8a4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0xc2));
  do {
    if (*(long *)pfVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0xc2));
        while (*(long *)pfVar3 == 0) {
          cVar9 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(pfVar3,0x10);
          if (bVar10) {
            *(undefined8 *)pfVar3 = uVar12;
            cVar9 = ExclusiveMonitorsStatus();
          }
          if (cVar9 == '\0') goto LAB_01e0f8a4;
        }
      } while( true );
    }
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(pfVar3,0x10);
    if (bVar10) {
      *(undefined8 *)pfVar3 = uVar12;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_01e0f8a4:
  plVar6 = *(long **)(local_d8 + 0x4a);
  plVar7 = *(long **)(local_d8 + 0x4c);
  plVar14 = plVar6;
  if ((plVar6 != plVar7) && (*plVar6 != -0x3c351f77927e7b9f)) {
    do {
      plVar14 = plVar14 + 0xb;
      if (plVar7 == plVar14) {
        plVar14 = plVar7;
        goto LAB_01e0f8e8;
      }
    } while (*plVar14 != -0x3c351f77927e7b9f);
  }
LAB_01e0f8e8:
  if (plVar7 == plVar14) {
    local_d8[0xc0] = 0.0;
    local_d8[0xc1] = 0.0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0xc2));
    local_e0 = 0;
  }
  else {
    local_d8[0xc0] = 0.0;
    local_d8[0xc1] = 0.0;
    nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0xc2));
    local_e0 = (ulong)(uint)((int)((ulong)((long)plVar14 - (long)plVar6) >> 3) * -0x45d1745d) <<
               0x20 | 1;
    local_34 = (float)CONCAT31(local_34._1_3_,1);
    if (*(long *)(local_d8 + 0xbc) == 0) {
      local_b0 = &local_34;
      local_d0 = &LAB_02e659e0;
      local_c8 = FUN_02e65a28;
      local_c0 = &LAB_02e65a2c;
      puStack_b8 = &LAB_02e65a38;
    }
    else {
      pfStack_a8 = &local_34;
      local_b0 = local_d8;
      local_a0 = &local_e0;
      local_d0 = &LAB_029e9c14;
      local_c8 = FUN_02e659b4;
      local_c0 = &LAB_02e659b8;
      puStack_b8 = &LAB_02e659cc;
    }
    FUN_00c837c0(local_d8,local_d8 + 0x4a,&local_e0,&local_d0);
    pcVar11 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined1 *)0x0;
      puStack_b8 = (undefined1 *)0x0;
      local_d0 = (undefined1 *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar11)(&local_b0);
    }
  }
  lVar13 = *(long *)(local_d8 + 0xc);
  psVar2 = (short *)(lVar13 + 0x1a);
  do {
    sVar5 = *psVar2;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar10) {
      *psVar2 = sVar5 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*(long *)local_d8 + 0x50))(local_d8);
    return;
  }
  if (sVar5 != 0) {
    return;
  }
LAB_01e0fb14:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
             ,0x60,"Reference counter underflows.");
code_r0x01e0f700:
  cVar9 = '\x01';
  bVar10 = (bool)ExclusiveMonitorPass(pfVar1,0x10);
  if (bVar10) {
    *(undefined8 *)pfVar1 = uVar12;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 == '\0') goto LAB_01e0f708;
  goto LAB_01e0f6f8;
}


