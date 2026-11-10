/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01552434; name: FUN_01552434
 */


void FUN_01552434(undefined8 param_1,int *param_2)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  long *plVar12;
  ulong local_e0;
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long *local_b0;
  undefined1 *puStack_a8;
  undefined1 *local_a0;
  undefined1 local_44 [4];
  
  iVar5 = *param_2;
  if (iVar5 == 1) {
    FUN_00d64f48(&local_d8,param_1);
    plVar2 = local_d8;
    if (local_d8 != (long *)0x0) {
      plVar4 = local_d8 + 0x1e;
      plVar12 = local_d8 + 0x60;
      lVar9 = nn::os::GetCurrentThread();
LAB_01552480:
      if (*plVar12 == 0) goto code_r0x01552488;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar2 + 0x61));
      do {
        if (*plVar12 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar2 + 0x61));
            while (*plVar12 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar7) {
                *plVar12 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01552490;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01552490:
      plVar12 = (long *)plVar2[0x1e];
      plVar3 = (long *)plVar2[0x1f];
      plVar11 = plVar12;
      if ((plVar12 != plVar3) && (*plVar12 != 0x4955b49339758aca)) {
        do {
          plVar11 = plVar11 + 0xb;
          if (plVar3 == plVar11) {
            plVar11 = plVar3;
            goto LAB_015524d4;
          }
        } while (*plVar11 != 0x4955b49339758aca);
      }
LAB_015524d4:
      if (plVar3 == plVar11) {
        plVar2[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar2 + 0x61));
        local_e0 = 0;
      }
      else {
        plVar2[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar2 + 0x61));
        local_e0 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar12) >> 3) * -0x45d1745d)
                   << 0x20 | 1;
        local_44[0] = 0;
        if (plVar2[0x51] == 0) {
          local_b0 = (long *)local_44;
          local_d0 = &LAB_02e658c0;
          local_c8 = FUN_02e65908;
          local_c0 = &LAB_02e6590c;
          puStack_b8 = &LAB_02e65918;
        }
        else {
          puStack_a8 = local_44;
          local_b0 = plVar2;
          local_d0 = &LAB_029e9640;
          local_c8 = FUN_02e65894;
          local_c0 = &LAB_02e65898;
          puStack_b8 = &LAB_02e658ac;
          local_a0 = (undefined1 *)&local_e0;
        }
        FUN_00c837c0(plVar2,plVar4,&local_e0,&local_d0);
        pcVar8 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar8)(&local_b0);
        }
      }
      lVar9 = plVar2[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar2 + 0x50))(plVar2);
      }
      else if (sVar10 == 0) goto LAB_01552c9c;
    }
    FUN_00d64f48(&local_d8,param_1);
    if (local_d8 != (long *)0x0) {
      plVar2 = local_d8 + 0x60;
      lVar9 = nn::os::GetCurrentThread();
LAB_0155261c:
      if (*plVar2 == 0) goto code_r0x01552624;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
            while (*plVar2 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_0155262c;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0155262c:
      plVar2 = (long *)local_d8[0x1e];
      plVar4 = (long *)local_d8[0x1f];
      plVar12 = plVar2;
      if ((plVar2 != plVar4) && (*plVar2 != 0x1e0ac9c58ee35984)) {
        do {
          plVar12 = plVar12 + 0xb;
          if (plVar4 == plVar12) {
            plVar12 = plVar4;
            goto LAB_01552670;
          }
        } while (*plVar12 != 0x1e0ac9c58ee35984);
      }
LAB_01552670:
      if (plVar4 == plVar12) {
        local_d8[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
        local_e0 = 0;
      }
      else {
        local_d8[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
        local_e0 = (ulong)(uint)((int)((ulong)((long)plVar12 - (long)plVar2) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        local_44[0] = 0;
        if (local_d8[0x51] == 0) {
          local_b0 = (long *)local_44;
          local_d0 = &LAB_02e658c0;
          local_c8 = FUN_02e65908;
          local_c0 = &LAB_02e6590c;
          puStack_b8 = &LAB_02e65918;
        }
        else {
          puStack_a8 = local_44;
          local_b0 = local_d8;
          local_d0 = &LAB_029e9640;
          local_c8 = FUN_02e65894;
          local_c0 = &LAB_02e65898;
          puStack_b8 = &LAB_02e658ac;
          local_a0 = (undefined1 *)&local_e0;
        }
        FUN_00c837c0(local_d8,local_d8 + 0x1e,&local_e0,&local_d0);
        pcVar8 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar8)(&local_b0);
        }
      }
      lVar9 = local_d8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_01552788;
    }
  }
  else if (iVar5 == 2) {
    FUN_00d64f48(&local_d8,param_1);
    if (local_d8 != (long *)0x0) {
      plVar2 = local_d8 + 0x60;
      lVar9 = nn::os::GetCurrentThread();
LAB_015527f8:
      if (*plVar2 == 0) goto code_r0x01552800;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
      do {
        if (*plVar2 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
            while (*plVar2 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01552808;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *plVar2 = lVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01552808:
      plVar2 = (long *)local_d8[0x1e];
      plVar4 = (long *)local_d8[0x1f];
      plVar12 = plVar2;
      if ((plVar2 != plVar4) && (*plVar2 != 0x4955b49339758aca)) {
        do {
          plVar12 = plVar12 + 0xb;
          if (plVar4 == plVar12) {
            plVar12 = plVar4;
            goto LAB_0155284c;
          }
        } while (*plVar12 != 0x4955b49339758aca);
      }
LAB_0155284c:
      if (plVar4 == plVar12) {
        local_d8[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
        local_e0 = 0;
      }
      else {
        local_d8[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
        local_e0 = (ulong)(uint)((int)((ulong)((long)plVar12 - (long)plVar2) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        local_44[0] = 1;
        if (local_d8[0x51] == 0) {
          local_b0 = (long *)local_44;
          local_d0 = &LAB_02e658c0;
          local_c8 = FUN_02e65908;
          local_c0 = &LAB_02e6590c;
          puStack_b8 = &LAB_02e65918;
        }
        else {
          puStack_a8 = local_44;
          local_b0 = local_d8;
          local_d0 = &LAB_029e9640;
          local_c8 = FUN_02e65894;
          local_c0 = &LAB_02e65898;
          puStack_b8 = &LAB_02e658ac;
          local_a0 = (undefined1 *)&local_e0;
        }
        FUN_00c837c0(local_d8,local_d8 + 0x1e,&local_e0,&local_d0);
        pcVar8 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar8)(&local_b0);
        }
      }
      lVar9 = local_d8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar10 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_01552788;
    }
  }
  else if ((iVar5 == 3) && (FUN_00d64f48(&local_d8,param_1), local_d8 != (long *)0x0)) {
    plVar2 = local_d8 + 0x60;
    lVar9 = nn::os::GetCurrentThread();
    while (*plVar2 == 0) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') goto LAB_01552944;
    }
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
    do {
      if (*plVar2 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
          while (*plVar2 == 0) {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar9;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') goto LAB_01552944;
          }
        } while( true );
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar9;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01552944:
    plVar2 = (long *)local_d8[0x1e];
    plVar4 = (long *)local_d8[0x1f];
    plVar12 = plVar2;
    if ((plVar2 != plVar4) && (*plVar2 != 0x1e0ac9c58ee35984)) {
      do {
        plVar12 = plVar12 + 0xb;
        if (plVar4 == plVar12) {
          plVar12 = plVar4;
          goto LAB_01552988;
        }
      } while (*plVar12 != 0x1e0ac9c58ee35984);
    }
LAB_01552988:
    if (plVar4 == plVar12) {
      local_d8[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
      local_e0 = 0;
    }
    else {
      local_d8[0x60] = 0;
      nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
      local_e0 = (ulong)(uint)((int)((ulong)((long)plVar12 - (long)plVar2) >> 3) * -0x45d1745d) <<
                 0x20 | 1;
      local_44[0] = 1;
      if (local_d8[0x51] == 0) {
        local_b0 = (long *)local_44;
        local_d0 = &LAB_02e658c0;
        local_c8 = FUN_02e65908;
        local_c0 = &LAB_02e6590c;
        puStack_b8 = &LAB_02e65918;
      }
      else {
        puStack_a8 = local_44;
        local_b0 = local_d8;
        local_d0 = &LAB_029e9640;
        local_c8 = FUN_02e65894;
        local_c0 = &LAB_02e65898;
        puStack_b8 = &LAB_02e658ac;
        local_a0 = (undefined1 *)&local_e0;
      }
      FUN_00c837c0(local_d8,local_d8 + 0x1e,&local_e0,&local_d0);
      pcVar8 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar8)(&local_b0);
      }
    }
    lVar9 = local_d8[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar10 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
LAB_01552788:
    if (sVar10 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_d8 + 0x50))(local_d8);
    }
    else if (sVar10 == 0) {
LAB_01552c9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  local_d0 = (undefined1 *)((ulong)local_d0 & 0xffffffff00000000);
  FUN_01552cc4(param_1,&local_d0);
  return;
code_r0x01552488:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar7) {
    *plVar12 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01552490;
  goto LAB_01552480;
code_r0x01552624:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar7) {
    *plVar2 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_0155262c;
  goto LAB_0155261c;
code_r0x01552800:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
  if (bVar7) {
    *plVar2 = lVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01552808;
  goto LAB_015527f8;
}


