/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f1a958; name: FUN_00f1a958
 */


void FUN_00f1a958(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar5 = *(long **)(param_1 + 0x88);
  plVar7 = *(long **)(param_1 + 0x90);
  plVar4 = plVar5;
  if ((plVar5 != plVar7) && (*plVar5 != *param_2)) {
    do {
      plVar4 = plVar4 + 1;
      if (plVar7 == plVar4) {
        plVar4 = plVar7;
        goto LAB_00f1a990;
      }
    } while (*plVar4 != *param_2);
  }
LAB_00f1a990:
  if (plVar7 != plVar4) {
    plVar5 = plVar5 + ((ulong)((long)plVar4 - (long)plVar5) >> 3 & 0xffffffff);
    plVar4 = plVar5;
    plVar8 = plVar5 + 1;
    if (plVar5 + 1 != plVar7) {
      do {
        plVar5 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar5 != (long *)0x0) {
          plVar9 = plVar5 + 5;
          do {
            lVar6 = *plVar9;
            iVar3 = (int)lVar6 + -1;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *(int *)plVar9 = iVar3;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (iVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
          else if ((int)lVar6 == 0) goto LAB_00f1aa68;
        }
        lVar6 = *plVar8;
        plVar9 = plVar8 + 1;
        *plVar8 = 0;
        plVar5 = plVar4 + 1;
        *plVar4 = lVar6;
        plVar4 = plVar5;
        plVar8 = plVar9;
        if (plVar9 == plVar7) {
          plVar7 = *(long **)(param_1 + 0x90);
          goto LAB_00f1a9d4;
        }
      } while( true );
    }
    do {
      plVar7 = plVar7 + -1;
      plVar4 = (long *)*plVar7;
      if (plVar4 != (long *)0x0) {
        plVar8 = plVar4 + 5;
        do {
          lVar6 = *plVar8;
          iVar3 = (int)lVar6 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar2) {
            *(int *)plVar8 = iVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
LAB_00f1aa68:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
LAB_00f1a9d4:
    } while (plVar7 != plVar5);
    *(long **)(param_1 + 0x90) = plVar5;
  }
  return;
}


