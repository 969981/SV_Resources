/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0106ef64; name: FUN_0106ef64
 */


undefined8 FUN_0106ef64(long param_1,undefined4 param_2,uint param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *local_38;
  long *local_18;
  
  lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x290) + 8);
  uVar6 = FUN_00f7e2a0(*(undefined4 *)(lVar8 + 0x36c),*(undefined1 *)(lVar8 + 0x370),param_3 & 0xff)
  ;
  if (((uVar6 & 1) == 0) ||
     (FUN_0106f324(&local_18,param_1,param_3), plVar9 = local_18, local_18 == (long *)0x0)) {
LAB_0106f02c:
    uVar7 = 0;
  }
  else {
    FUN_0106f0a8(&local_38,local_18,param_2);
    if (local_38 == (long *)0x0) {
      bVar4 = true;
LAB_0106f004:
      lVar8 = plVar9[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9);
      }
      else if (sVar2 == 0) {
LAB_0106f080:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (bVar4) goto LAB_0106f02c;
    }
    else {
      lVar8 = local_38[6];
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
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0106f080;
      if (local_18 != (long *)0x0) {
        bVar4 = false;
        plVar9 = local_18;
        goto LAB_0106f004;
      }
    }
    uVar7 = 1;
  }
  return uVar7;
}


