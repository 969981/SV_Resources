/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00aa0e08; name: FUN_00aa0e08
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aa0e08(undefined8 param_1,long *param_2,undefined8 *param_3,undefined2 *param_4,
                 undefined4 param_5,uint param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  long *local_80;
  undefined2 local_78;
  undefined2 local_76;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  if ((DAT_048383f8 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(&DAT_048383f8);
    if (iVar6 != 0) {
      FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_048383f8);
    }
  }
  uVar5 = DAT_048383e8;
  DAT_04838400 = DAT_048383e8;
  local_28 = (long *)*param_2;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x58))();
  }
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = (long *)param_3[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  local_78 = *param_4;
  local_76 = param_4[1];
  local_74 = *(undefined1 *)(param_4 + 2);
  local_73 = *(undefined1 *)((long)param_4 + 5);
  local_72 = *(undefined1 *)(param_4 + 3);
  local_70 = *(undefined4 *)(param_4 + 4);
  uStack_6c = *(undefined4 *)(param_4 + 6);
  local_68 = *(undefined4 *)(param_4 + 8);
  local_80 = (long *)0x0;
  FUN_011b05a8(param_1,_DAT_03d311f0,uVar5,&local_28,&local_60,&local_78,&local_80,param_5,1,
               param_6 & 1,1);
  if (local_80 != (long *)0x0) {
    plVar1 = local_80 + 5;
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
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}


