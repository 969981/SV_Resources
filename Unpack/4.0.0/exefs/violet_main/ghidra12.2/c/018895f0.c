/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018895f0; name: FUN_018895f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018895f0(long param_1)

{
  int *piVar1;
  short *psVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  short sVar12;
  long lVar13;
  undefined1 local_70 [4];
  int local_6c;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 local_49;
  int local_28;
  uint local_24;
  
  FUN_01195974();
  local_24 = *(int *)(param_1 + 0x2a4) - 1;
  if ((*(int *)(param_1 + 0x108) != 2) && (lVar9 = FUN_01195854(), lVar9 != 0)) {
    local_24 = (uint)*(byte *)(lVar9 + 0x570);
  }
  uVar10 = FUN_01195974(param_1);
  *(undefined1 *)(param_1 + 0x2b0) = 0;
  iVar8 = (int)((ulong)uVar10 >> 0x20);
  *(undefined1 *)(param_1 + 0x1aa1) = 1;
  FUN_01dcffa0(param_1);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_01084328(&local_68,param_1 + 0x130);
  local_28 = *(int *)(param_1 + 0x108);
  if (local_28 == 0) {
    local_28 = 0;
    iVar8 = (int)uVar10 + iVar8 * 6;
  }
  else if ((local_28 != 1) && (local_28 != 2)) {
    local_28 = 3;
    iVar8 = 1;
  }
  local_70[0] = *(int *)(param_1 + 0x284) != 0 && *(int *)(param_1 + 0x284) != 5;
  if (local_68 != (undefined8 *)0x0) {
    local_6c = iVar8;
    if (*(short *)((long)local_68 + 0x1a) != 0) {
      psVar2 = (short *)((long)local_68 + 0x1a);
      sVar12 = *(short *)((long)local_68 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_018897a0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_018897a0:
          bVar6 = false;
        }
        if (bVar6) {
          lVar9 = local_68[2];
          if (lVar9 != 0) {
            local_58 = DAT_03d300e0;
            uStack_50 = (undefined7)DAT_03d300e8;
            local_49 = ram0x03d300ef;
            if (*(long *)(lVar9 + 0x110) != 0) {
              plVar3 = (long *)(lVar9 + 0x120);
              lVar13 = *plVar3;
              lVar11 = nn::os::GetCurrentThread();
              if (lVar11 == lVar13) {
                FUN_00a6bce4(*(undefined8 *)(lVar9 + 0x110),&local_58,&local_28,&local_24,&local_6c,
                             local_70);
              }
              else {
                lVar11 = nn::os::GetCurrentThread();
                do {
                  if (*plVar3 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x128));
                      while (*plVar3 == 0) {
                        cVar5 = '\x01';
                        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar6) {
                          *plVar3 = lVar11;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                        if (cVar5 == '\0') goto LAB_01889818;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                  if (bVar6) {
                    *plVar3 = lVar11;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
LAB_01889818:
                if (*(long *)(lVar9 + 0x110) != 0) {
                  FUN_00a6bce4(*(long *)(lVar9 + 0x110),&local_58,&local_28,&local_24,&local_6c,
                               local_70);
                }
                *(undefined8 *)(lVar9 + 0x120) = 0;
                nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x128));
              }
            }
            lVar11 = *(long *)(lVar9 + 0x70);
            psVar2 = (short *)(lVar11 + 0x1a);
            do {
              sVar12 = *psVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar6) {
                *psVar2 = sVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (sVar12 == 1) {
              *(undefined8 *)(lVar11 + 0x10) = 0;
              (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
            }
            else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
          break;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
    }
    puVar7 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_68 + 3);
      do {
        sVar12 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        piVar1 = (int *)((long)local_68 + 0x1c);
        do {
          iVar8 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_58 = *puVar7;
          FUN_00c44438(lVar9 + 0x8040,&local_58);
        }
      }
      else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


