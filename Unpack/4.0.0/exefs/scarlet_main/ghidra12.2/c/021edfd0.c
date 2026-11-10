/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021edfd0; name: FUN_021edfd0
 */


void FUN_021edfd0(long param_1,uint param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long *local_58;
  undefined4 local_50;
  undefined1 auStack_48 [8];
  
  uVar3 = 0;
  if ((param_2 & 0xff) < 0xb) {
    uVar3 = param_2;
  }
  uVar10 = (ulong)uVar3 & 0xff;
  lVar9 = *(long *)PTR_DAT_047d90c8;
  local_78 = *(long **)(lVar9 + uVar10 * 0x30 + 0x28);
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  lVar7 = lVar9 + uVar10 * 0x30;
  local_70 = *(undefined8 *)(lVar7 + 0x30);
  local_68 = *(undefined8 *)(lVar7 + 0x38);
  lVar11 = *(long *)(lVar7 + 0x40);
  plVar8 = *(long **)(lVar7 + 0x48);
  local_60 = lVar11;
  local_58 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_50 = *(undefined4 *)(lVar9 + uVar10 * 0x30 + 0x50);
  if (lVar11 != 0) {
    lVar9 = param_1 + (ulong)param_2 * 0x40 + 0x28;
    FUN_011fd7e8(lVar9,0,&local_78,0,0);
    lVar9 = FUN_011cb27c(auStack_48,*(undefined8 *)(param_1 + 8),lVar9);
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
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
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    param_1 = param_1 + (ulong)param_2 * 8;
    plVar8 = *(long **)(param_1 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 5;
      do {
        lVar7 = *plVar2;
        iVar4 = (int)lVar7 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar4;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(param_1 + 0x2e8) = lVar9;
    plVar8 = local_58;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  return;
}


