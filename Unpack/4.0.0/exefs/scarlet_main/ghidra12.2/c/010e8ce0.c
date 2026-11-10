/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010e8ce0; name: FUN_010e8ce0
 */


void FUN_010e8ce0(long param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  lVar10 = *param_2;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar3 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar3 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 == -1) {
LAB_010e8e1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x140);
  *(long *)(param_1 + 0x140) = lVar10;
  if (plVar8 != (long *)0x0) {
    plVar4 = plVar8 + 5;
    do {
      lVar10 = *plVar4;
      iVar3 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(int *)plVar4 = iVar3;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_010e8df4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  plVar8 = *(long **)(param_1 + 0x98);
  plVar4 = *(long **)(param_1 + 0xa0);
  do {
    if (plVar8 == plVar4) {
      return;
    }
    plVar5 = *(long **)(*plVar8 + 0x38);
    for (plVar12 = *(long **)(*plVar8 + 0x30); plVar12 != plVar5; plVar12 = plVar12 + 1) {
      lVar10 = *plVar12;
      lVar11 = *(long *)(param_1 + 0x140);
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 0x28);
        do {
          iVar3 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 == -1) goto LAB_010e8e1c;
      }
      plVar9 = *(long **)(lVar10 + 0x40);
      *(long *)(lVar10 + 0x40) = lVar11;
      if (plVar9 != (long *)0x0) {
        plVar2 = plVar9 + 5;
        do {
          lVar10 = *plVar2;
          iVar3 = (int)lVar10 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar3;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar10 == 0) goto LAB_010e8df4;
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


