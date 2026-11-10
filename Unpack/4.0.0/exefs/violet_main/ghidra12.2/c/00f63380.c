/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f63380; name: FUN_00f63380
 */


undefined8 FUN_00f63380(long param_1,undefined8 param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *local_38;
  long *local_18;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar5 = FUN_00f7e2a0(*(undefined4 *)(lVar6 + 0x36c),*(undefined1 *)(lVar6 + 0x370),param_3 & 0xff)
  ;
  if ((uVar5 & 1) == 0) {
    return 1;
  }
  FUN_00f634c8(&local_18,param_1,param_3);
  plVar7 = local_18;
  if (local_18 == (long *)0x0) {
    uVar8 = 1;
  }
  else {
    FUN_00f63734(&local_38,local_18,param_2);
    if (local_38 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      lVar6 = local_38[6];
      psVar1 = (short *)(lVar6 + 0x1a);
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
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_00f634a0;
      uVar8 = 1;
      plVar7 = local_18;
      if (local_18 == (long *)0x0) {
        return 1;
      }
    }
    lVar6 = plVar7[6];
    psVar1 = (short *)(lVar6 + 0x1a);
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
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) {
LAB_00f634a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return uVar8;
}


