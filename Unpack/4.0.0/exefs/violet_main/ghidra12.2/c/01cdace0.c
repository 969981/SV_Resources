/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cdace0; name: FUN_01cdace0
 */


void FUN_01cdace0(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  plVar7 = *(long **)(param_2 + 0x1b0);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(local_38);
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    puVar8 = local_38[0];
    if ((long *)local_38[0][2] == plVar7 + 5) {
      FUN_00cbc6dc(&local_48,local_38);
      puVar8 = local_38[0];
    }
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)puVar8 + 0x1c);
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
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_28 = *puVar8;
          FUN_00c44438(lVar10 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01cdadd4;
    }
    if (local_48 != (undefined8 *)0x0) {
      if (*(short *)((long)local_48 + 0x1a) != 0) {
        if (local_48 == (undefined8 *)0x0) goto LAB_01cdad40;
        if (*(short *)((long)local_48 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_48 + 0x1a);
          sVar11 = *(short *)((long)local_48 + 0x1a);
          do {
            sVar3 = *psVar1;
            if (sVar3 == sVar11) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar11 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_01cdada0;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_01cdada0:
              bVar5 = false;
            }
            if (bVar5) {
              lVar10 = local_48[2];
              if (lVar10 != 0) {
                lVar9 = *(long *)(lVar10 + 8);
                psVar1 = (short *)(lVar9 + 0x1a);
                do {
                  sVar11 = *psVar1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar5) {
                    *psVar1 = sVar11 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (sVar11 == 1) {
                  *(undefined8 *)(lVar9 + 0x10) = 0;
                  (**(code **)(*(long *)(lVar10 + -0x28) + 0x50))();
                }
                else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                             ,0x60,"Reference counter underflows.");
                }
              }
              break;
            }
            sVar11 = sVar3;
          } while (sVar3 != 0);
        }
      }
      puVar8 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48 + 3);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_48 + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_38[0] = (undefined8 *)*puVar8;
            FUN_00c44438(lVar10 + 0x8040,local_38);
          }
        }
        else if (sVar11 == 0) {
LAB_01cdadd4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
LAB_01cdad40:
  *param_1 = 0;
  return;
}


