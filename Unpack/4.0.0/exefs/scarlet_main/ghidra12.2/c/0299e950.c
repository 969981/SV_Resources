/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299e950; name: FUN_0299e950
 */


void FUN_0299e950(long param_1,long *param_2)

{
  MutexType *pMVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  pMVar1 = (MutexType *)(param_1 + 0xe0);
  iVar4 = *(int *)(*param_2 + 0x120);
  nn::os::LockMutex(pMVar1);
  plVar11 = *(long **)(param_1 + 0x70);
  plVar9 = *(long **)(param_1 + 0x78);
  plVar10 = (long *)*param_2;
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[6];
    if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar7;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  if ((plVar11 != plVar9) && ((long *)*plVar11 != plVar10)) {
    do {
      plVar8 = plVar11 + 1;
      plVar11 = plVar9;
      if (plVar9 == plVar8) break;
      plVar11 = plVar8;
    } while ((long *)*plVar8 != plVar10);
  }
  if (plVar10 != (long *)0x0) {
    lVar12 = plVar10[6];
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  if (*(long **)(param_1 + 0x78) == plVar11) {
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  FUN_0299d6b8(*param_2);
  FUN_029a2ef8((undefined8 *)(param_1 + 0x70),plVar11);
  nn::os::UnlockMutex(pMVar1);
  if (0 < iVar4) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x100));
    *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) - iVar4;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x100));
    for (lVar12 = *(long *)(param_1 + 0x68); lVar12 != 0; lVar12 = *(long *)(lVar12 + 0x68)) {
      nn::os::LockMutex((MutexType *)(lVar12 + 0x100));
      *(int *)(lVar12 + 0x120) = *(int *)(lVar12 + 0x120) - iVar4;
      nn::os::UnlockMutex((MutexType *)(lVar12 + 0x100));
    }
  }
  return;
}


