/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4e220; name: FUN_00c4e220
 */


uint FUN_00c4e220(uint param_1,long *param_2,long *param_3,long *param_4,undefined8 *param_5,
                 int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
                 int *param_12,int *param_13,int *param_14,int *param_15)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  plVar6 = (long *)*param_2;
  param_3 = (long *)*param_3;
  if (plVar6 != param_3) {
    if (param_3 != (long *)0x0) {
      plVar6 = param_3 + 5;
      do {
        lVar4 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) goto LAB_00c4e450;
      plVar6 = (long *)*param_2;
    }
    *param_2 = (long)param_3;
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 5;
      do {
        iVar1 = (int)*plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if (iVar1 == 0) goto LAB_00c4e428;
    }
    param_1 = 1;
  }
  plVar6 = (long *)*param_4;
  plVar9 = (long *)*param_5;
  uVar7 = param_1;
  if (plVar6 != plVar9) {
    if (plVar9 != (long *)0x0) {
      plVar6 = plVar9 + 5;
      do {
        lVar4 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *(int *)plVar6 = (int)lVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar4 == -1) {
LAB_00c4e450:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar6 = (long *)*param_4;
    }
    *param_4 = (long)plVar9;
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 5;
      do {
        iVar1 = (int)*plVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar3) {
          *(int *)plVar9 = iVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar1 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      else if (iVar1 == 0) {
LAB_00c4e428:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    uVar7 = 1;
  }
  uVar5 = uVar7;
  if (*param_6 != *param_7) {
    uVar5 = 1;
    *param_6 = *param_7;
  }
  uVar8 = uVar5;
  if (*param_8 != *param_9) {
    uVar8 = 1;
    *param_8 = *param_9;
  }
  uVar12 = uVar8;
  if (*param_10 != *param_11) {
    uVar12 = 1;
    *param_10 = *param_11;
  }
  uVar10 = uVar12;
  if (*param_12 != *param_13) {
    uVar10 = 1;
    *param_12 = *param_13;
  }
  uVar11 = uVar10;
  if (*param_14 != *param_15) {
    uVar11 = 1;
    *param_14 = *param_15;
  }
  return (param_1 | uVar7 | uVar5 | uVar8 | uVar12 | uVar10 | uVar11) & 1;
}


