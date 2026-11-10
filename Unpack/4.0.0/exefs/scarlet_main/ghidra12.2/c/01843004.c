/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01843004; name: FUN_01843004
 */


ulong FUN_01843004(ulong param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_30;
  long *local_28;
  
  FUN_00f10acc(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x18),1);
  if ((local_28 == (long *)0x0) ||
     (FUN_00f63734(&local_30,local_28,*(undefined8 *)(param_1 + 0x80)), local_30 == (long *)0x0)) {
LAB_018430c0:
    param_1 = 0;
  }
  else {
    lVar6 = FUN_01843160();
    iVar5 = FUN_0161b480(lVar6 + 8);
    if (iVar5 == 3) {
      FUN_014f5f08(param_1);
      uVar7 = FUN_00f7e284();
      plVar8 = (long *)FUN_0147ac98(uVar7,1,*(byte *)(lVar6 + 9) & 0xf);
      param_1 = (**(code **)(*plVar8 + 0x98))();
      param_1 = param_1 & 0xffffffff;
    }
    if (local_30 != (long *)0x0) {
      lVar6 = local_30[6];
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
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01843138;
    }
    if (iVar5 != 3) goto LAB_018430c0;
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
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
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_01843138:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return param_1 & 0xffffffff;
}


