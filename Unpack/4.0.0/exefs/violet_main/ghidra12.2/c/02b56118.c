/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b56118; name: FUN_02b56118
 */


undefined1  [16] FUN_02b56118(float *param_1,ulong *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  float fVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar10 = *param_2;
  lVar6 = *(long *)(param_1 + 2);
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
        if (cVar3 != '\0') goto LAB_02b5617c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02b5617c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar8 = (long *)(lVar6 + -0x28);
          lVar5 = (**(code **)(*(long *)(lVar6 + -0x28) + 0x68))(plVar8);
          fVar9 = *(float *)(lVar5 + 0x34) + *param_1;
          lVar6 = *(long *)(lVar6 + 8);
          psVar1 = (short *)(lVar6 + 0x1a);
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
            uVar10 = (ulong)(uint)fVar9;
          }
          else {
            uVar10 = (ulong)(uint)fVar9;
            if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x60,"Reference counter underflows.",uVar10);
            }
          }
          goto LAB_02b56138;
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  uVar10 = uVar10 >> 0x20;
LAB_02b56138:
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar10;
  return auVar11;
}


