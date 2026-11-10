/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0152bdac; name: FUN_0152bdac
 */


void FUN_0152bdac(undefined8 *param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_0104c068();
  param_1[0x3f] = 0;
  *param_1 = &PTR_FUN_04598028;
  param_1[4] = &PTR_LAB_04598160;
  param_1[5] = &DAT_045981b0;
  param_1[0x21] = &DAT_cbf29ce484222645;
  param_1[0x22] = &DAT_03c886bc;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = &DAT_cbf29ce484222645;
  param_1[0x26] = &DAT_03c886bc;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = &DAT_cbf29ce484222645;
  param_1[0x2a] = &DAT_03c886bc;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = &DAT_cbf29ce484222645;
  param_1[0x2e] = &DAT_03c886bc;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = &DAT_cbf29ce484222645;
  param_1[0x32] = &DAT_03c886bc;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = &DAT_cbf29ce484222645;
  param_1[0x36] = &DAT_03c886bc;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = &DAT_cbf29ce484222645;
  param_1[0x3a] = &DAT_03c886bc;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((long)param_1 + 0x1fd) = 0;
  *(undefined2 *)(param_1 + 0x43) = 1;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  local_34 = 0x400;
  lVar7 = FUN_0152bfac(auStack_28,param_1[1],&local_34);
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
    if (iVar3 == -1) goto LAB_0152bf84;
  }
  plVar8 = (long *)param_1[0x41];
  param_1[0x41] = 0;
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
    else if ((int)lVar6 == 0) goto LAB_0152bf3c;
  }
  param_1[0x41] = lVar7;
  local_38 = 0x400;
  lVar7 = FUN_0152bfac(auStack_30,param_1[1],&local_38);
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
LAB_0152bf84:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar8 = (long *)param_1[0x42];
  param_1[0x42] = 0;
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
LAB_0152bf3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x42] = lVar7;
  *(undefined2 *)(param_1 + 0x43) = 1;
  return;
}


