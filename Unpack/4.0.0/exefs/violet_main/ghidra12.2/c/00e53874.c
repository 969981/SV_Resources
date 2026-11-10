/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e53874; name: FUN_00e53874
 */


void FUN_00e53874(undefined8 param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  FUN_01f90a60(local_40,param_1);
  if (local_40[0] != (undefined8 *)0x0) {
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      if (local_40[0] == (undefined8 *)0x0) {
        return;
      }
      if (*(short *)((long)local_40[0] + 0x1a) != 0) {
        psVar1 = (short *)((long)local_40[0] + 0x1a);
        sVar10 = *(short *)((long)local_40[0] + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_00e538fc;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00e538fc:
            bVar5 = false;
          }
          if (bVar5) {
            lVar9 = local_40[0][2];
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0x778) = *(undefined8 *)(lVar9 + 0x1e8);
              *(undefined8 *)(lVar9 + 0x780) = *(undefined8 *)(lVar9 + 0x1f0);
              *(undefined4 *)(lVar9 + 0x788) = *(undefined4 *)(lVar9 + 0x1f8);
              FUN_00d0a71c(lVar9 + 0x798,lVar9 + 0x208);
              FUN_00c6c994(lVar9 + 0x7a8,lVar9 + 0x218);
              plVar11 = *(long **)(lVar9 + 0x228);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x18))(plVar11);
              }
              plVar7 = *(long **)(lVar9 + 0x7b8);
              *(long **)(lVar9 + 0x7b8) = plVar11;
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x20))();
              }
              *(undefined8 *)(lVar9 + 0x7c0) = *(undefined8 *)(lVar9 + 0x230);
              *(undefined8 *)(lVar9 + 0x7c8) = *(undefined8 *)(lVar9 + 0x238);
              *(undefined8 *)(lVar9 + 2000) = *(undefined8 *)(lVar9 + 0x240);
              memcpy((void *)(lVar9 + 0x7d8),(void *)(lVar9 + 0x248),0xd4);
              FUN_01f8e518(lVar9 + 0x8b8,lVar9 + 0x328);
              memcpy((void *)(lVar9 + 0xa18),(void *)(lVar9 + 0x488),0x50);
              FUN_01f8e518(lVar9 + 0xa68,lVar9 + 0x4d8);
              *(undefined8 *)(lVar9 + 0xbc8) = *(undefined8 *)(lVar9 + 0x638);
              *(undefined4 *)(lVar9 + 0xbd0) = *(undefined4 *)(lVar9 + 0x640);
              memcpy((void *)(lVar9 + 0xbd8),(void *)(lVar9 + 0x648),300);
              lVar8 = *(long *)(lVar9 + 0x70);
              psVar1 = (short *)(lVar8 + 0x1a);
              do {
                sVar10 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar10 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar10 == 1) {
                *(undefined8 *)(lVar8 + 0x10) = 0;
                (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))((long *)(lVar9 + -0x28));
              }
              else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x60,"Reference counter underflows.");
              }
            }
            break;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
    }
    if (local_40[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40[0] + 3);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        piVar2 = (int *)((long)local_40[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = *local_40[0];
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar10 == 0) {
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


