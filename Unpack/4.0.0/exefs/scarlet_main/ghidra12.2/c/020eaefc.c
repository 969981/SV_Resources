/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020eaefc; name: FUN_020eaefc
 */


int FUN_020eaefc(long param_1,long *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long *local_48;
  
  if ((*(long *)(param_1 + 0xa10) == 0) ||
     (iVar5 = FUN_017e4040(*(long *)(param_1 + 0xa10),0), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    uVar9 = 0;
    iVar5 = 0;
    do {
      plVar8 = (long *)*param_2;
      local_48 = plVar8;
      if (plVar8 == (long *)0x0) {
        iVar6 = FUN_019aebac(param_1,uVar9,&local_48,param_3 & 1);
        iVar5 = iVar6 + iVar5;
      }
      else {
        plVar1 = plVar8 + 5;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        iVar6 = FUN_019aebac(param_1,uVar9,&local_48,param_3 & 1);
        iVar5 = iVar6 + iVar5;
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 5;
          do {
            lVar4 = *plVar1;
            iVar6 = (int)lVar4 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
          else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                       ,0x58,"Reference counter underflows.");
          }
        }
      }
      uVar9 = uVar9 + 1;
      uVar7 = FUN_017e4040(*(undefined8 *)(param_1 + 0xa10),0);
    } while (uVar9 < uVar7);
  }
  return iVar5;
}


