/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df2d08; name: FUN_01df2d08
 */


void FUN_01df2d08(long param_1,ulong param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00f3e8f8(&local_40,*(long *)(param_1 + 0x30) + 0x58);
  puVar6 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    if (*(short *)((long)local_40 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40 + 0x1a);
      sVar10 = *(short *)((long)local_40 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01df2d88;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01df2d88:
          bVar5 = false;
        }
        if (bVar5) {
          plVar14 = (long *)0x0;
          if (local_40[2] != 0) {
            plVar14 = (long *)(local_40[2] + -0x28);
          }
          goto LAB_01df2db0;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar14 = (long *)0x0;
LAB_01df2db0:
    psVar1 = (short *)(local_40 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_40 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_18 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_18);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar14 != (long *)0x0) {
      lVar8 = plVar14[0x95];
      uVar9 = *(uint *)(lVar8 + 0xc);
      iVar7 = *(int *)(lVar8 + 0x1c);
      iVar11 = *(int *)(lVar8 + 0x10) * uVar9;
      uVar12 = uVar9;
      if (iVar7 != 0) {
        uVar12 = 1;
      }
      if (((int)uVar12 < iVar11) &&
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20),
         **(char **)(lVar13 + (ulong)uVar12 * 0x28 + 8) != '\0')) {
        lVar13 = lVar13 + (ulong)uVar12 * 0x28;
        *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | param_2 & 1;
        lVar8 = plVar14[0x95];
        uVar9 = *(uint *)(lVar8 + 0xc);
        iVar7 = *(int *)(lVar8 + 0x1c);
        iVar11 = *(int *)(lVar8 + 0x10) * uVar9;
      }
      uVar12 = uVar9 << 1;
      if (iVar7 != 0) {
        uVar12 = 2;
      }
      if (((int)uVar12 < iVar11) &&
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20),
         **(char **)(lVar13 + (ulong)uVar12 * 0x28 + 8) != '\0')) {
        lVar13 = lVar13 + (ulong)uVar12 * 0x28;
        *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | param_2 & 1;
        lVar8 = plVar14[0x95];
        uVar9 = *(uint *)(lVar8 + 0xc);
        iVar7 = *(int *)(lVar8 + 0x1c);
        iVar11 = *(int *)(lVar8 + 0x10) * uVar9;
      }
      uVar12 = uVar9 * 3;
      if (iVar7 != 0) {
        uVar12 = 3;
      }
      if (((int)uVar12 < iVar11) &&
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20),
         **(char **)(lVar13 + (ulong)uVar12 * 0x28 + 8) != '\0')) {
        lVar13 = lVar13 + (ulong)uVar12 * 0x28;
        *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | param_2 & 1;
        lVar8 = plVar14[0x95];
        uVar9 = *(uint *)(lVar8 + 0xc);
        iVar7 = *(int *)(lVar8 + 0x1c);
        iVar11 = *(int *)(lVar8 + 0x10) * uVar9;
      }
      uVar12 = uVar9 << 2;
      if (iVar7 != 0) {
        uVar12 = 4;
      }
      if (((int)uVar12 < iVar11) &&
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20),
         **(char **)(lVar13 + (ulong)uVar12 * 0x28 + 8) != '\0')) {
        lVar13 = lVar13 + (ulong)uVar12 * 0x28;
        *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | param_2 & 1;
        lVar8 = plVar14[0x95];
        uVar9 = *(uint *)(lVar8 + 0xc);
        iVar7 = *(int *)(lVar8 + 0x1c);
        iVar11 = *(int *)(lVar8 + 0x10) * uVar9;
      }
      uVar12 = uVar9 * 5;
      if (iVar7 != 0) {
        uVar12 = 5;
      }
      if (((int)uVar12 < iVar11) &&
         (lVar13 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20),
         **(char **)(lVar13 + (ulong)uVar12 * 0x28 + 8) != '\0')) {
        lVar13 = lVar13 + (ulong)uVar12 * 0x28;
        *(ulong *)(lVar13 + 0x20) = *(ulong *)(lVar13 + 0x20) & 0xfffffffffffffffe | param_2 & 1;
        lVar8 = plVar14[0x95];
        uVar9 = *(uint *)(lVar8 + 0xc);
        iVar7 = *(int *)(lVar8 + 0x1c);
        iVar11 = *(int *)(lVar8 + 0x10) * uVar9;
      }
      uVar9 = uVar9 * 6;
      if (iVar7 != 0) {
        uVar9 = 6;
      }
      if (((int)uVar9 < iVar11) &&
         (lVar8 = *(long *)(*(long *)(lVar8 + 0x40) + 0x20),
         **(char **)(lVar8 + (ulong)uVar9 * 0x28 + 8) != '\0')) {
        lVar8 = lVar8 + (ulong)uVar9 * 0x28;
        *(ulong *)(lVar8 + 0x20) = *(ulong *)(lVar8 + 0x20) & 0xfffffffffffffffe | param_2 & 1;
      }
      lVar8 = plVar14[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar10 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar10 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar14 + 0x50))(plVar14);
      }
      else if (sVar10 == 0) {
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


