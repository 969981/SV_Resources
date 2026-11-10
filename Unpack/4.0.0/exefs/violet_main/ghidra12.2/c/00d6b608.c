/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d6b608; name: FUN_00d6b608
 */


void FUN_00d6b608(long param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
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
  
  if (param_2 < 6) {
    lVar10 = *(long *)(param_1 + (ulong)param_2 * 0x20 + 0x1d0);
    FUN_00d64f48(&local_d8);
    if (local_d8 != (long *)0x0) {
      plVar3 = local_d8 + 0x60;
      lVar8 = nn::os::GetCurrentThread();
      while (*plVar3 == 0) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_00d6b664;
      }
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
      do {
        if (*plVar3 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(local_d8 + 0x61));
            while (*plVar3 == 0) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar6) {
                *plVar3 = lVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') goto LAB_00d6b664;
            }
          } while( true );
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *plVar3 = lVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_00d6b664:
      plVar3 = (long *)local_d8[0x25];
      plVar4 = (long *)local_d8[0x26];
      plVar9 = plVar3;
      if ((plVar3 != plVar4) && (*plVar3 != lVar10)) {
        do {
          plVar9 = plVar9 + 0xb;
          if (plVar4 == plVar9) {
            plVar9 = plVar4;
            goto LAB_00d6b698;
          }
        } while (*plVar9 != lVar10);
      }
LAB_00d6b698:
      if (plVar4 == plVar9) {
        local_d8[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
        local_e0 = 0;
      }
      else {
        local_d8[0x60] = 0;
        nn::os::SignalLightEvent((LightEventType *)(local_d8 + 0x61));
        local_e0 = (ulong)(uint)((int)((ulong)((long)plVar9 - (long)plVar3) >> 3) * -0x45d1745d) <<
                   0x20 | 1;
        local_44[0] = 1;
        if (local_d8[0x5e] == 0) {
          local_b0 = (long *)local_44;
          local_d0 = &LAB_02e659e0;
          local_c8 = FUN_02e65a28;
          local_c0 = &LAB_02e65a2c;
          puStack_b8 = &LAB_02e65a38;
        }
        else {
          puStack_a8 = local_44;
          local_b0 = local_d8;
          local_d0 = &LAB_029e9c14;
          local_c8 = FUN_02e659b4;
          local_c0 = &LAB_02e659b8;
          puStack_b8 = &LAB_02e659cc;
          local_a0 = (undefined1 *)&local_e0;
        }
        FUN_00c837c0(local_d8,local_d8 + 0x25,&local_e0,&local_d0);
        pcVar7 = local_c8;
        if (local_c8 != (code *)0x0) {
          local_c0 = (undefined1 *)0x0;
          puStack_b8 = (undefined1 *)0x0;
          local_d0 = (undefined1 *)0x0;
          local_c8 = (code *)0x0;
          (*pcVar7)(&local_b0);
        }
      }
      lVar10 = local_d8[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar2 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_d8 + 0x50))(local_d8);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


