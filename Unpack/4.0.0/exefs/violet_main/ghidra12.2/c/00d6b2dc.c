/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d6b2dc; name: FUN_00d6b2dc
 */


undefined8 FUN_00d6b2dc(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  lVar8 = *param_1;
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0xf0) == '\0') {
      return 0;
    }
    local_30 = (undefined8 *)0x0;
    uStack_28 = 0;
    FUN_00ca1a48(&local_30,lVar8 + 0x48);
    puVar6 = local_30;
    if (local_30 == (undefined8 *)0x0) {
      return 1;
    }
    sVar9 = *(short *)((long)local_30 + 0x1a);
    if (local_30 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_30 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_30 + 0x1c);
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_8 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_8);
        }
      }
      else if (sVar3 == 0) goto LAB_00d6b58c;
    }
    if (sVar9 != 0) {
      local_30 = (undefined8 *)0x0;
      uStack_28 = 0;
      FUN_00ca1a48(&local_30,*param_1 + 0x48);
      puVar6 = local_30;
      if (local_30 != (undefined8 *)0x0) {
        if (*(short *)((long)local_30 + 0x1a) != 0) {
          psVar1 = (short *)((long)local_30 + 0x1a);
          sVar9 = *(short *)((long)local_30 + 0x1a);
          do {
            sVar3 = *psVar1;
            if (sVar3 == sVar9) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar5) {
                *psVar1 = sVar9 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_00d6b3c4;
              bVar5 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_00d6b3c4:
              bVar5 = false;
            }
            if (bVar5) {
              plVar10 = (long *)0x0;
              if (local_30[2] != 0) {
                plVar10 = (long *)(local_30[2] + -0x28);
              }
              goto LAB_00d6b460;
            }
            sVar9 = sVar3;
          } while (sVar3 != 0);
        }
        plVar10 = (long *)0x0;
LAB_00d6b460:
        psVar1 = (short *)(local_30 + 3);
        do {
          sVar9 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar9 == 1) {
          piVar2 = (int *)((long)local_30 + 0x1c);
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
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_8 = *puVar6;
            FUN_00c44438(lVar8 + 0x8040,&local_8);
          }
        }
        else if (sVar9 == 0) {
LAB_00d6b58c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x120))(plVar10,1);
          lVar8 = plVar10[6];
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))(plVar10);
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
      }
    }
  }
  return 1;
}


