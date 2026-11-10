/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0151bf90; name: FUN_0151bf90
 */


void FUN_0151bf90(undefined8 param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  short sVar8;
  
  lVar5 = *param_2;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_0151bff0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0151bff0:
        bVar4 = false;
      }
      if (bVar4) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        pcVar6 = *(code **)(lVar5 + 0x450);
        if (pcVar6 != (code *)0x0) {
          *(undefined8 *)(lVar5 + 0x458) = 0;
          *(undefined8 *)(lVar5 + 0x460) = 0;
          *(undefined8 *)(lVar5 + 0x448) = 0;
          *(undefined8 *)(lVar5 + 0x450) = 0;
          (*pcVar6)(lVar5 + 0x468);
        }
        *(code **)(lVar5 + 0x448) = FUN_00ff456c;
        *(undefined1 **)(lVar5 + 0x458) = &LAB_02a30044;
        *(undefined1 **)(lVar5 + 0x460) = &LAB_02a30050;
        lVar7 = *(long *)(lVar5 + 8);
        *(undefined1 **)(lVar5 + 0x450) = &LAB_02a30040;
        psVar1 = (short *)(lVar7 + 0x1a);
        *(undefined8 *)(lVar5 + 0x468) = param_1;
        do {
          sVar8 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar8 == 1) {
          *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0151c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
          return;
        }
        if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}


