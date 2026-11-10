/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01faaad4; name: FUN_01faaad4
 */


void FUN_01faaad4(long *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  if (param_1[0xb] != 0) {
    plVar5 = (long *)param_1[6];
    while (plVar5 != (long *)0x0) {
      plVar11 = (long *)*plVar5;
      plVar6 = (long *)plVar5[3];
      if (plVar6 != (long *)0x0) {
        lVar10 = plVar6[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar6 = (long *)param_1[7];
      uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar7 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x20,8);
        plVar5 = plVar11;
      }
      else {
        FUN_00c48fe8(plVar6,plVar5,0x20,8);
        plVar5 = plVar11;
      }
    }
    uVar7 = param_1[1];
    param_1[6] = 0;
    if (uVar7 != 0) {
      uVar8 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar9 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar9 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar9 * 8 + 0x10) = 0;
          lVar10 = uVar9 * 8;
          uVar9 = uVar9 + 4;
          *(undefined8 *)(*param_1 + lVar10 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar9);
      }
      if (uVar8 != 0) {
        lVar10 = uVar9 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar10) = 0;
          uVar8 = uVar8 - 1;
          lVar10 = lVar10 + 8;
        } while (uVar8 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}


