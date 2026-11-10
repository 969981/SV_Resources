/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e31568; name: FUN_01e31568
 */


void FUN_01e31568(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_60;
  long *local_58;
  long *local_50;
  undefined1 auStack_48 [8];
  
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar6 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  puVar5 = PTR_DAT_047d6c30;
  puVar8 = (undefined8 *)PTR_DAT_047d6c28;
  puVar4 = PTR_DAT_047d6c20;
  lVar9 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar9;
  if ((*(byte *)(lVar9 + 0x629) & 1) == 0) {
    if (((*puVar4 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d6c20), puVar8 = (undefined8 *)PTR_DAT_047d6c28,
       iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c20);
      puVar8 = (undefined8 *)PTR_DAT_047d6c28;
    }
    uVar10 = *puVar8;
    *(undefined8 *)puVar5 = uVar10;
    local_a0 = *param_3;
    uStack_98 = param_3[1];
    local_90 = param_3[2];
    local_88 = (long *)param_3[3];
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x18))();
    }
    FUN_00e8b2b8(param_1,uVar10,&local_a0);
    if (local_88 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*local_88 + 0x20);
  }
  else {
    FUN_00c9e664(&local_58,param_2 + 0xe8);
    if (local_50 == (long *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = local_50[9];
    }
    local_80 = *param_3;
    uStack_78 = param_3[1];
    local_70 = param_3[2];
    plVar1 = (long *)param_3[3];
    local_68 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
    local_60 = (undefined4)param_1;
    FUN_01e317ec(auStack_48,lVar9,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
    if (local_50 != (long *)0x0) {
      plVar1 = local_50 + 5;
      do {
        lVar9 = *plVar1;
        iVar6 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
      else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    if (local_58 == (long *)0x0) {
      return;
    }
    pcVar7 = *(code **)(*local_58 + 0x60);
  }
  (*pcVar7)();
  return;
}


