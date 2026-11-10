/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019aea00; name: FUN_019aea00
 */


undefined8 FUN_019aea00(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  long *local_48;
  
  if (*(long *)(param_1 + 0xa10) == 0) {
    return 0x20;
  }
  uVar6 = FUN_019aeb9c(*(long *)(param_1 + 0xa10),0);
  uVar11 = 0;
  while( true ) {
    plVar10 = (long *)*param_2;
    local_48 = plVar10;
    if (plVar10 == (long *)0x0) {
      iVar7 = FUN_019aebac(param_1,uVar11,&local_48,1);
    }
    else {
      plVar1 = plVar10 + 5;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      iVar7 = FUN_019aebac(param_1,uVar11,&local_48,1);
      if (plVar10 != (long *)0x0) {
        plVar1 = plVar10 + 5;
        do {
          lVar5 = *plVar1;
          iVar4 = (int)lVar5 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
    if (iVar7 == 0) break;
    uVar11 = uVar11 + 1;
    if (uVar11 == 0x20) {
      if (uVar6 < 0x21) {
        uVar8 = *(undefined8 *)(param_1 + 0xa10);
LAB_019aeb38:
        uVar9 = 0x20;
LAB_019aeb3c:
        FUN_020eb4b8(uVar8,uVar9);
      }
LAB_019aeb0c:
      uVar8 = FUN_019aeb9c(*(undefined8 *)(param_1 + 0xa10),0);
      return uVar8;
    }
  }
  if (uVar11 < uVar6) goto LAB_019aeb0c;
  uVar8 = *(undefined8 *)(param_1 + 0xa10);
  if (0xf < uVar11) goto LAB_019aeb38;
  uVar9 = 0x10;
  goto LAB_019aeb3c;
}


