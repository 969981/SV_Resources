/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dac048; name: FUN_01dac048
 */


undefined1  [16] FUN_01dac048(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  bool bVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 extraout_s0;
  undefined4 uVar10;
  undefined4 extraout_var;
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined8 extraout_var_00;
  
  lVar4 = *param_1;
  uVar8 = 0;
  uVar10 = 0;
  uVar11 = 0;
  if ((lVar4 != 0) && (*(short *)(lVar4 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar4 + 0x1a);
    sVar7 = *(short *)(lVar4 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01dac0a0;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dac0a0:
        bVar6 = false;
      }
      if (bVar6) {
        lVar4 = *(long *)(lVar4 + 0x10);
        plVar5 = (long *)(lVar4 + -0x28);
        if (lVar4 != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)((long)plVar5 + ((long)param_3 >> 1)));
          }
          (*param_2)(0);
          lVar4 = *(long *)(lVar4 + 8);
          psVar1 = (short *)(lVar4 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          uVar8 = extraout_s0;
          if (sVar7 == 1) {
            *(undefined8 *)(lVar4 + 0x10) = 0;
            (**(code **)(*plVar5 + 0x50))(plVar5);
            uVar10 = 0;
            uVar11 = 0;
          }
          else {
            uVar10 = extraout_var;
            uVar11 = extraout_var_00;
            if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.");
            }
          }
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  auVar9._4_4_ = uVar10;
  auVar9._0_4_ = uVar8;
  auVar9._8_8_ = uVar11;
  return auVar9;
}


