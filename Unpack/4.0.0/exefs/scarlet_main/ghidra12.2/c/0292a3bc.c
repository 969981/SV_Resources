/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292a3bc; name: FUN_0292a3bc
 */


undefined8 FUN_0292a3bc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *local_30;
  long *local_28;
  
  FUN_01497d84();
  uVar6 = FUN_0159fe8c();
  uVar7 = FUN_017e4fe4(param_1);
  FUN_00f10acc(&local_28,uVar7,uVar6);
  if (local_28 == (long *)0x0) {
    return 0;
  }
  FUN_00f63734(&local_30,local_28,*(undefined8 *)(param_1 + 0x80));
  if (local_30 == (long *)0x0) {
LAB_0292a444:
    bVar4 = true;
  }
  else {
    pcVar8 = (char *)FUN_01843160();
    if (*pcVar8 != '\0') {
      if (local_30 != (long *)0x0) {
        lVar9 = local_30[6];
        psVar1 = (short *)(lVar9 + 0x1a);
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
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_30 + 0x50))();
        }
        else if (sVar2 == 0) goto LAB_0292a500;
      }
      goto LAB_0292a444;
    }
    if (local_30 != (long *)0x0) {
      lVar9 = local_30[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_30 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0292a500;
    }
    bVar4 = false;
  }
  if (local_28 != (long *)0x0) {
    lVar9 = local_28[6];
    psVar1 = (short *)(lVar9 + 0x1a);
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
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar2 == 0) {
LAB_0292a500:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (bVar4) {
    return 0;
  }
  return 1;
}


