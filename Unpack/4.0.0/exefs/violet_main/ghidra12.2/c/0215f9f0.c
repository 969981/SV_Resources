/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0215f9f0; name: FUN_0215f9f0
 */


void FUN_0215f9f0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_38;
  
  plVar9 = (long *)param_1[4];
  local_38 = param_5;
  if (plVar9 == (long *)0x0) {
    FUN_0215fb8c(&local_38,param_1,param_2);
    lVar5 = param_2 + 8;
  }
  else {
    lVar5 = FUN_0215f860(param_1,plVar9,param_4,param_2);
    FUN_0215fb8c(&local_38,param_1,lVar5);
    lVar5 = FUN_0215f860(param_1,param_4,plVar9 + param_1[5],lVar5 + 8);
    for (lVar11 = param_1[5]; lVar11 != 0; lVar11 = lVar11 + -1) {
      plVar6 = (long *)*plVar9;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
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
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      plVar9 = plVar9 + 1;
    }
    lVar11 = param_1[6];
    plVar9 = (long *)*param_1;
    uVar10 = param_1[4];
    uVar7 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,uVar10,lVar11 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar9,uVar10,lVar11 << 3,8);
    }
  }
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = lVar5 - param_2 >> 3;
  return;
}


