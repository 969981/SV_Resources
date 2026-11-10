/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028adfd8; name: FUN_028adfd8
 */


void FUN_028adfd8(long *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  char *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 local_5d;
  undefined4 local_55;
  
  if (*(long *)(param_2 + 0x420) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  nn::os::LockMutex((MutexType *)(param_2 + 0x3f0));
  if (*(long *)(param_2 + 0x3b0) == 0) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)(param_2 + 0x370) + (*(ulong *)(param_2 + 0x3a8) / 0xaa) * 8);
    uVar12 = *(ulong *)(param_2 + 0x3a8) % 0xaa;
    lVar8 = *(long *)(lVar11 + uVar12 * 0x18);
    if (lVar8 != 0) {
      lVar10 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar9;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    bVar4 = *(char *)(lVar11 + uVar12 * 0x18 + 8) != '\0';
    if (bVar4) {
      lVar11 = lVar11 + uVar12 * 0x18;
      local_5d = *(undefined8 *)(lVar11 + 0xc);
      local_55 = *(undefined4 *)(lVar11 + 0x14);
    }
    *(long *)(param_2 + 0x420) = *(long *)(param_2 + 0x3b0) + -1;
    uVar12 = *(ulong *)(param_2 + 0x3a8) % 0xaa;
    lVar11 = *(long *)(*(long *)(param_2 + 0x370) + (*(ulong *)(param_2 + 0x3a8) / 0xaa) * 8);
    pcVar7 = (char *)(lVar11 + uVar12 * 0x18 + 8);
    if (*pcVar7 != '\0') {
      *pcVar7 = '\0';
    }
    plVar6 = *(long **)(lVar11 + uVar12 * 0x18);
    if (plVar6 != (long *)0x0) {
      lVar11 = plVar6[6];
      psVar1 = (short *)(lVar11 + 0x1a);
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
        *(undefined8 *)(lVar11 + 0x10) = 0;
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
    *(long *)(param_2 + 0x3b0) = *(long *)(param_2 + 0x3b0) + -1;
    uVar12 = *(long *)(param_2 + 0x3a8) + 1;
    *(ulong *)(param_2 + 0x3a8) = uVar12;
    if (0x153 < uVar12) {
      plVar6 = *(long **)(param_2 + 0x3b8);
      uVar9 = **(undefined8 **)(param_2 + 0x370);
      uVar12 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar12 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar9,0xff0,8);
      }
      else {
        FUN_00c48fe8(plVar6,uVar9,0xff0,8);
      }
      *(long *)(param_2 + 0x370) = *(long *)(param_2 + 0x370) + 8;
      *(long *)(param_2 + 0x3a8) = *(long *)(param_2 + 0x3a8) + -0xaa;
    }
    nn::os::SignalConditionVariable((ConditionVariableType *)(param_2 + 0x410));
    *param_1 = lVar8;
    *(undefined1 *)(param_1 + 1) = 0;
    if (bVar4) {
      *(undefined4 *)((long)param_1 + 0x14) = local_55;
      *(undefined8 *)((long)param_1 + 0xc) = local_5d;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x3f0));
  return;
}


