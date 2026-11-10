/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019ea0c8; name: FUN_019ea0c8
 */


long * FUN_019ea0c8(long param_1,uint param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *local_18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar7 = *(ulong *)(param_1 + 0x30);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar11 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar8 = (ulong)param_2;
    if (uVar11 < 2) {
      uVar9 = (ulong)((int)uVar7 - 1U & param_2);
    }
    else {
      uVar9 = uVar8;
      if (uVar7 <= uVar8) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar8 / uVar7;
        }
        uVar9 = uVar8 - uVar9 * uVar7;
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x28) + uVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar10[1] == uVar8) {
            if (*(uint *)(plVar10 + 2) == param_2) goto LAB_019ea170;
          }
          else if ((plVar10[1] & uVar7 - 1) != uVar9) goto LAB_019ea238;
          plVar10 = (long *)*plVar10;
          plVar12 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar10[1];
          if (uVar11 == uVar8) {
            if (*(uint *)(plVar10 + 2) == param_2) goto LAB_019ea170;
          }
          else {
            if (uVar7 <= uVar11) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar11 / uVar7;
              }
              uVar11 = uVar11 - uVar5 * uVar7;
            }
            if (uVar11 != uVar9) goto LAB_019ea238;
          }
          plVar10 = (long *)*plVar10;
          plVar12 = (long *)0x0;
        } while (plVar10 != (long *)0x0);
      }
      goto LAB_019ea184;
    }
  }
LAB_019ea238:
  plVar12 = (long *)0x0;
  goto LAB_019ea184;
LAB_019ea170:
  FUN_019ea284(&local_18,plVar10[3]);
  plVar12 = local_18;
  if (local_18 != (long *)0x0) {
    lVar6 = local_18[6];
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
      (**(code **)(*local_18 + 0x50))(local_18);
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_019ea184:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return plVar12;
}


