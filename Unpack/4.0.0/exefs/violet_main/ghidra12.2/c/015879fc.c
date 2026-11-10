/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015879fc; name: FUN_015879fc
 */


void FUN_015879fc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar8 = (*(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40)) - 1;
  plVar6 = *(long **)(*(long *)(*(long *)(param_1 + 8) + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                     (uVar8 & 0x1ff) * 8);
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
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
  lVar9 = *(long *)(param_1 + 0x48) + -1;
  *(long *)(param_1 + 0x48) = lVar9;
  lVar5 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  lVar7 = 0;
  if (lVar5 != 0) {
    lVar7 = lVar5 * 0x40 + -1;
  }
  if ((ulong)(lVar7 - (*(long *)(param_1 + 0x40) + lVar9)) < 0x400) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0x50);
  uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
  uVar8 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar8 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar10,0x1000,8);
  }
  else {
    FUN_00c48fe8(plVar6,uVar10,0x1000,8);
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  return;
}


