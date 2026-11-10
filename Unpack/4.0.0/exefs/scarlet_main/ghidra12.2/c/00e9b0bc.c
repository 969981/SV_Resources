/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e9b0bc; name: FUN_00e9b0bc
 */


long * FUN_00e9b0bc(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  short sVar12;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  plVar8 = (long *)(param_1 + 0xd0);
  if (((((*plVar8 == 0) || (*(short *)(*plVar8 + 0x1a) == 0)) && (*(long *)(param_1 + 0x80) != 0))
      && ((*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0 &&
          (lVar10 = *(long *)(param_1 + 0x80), lVar10 != 0)))) && (*(short *)(lVar10 + 0x1a) != 0))
  {
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
        if (cVar4 != '\0') goto LAB_00e9b158;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00e9b158:
        bVar5 = false;
      }
      if (bVar5) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) {
          return plVar8;
        }
        plVar9 = (long *)FUN_00cf8970(lVar10 + 0xe0,local_40);
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x18))(local_40);
          local_50 = (undefined8 *)0x0;
          uStack_48 = 0;
          if ((long *)local_40[0][2] == plVar9 + 5) {
            FUN_019e13bc(&local_50,local_40);
          }
          puVar6 = local_40[0];
          if (local_40[0] != (undefined8 *)0x0) {
            psVar1 = (short *)(local_40[0] + 3);
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
              piVar2 = (int *)((long)local_40[0] + 0x1c);
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
                local_18 = *puVar6;
                FUN_00c44438(lVar11 + 0x8040,&local_18);
              }
            }
            else if (sVar12 == 0) goto LAB_00e9b234;
          }
          FUN_013dc70c(plVar8,&local_50);
          puVar6 = local_50;
          if (local_50 != (undefined8 *)0x0) {
            psVar1 = (short *)(local_50 + 3);
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
              piVar2 = (int *)((long)local_50 + 0x1c);
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
                local_40[0] = (undefined8 *)*puVar6;
                FUN_00c44438(lVar11 + 0x8040,local_40);
              }
            }
            else if (sVar12 == 0) {
LAB_00e9b234:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        }
        (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
        return plVar8;
      }
      sVar12 = sVar3;
    } while (sVar3 != 0);
  }
  return plVar8;
}


