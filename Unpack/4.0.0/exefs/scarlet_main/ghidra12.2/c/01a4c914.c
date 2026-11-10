/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a4c914; name: FUN_01a4c914
 */


undefined8
FUN_01a4c914(undefined8 param_1,long *param_2,long *param_3,undefined4 param_4,int *param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  int iVar8;
  long *local_60;
  long *local_58;
  
  iVar8 = 0;
  do {
    local_58 = (long *)*param_2;
    if (local_58 != (long *)0x0) {
      plVar7 = local_58 + 5;
      do {
        lVar5 = *plVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = (int)lVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((int)lVar5 == -1) goto LAB_01a4ca7c;
    }
    plVar7 = (long *)*param_3;
    local_60 = plVar7;
    if (plVar7 == (long *)0x0) {
      uVar6 = FUN_0152f030(param_1,&local_58,&local_60,param_4,iVar8);
      uVar6 = uVar6 & 0xffffffff;
    }
    else {
      plVar1 = plVar7 + 5;
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
LAB_01a4ca7c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      uVar6 = FUN_0152f030(param_1,&local_58,&local_60,param_4,iVar8);
      uVar6 = uVar6 & 0xffffffff;
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
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
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
        else if ((int)lVar5 == 0) goto LAB_01a4caa4;
      }
    }
    if (local_58 != (long *)0x0) {
      plVar7 = local_58 + 5;
      do {
        lVar5 = *plVar7;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar3) {
          *(int *)plVar7 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
LAB_01a4caa4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if ((uVar6 & 1) != 0) {
      *param_5 = iVar8;
      return 1;
    }
    iVar8 = iVar8 + 1;
    if (iVar8 == 0x1e) {
      return 0;
    }
  } while( true );
}


