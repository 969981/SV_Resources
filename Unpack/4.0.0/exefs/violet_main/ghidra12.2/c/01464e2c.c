/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01464e2c; name: FUN_01464e2c
 */


void FUN_01464e2c(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  long local_50;
  undefined1 local_48 [16];
  ulong local_38;
  
  local_58 = 0;
  local_68 = 0x10;
  uStack_60 = 0x100;
  local_50 = *param_2;
  lVar7 = FUN_00cf3764(local_48,*(undefined8 *)(local_50 + 8),&local_50);
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar10 = lVar7;
  }
  lVar9 = *(long *)(*(long *)(lVar10 + 0x70) + 0x30);
  local_48._0_8_ = *(undefined8 *)(lVar9 + 8);
  local_48._8_8_ = *(undefined8 *)(lVar9 + 0x6098);
  local_38 = lVar9 + 0x10;
  local_48 = FUN_00d56874(*(undefined8 *)(lVar9 + 0x6140),local_48,&local_68,0,0);
  local_38 = local_38 & 0xffffffffffffff00;
  FUN_00d56380(lVar10 + 0x30,local_48);
  uVar6 = FUN_00d56320(lVar10 + 0x30);
  *(undefined4 *)(lVar10 + 0x78) = uVar6;
  plVar8 = (long *)*param_1;
  *param_1 = 0;
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 5;
    do {
      lVar10 = *plVar2;
      iVar5 = (int)lVar10 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    else if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *param_1 = lVar7;
  return;
}


