/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a09fa8; name: FUN_02a09fa8
 */


void FUN_02a09fa8(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [8];
  long local_40;
  long local_38 [2];
  undefined1 auStack_28 [8];
  
  lVar6 = FUN_01e72638();
  if (lVar6 != 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar7 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar7;
    if (lVar7 != 0) {
      FUN_01986a90(local_38);
      if ((local_38[0] == 0) || (*(long *)(local_38[0] + 0x10) == 0)) {
        *param_1 = 0;
      }
      else {
        FUN_01f6ea90(auStack_48,*(long *)(local_38[0] + 0x10) + -0x28);
        if ((local_40 == 0) || (*(long *)(local_40 + 8) == -1)) {
          *param_1 = 0;
        }
        else {
          lVar6 = FUN_02a0a9e0(auStack_28,lVar6,auStack_48);
          *param_1 = lVar6;
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + 0x30);
            if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar6 + 0x1a);
            do {
              sVar2 = *psVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar4) {
                *psVar1 = sVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (sVar2 == 0) {
              uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
              *(undefined8 *)(lVar6 + 8) = uVar8;
              *(undefined4 *)(lVar6 + 0x1c) = 0xfffffffe;
            }
            else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","AddReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x58,"Reference counter overflows.");
            }
          }
        }
        if (local_40 != 0) {
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_01986be0(local_38);
      return;
    }
  }
  *param_1 = 0;
  return;
}


