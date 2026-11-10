/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b9ed8; name: FUN_028b9ed8
 */


void FUN_028b9ed8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)&PTR_FUN_045e7fd8;
  param_1[4] = (long)&PTR_LAB_045e8078;
  param_1[5] = (long)&DAT_045e80c8;
  plVar8 = (long *)param_1[0x3f];
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar7 = *plVar3;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_028b9f58;
  }
  plVar8 = (long *)param_1[0x3e];
  puVar1 = PTR_DAT_047dd2c0 + 0xb0;
  puVar2 = PTR_DAT_047dd2c0 + 0x100;
  *param_1 = (long)(PTR_DAT_047dd2c0 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if (plVar8 != (long *)0x0) {
    plVar3 = plVar8 + 5;
    do {
      lVar7 = *plVar3;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_028b9f58:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  FUN_00db9ce0(param_1);
  return;
}


