/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018eff80; name: FUN_018eff80
 */


void FUN_018eff80(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined1 auStack_18 [8];
  
  local_68 = 0x100000000;
  uStack_60 = 0x100000000;
  local_58 = 0x200000025;
  uStack_50 = 0x400000003;
  local_48 = 5;
  uStack_40 = 2;
  puVar6 = (undefined8 *)FUN_00e31554();
  plVar9 = (long *)*puVar6;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 5;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar8 == -1) goto LAB_018f0090;
  }
  local_78 = FUN_01764ca0(plVar9,&local_68);
  uVar10 = *param_2;
  local_38 = plVar9;
  lVar7 = FUN_00cf3764(auStack_18,plVar9[1],&local_38);
  *param_1 = lVar7;
  lVar8 = 0;
  if (lVar7 != 0) {
    piVar2 = (int *)(lVar7 + 0x28);
    do {
      iVar3 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 == -1) {
LAB_018f0090:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar8 = *param_1;
  }
  FUN_01765880(lVar8,uVar10,local_78,1);
  plVar1 = plVar9 + 5;
  do {
    lVar8 = *plVar1;
    iVar3 = (int)lVar8 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar3;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar3 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}


