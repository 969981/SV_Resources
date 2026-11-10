/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b9de28; name: FUN_01b9de28
 */


void FUN_01b9de28(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [3];
  long *local_28;
  
  uVar5 = DAT_0480bd68;
  FUN_00e43628(&local_28);
  local_40[0] = param_1;
  if ((1 < *param_3) ||
     (puVar8 = *(undefined8 **)(param_3 + 8), *(undefined8 **)(param_3 + 8) == (undefined8 *)0x0)) {
    if ((*PTR_DAT_047d3c18 & 1) == 0) {
      iVar6 = __cxa_guard_acquire(PTR_DAT_047d3c18);
      puVar8 = (undefined8 *)PTR_DAT_047d3c20;
      if (iVar6 != 0) {
        *(undefined8 *)PTR_DAT_047d3c20 = 0;
        *(undefined8 *)((long)puVar8 + 8) = 0;
        __cxa_guard_release(PTR_DAT_047d3c18);
      }
    }
    else {
      puVar8 = (undefined8 *)PTR_DAT_047d3c20;
    }
  }
  uStack_48 = puVar8[1];
  local_50 = *puVar8;
  FUN_01ba0ec0(uVar5,&local_28,local_40,&local_50);
  if (local_28 != (long *)0x0) {
    lVar7 = local_28[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


