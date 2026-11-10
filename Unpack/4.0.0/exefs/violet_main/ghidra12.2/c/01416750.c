/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01416750; name: FUN_01416750
 */


void FUN_01416750(undefined4 param_1,undefined4 param_2,long param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *local_48 [3];
  undefined1 auStack_28 [4];
  uint local_24;
  
  if (param_3 != 0) {
    if ((*PTR_DAT_047d9210 & 1) == 0) {
      local_24 = param_4;
      iVar5 = __cxa_guard_acquire(PTR_DAT_047d9210);
      param_4 = local_24;
      if (iVar5 != 0) {
        FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d9210);
        param_4 = local_24;
      }
    }
    lVar6 = *(long *)PTR_DAT_047d9218;
    *(long *)PTR_DAT_047d9220 = lVar6;
    lVar6 = *(long *)(lVar6 + 0x28);
    if (lVar6 != 0) {
      if ((param_4 & 1) == 0) {
        FUN_0141706c(lVar6,param_1,param_2,param_3);
        return;
      }
      nn::os::LockMutex((MutexType *)(lVar6 + 0x718));
      local_48[0] = (long *)FUN_0141694c(auStack_28,*(undefined8 *)(lVar6 + 8));
      if (local_48[0] != (long *)0x0) {
        plVar1 = local_48[0] + 5;
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
        if (local_48[0] != (long *)0x0) {
          FUN_01416b64(local_48[0],param_1,param_2,param_3,1);
          FUN_01416c90(lVar6 + 0x670,local_48);
          if (local_48[0] != (long *)0x0) {
            plVar1 = local_48[0] + 5;
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
              (**(code **)(*local_48[0] + 0x10))();
            }
            else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x718));
      return;
    }
  }
  return;
}


