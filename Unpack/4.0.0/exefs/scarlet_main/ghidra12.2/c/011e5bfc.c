/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011e5bfc; name: FUN_011e5bfc
 */


void FUN_011e5bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_58;
  undefined1 auStack_48 [8];
  
  lVar8 = DAT_0485a0e8;
  lVar7 = *(long *)(param_5 + 0x130);
  if (lVar7 == 0) {
    if (*(int *)(param_5 + 0x230) == 2) {
      FUN_011eb858(DAT_0485a0e8,param_5 + 0x128);
    }
    local_58 = lVar8;
    lVar7 = FUN_011e3f20(auStack_48,*(undefined8 *)(lVar8 + 8),&local_58,lVar8 + 0x30);
    if (lVar7 != 0) {
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
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar6 = *(long **)(param_5 + 0x130);
    *(undefined8 *)(param_5 + 0x130) = 0;
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 5;
      do {
        lVar8 = *plVar2;
        iVar5 = (int)lVar8 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(param_5 + 0x130) = lVar7;
  }
  if (*(int *)(param_5 + 0x230) == 1) {
    if ((*(long *)(param_5 + 0x238) != 0) &&
       (lVar8 = *(long *)(*(long *)(param_5 + 0x238) + 0x10), lVar8 != 0)) {
      lVar8 = lVar8 + -0x28;
      iVar5 = FUN_021880e0(lVar8);
      if (0 < iVar5) {
        FUN_011e5e90(*(undefined8 *)(param_5 + 0x130),param_6,0);
        uVar10 = FUN_0196cad8(lVar8,0);
        lVar7 = *(long *)(param_5 + 0x130);
        FUN_011e6078(*(undefined4 *)(param_5 + 0x220),uVar10,param_2,param_3,param_4,lVar7,param_6,
                     *(undefined1 *)(param_5 + 0x22c),0);
        *(undefined8 *)(lVar7 + 0x88) = param_1;
        *(undefined8 *)(lVar7 + 0x80) = 0;
        if (iVar5 != 1) {
          iVar9 = 1;
          do {
            FUN_011e5e90(*(undefined8 *)(param_5 + 0x130),param_6,iVar9);
            uVar11 = FUN_0196cad8(lVar8,iVar9);
            lVar7 = *(long *)(param_5 + 0x130);
            uVar12 = uVar10;
            uVar13 = param_2;
            FUN_011e6078(*(undefined4 *)(param_5 + 0x220),uVar11,uVar10,param_2,param_3,lVar7,
                         param_6,*(undefined1 *)(param_5 + 0x22c),iVar9);
            iVar9 = iVar9 + 1;
            *(undefined8 *)(lVar7 + 0x88) = param_1;
            *(undefined8 *)(lVar7 + 0x80) = 0;
            uVar10 = uVar11;
            param_2 = uVar12;
            param_3 = uVar13;
          } while (iVar5 != iVar9);
        }
      }
    }
  }
  else {
    FUN_011e5e90(lVar7,param_6,0xffffffff);
    lVar8 = *(long *)(param_5 + 0x130);
    FUN_011e6078(*(undefined4 *)(param_5 + 0x220),0,0,0,0,lVar8,param_6,
                 *(undefined1 *)(param_5 + 0x22c),0xffffffff);
    *(undefined8 *)(lVar8 + 0x88) = param_1;
    *(undefined8 *)(lVar8 + 0x80) = 0;
  }
  return;
}


