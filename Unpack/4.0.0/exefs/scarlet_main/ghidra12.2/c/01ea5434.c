/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea5434; name: FUN_01ea5434
 */


void FUN_01ea5434(undefined8 param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  if ((*(long *)(param_2 + 8) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 8) + 0x10), lVar8 != 0)) {
    local_28 = FUN_00f4189c();
    FUN_0175177c(local_38,param_1,&local_28,1);
    if ((*(long *)(lVar8 + 0x360) == 0) || (*(short *)(*(long *)(lVar8 + 0x360) + 0x1a) == 0)) {
      if (local_38[0] == (undefined8 *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (local_38[0][2] != 0) {
          lVar7 = local_38[0][2] + -0x28;
        }
      }
      FUN_00dfba48(lVar8 + -0x28,lVar7);
      if (local_38[0] == (undefined8 *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        if (local_38[0][2] != 0) {
          lVar7 = local_38[0][2] + -0x28;
        }
      }
      local_58 = 0x6c33c1076006549f;
      pcStack_50 = "spine_02_attach_off";
      local_48 = 0x13;
      local_40 = (long *)0x0;
      FUN_0133ce14(lVar8 + -0x28,lVar7,&local_58);
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_38[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_38[0] + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_38[0] + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_58 = *local_38[0];
          FUN_00c44438(lVar8 + 0x8040,&local_58);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}


