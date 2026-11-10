/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0275143c; name: FUN_0275143c
 */


void FUN_0275143c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *(undefined1 *)(param_1 + 0x110) = 0;
  FUN_027535e0(param_1 + 0x110);
  lVar8 = *(long *)(param_1 + 0xd0);
  if (lVar8 != 0) {
    plVar6 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xd8) = lVar8;
    lVar9 = *(long *)(param_1 + 0xe0) - lVar8;
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar5 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar8,lVar9,4);
        goto LAB_027514a0;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar9,4);
  }
LAB_027514a0:
  FUN_016879bc(param_1 + 0x90);
  plVar6 = *(long **)(param_1 + 0x98);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
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
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x80));
  FUN_02753be4(param_1 + 8);
  return;
}


