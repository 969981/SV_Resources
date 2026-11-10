/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019e2040; name: FUN_019e2040
 */


void FUN_019e2040(code *param_1,undefined8 *param_2,undefined8 *param_3,undefined2 *param_4,
                 undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined1 *param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
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
  local_50 = *param_4;
  local_4e = param_4[1];
  local_4c = *(undefined1 *)(param_4 + 2);
  local_4b = *(undefined1 *)((long)param_4 + 5);
  local_4a = *(undefined1 *)(param_4 + 3);
  local_48 = *(undefined4 *)(param_4 + 4);
  uStack_44 = *(undefined4 *)(param_4 + 6);
  local_40 = *(undefined4 *)(param_4 + 8);
  local_58 = (long *)*param_5;
  *param_5 = 0;
  (*param_1)(*param_7,&local_18,&local_38,&local_50,&local_58,*param_6,*param_8);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 5;
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
      (**(code **)(*local_58 + 0x10))();
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


