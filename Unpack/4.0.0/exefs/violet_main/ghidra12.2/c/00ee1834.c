/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ee1834; name: FUN_00ee1834
 */


void FUN_00ee1834(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  plVar5 = *(long **)(param_1 + 0x128);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar8 = *plVar1;
      iVar4 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  if (lVar8 != 0) {
    plVar5 = *(long **)(param_1 + 0x108);
    *(long *)(param_1 + 0xf8) = lVar8;
    lVar9 = *(long *)(param_1 + 0x100) - lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9,2);
        goto LAB_00ee1858;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9,2);
  }
LAB_00ee1858:
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 != 0) {
    plVar5 = *(long **)(param_1 + 0xd0);
    *(long *)(param_1 + 0xc0) = lVar8;
    lVar9 = *(long *)(param_1 + 200) - lVar8;
    uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar5,lVar8,lVar9,0x10);
        goto LAB_00ee189c;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9,0x10);
  }
LAB_00ee189c:
  lVar8 = *(long *)(param_1 + 0x80);
  if (lVar8 == 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0x98);
  *(long *)(param_1 + 0x88) = lVar8;
  lVar9 = *(long *)(param_1 + 0x90) - lVar8;
  uVar6 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00c4e600();
    if (0 < *(int *)(lVar7 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar8,lVar9,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00ee18e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar8,lVar9,0x10);
  return;
}


