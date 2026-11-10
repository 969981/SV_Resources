/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01072038; name: FUN_01072038
 */


void FUN_01072038(undefined8 param_1,long param_2,undefined4 param_3,ulong param_4)

{
  byte *pbVar1;
  short *psVar2;
  undefined8 *puVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long *local_48;
  long *local_28;
  
  lVar8 = param_2 + (param_4 & 0xff);
  *(undefined1 *)(lVar8 + 0x230) = 0;
  FUN_00f634c8(&local_28,param_1,param_4 & 0xffffffff);
  plVar7 = local_28;
  if (local_28 == (long *)0x0) {
    return;
  }
  FUN_0106f0a8(&local_48,local_28,param_3);
  if (local_48 != (long *)0x0) {
    if ((int)local_48[9] == 0x30) {
      pbVar1 = (byte *)(lVar8 + 0x230);
      if ((ulong)*pbVar1 < 7) {
        lVar8 = local_48[8];
        puVar3 = (undefined8 *)(param_2 + (param_4 & 0xff) * 0x70 + (ulong)*pbVar1 * 0x10);
        *puVar3 = *(undefined8 *)(lVar8 + 0x20);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(lVar8 + 0x28);
        *pbVar1 = *pbVar1 + 1;
      }
      FUN_0106fd7c(plVar7,param_3);
      if (local_48 == (long *)0x0) goto LAB_01072114;
    }
    lVar8 = local_48[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_01072180;
  }
LAB_01072114:
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[6];
    psVar2 = (short *)(lVar8 + 0x1a);
    do {
      sVar4 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_01072180:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


