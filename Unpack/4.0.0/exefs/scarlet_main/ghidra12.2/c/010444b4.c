/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010444b4; name: FUN_010444b4
 */


void FUN_010444b4(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  FUN_01185de0(param_1 + 0x178);
  FUN_01185de0(param_1 + 0x138);
  plVar5 = (long *)*(long *)(param_1 + 0x100);
  while (plVar5 != (long *)0x0) {
    plVar8 = (long *)*plVar5;
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar7 = *(long **)(param_1 + 0x108);
    uVar4 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,0x30,8);
      plVar5 = plVar8;
    }
    else {
      FUN_00c48fe8(plVar7,plVar5,0x30,8);
      plVar5 = plVar8;
    }
  }
  lVar6 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar6 != 0) {
    FUN_028fd188(param_1 + 0xd8);
  }
  plVar5 = *(long **)(param_1 + 200);
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 5;
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
      (**(code **)(*plVar5 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00ff9cb8(param_1 + 0x88);
  FUN_01024ab4(param_1 + 0x48);
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x20))();
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  }
  if (*(long **)(param_1 + 0x10) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  }
  if (*(long **)(param_1 + 8) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01044618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))();
  return;
}


