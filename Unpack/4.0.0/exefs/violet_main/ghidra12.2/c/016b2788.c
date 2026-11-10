/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016b2788; name: FUN_016b2788
 */


undefined8 FUN_016b2788(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long *plVar9;
  
  plVar8 = *(long **)(param_1 + 0x68);
  while( true ) {
    if ((long *)(param_1 + 0x60) == plVar8) {
      return 0;
    }
    if (plVar8[2] == param_2) break;
    plVar8 = (long *)plVar8[1];
  }
  if ((((plVar8[0x14] != 0) && (lVar6 = *(long *)(plVar8[0x14] + 0x28), lVar6 != 0)) &&
      (*(short *)(lVar6 + 0x1a) != 0)) &&
     ((lVar6 = *(long *)(plVar8[0x14] + 0x28), lVar6 != 0 && (*(short *)(lVar6 + 0x1a) != 0)))) {
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
        if (cVar3 != '\0') goto LAB_016b28c4;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_016b28c4:
        bVar4 = false;
      }
      if (bVar4) {
        lVar6 = *(long *)(lVar6 + 0x10);
        if (lVar6 != 0) {
          plVar9 = (long *)(lVar6 + -0x28);
          (**(code **)(*(long *)(lVar6 + -0x28) + 0x120))(plVar9,1);
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
            (**(code **)(*plVar9 + 0x50))(plVar9);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        break;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  *(long *)(*plVar8 + 8) = plVar8[1];
  *(long *)plVar8[1] = *plVar8;
  *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
  FUN_014f0470(plVar8 + 2);
  plVar9 = *(long **)(param_1 + 0x78);
  uVar5 = (**(code **)(*plVar9 + 0xf8))(plVar9);
  if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
    (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0xd0,0x10);
  }
  else {
    FUN_00c48fe8(plVar9,plVar8,0xd0,0x10);
  }
  return 1;
}


