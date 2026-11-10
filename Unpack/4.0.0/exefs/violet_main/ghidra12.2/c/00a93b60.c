/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a93b60; name: FUN_00a93b60
 */


void FUN_00a93b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = 0x508acc5562f54740;
  pcStack_48 = "lookat_disable";
  local_40 = 0xe;
  uStack_38 = 0;
  uVar8 = FUN_00d63848(param_2,&local_50);
  if ((uVar8 & 1) == 0) {
    plVar9 = (long *)FUN_01a2e4fc(param_2);
    lVar10 = *plVar9;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar10 + 0x1a);
      sVar12 = *(short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar12) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00a93c0c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00a93c0c:
          bVar5 = false;
        }
        if (bVar5) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return;
          }
          plVar9 = (long *)(lVar10 + -0x28);
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          FUN_00d0a71c(&local_60,param_3);
          FUN_01420578(param_1,plVar9,&local_60,param_4,0);
          puVar6 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_60 + 3);
            do {
              sVar12 = *psVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (sVar12 == 1) {
              piVar2 = (int *)((long)local_60 + 0x1c);
              do {
                iVar7 = *piVar2;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar5) {
                  *piVar2 = -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar7 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar11 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar11;
                local_50 = *puVar6;
                FUN_00c44438(lVar11 + 0x8040,&local_50);
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
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar9 + 0x50))(plVar9);
            return;
          }
          if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return;
        }
        sVar12 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


