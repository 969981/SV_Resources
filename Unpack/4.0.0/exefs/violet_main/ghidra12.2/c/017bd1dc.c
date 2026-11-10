/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017bd1dc; name: FUN_017bd1dc
 */


void FUN_017bd1dc(long *param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  plVar10 = param_1 + 3;
  lVar5 = FUN_017bd408(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar12 = *param_1;
  lVar8 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar5 << 3,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xe8))();
    }
  }
  lVar8 = lVar6 + (lVar8 - lVar12 >> 3) * 8;
  FUN_01410d1c(plVar10,lVar8,param_2);
  plVar11 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  lVar12 = lVar8 + 8;
  if (plVar13 == plVar11) {
    plVar13 = plVar11;
  }
  else {
    lVar8 = lVar8 + -8;
    FUN_01410a7c(plVar10,lVar8,plVar13 + -1);
    if (plVar13 + -1 != plVar11) {
      do {
        lVar8 = lVar8 + -8;
        FUN_01410a7c(plVar10,lVar8,plVar13 + -2);
        plVar13 = plVar13 + -1;
      } while (plVar11 + 1 != plVar13);
    }
    plVar11 = (long *)*param_1;
    plVar13 = (long *)param_1[1];
  }
  *param_1 = lVar8;
  param_1[1] = lVar12;
  lVar12 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 8;
  while (plVar13 != plVar11) {
    plVar13 = plVar13 + -1;
    plVar9 = (long *)*plVar13;
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar7 = (**(code **)(*plVar10 + 0xf8))(plVar10);
  if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x017bd314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar10 + 0x18))(plVar10,plVar11,lVar12 - (long)plVar11,8);
    return;
  }
  FUN_00c48fe8(plVar10,plVar11,lVar12 - (long)plVar11,8);
  return;
}


