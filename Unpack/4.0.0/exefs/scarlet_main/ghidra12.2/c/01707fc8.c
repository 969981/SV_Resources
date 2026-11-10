/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01707fc8; name: FUN_01707fc8
 */


void FUN_01707fc8(long param_1)

{
  short *psVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  code *pcVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  short sVar13;
  long *plVar14;
  long *local_f8;
  ulong local_f0;
  long *local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *puStack_c8;
  long *local_c0;
  int *piStack_b8;
  ulong *local_b0;
  int local_54;
  
  FUN_00d64f48(&local_f8);
  if (local_f8 != (long *)0x0) {
    iVar4 = *(int *)(param_1 + 0x294);
    if (iVar4 != -1) {
      lVar2 = local_f8[10];
      for (lVar10 = local_f8[9]; lVar10 != lVar2; lVar10 = lVar10 + 0x30) {
        lVar11 = *(long *)(lVar10 + 0x20);
        if ((lVar11 != 0) && (*(short *)(lVar11 + 0x1a) != 0)) {
          psVar1 = (short *)(lVar11 + 0x1a);
          sVar13 = *(short *)(lVar11 + 0x1a);
          do {
            sVar5 = *psVar1;
            if (sVar5 == sVar13) {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar7) {
                *psVar1 = sVar13 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 != '\0') goto LAB_01708318;
              bVar7 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01708318:
              bVar7 = false;
            }
            if (bVar7) {
              if (*(long *)(lVar11 + 0x10) != 0) {
                plVar14 = (long *)(*(long *)(lVar11 + 0x10) + -8);
                (**(code **)(*plVar14 + 0x150))(plVar14);
                (**(code **)(*plVar14 + 0x18))(plVar14);
              }
              break;
            }
            sVar13 = sVar5;
          } while (sVar5 != 0);
        }
      }
      FUN_00d64f48(&local_e8,param_1);
      if (local_e8 != (long *)0x0) {
        plVar14 = local_e8 + 0x60;
        lVar10 = nn::os::GetCurrentThread();
LAB_01708054:
        if (*plVar14 == 0) goto code_r0x0170805c;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(local_e8 + 0x61));
        do {
          if (*plVar14 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(local_e8 + 0x61));
              while (*plVar14 == 0) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar7) {
                  *plVar14 = lVar10;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_01708064;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar7) {
            *plVar14 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_01708064:
        plVar14 = (long *)local_e8[0x10];
        plVar3 = (long *)local_e8[0x11];
        plVar12 = plVar14;
        if ((plVar14 != plVar3) && (*plVar14 != -0x43f8ef6748bbc2b0)) {
          do {
            plVar12 = plVar12 + 0xb;
            if (plVar3 == plVar12) {
              plVar12 = plVar3;
              goto LAB_01708098;
            }
          } while (*plVar12 != -0x43f8ef6748bbc2b0);
        }
LAB_01708098:
        if (plVar3 == plVar12) {
          local_e8[0x60] = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_e8 + 0x61));
          local_f0 = 0;
        }
        else {
          local_e8[0x60] = 0;
          nn::os::SignalLightEvent((LightEventType *)(local_e8 + 0x61));
          local_f0 = (ulong)(uint)((int)((ulong)((long)plVar12 - (long)plVar14) >> 3) * -0x45d1745d)
                     << 0x20 | 1;
          if (local_e8[0x37] == 0) {
            local_c0 = (long *)&local_54;
            local_e0 = &LAB_02e657b0;
            local_d8 = FUN_02e657f0;
            local_d0 = &LAB_02e657f4;
            puStack_c8 = &LAB_02e65800;
          }
          else {
            piStack_b8 = &local_54;
            local_c0 = local_e8;
            local_b0 = &local_f0;
            local_e0 = &LAB_029e901c;
            local_d8 = FUN_02e65784;
            local_d0 = &LAB_02e65788;
            puStack_c8 = &LAB_02e6579c;
          }
          local_54 = iVar4;
          FUN_00c837c0(local_e8,local_e8 + 0x10,&local_f0,&local_e0);
          pcVar8 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            puStack_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar8)(&local_c0);
          }
        }
        lVar10 = local_e8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar13 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar13 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*local_e8 + 0x50))(local_e8);
        }
        else if (sVar13 == 0) goto LAB_01708234;
      }
      *(undefined1 *)(param_1 + 0x378) = 0;
      local_e0 = (undefined1 *)0xbc071098b7443d50;
      local_d8 = (code *)0x3c9872e;
      local_d0 = (undefined1 *)0xe;
      puStack_c8 = (undefined1 *)0x0;
      uVar9 = FUN_00d93250(param_1,&local_e0);
      *(undefined4 *)(param_1 + 0x294) = uVar9;
      FUN_0170835c(param_1);
      if (local_f8 == (long *)0x0) {
        return;
      }
    }
    lVar10 = local_f8[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
      (**(code **)(*local_f8 + 0x50))();
    }
    else if (sVar13 == 0) {
LAB_01708234:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
code_r0x0170805c:
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
  if (bVar7) {
    *plVar14 = lVar10;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_01708064;
  goto LAB_01708054;
}


