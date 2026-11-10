/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d5e7a0; name: FUN_01d5e7a0
 */


void FUN_01d5e7a0(code *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long *local_20;
  long *local_18;
  
  local_18 = (long *)*param_2;
  *param_2 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_28 = param_3[2];
  local_20 = (long *)param_3[3];
  param_3[3] = 0;
  local_40 = (long *)*param_4;
  *param_4 = 0;
  (*param_1)(*param_6,*param_7,&local_18,&local_38,&local_40,*param_5);
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 5;
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
      (**(code **)(*local_40 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_20 != (long *)0x0) {
    (**(code **)(*local_20 + 0x20))();
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x60))();
  }
  return;
}


