/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01937c28; name: FUN_01937c28
 */


void FUN_01937c28(long *param_1)

{
  MutexType *pMVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_18;
  
  if (((DAT_04839b78 & 1) == 0) &&
     (local_18 = param_1, iVar9 = __cxa_guard_acquire(&DAT_04839b78), param_1 = local_18, iVar9 != 0
     )) {
    FUN_00100190(&LAB_00b1ecf8,&DAT_04839b68,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04839b78);
    param_1 = local_18;
  }
  lVar11 = DAT_04839b68;
  DAT_04839b60 = DAT_04839b68;
  if (DAT_04839b68 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_04839b68 + 0x468);
  nn::os::LockMutex(pMVar1);
  if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
    lVar10 = *(long *)(lVar11 + 0x50);
    lVar5 = *(long *)(lVar11 + 0x58);
    if (lVar10 == lVar5) {
LAB_01937d50:
      if (lVar10 != lVar5) {
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        FUN_00ca1ea4(lVar10 + 0x78,&local_40);
        puVar8 = local_40;
        if (local_40 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_40 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_40 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_18 = (long *)*puVar8;
              FUN_00c44438(lVar11 + 0x8040,&local_18);
            }
          }
          else if (sVar4 == 0) goto LAB_01937db4;
        }
        FUN_00de97a4(param_1);
        goto LAB_01937d78;
      }
    }
    else {
      do {
        if (*(long *)(lVar10 + 0x78) == *param_1) goto LAB_01937d50;
        lVar10 = lVar10 + 0xd0;
      } while (lVar5 != lVar10);
    }
    lVar10 = *(long *)(lVar11 + 0x88);
    lVar11 = *(long *)(lVar11 + 0x90);
    if (lVar10 == lVar11) {
LAB_01937ddc:
      if (lVar10 != lVar11) {
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        FUN_00ca1ea4(lVar10 + 0x78,&local_40);
        puVar8 = local_40;
        if (local_40 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_40 + 3);
          do {
            sVar4 = *psVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar7) {
              *psVar2 = sVar4 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (sVar4 == 1) {
            piVar3 = (int *)((long)local_40 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar7) {
                *piVar3 = -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_18 = (long *)*puVar8;
              FUN_00c44438(lVar11 + 0x8040,&local_18);
            }
          }
          else if (sVar4 == 0) {
LAB_01937db4:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        FUN_01ea3384(param_1);
      }
    }
    else {
      do {
        if (*(long *)(lVar10 + 0x78) == *param_1) goto LAB_01937ddc;
        lVar10 = lVar10 + 0xc0;
      } while (lVar11 != lVar10);
    }
  }
LAB_01937d78:
  nn::os::UnlockMutex(pMVar1);
  return;
}


