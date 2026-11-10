/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dfa1e0; name: FUN_01dfa1e0
 */


void FUN_01dfa1e0(float param_1)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  short sVar9;
  float local_54;
  undefined1 auStack_50 [24];
  long *local_38;
  float local_28;
  float local_24;
  
  local_24 = param_1;
  plVar7 = (long *)FUN_01df9e98();
  lVar8 = *plVar7;
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar9) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar9 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01dfa250;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dfa250:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return;
        }
        plVar7 = (long *)(lVar8 + -0x28);
        FUN_00d8fb98(auStack_50,&DAT_04543640);
        local_54 = 100.0;
        pfVar2 = &local_54;
        if (param_1 <= 100.0) {
          pfVar2 = &local_24;
        }
        local_28 = 0.0;
        pfVar3 = &local_28;
        if (0.0 <= param_1) {
          pfVar3 = pfVar2;
        }
        (**(code **)(*plVar7 + 0x138))(*pfVar3,plVar7,auStack_50,0);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        lVar8 = *(long *)(lVar8 + 0x70);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
          return;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  return;
}


