/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01987b14; name: FUN_01987b14
 */


void FUN_01987b14(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  long *local_8;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar6 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar6;
  if (lVar6 == 0) {
    local_40 = 0x21f2888fa600744a;
    pcStack_38 = "NoNeedToLeave";
    local_30 = 0xd;
    local_28 = (long *)0x0;
    FUN_01987400(param_1,&local_40,&DAT_03d5bad0);
    if (local_28 == (long *)0x0) {
      return;
    }
    pcVar8 = *(code **)(*local_28 + 0x20);
  }
  else {
    FUN_01987d54(&local_8);
    if (local_8 == (long *)0x0) {
      local_60 = 0x21f2888fa600744a;
      pcStack_58 = "NoNeedToLeave";
      local_50 = 0xd;
      local_48 = (long *)0x0;
      FUN_01987400(param_1,&local_60,&DAT_03d5bad0);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
    }
    else {
      *param_1 = local_8;
      lVar6 = local_8[6];
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
        uVar7 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
        *(undefined8 *)(lVar6 + 8) = uVar7;
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
    if (local_8 == (long *)0x0) {
      return;
    }
    lVar6 = local_8[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 != 1) {
      if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      return;
    }
    *(undefined8 *)(lVar6 + 0x10) = 0;
    pcVar8 = *(code **)(*local_8 + 0x50);
  }
  (*pcVar8)();
  return;
}


