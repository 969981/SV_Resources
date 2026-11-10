/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d814d0; name: FUN_00d814d0
 */


uint FUN_00d814d0(uint param_1,long *param_2,long *param_3,char *param_4,char *param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  uint unaff_10000047;
  long lVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  
  plVar8 = (long *)*param_2;
  param_3 = (long *)*param_3;
  if (plVar8 != param_3) {
    if (param_3 != (long *)0x0) {
      plVar8 = param_3 + 5;
      do {
        lVar6 = *plVar8;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)lVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar6 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar8 = (long *)*param_2;
    }
    *param_2 = (long)param_3;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 5;
      do {
        iVar2 = (int)*plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      else if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    unaff_10000047 = 1;
    param_1 = 1;
  }
  if ((*param_4 == '\0') || (*param_5 == '\0')) {
    unaff_10000047 = param_1;
    if (*param_5 == '\0' && *param_4 == '\0') goto LAB_00d8150c;
  }
  else if (*(long *)(param_4 + 8) == *(long *)(param_5 + 8)) goto LAB_00d8150c;
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)param_4 = *(undefined8 *)param_5;
  *(undefined8 *)(param_4 + 8) = uVar3;
  unaff_10000047 = 1;
LAB_00d8150c:
  if ((((*param_6 != *param_7) || (param_6[1] != param_7[1])) || (param_6[2] != param_7[2])) ||
     (((param_6[3] != param_7[3] || (param_6[4] != param_7[4])) ||
      (uVar9 = unaff_10000047, param_6[5] != param_7[5])))) {
    uVar3 = *(undefined8 *)(param_7 + 2);
    uVar10 = *(undefined8 *)(param_7 + 4);
    *(undefined8 *)param_6 = *(undefined8 *)param_7;
    uVar9 = 1;
    *(undefined8 *)(param_6 + 2) = uVar3;
    *(undefined8 *)(param_6 + 4) = uVar10;
  }
  uVar7 = uVar9;
  if (*param_8 != *param_9) {
    uVar7 = 1;
    *param_8 = *param_9;
  }
  return (param_1 | unaff_10000047 | uVar9 | uVar7) & 1;
}


