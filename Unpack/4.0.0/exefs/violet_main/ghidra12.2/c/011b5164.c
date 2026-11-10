/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b5164; name: FUN_011b5164
 */


void FUN_011b5164(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *local_28;
  long *local_8;
  
  if (0x150 < param_3) {
    if (param_3 < 0x168) {
      if (param_3 == 0x151) {
        lVar6 = 0;
      }
      else {
        if (param_3 != 0x152) goto switchD_011b51bc_caseD_6;
        lVar6 = 1;
      }
    }
    else if (param_3 == 0x168) {
      lVar6 = 3;
    }
    else {
      if (param_3 != 0x180) goto switchD_011b51bc_caseD_6;
      lVar6 = 0xb;
    }
    goto LAB_011b52d8;
  }
  switch(param_3) {
  case 3:
    lVar6 = 4;
    break;
  case 4:
    lVar6 = 5;
    break;
  case 5:
    lVar6 = 6;
    break;
  case 6:
switchD_011b51bc_caseD_6:
    param_2 = (long *)*param_2;
    local_28 = param_2;
    if (param_2 == (long *)0x0) {
      FUN_011b56b4(param_1,&local_28);
      return;
    }
    plVar1 = param_2 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_011b5360;
    FUN_011b56b4(param_1,&local_28);
    if (param_2 == (long *)0x0) {
      return;
    }
    plVar1 = param_2 + 5;
    do {
      iVar2 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x011b5294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2);
      return;
    }
    goto LAB_011b5250;
  case 7:
    lVar6 = 7;
    break;
  case 8:
    lVar6 = 8;
    break;
  case 9:
    lVar6 = 9;
    break;
  default:
    if (param_3 == 0x70) {
      lVar6 = 2;
    }
    else {
      if (param_3 != 0x92) goto switchD_011b51bc_caseD_6;
      lVar6 = 10;
    }
  }
LAB_011b52d8:
  local_8 = (long *)*param_2;
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
LAB_011b5360:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  (*(code *)(&PTR_FUN_04586848)[lVar6 * 3])
            (param_1 + ((long)(&DAT_04586850)[lVar6 * 3] >> 1),&local_8);
  if (local_8 != (long *)0x0) {
    plVar1 = local_8 + 5;
    do {
      iVar2 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*local_8 + 0x10))();
    }
    else {
LAB_011b5250:
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}


