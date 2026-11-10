/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010f38f0; name: FUN_010f38f0
 */


undefined1  [16] FUN_010f38f0(long *param_1,code *param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  bool bVar7;
  short sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar13;
  undefined1 auVar12 [16];
  undefined8 uVar14;
  
  lVar5 = *param_1;
  uVar9 = 0;
  uVar13 = 0;
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar8 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar7) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_010f395c;
        bVar7 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010f395c:
        bVar7 = false;
      }
      if (bVar7) {
        lVar5 = *(long *)(lVar5 + 0x10);
        plVar6 = (long *)(lVar5 + -0x28);
        if (lVar5 != 0) {
          if ((param_3 & 1) != 0) {
            param_2 = *(code **)(param_2 + *(long *)((long)plVar6 + ((long)param_3 >> 1)));
          }
          puVar4 = (undefined8 *)(*param_2)(0,0,0,0);
          uVar13 = puVar4[1];
          uVar9 = *puVar4;
          uVar14 = puVar4[2];
          uVar10 = puVar4[4];
          uVar11 = puVar4[6];
          lVar5 = *(long *)(lVar5 + 8);
          psVar1 = (short *)(lVar5 + 0x1a);
          do {
            sVar8 = *psVar1;
            cVar3 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar8 == 1) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
            (**(code **)(*plVar6 + 0x50))(plVar6);
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.",uVar9,uVar14,uVar10,uVar11);
          }
        }
        break;
      }
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  auVar12._8_8_ = uVar13;
  auVar12._0_8_ = uVar9;
  return auVar12;
}


