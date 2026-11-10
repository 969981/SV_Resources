/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f34b6c; name: FUN_01f34b6c
 */


void FUN_01f34b6c(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long lStack_70;
  undefined2 local_68;
  undefined1 *local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_28;
  
  local_78 = *param_2;
  if ((((DAT_04839fc0 == 1) || (DAT_0485e950 != '\x01')) ||
      (uVar5 = nn::nifm::IsNetworkAvailable(), (uVar5 & 1) == 0)) || (DAT_04839fc0 != 4)) {
    FUN_019870e4(&local_80);
    local_a0 = &DAT_cbf29ce484222645;
    puStack_98 = &DAT_03c886bc;
    local_90 = 0;
    local_88 = (long *)0x0;
    local_a8 = param_2[1];
    FUN_01f356cc(&local_28,local_80,&local_a0,&local_a8);
    local_c8 = &DAT_cbf29ce484222645;
    puStack_c0 = &DAT_03c886bc;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    lStack_70 = param_2[1];
    local_68 = *(undefined2 *)(param_2 + 2);
    FUN_01f35e88(param_1,local_28,&local_c8,&local_78);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
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
      else if (sVar2 == 0) goto LAB_01f34da0;
    }
    if (local_88 != (long *)0x0) {
      (**(code **)(*local_88 + 0x20))();
    }
    if (local_80 == (long *)0x0) {
      return;
    }
    lVar6 = local_80[6];
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
    lStack_70 = param_2[1];
    if (*(long **)(lStack_70 + 0x48) == (long *)0x0) {
      local_28 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(lStack_70 + 0x48) + 0x90))(&local_28);
      lStack_70 = param_2[1];
    }
    local_50 = 0;
    local_48 = (long *)0x0;
    local_60 = &DAT_cbf29ce484222645;
    puStack_58 = &DAT_03c886bc;
    local_68 = *(undefined2 *)(param_2 + 2);
    FUN_01f34f04(param_1,local_28,&local_60,&local_78);
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
      local_80 = local_28;
    } while (cVar3 != '\0');
  }
  if (sVar2 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*local_80 + 0x50))();
  }
  else if (sVar2 == 0) {
LAB_01f34da0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
}


