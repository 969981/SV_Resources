/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02256d70; name: FUN_02256d70
 */


void FUN_02256d70(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  *param_1 = &PTR_FUN_045ac800;
  param_1[4] = &PTR_LAB_045ac830;
  FUN_02256ee4(param_1 + 0x2f);
  pcVar8 = (code *)param_1[0x1f];
  if (pcVar8 != (code *)0x0) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    (*pcVar8)(param_1 + 0x22);
  }
  plVar11 = (long *)param_1[0x17];
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)param_1[0x18];
    if (plVar10 == plVar11) {
      plVar10 = plVar11;
    }
    else {
      do {
        plVar10 = plVar10 + -1;
        if ((long *)*plVar10 != (long *)0x0) {
          (**(code **)(*(long *)*plVar10 + 0x20))();
        }
      } while (plVar11 != plVar10);
      plVar10 = (long *)param_1[0x17];
    }
    lVar9 = param_1[0x19];
    plVar3 = (long *)param_1[0x1a];
    param_1[0x18] = plVar11;
    uVar6 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if ((uVar6 & 1) != 0) {
      lVar7 = FUN_00c4e600();
      if (0 < *(int *)(lVar7 + 0x12c8)) {
        FUN_00c48fe8(plVar3,plVar10,lVar9 - (long)plVar10,8);
        goto LAB_02256e30;
      }
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar10,lVar9 - (long)plVar10,8);
  }
LAB_02256e30:
  FUN_02256f24(param_1 + 10);
  plVar11 = (long *)param_1[9];
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[6];
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
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 5));
  return;
}


