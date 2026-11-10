/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01092b98; name: FUN_01092b98
 */


void FUN_01092b98(long param_1,long *param_2,int param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_3 != 0) {
    lVar9 = param_1 + (long)param_3 * 0x10;
    puVar7 = *(undefined8 **)(lVar9 + 0x150);
    *(undefined8 *)(lVar9 + 0x150) = 0;
    if (puVar7 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar7 + 3);
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
        piVar2 = (int *)((long)puVar7 + 0x1c);
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
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_48 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar8 + 0x8040,&local_48);
        }
      }
      else if (sVar11 == 0) {
LAB_01092c20:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined8 *)(param_1 + (long)param_3 * 0x10 + 0x158) = 0;
    if (((*param_2 != 0) && (lVar8 = *(long *)(*param_2 + 0x150), lVar8 != 0)) &&
       (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar11 = *(short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar11) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01092ce0;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01092ce0:
          bVar5 = false;
        }
        if (bVar5) {
          lVar8 = *(long *)(lVar8 + 0x10);
          if (lVar8 == 0) {
            return;
          }
          local_48 = (undefined8 *)0x0;
          uStack_40 = 0;
          FUN_00c43ef0(&local_48,(long *)(lVar8 + 8));
          local_58 = (undefined8 *)0x0;
          uStack_50 = 0;
          if (local_48[2] == lVar8) {
            FUN_01211f88(&local_58,&local_48);
          }
          puVar7 = local_48;
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
                local_38 = *puVar7;
                FUN_00c44438(lVar10 + 0x8040,&local_38);
              }
            }
            else if (sVar11 == 0) goto LAB_01092c20;
          }
          FUN_01212358(lVar9 + 0x150,&local_58);
          puVar7 = local_58;
          if (local_58 == (undefined8 *)0x0) {
LAB_01092d4c:
            lVar9 = *(long *)(lVar8 + 8);
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
              (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))();
              return;
            }
            if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
            return;
          }
          psVar1 = (short *)(local_58 + 3);
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
            piVar2 = (int *)((long)local_58 + 0x1c);
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
              local_48 = (undefined8 *)*puVar7;
              FUN_00c44438(lVar9 + 0x8040,&local_48);
            }
            goto LAB_01092d4c;
          }
          if (sVar11 != 0) goto LAB_01092d4c;
          goto LAB_01092c20;
        }
        sVar11 = sVar3;
      } while (sVar3 != 0);
    }
  }
  return;
}


