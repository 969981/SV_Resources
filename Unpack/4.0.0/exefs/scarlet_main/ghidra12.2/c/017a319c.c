/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a319c; name: FUN_017a319c
 */


void FUN_017a319c(long param_1)

{
  short *psVar1;
  MutexType *pMVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_28;
  
  if (((*(long *)(param_1 + 0x50) == 0) && (*(long *)(param_1 + 0x58) != 0)) &&
     (lVar11 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar11 != 0)) {
    pMVar2 = (MutexType *)(lVar11 + 0x7618);
    nn::os::LockMutex(pMVar2);
    piVar9 = *(int **)(lVar11 + 200);
    piVar3 = piVar9;
    if (*(long *)(lVar11 + 0xd0) != 0) {
      piVar3 = piVar9 + *(long *)(lVar11 + 0xd0) * 6;
    }
    piVar8 = piVar9;
    if (piVar3 != piVar9) {
      do {
        if (((*piVar9 == *(int *)(param_1 + 0x40)) && (piVar9[1] == *(int *)(param_1 + 0x44))) &&
           (piVar8 = piVar9, piVar9[2] == *(int *)(param_1 + 0x48))) break;
        piVar9 = piVar9 + 6;
        piVar8 = piVar3;
      } while (piVar3 != piVar9);
    }
    local_60 = 0;
    if (piVar3 == piVar8) {
      nn::os::UnlockMutex(pMVar2);
      return;
    }
    local_58 = *(undefined8 *)piVar8;
    local_50 = *(undefined8 *)(piVar8 + 2);
    uStack_48 = *(undefined8 *)(piVar8 + 4);
    local_60 = 1;
    nn::os::UnlockMutex(pMVar2);
    FUN_017a3438(&local_28,*(undefined8 *)(param_1 + 8),&uStack_48,(long)&local_50 + 4);
    local_68 = local_28;
    if (local_28 != (long *)0x0) {
      lVar10 = local_28[6];
      if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
        *(undefined8 *)(lVar10 + 8) = uVar7;
        *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    FUN_017a342c(param_1,&local_68);
    if (local_68 != (long *)0x0) {
      lVar10 = local_68[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*local_68 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_017a336c;
    }
    thunk_FUN_017a34fc(lVar11 + -0x28,param_1 + 0x40);
    if (local_28 != (long *)0x0) {
      lVar11 = local_28[6];
      psVar1 = (short *)(lVar11 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar11 + 0x10) = 0;
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_017a336c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


