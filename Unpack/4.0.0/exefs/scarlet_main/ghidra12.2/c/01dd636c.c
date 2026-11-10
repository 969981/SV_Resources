/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd636c; name: FUN_01dd636c
 */


void FUN_01dd636c(long param_1)

{
  short *psVar1;
  int *piVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  short sVar12;
  long *plVar13;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar10 = FUN_01195854();
  uVar3 = *(undefined1 *)(lVar10 + 0x570);
  FUN_014e7bf0(param_1,uVar3);
  uVar8 = FUN_014e5f3c(lVar10,uVar3);
  FUN_014e799c(param_1,uVar8);
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00f3e8f8(&local_40,param_1 + 0x38);
  puVar7 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar12 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_01dd6414;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dd6414:
          bVar6 = false;
        }
        if (bVar6) {
          plVar13 = (long *)0x0;
          if (local_40[2] != 0) {
            plVar13 = (long *)(local_40[2] + -0x28);
          }
          goto LAB_01dd643c;
        }
        sVar12 = sVar4;
      } while (sVar4 != 0);
    }
    plVar13 = (long *)0x0;
LAB_01dd643c:
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar12 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar12 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_18 = *puVar7;
        FUN_00c44438(lVar10 + 0x8040,&local_18);
      }
    }
    else if (sVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar13 != (long *)0x0) {
      uVar11 = FUN_01dcd22c(plVar13);
      if (uVar11 >> 0x20 == 0) {
        FUN_014e8ce4(param_1);
      }
      else if ((*(char *)(param_1 + 0x19d) != '\0') && (*(char *)(param_1 + 0x19c) == '\0')) {
        local_40 = (undefined8 *)FUN_01195974(param_1);
        FUN_014e85a0(param_1,&local_40,0);
      }
      lVar10 = plVar13[6];
      psVar1 = (short *)(lVar10 + 0x1a);
      do {
        sVar12 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar12 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar13 + 0x50))(plVar13);
      }
      else if (sVar12 == 0) {
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


