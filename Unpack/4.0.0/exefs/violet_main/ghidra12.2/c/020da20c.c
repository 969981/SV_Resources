/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020da20c; name: FUN_020da20c
 */


void FUN_020da20c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_0457f478;
  FUN_020d9690(0);
  FUN_013e5380(param_1 + 6);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x30));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2c));
  FUN_020da37c(param_1 + 0x25);
  FUN_020da4a8(param_1 + 0x1d);
  lVar9 = param_1[0x14];
  if (lVar9 != 0) {
    lVar3 = param_1[0x16];
    plVar6 = (long *)param_1[0x17];
    param_1[0x15] = lVar9;
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar9,lVar3 - lVar9,8);
        goto LAB_020da26c;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,lVar3 - lVar9,8);
  }
LAB_020da26c:
  FUN_020da548(param_1 + 6);
  plVar6 = (long *)param_1[5];
  if (plVar6 != (long *)0x0) {
    lVar9 = plVar6[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
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
  if ((long *)param_1[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x020da33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x20))();
  return;
}


