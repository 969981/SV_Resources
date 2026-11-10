/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029db98c; name: FUN_029db98c
 */


void FUN_029db98c(long *param_1,long param_2,long *param_3,ulong param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  bool bVar11;
  
  if ((param_4 & 1) == 0) {
    *(uint *)(param_2 + 0x158) = *(uint *)(param_2 + 0x158) | 0x20;
  }
  plVar9 = *(long **)(param_2 + 0x1d0);
  plVar10 = *(long **)(param_2 + 0x1d8);
  if (plVar9 == plVar10) {
LAB_029dbaac:
    if (plVar9 != plVar10) {
      lVar8 = *plVar9;
      *param_1 = lVar8;
      if (lVar8 == 0) {
        return;
      }
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar5 = *piVar1;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar11) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != -1) {
        return;
      }
LAB_029dbb08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  else {
    do {
      if (*(long *)(*plVar9 + 0x70) == *param_3) goto LAB_029dbaac;
      plVar9 = plVar9 + 1;
    } while (plVar10 != plVar9);
  }
  plVar9 = *(long **)(param_2 + 0x208);
  plVar10 = *(long **)(param_2 + 0x210);
  do {
    if (plVar9 == plVar10) {
      *param_1 = 0;
      return;
    }
    plVar6 = (long *)*plVar9;
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar8 = *plVar7;
        cVar3 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *(int *)plVar7 = (int)lVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar8 == -1) goto LAB_029dbb08;
    }
    plVar7 = (long *)plVar6[0xe];
    plVar2 = (long *)plVar6[0xf];
    if (plVar7 == plVar2) {
LAB_029dba74:
      if (plVar7 == plVar2) goto LAB_029dba44;
      lVar8 = *plVar7;
      *param_1 = lVar8;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x28);
        do {
          iVar5 = *piVar1;
          cVar3 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar11) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == -1) goto LAB_029dbb08;
      }
      bVar11 = false;
    }
    else {
      do {
        if (*(long *)(*plVar7 + 0x70) == *param_3) goto LAB_029dba74;
        plVar7 = plVar7 + 1;
      } while (plVar2 != plVar7);
LAB_029dba44:
      bVar11 = true;
    }
    if (plVar6 != (long *)0x0) {
      plVar7 = plVar6 + 5;
      do {
        lVar8 = *plVar7;
        iVar5 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *(int *)plVar7 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (!bVar11) {
      return;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}


