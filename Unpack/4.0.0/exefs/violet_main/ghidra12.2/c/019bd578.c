/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bd578; name: FUN_019bd578
 */


void FUN_019bd578(long param_1,undefined1 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 local_68;
  long local_60;
  byte local_58;
  long *local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  byte local_28;
  undefined7 uStack_27;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar5 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar5;
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x70) != 0)) && (*(long *)PTR_DAT_047d0860 != 0)) {
    local_28 = 0xfd;
    FUN_00f42ddc(&local_68,*(long *)PTR_DAT_047d0860,&local_28,*param_3);
    local_58 = local_28;
    if (((local_28 != 0xfd) && (local_68 == 0)) &&
       ((local_28 <= DAT_045dfcb0 && DAT_045dfcb0 != local_28 &&
        ((*param_3 != 0 && (lVar5 = FUN_017691a4(param_3), lVar5 != 0)))))) {
      local_68 = CONCAT31(local_68._1_3_,*param_2);
      local_68 = CONCAT22(*(undefined2 *)(param_2 + 2),(undefined2)local_68);
      local_60 = *param_3;
      FUN_01920084(&local_28);
      local_50 = (long *)CONCAT71(uStack_27,local_28);
      local_48 = *(undefined1 *)(lVar5 + 5);
      local_47 = *(undefined1 *)(lVar5 + 6);
      local_46 = *(undefined1 *)(lVar5 + 4);
      if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))(param_1 + 0x60,&local_68);
      }
      if (local_50 != (long *)0x0) {
        plVar1 = local_50 + 5;
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
          (**(code **)(*local_50 + 0x10))();
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
  }
  return;
}


