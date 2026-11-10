/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0203598c; name: FUN_0203598c
 */


undefined1  [16] FUN_0203598c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar11;
  undefined1 auVar10 [16];
  
  lVar6 = *(long *)(param_1 + 0x48);
  uVar9 = 0;
  uVar11 = 0;
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
        if (cVar3 != '\0') goto LAB_020359ec;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_020359ec:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + -0x28);
          lVar5 = (**(code **)(*(long *)(lVar6 + -0x28) + 0x68))(0,plVar8);
          uVar9 = *(undefined8 *)(lVar5 + 0x30);
          lVar6 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
          uVar11 = *(ulong *)(lVar5 + 0x38) & 0xffffffff;
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
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.",uVar9);
          }
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  auVar10._8_8_ = uVar11;
  auVar10._0_8_ = uVar9;
  return auVar10;
}


