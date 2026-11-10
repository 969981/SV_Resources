/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0136a1ac; name: FUN_0136a1ac
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0136a1ac(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)(param_1 + 0x38);
  if (*(char *)(lVar7 + 0x710) != '\0') {
    if ((*(byte *)(lVar7 + 0x49b) >> 1 & 1) == 0) {
      return;
    }
    if (*(int *)(lVar7 + 0x30) == 4) {
      uVar5 = 1;
    }
    else if ((*(byte *)(param_1 + 0x9e) & 1) == 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x150) + 0x230);
      if (*(int *)(lVar7 + 8) == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x90);
      }
      else {
        uVar5 = FUN_017688c8(lVar7,*(long *)(param_1 + 0x150),*(undefined1 *)(param_1 + 0x95));
      }
    }
    else {
      uVar5 = 5;
    }
    *(undefined4 *)(*(long *)(param_1 + 0x40) + 0x30) = uVar5;
    FUN_015b53bc(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x170),
                 *(undefined8 *)(param_1 + 0x150),param_1,*(undefined1 *)(param_1 + 0x95));
    return;
  }
  if (*(int *)(lVar7 + 0x30) == 4) {
    iVar4 = 1;
  }
  else if ((*(byte *)(param_1 + 0x9e) & 1) == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x150) + 0x230);
    if (*(int *)(lVar7 + 8) == 0) {
      iVar4 = *(int *)(param_1 + 0x90);
      if (iVar4 == 7) {
        iVar4 = 1;
        *(undefined4 *)(param_1 + 0x90) = 1;
      }
    }
    else {
      iVar4 = FUN_017688c8(lVar7,*(long *)(param_1 + 0x150),*(undefined1 *)(param_1 + 0x95));
    }
  }
  else {
    iVar4 = 5;
  }
  *(int *)(*(long *)(param_1 + 0x40) + 0x30) = iVar4;
  FUN_02e38f7c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x38),
               *(undefined8 *)(param_1 + 0x170),*(undefined8 *)(param_1 + 0x150),
               *(undefined8 *)(param_1 + 8),param_1,*(undefined1 *)(param_1 + 0x95));
  iVar6 = FUN_0170ae2c(*(undefined8 *)(*(long *)(param_1 + 0x150) + 0x270));
  switch(iVar4) {
  case 0:
  case 2:
    iVar6 = -*(int *)(param_1 + 0x84);
    break;
  case 1:
    iVar6 = *(int *)(param_1 + 0x80) + iVar6;
    break;
  case 3:
    if (*(int *)(*(long *)(param_1 + 0x38) + 0x30) == 1) {
      *(int *)(*(long *)(param_1 + 0x40) + 0x2c) = -*(int *)(param_1 + 0x84);
    }
  default:
    goto switchD_0136a29c_default;
  }
  *(int *)(*(long *)(param_1 + 0x40) + 0x2c) = iVar6;
  if ((iVar4 == 1) && (*(uint *)(*(long *)(param_1 + 0x38) + 0x30) < 2)) {
    plVar8 = *(long **)(param_1 + 0x130);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    plVar1 = plVar8 + 5;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar7 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    (**(code **)(*plVar8 + 0x48))(plVar8,0xd);
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
                    /* WARNING: Could not recover jumptable at 0x0136a3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return;
    }
    if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
switchD_0136a29c_default:
  return;
}


