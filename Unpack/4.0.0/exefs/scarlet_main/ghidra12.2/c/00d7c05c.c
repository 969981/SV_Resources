/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7c05c; name: FUN_00d7c05c
 */


void FUN_00d7c05c(undefined8 *param_1,ulong param_2)

{
  MutexType *pMVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (param_2 != 0) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    if (((*PTR_DAT_047d8c00 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar8 != 0)) {
      FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d8c00);
    }
    lVar10 = *(long *)PTR_DAT_047d8c08;
    *(long *)PTR_DAT_047d8c10 = lVar10;
    lVar13 = *(long *)(lVar10 + 0x70);
    pMVar1 = (MutexType *)(lVar13 + 0x120);
    nn::os::LockMutex(pMVar1);
    lVar10 = *(long *)(lVar13 + 0x210);
    if (lVar10 != 0) {
      lVar11 = lVar13 + 0x210;
      do {
        bVar7 = *(ulong *)(lVar10 + 0x20) < param_2;
        if (!bVar7) {
          lVar11 = lVar10;
        }
        lVar10 = *(long *)(lVar10 + (ulong)bVar7 * 8);
      } while (lVar10 != 0);
      if ((lVar11 != lVar13 + 0x210) && (*(ulong *)(lVar11 + 0x20) <= param_2)) {
        FUN_00d0a71c(&local_48,lVar11 + 0x28);
        nn::os::UnlockMutex(pMVar1);
        *param_1 = 0;
        param_1[1] = 0;
        puVar6 = PTR_DAT_047d6528;
        if (local_48 == (undefined8 *)0x0) {
          return;
        }
        puVar12 = (undefined8 *)local_48[1];
        if (puVar12 != (undefined8 *)0x0) {
          if (((*PTR_DAT_047d6520 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d6520), iVar8 != 0)) {
            uVar9 = FUN_0151c130();
            *(undefined8 *)puVar6 = uVar9;
            __cxa_guard_release(PTR_DAT_047d6520);
          }
          do {
            if (puVar12 == (undefined8 *)puVar6) {
              FUN_00d7c390(param_1,&local_48);
              break;
            }
            puVar12 = (undefined8 *)*puVar12;
          } while (puVar12 != (undefined8 *)0x0);
        }
        puVar12 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          return;
        }
        psVar2 = (short *)(local_48 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)local_48 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 == -1) {
            return;
          }
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *puVar12;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
          return;
        }
        if (sVar4 != 0) {
          return;
        }
        goto LAB_00d7c190;
      }
    }
    nn::os::UnlockMutex(pMVar1);
    puVar12 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_48 + 3);
      do {
        sVar4 = *psVar2;
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar7) {
          *psVar2 = sVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 1) {
        piVar3 = (int *)((long)local_48 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar7) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_38 = *puVar12;
          FUN_00c44438(lVar10 + 0x8040,&local_38);
        }
      }
      else if (sVar4 == 0) {
LAB_00d7c190:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


