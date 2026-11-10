/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021367a8; name: FUN_021367a8
 */


void FUN_021367a8(long param_1)

{
  short *psVar1;
  ulong uVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined1 auStack_28 [8];
  
  lVar6 = *(long *)(param_1 + 0x78);
  if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar7 = *(short *)(lVar6 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar7) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_02136804;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02136804:
        bVar5 = false;
      }
      if (bVar5) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 == 0) {
          return;
        }
        cVar4 = *(char *)(lVar6 + 0x408);
        uVar2 = *(ulong *)(lVar6 + 0x410) & 0xfffffffe;
        plVar8 = (long *)(lVar6 + -0x28);
        *(ulong *)(lVar6 + 0x410) = *(ulong *)(lVar6 + 0x410) & 0xfffffffffffffffe;
        *(bool *)(lVar6 + 0x408) = uVar2 != 0;
        if ((cVar4 != '\0') && (uVar2 == 0)) {
          FUN_00d37964(plVar8,2,0);
          FUN_00d37964(plVar8,0,0);
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x110))(plVar8);
          FUN_00d38190(lVar6 + 0xe0,auStack_28);
        }
        lVar6 = *(long *)(lVar6 + 8);
        psVar1 = (short *)(lVar6 + 0x1a);
        do {
          sVar7 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar7 == 1) {
          *(undefined8 *)(lVar6 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return;
        }
        if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar7 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


