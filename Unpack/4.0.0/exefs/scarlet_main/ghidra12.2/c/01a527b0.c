/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a527b0; name: FUN_01a527b0
 */


void FUN_01a527b0(undefined8 param_1,code *param_2,undefined8 *param_3,void *param_4)

{
  long *plVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined1 auStack_1b8 [352];
  long *local_58;
  long *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long *local_38;
  
  local_38 = (long *)*param_3;
  *param_3 = 0;
  memcpy(auStack_1b8,param_4,0x15f);
  local_58 = *(long **)((long)param_4 + 0x160);
  local_50 = *(long **)((long)param_4 + 0x168);
  uStack_48 = *(undefined8 *)((long)param_4 + 0x170);
  local_40 = *(undefined4 *)((long)param_4 + 0x178);
  *(undefined8 *)((long)param_4 + 0x160) = 0;
  *(undefined8 *)((long)param_4 + 0x168) = 0;
  (*param_2)(param_1,&local_38,auStack_1b8);
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_01a52900;
  }
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 5;
    do {
      lVar7 = *plVar1;
      iVar6 = (int)lVar7 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    else if ((int)lVar7 == 0) {
LAB_01a52900:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[6];
    psVar2 = (short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar5) {
        *psVar2 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


