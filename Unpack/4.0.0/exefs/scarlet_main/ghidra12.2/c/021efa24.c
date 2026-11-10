/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021efa24; name: FUN_021efa24
 */


void FUN_021efa24(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  
  uVar4 = FUN_00e677bc(param_2);
  FUN_00e677b0(param_2,*(undefined8 *)(param_4 + 8));
  local_34 = 0xd;
  plVar7 = (long *)FUN_0152bfac(auStack_38,param_1,&local_34);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar8 = FUN_01741ea0();
  FUN_010549ec(plVar7,0,*(undefined1 *)(lVar8 + 0x3d0));
  FUN_01dbf0f8(param_2,plVar7);
  if (*(int *)(param_3 + 0x60) != 0) {
    uVar9 = 0;
    do {
      FUN_01d32964(param_2,uVar9 & 0xffffffff,*(undefined2 *)(param_3 + 100 + uVar9 * 2));
      FUN_01edca30(param_2,uVar9 & 0xffffffff,*(undefined2 *)(param_3 + 100 + uVar9 * 2));
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_3 + 0x60));
  }
  FUN_01892138(param_2,*(undefined1 *)(param_3 + 0x6c));
  uVar5 = FUN_00e9980c(param_2);
  FUN_00e673a8(param_2,9,uVar5);
  uVar5 = FUN_00e9980c(param_2);
  FUN_015652f4(param_2,uVar5);
  iVar6 = (**(code **)(param_4 + 0x18))(2);
  if (iVar6 == 0) {
    FUN_0113b7d0(param_2);
  }
  else {
    FUN_01155170(param_2);
  }
  uVar5 = FUN_021f0a60();
  FUN_00f89214(param_2,uVar5);
  FUN_021f0a8c(param_2);
  FUN_00e679bc(param_2,uVar4 & 1);
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar8 = *plVar1;
      iVar6 = (int)lVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_pokelib_build_s2/pokelib_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}


