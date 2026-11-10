/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f88294; name: FUN_01f88294
 */


undefined4 FUN_01f88294(long param_1)

{
  short *psVar1;
  long *plVar2;
  undefined2 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  lVar8 = *(long *)(param_1 + 0x58);
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
        if (cVar5 != '\0') goto LAB_01f882f8;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01f882f8:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x48) = 4;
        lVar7 = *(long *)(param_1 + 0x50);
        if ((lVar7 != 0) &&
           ((*(char *)(lVar7 + 0x58) != '\x03' || (*(char *)(lVar7 + 0x59) != '\x03')))) {
          uVar3 = *(undefined2 *)(lVar7 + 0x58);
          plVar2 = (long *)(lVar7 + 0x38);
          *(undefined2 *)(lVar7 + 0x58) = 0x303;
          if (*(long *)(lVar7 + 0x48) != 0) {
            FUN_00c6a584(*(long *)(lVar7 + 0x48),plVar2);
          }
          (**(code **)(*plVar2 + 0x20))(plVar2,uVar3);
        }
        lVar7 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar7 + 0x1a);
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
          *(undefined8 *)(lVar7 + 0x10) = 0;
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
        }
        else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return 1;
      }
      sVar9 = sVar4;
    } while (sVar4 != 0);
  }
  return 0;
}


