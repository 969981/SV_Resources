/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1d9c8; name: FUN_01e1d9c8
 */


undefined4 FUN_01e1d9c8(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  
  lVar7 = *(long *)(param_1 + 0x88);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e1da2c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1da2c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          if (*(char *)(*(long *)(lVar7 + 0x1c0) + 0x728) == '\0') {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(*(long *)(lVar7 + 0x1c0) + 0x14d8);
          }
          *(undefined4 *)(param_1 + 0x80) = uVar5;
          uVar6 = FUN_01e1d84c();
          if ((uVar6 & 1) == 0) {
            uVar5 = *(undefined4 *)(param_1 + 0x40);
          }
          else {
            uVar5 = FUN_01e1d5bc(param_1,4);
          }
          lVar8 = *(long *)(lVar7 + 0x70);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar9 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar9 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*(long *)(lVar7 + -0x28) + 0x50))((long *)(lVar7 + -0x28));
            return uVar5;
          }
          if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar5;
        }
        break;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return *(undefined4 *)(param_1 + 0x40);
}


