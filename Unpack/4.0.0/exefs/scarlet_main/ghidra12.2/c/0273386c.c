/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0273386c; name: FUN_0273386c
 */


void FUN_0273386c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_38;
  
  puVar6 = (undefined8 *)(param_1 + 0x38);
  puVar8 = (undefined8 *)*puVar6;
  puVar11 = *(undefined8 **)(param_1 + 0x40);
  if (puVar8 != puVar11) {
    do {
      puVar9 = puVar8 + 1;
      (**(code **)(*(long *)*puVar8 + 0xa8))();
      puVar8 = puVar9;
    } while (puVar11 != puVar9);
    puVar8 = (undefined8 *)*puVar6;
  }
  FUN_027339b0(puVar6,puVar8);
  local_38 = *(undefined8 *)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x318) = 0;
  FUN_00cd7b58(&local_38);
  FUN_02733a5c(param_1 + 800,*(undefined8 *)(param_1 + 800));
  lVar10 = *(long *)(param_1 + 0x360);
  for (lVar7 = *(long *)(param_1 + 0x358); lVar7 != lVar10; lVar7 = lVar7 + 8) {
    FUN_00cd7c38(lVar7);
  }
  plVar5 = *(long **)(param_1 + 0x448);
  *(undefined8 *)(param_1 + 0x448) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
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
    else if ((int)lVar7 == 0) goto LAB_02733988;
  }
  plVar5 = *(long **)(param_1 + 0x450);
  *(undefined8 *)(param_1 + 0x450) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 5;
    do {
      lVar7 = *plVar1;
      iVar4 = (int)lVar7 + -1;
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
    else if ((int)lVar7 == 0) {
LAB_02733988:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_02728ab0();
  return;
}


