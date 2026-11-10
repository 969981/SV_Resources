/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1d5bc; name: FUN_01e1d5bc
 */


undefined4 FUN_01e1d5bc(long param_1,ulong param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  ulong uVar10;
  
  lVar7 = *(long *)(param_1 + 0x88);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      uVar10 = param_2 & 0xffffffff;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e1d62c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1d62c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 != 0) {
          plVar9 = (long *)(lVar7 + -0x28);
          uVar5 = FUN_01e1c638(plVar9,param_2);
          if (uVar5 < 0x19) {
            uVar6 = *(undefined4 *)(&DAT_03d305c0 + (ulong)uVar5 * 4);
          }
          else {
            uVar6 = 0;
          }
          FUN_01e1e318(param_1,1,uVar6,uVar10);
          uVar6 = FUN_01e1e544(param_1,1,uVar6,uVar10);
          lVar7 = *(long *)(lVar7 + 0x70);
          psVar1 = (short *)(lVar7 + 0x1a);
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
            (**(code **)(*plVar9 + 0x50))(plVar9);
            return uVar6;
          }
          if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar6;
        }
        break;
      }
      param_2 = uVar10;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  return *(undefined4 *)(param_1 + 0x40);
}


