/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019c5404; name: FUN_019c5404
 */


void FUN_019c5404(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 long *param_5,undefined4 param_6,uint param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long *local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined2 local_93;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined2 local_53;
  undefined8 local_50;
  undefined4 local_48;
  
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  uVar6 = *(undefined8 *)PTR_DAT_047d8940;
  *(undefined8 *)PTR_DAT_047d8948 = uVar6;
  FUN_011b00ec(&local_58,uVar6,*param_5);
  if (((DAT_048383f8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_048383f8), iVar5 != 0)) {
    FUN_00100190(&LAB_00aa519c,&DAT_048383e8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048383f8);
  }
  uVar6 = DAT_048383e8;
  DAT_04838400 = DAT_048383e8;
  local_60 = (long *)*param_3;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x58))();
  }
  local_80 = *param_4;
  uStack_78 = param_4[1];
  local_70 = param_4[2];
  local_68 = (long *)param_4[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  local_98 = local_58;
  local_94 = local_54;
  local_93 = local_53;
  local_90 = local_50;
  local_88 = local_48;
  local_a0 = (long *)*param_5;
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 5;
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
  }
  FUN_011b05a8(param_1,param_2,uVar6,&local_60,&local_80,&local_98,&local_a0,param_6,0,param_7 & 1,1
              );
  if (local_a0 != (long *)0x0) {
    plVar1 = local_a0 + 5;
    do {
      lVar4 = *plVar1;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))();
  }
  return;
}


