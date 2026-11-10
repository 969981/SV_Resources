/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f3c38c; name: FUN_01f3c38c
 */


void FUN_01f3c38c(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long local_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  long local_70;
  long lStack_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  lVar6 = *param_2;
  if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
      (uVar5 = nn::nifm::IsNetworkAvailable(), (uVar5 & 1) == 0)) || (DAT_04839fc0 != 4)) {
    FUN_019870e4(&local_78);
    local_98 = &DAT_cbf29ce484222645;
    puStack_90 = &DAT_03c886bc;
    local_88 = 0;
    local_80 = (long *)0x0;
    local_a0 = param_2[1];
    FUN_01f3cd98(&local_28,local_78,&local_98,&local_a0);
    local_c0 = &DAT_cbf29ce484222645;
    puStack_b8 = &DAT_03c886bc;
    local_b0 = 0;
    local_a8 = (long *)0x0;
    lStack_68 = param_2[1];
    local_70 = lVar6;
    FUN_01f3d554(param_1,local_28,&local_c0,&local_70);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[6];
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
      if (sVar2 == 1) {
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01f3c5b0;
    }
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    if (local_78 == (long *)0x0) {
      return;
    }
    lVar6 = local_78[6];
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
  }
  else {
    local_70 = param_2[1];
    if (*(long **)(local_70 + 0x48) == (long *)0x0) {
      local_28 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(local_70 + 0x48) + 0x90))(&local_28);
      local_70 = param_2[1];
    }
    local_60 = &DAT_cbf29ce484222645;
    puStack_58 = &DAT_03c886bc;
    local_50 = 0;
    local_48 = (long *)0x0;
    lStack_68 = lVar6;
    FUN_01f3c5d8(param_1,local_28,&local_60,&local_70);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    if (local_28 == (long *)0x0) {
      return;
    }
    lVar6 = local_28[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      local_78 = local_28;
    } while (cVar3 != '\0');
  }
  if (sVar2 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*local_78 + 0x50))();
  }
  else if (sVar2 == 0) {
LAB_01f3c5b0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


