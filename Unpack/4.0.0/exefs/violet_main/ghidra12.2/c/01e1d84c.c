/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1d84c; name: FUN_01e1d84c
 */


uint FUN_01e1d84c(long param_1,int param_2)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  short sVar10;
  long *plVar11;
  ulong uVar12;
  undefined4 uVar13;
  
  if (((param_2 == 0) || (lVar8 = *(long *)(param_1 + 0x88), lVar8 == 0)) ||
     (*(short *)(lVar8 + 0x1a) == 0)) {
LAB_01e1d86c:
    uVar7 = 0;
  }
  else {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar10 = *(short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar1;
      if (sVar4 == sVar10) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar10 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01e1d8bc;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1d8bc:
        bVar6 = false;
      }
      if (bVar6) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 != 0) {
          plVar11 = (long *)(lVar8 + -0x28);
          if (param_2 - 1U < 9) {
            uVar12 = *(ulong *)(&DAT_03d30678 + (long)(int)(param_2 - 1U) * 8);
          }
          else {
            uVar12 = 0;
          }
          uVar2 = *(ulong *)(param_1 + 0xf0);
          uVar3 = *(ulong *)(param_1 + 0xf8);
          uVar9 = uVar3 ^ uVar2;
          *(ulong *)(param_1 + 0xf0) = uVar9 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar9 << 0x10;
          *(ulong *)(param_1 + 0xf8) = uVar9 >> 0x1b | uVar9 << 0x25;
          uVar13 = FUN_019587b4(plVar11);
          uVar7 = FUN_014ea828(uVar13,(float)(uVar3 + uVar2) * 5.421011e-20 + 0.0,plVar11,
                               param_1 + 0x70,1L << (uVar12 & 0x3f),0,4);
          lVar8 = *(long *)(lVar8 + 0x70);
          psVar1 = (short *)(lVar8 + 0x1a);
          do {
            sVar10 = *psVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (sVar10 == 1) {
            *(undefined8 *)(lVar8 + 0x10) = 0;
            (**(code **)(*plVar11 + 0x50))(plVar11);
          }
          else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
          break;
        }
        goto LAB_01e1d86c;
      }
      uVar7 = 0;
      sVar10 = sVar4;
    } while (sVar4 != 0);
  }
  return uVar7 & 1;
}


