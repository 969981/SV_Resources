/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f9fec4; name: FUN_01f9fec4
 */


undefined1 FUN_01f9fec4(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 *local_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined1 *local_90 [12];
  undefined1 local_14 [4];
  
  local_14[0] = 0;
  lVar6 = *(long *)(param_1 + 0x168);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f9ff30;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f9ff30:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return 0;
        }
        local_90[0] = local_14;
        plVar8 = (long *)(lVar6 + -0x28);
        local_b0 = &LAB_02a2f1a8;
        local_a8 = FUN_02a2f1b8;
        local_a0 = &LAB_02a2f1bc;
        puStack_98 = &LAB_02a2f1c8;
        local_d0 = &DAT_afc4d6c05abef19e;
        pcStack_c8 = "default";
        local_c0 = 7;
        local_b8 = (long *)0x0;
        FUN_01e17b9c(plVar8,param_2,&local_b0,&local_d0);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        pcVar5 = local_a8;
        if (local_a8 != (code *)0x0) {
          local_a0 = (undefined1 *)0x0;
          puStack_98 = (undefined1 *)0x0;
          local_b0 = (undefined1 *)0x0;
          local_a8 = (code *)0x0;
          (*pcVar5)(local_90);
        }
        lVar6 = *(long *)(lVar6 + 0x70);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return local_14[0];
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return local_14[0];
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return 0;
}


