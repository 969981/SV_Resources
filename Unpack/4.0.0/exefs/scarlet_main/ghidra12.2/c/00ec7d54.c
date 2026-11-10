/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec7d54; name: FUN_00ec7d54
 */


void FUN_00ec7d54(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auStack_48 [8];
  
  plVar11 = (long *)(param_1 + 0x70);
  uVar9 = (ulong)(int)param_2;
  uVar10 = *(long *)(param_1 + 0x78) - *plVar11 >> 3;
  if (uVar10 < (ulong)(long)(int)param_2) {
    FUN_00ed52ac(plVar11,uVar9 - uVar10);
  }
  else if (uVar9 < uVar10) {
    FUN_016aeb94(plVar11,*plVar11 + uVar9 * 8);
  }
  if (0 < (int)param_2) {
    uVar9 = 0;
    do {
      lVar7 = FUN_00ec7eac(auStack_48,*(undefined8 *)(param_1 + 8));
      if (lVar7 != 0) {
        piVar1 = (int *)(lVar7 + 0x28);
        do {
          iVar3 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
      }
      lVar12 = *plVar11;
      plVar8 = *(long **)(lVar12 + uVar9 * 8);
      *(undefined8 *)(lVar12 + uVar9 * 8) = 0;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 5;
        do {
          lVar6 = *plVar2;
          iVar3 = (int)lVar6 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      *(long *)(lVar12 + uVar9 * 8) = lVar7;
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_2);
  }
  return;
}


