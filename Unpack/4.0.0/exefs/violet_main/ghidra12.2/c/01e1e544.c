/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1e544; name: FUN_01e1e544
 */


undefined4 FUN_01e1e544(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  short sVar12;
  
  plVar8 = (long *)FUN_01400aa8();
  if ((((*plVar8 != 0) && (*(short *)(*plVar8 + 0x1a) != 0)) && (lVar10 = *plVar8, lVar10 != 0)) &&
     (*(short *)(lVar10 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar10 + 0x1a);
    sVar12 = *(short *)(lVar10 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar12) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01e1e5dc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1e5dc:
        bVar6 = false;
      }
      if (bVar6) {
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 != 0) {
          plVar8 = (long *)(lVar10 + -0x28);
          uVar9 = FUN_01e1e6dc(plVar8,param_2,param_3,param_4);
          if (uVar9 == 0) {
            uVar7 = *(undefined4 *)(param_1 + 0x40);
          }
          else {
            uVar2 = *(ulong *)(param_1 + 0xf0);
            uVar3 = *(ulong *)(param_1 + 0xf8);
            uVar11 = uVar3 ^ uVar2;
            *(ulong *)(param_1 + 0xf0) = uVar11 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar11 << 0x10;
            *(ulong *)(param_1 + 0xf8) = uVar11 >> 0x1b | uVar11 << 0x25;
            uVar7 = FUN_01e1eb54(plVar8,param_2,param_3,param_4,
                                 (long)(int)((float)(uVar3 + uVar2) * 5.421011e-20 * (float)uVar9 +
                                            0.0));
          }
          lVar10 = *(long *)(lVar10 + 8);
          psVar1 = (short *)(lVar10 + 0x1a);
          do {
            sVar12 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar12 == 1) {
            *(undefined8 *)(lVar10 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
            return uVar7;
          }
          if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          return uVar7;
        }
        break;
      }
      sVar12 = sVar4;
    } while (sVar4 != 0);
  }
  return *(undefined4 *)(param_1 + 0x40);
}


