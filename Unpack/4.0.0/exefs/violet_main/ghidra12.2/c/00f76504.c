/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f76504; name: FUN_00f76504
 */


void FUN_00f76504(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  short sVar7;
  long *plVar8;
  long *plVar9;
  
  for (plVar9 = *(long **)(param_1 + 0x1f0); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9[6] != 0) {
      FUN_02251b70();
    }
  }
  plVar9 = *(long **)(param_1 + 0x120);
  if (plVar9 != (long *)0x0) {
    do {
      FUN_02251b80(plVar9[6] + 0x40);
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    plVar9 = *(long **)(param_1 + 0x120);
    if (plVar9 != (long *)0x0) {
      do {
        FUN_02251b80(plVar9[7] + 0x40);
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
      plVar9 = *(long **)(param_1 + 0x120);
      if (plVar9 != (long *)0x0) {
        do {
          FUN_02251b80(plVar9[8] + 0x40);
          plVar9 = (long *)*plVar9;
        } while (plVar9 != (long *)0x0);
        plVar9 = *(long **)(param_1 + 0x120);
        if (plVar9 != (long *)0x0) {
          do {
            FUN_02251b80(plVar9[9] + 0x40);
            plVar9 = (long *)*plVar9;
          } while (plVar9 != (long *)0x0);
          for (plVar9 = *(long **)(param_1 + 0x120); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9
              ) {
            FUN_02251b80(plVar9[10] + 0x40);
          }
        }
      }
    }
  }
  plVar9 = *(long **)(param_1 + 0x298);
  plVar8 = *(long **)(param_1 + 0x2a0);
  do {
    if (plVar9 == plVar8) {
      return;
    }
    if (((plVar9[1] != 0) && (*(short *)(plVar9[1] + 0x1a) != 0)) && (*plVar9 != 0)) {
      lVar6 = plVar9[1];
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
        plVar5 = (long *)0x0;
      }
      else {
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
            if (cVar3 != '\0') goto LAB_00f766b4;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_00f766b4:
            bVar4 = false;
          }
          if (bVar4) {
            plVar5 = (long *)0x0;
            if (*(long *)(lVar6 + 0x10) != 0) {
              plVar5 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
            }
            break;
          }
          plVar5 = (long *)0x0;
          sVar7 = sVar2;
        } while (sVar2 != 0);
      }
      *(ushort *)(*plVar9 + 0x114) = *(ushort *)(*plVar9 + 0x114) | 4;
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[6];
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
          (**(code **)(*plVar5 + 0x50))();
        }
        else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
    plVar9 = plVar9 + 0xd;
  } while( true );
}


