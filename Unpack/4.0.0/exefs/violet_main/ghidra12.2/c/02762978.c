/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02762978; name: FUN_02762978
 */


void FUN_02762978(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_FUN_045dd860;
  param_1[4] = (long)&PTR_LAB_045dd9b8;
  param_1[5] = (long)&DAT_045ddae0;
  param_1[6] = (long)&PTR_LAB_045ddb38;
  param_1[7] = (long)&PTR_LAB_045ddb60;
  if (param_1[0x24] != 0) {
    FUN_00f1a958(param_1[0x24],param_1 + 0x26);
    plVar10 = (long *)param_1[0x24];
    param_1[0x24] = 0;
    if (plVar10 != (long *)0x0) {
      plVar1 = plVar10 + 5;
      do {
        lVar9 = *plVar1;
        iVar8 = (int)lVar9 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_02762a64;
    }
  }
  plVar10 = (long *)param_1[0x26];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_02762a64;
  }
  plVar10 = (long *)param_1[0x24];
  puVar2 = PTR_DAT_047e1f98 + 0x160;
  puVar3 = PTR_DAT_047e1f98 + 0x288;
  puVar4 = PTR_DAT_047e1f98 + 0x2e0;
  puVar5 = PTR_DAT_047e1f98 + 0x308;
  *param_1 = (long)(PTR_DAT_047e1f98 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  param_1[6] = (long)puVar4;
  param_1[7] = (long)puVar5;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
LAB_02762a64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00e6bfa4(param_1);
  return;
}


