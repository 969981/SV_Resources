/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec7bc0; name: FUN_00ec7bc0
 */


void FUN_00ec7bc0(long param_1,uint param_2)

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
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_48 [8];
  
  plVar9 = *(long **)(param_1 + 0x1d8);
  uVar11 = (ulong)(int)param_2;
  uVar12 = (long)plVar9 - *(long *)(param_1 + 0x1d0) >> 3;
  if (uVar12 < (ulong)(long)(int)param_2) {
    FUN_00ed52ac((long *)(param_1 + 0x1d0),uVar11 - uVar12);
  }
  else if (uVar11 < uVar12) {
    plVar3 = (long *)(*(long *)(param_1 + 0x1d0) + uVar11 * 8);
    do {
      while( true ) {
        do {
          if (plVar3 == plVar9) {
            *(long **)(param_1 + 0x1d8) = plVar3;
            goto LAB_00ec7c08;
          }
          plVar9 = plVar9 + -1;
          plVar10 = (long *)*plVar9;
        } while (plVar10 == (long *)0x0);
        plVar2 = plVar10 + 5;
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
        (**(code **)(*plVar10 + 0x10))();
      }
    } while ((int)lVar8 != 0);
LAB_00ec7d04:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_00ec7c08:
  if (0 < (int)param_2) {
    uVar11 = 0;
    do {
      lVar8 = FUN_00ec7eac(auStack_48,*(undefined8 *)(param_1 + 8));
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
      lVar13 = *(long *)(param_1 + 0x1d0);
      plVar9 = *(long **)(lVar13 + uVar11 * 8);
      *(undefined8 *)(lVar13 + uVar11 * 8) = 0;
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 5;
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
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_00ec7d04;
      }
      *(long *)(lVar13 + uVar11 * 8) = lVar8;
      uVar11 = uVar11 + 1;
    } while (uVar11 != param_2);
  }
  return;
}


