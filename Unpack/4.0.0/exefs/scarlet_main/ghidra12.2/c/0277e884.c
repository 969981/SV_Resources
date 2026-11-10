/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277e884; name: FUN_0277e884
 */


void FUN_0277e884(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  
  *param_1 = (long)&PTR_FUN_045de4c8;
  param_1[4] = (long)&PTR_LAB_045de620;
  param_1[5] = (long)&DAT_045de748;
  lVar10 = param_1[0x24];
  param_1[6] = (long)&PTR_LAB_045de7a0;
  param_1[7] = (long)&PTR_LAB_045de7c8;
  if (lVar10 != 0) {
    plVar9 = *(long **)(lVar10 + 200);
    if ((plVar9 == (long *)param_1[0x27]) &&
       (*(undefined8 *)(lVar10 + 200) = 0, plVar9 != (long *)0x0)) {
      plVar1 = plVar9 + 5;
      do {
        lVar10 = *plVar1;
        iVar8 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_0277e9b8;
    }
    plVar9 = (long *)param_1[0x24];
    param_1[0x24] = 0;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 5;
      do {
        lVar10 = *plVar1;
        iVar8 = (int)lVar10 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar8;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar10 == 0) goto LAB_0277e9b8;
    }
  }
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x20))();
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 0x20))();
  }
  plVar9 = (long *)param_1[0x27];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      iVar8 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0277e9b8;
  }
  plVar9 = (long *)param_1[0x26];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      iVar8 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) goto LAB_0277e9b8;
  }
  plVar9 = (long *)param_1[0x24];
  puVar2 = PTR_DAT_047e1f98 + 0x160;
  puVar3 = PTR_DAT_047e1f98 + 0x288;
  puVar4 = PTR_DAT_047e1f98 + 0x2e0;
  puVar5 = PTR_DAT_047e1f98 + 0x308;
  *param_1 = (long)(PTR_DAT_047e1f98 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  param_1[6] = (long)puVar4;
  param_1[7] = (long)puVar5;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar10 = *plVar1;
      iVar8 = (int)lVar10 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
LAB_0277e9b8:
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


