/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00edc38c; name: FUN_00edc38c
 */


void FUN_00edc38c(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined1 auStack_48 [8];
  
  plVar12 = *(long **)(param_1 + 0x210);
  uVar11 = (long)plVar12 - *(long *)(param_1 + 0x208) >> 3;
  uVar10 = (ulong)(int)param_2;
  if (uVar11 < (ulong)(long)(int)param_2) {
    FUN_00edc8cc((long *)(param_1 + 0x208),uVar10 - uVar11);
  }
  else if (uVar10 < uVar11) {
    plVar3 = (long *)(*(long *)(param_1 + 0x208) + uVar10 * 8);
    do {
      while( true ) {
        do {
          if (plVar3 == plVar12) {
            *(long **)(param_1 + 0x210) = plVar3;
            goto LAB_00edc3d8;
          }
          plVar12 = plVar12 + -1;
          plVar9 = (long *)*plVar12;
        } while (plVar9 == (long *)0x0);
        plVar2 = plVar9 + 5;
        do {
          lVar8 = *plVar2;
          iVar4 = (int)lVar8 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *(int *)plVar2 = iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 != 0) break;
        (**(code **)(*plVar9 + 0x10))();
      }
    } while ((int)lVar8 != 0);
LAB_00edc4fc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_00edc3d8:
  if (0 < (int)param_2) {
    uVar10 = 0;
    do {
      lVar8 = FUN_00edc524(auStack_48,*(undefined8 *)(param_1 + 8));
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 0x28);
        do {
          iVar4 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar4 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      lVar13 = *(long *)(param_1 + 0x208);
      plVar12 = *(long **)(lVar13 + uVar10 * 8);
      *(undefined8 *)(lVar13 + uVar10 * 8) = 0;
      if (plVar12 != (long *)0x0) {
        plVar3 = plVar12 + 5;
        do {
          lVar7 = *plVar3;
          iVar4 = (int)lVar7 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar4;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_00edc4fc;
      }
      *(long *)(lVar13 + uVar10 * 8) = lVar8;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_2);
  }
  return;
}


