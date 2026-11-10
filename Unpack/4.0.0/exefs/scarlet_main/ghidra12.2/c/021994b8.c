/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021994b8; name: FUN_021994b8
 */


void FUN_021994b8(undefined1 *param_1,long *param_2,ulong param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 *local_58 [2];
  long local_48;
  undefined8 local_28;
  
  lVar7 = *param_2;
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02199530;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02199530:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -8);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          lVar7 = *(long *)param_2[2];
          if ((param_3 < (ulong)(((long *)param_2[2])[1] - lVar7 >> 4)) &&
             (*(char *)(lVar7 + param_3 * 0x10) == '\t')) {
            lVar7 = *(long *)(lVar7 + param_3 * 0x10 + 8);
          }
          else {
            lVar7 = 0;
          }
          (**(code **)(*plVar9 + 0x18))(plVar9);
          if (lVar7 != 0) {
            FUN_00d30b9c(local_58,plVar9);
            *param_1 = 0;
            *(undefined8 *)(param_1 + 8) = 0;
            *(undefined8 *)(param_1 + 0x10) = 0;
            local_48 = lVar7;
            FUN_00dd9f00(param_1 + 8,local_58);
            *(long *)(param_1 + 0x18) = local_48;
            *param_1 = 1;
            if (local_58[0] != (undefined8 *)0x0) {
              psVar1 = (short *)(local_58[0] + 3);
              do {
                sVar8 = *psVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                if (bVar5) {
                  *psVar1 = sVar8 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (sVar8 == 1) {
                piVar2 = (int *)((long)local_58[0] + 0x1c);
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
                  lVar7 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar7;
                  local_28 = *local_58[0];
                  FUN_00c44438(lVar7 + 0x8040,&local_28);
                }
              }
              else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
            (**(code **)(*plVar9 + 0x18))(plVar9);
            return;
          }
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        break;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  *param_1 = 0;
  return;
}


