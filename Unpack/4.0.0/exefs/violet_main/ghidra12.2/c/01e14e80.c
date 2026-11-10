/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e14e80; name: FUN_01e14e80
 */


void FUN_01e14e80(undefined8 param_1,int *param_2,byte param_3)

{
  byte *pbVar1;
  short *psVar2;
  short sVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong local_e0;
  byte *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  byte *local_b0;
  byte *pbStack_a8;
  undefined1 *local_a0;
  byte local_44 [4];
  
  if (*param_2 == -1) {
    FUN_00d64f48(&local_d8);
    if (local_d8 != (byte *)0x0) {
      pbVar1 = local_d8 + 0x300;
      uVar9 = nn::os::GetCurrentThread();
LAB_01e150f0:
      if (*(long *)pbVar1 == 0) goto code_r0x01e150f8;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x308));
      do {
        if (*(long *)pbVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x308));
            while (*(long *)pbVar1 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
              if (bVar7) {
                *(undefined8 *)pbVar1 = uVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01e15100;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *(undefined8 *)pbVar1 = uVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01e15100:
      plVar4 = *(long **)(local_d8 + 0xf0);
      plVar5 = *(long **)(local_d8 + 0xf8);
      plVar11 = plVar4;
      if ((plVar4 != plVar5) && (*plVar4 != -0x61fc06d3862656f0)) {
        do {
          plVar11 = plVar11 + 0xb;
          if (plVar5 == plVar11) {
            plVar11 = plVar5;
            goto LAB_01e15144;
          }
        } while (*plVar11 != -0x61fc06d3862656f0);
      }
LAB_01e15144:
      if (plVar5 == plVar11) {
        local_d8[0x300] = 0;
        local_d8[0x301] = 0;
        local_d8[0x302] = 0;
        local_d8[0x303] = 0;
        local_d8[0x304] = 0;
        local_d8[0x305] = 0;
        local_d8[0x306] = 0;
        local_d8[0x307] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x308));
        local_e0 = 0;
      }
      else {
        local_d8[0x300] = 0;
        local_d8[0x301] = 0;
        local_d8[0x302] = 0;
        local_d8[0x303] = 0;
        local_d8[0x304] = 0;
        local_d8[0x305] = 0;
        local_d8[0x306] = 0;
        local_d8[0x307] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x308));
        local_e0 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar4) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        local_44[0] = 0;
        if (*(long *)(local_d8 + 0x288) == 0) {
          local_b0 = local_44;
          local_d0 = &LAB_02e658c0;
          local_c8 = FUN_02e65908;
          local_c0 = &LAB_02e6590c;
          puStack_b8 = &LAB_02e65918;
        }
        else {
          pbStack_a8 = local_44;
          local_b0 = local_d8;
          local_d0 = &LAB_029e9640;
          local_c8 = FUN_02e65894;
          local_c0 = &LAB_02e65898;
          puStack_b8 = &LAB_02e658ac;
          local_a0 = (undefined1 *)&local_e0;
        }
        FUN_00c837c0(local_d8,local_d8 + 0xf0,&local_e0,&local_d0);
        pcVar8 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar8)(&local_b0);
        }
      }
      lVar10 = *(long *)(local_d8 + 0x30);
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      goto LAB_01e15038;
    }
  }
  else {
    FUN_00d64f48(&local_d8);
    if (local_d8 != (byte *)0x0) {
      pbVar1 = local_d8 + 0x300;
      uVar9 = nn::os::GetCurrentThread();
      while (*(long *)pbVar1 == 0) {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *(undefined8 *)pbVar1 = uVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
        if (cVar6 == '\0') goto LAB_01e14ed8;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x308));
      do {
        if (*(long *)pbVar1 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x308));
            while (*(long *)pbVar1 == 0) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
              if (bVar7) {
                *(undefined8 *)pbVar1 = uVar9;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') goto LAB_01e14ed8;
            }
          } while( true );
        }
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
        if (bVar7) {
          *(undefined8 *)pbVar1 = uVar9;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01e14ed8:
      plVar4 = *(long **)(local_d8 + 0xf0);
      plVar5 = *(long **)(local_d8 + 0xf8);
      plVar11 = plVar4;
      if ((plVar4 != plVar5) && (*plVar4 != -0x61fc06d3862656f0)) {
        do {
          plVar11 = plVar11 + 0xb;
          if (plVar5 == plVar11) {
            plVar11 = plVar5;
            goto LAB_01e14f1c;
          }
        } while (*plVar11 != -0x61fc06d3862656f0);
      }
LAB_01e14f1c:
      if (plVar5 == plVar11) {
        local_d8[0x300] = 0;
        local_d8[0x301] = 0;
        local_d8[0x302] = 0;
        local_d8[0x303] = 0;
        local_d8[0x304] = 0;
        local_d8[0x305] = 0;
        local_d8[0x306] = 0;
        local_d8[0x307] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x308));
        local_e0 = 0;
      }
      else {
        local_d8[0x300] = 0;
        local_d8[0x301] = 0;
        local_d8[0x302] = 0;
        local_d8[0x303] = 0;
        local_d8[0x304] = 0;
        local_d8[0x305] = 0;
        local_d8[0x306] = 0;
        local_d8[0x307] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x308));
        local_e0 = (ulong)(uint)((int)((ulong)((long)plVar11 - (long)plVar4) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        local_44[0] = param_3 & 1;
        if (*(long *)(local_d8 + 0x288) == 0) {
          local_b0 = local_44;
          local_d0 = &LAB_02e658c0;
          local_c8 = FUN_02e65908;
          local_c0 = &LAB_02e6590c;
          puStack_b8 = &LAB_02e65918;
        }
        else {
          pbStack_a8 = local_44;
          local_b0 = local_d8;
          local_d0 = &LAB_029e9640;
          local_c8 = FUN_02e65894;
          local_c0 = &LAB_02e65898;
          puStack_b8 = &LAB_02e658ac;
          local_a0 = (undefined1 *)&local_e0;
        }
        FUN_00c837c0(local_d8,local_d8 + 0xf0,&local_e0,&local_d0);
        pcVar8 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar8)(&local_b0);
        }
      }
      lVar10 = *(long *)(local_d8 + 0x30);
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar3 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01e15038:
      if (sVar3 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*(long *)local_d8 + 0x50))(local_d8);
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
code_r0x01e150f8:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
  if (bVar7) {
    *(undefined8 *)pbVar1 = uVar9;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01e15100;
  goto LAB_01e150f0;
}


