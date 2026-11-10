/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0afb4; name: FUN_01a0afb4
 */


void FUN_01a0afb4(long param_1)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined1 *local_130;
  code *local_128;
  undefined1 *local_120;
  undefined1 *puStack_118;
  long local_110 [13];
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined1 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  undefined1 local_70;
  undefined2 local_68 [4];
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined1 local_48;
  undefined8 local_28;
  
  FUN_01a0b628();
  if (((*PTR_DAT_047d8cc8 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8cc8), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d94a0,PTR_DAT_047d8cd0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8cc8);
  }
  lVar14 = *(long *)PTR_DAT_047d8cd0;
  *(long *)PTR_DAT_047d8cd8 = lVar14;
  if (lVar14 != 0) {
    FUN_01793e80(lVar14,param_1 + 0x38);
  }
  puVar7 = PTR_DAT_047d6c98;
  if (((*PTR_DAT_047d6c98 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  puVar9 = PTR_DAT_047d6ca8;
  puVar8 = PTR_DAT_047d6ca0;
  lVar14 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar14;
  if (lVar14 != 0) {
    local_50 = 0;
    if (param_1 != 0) {
      local_50 = param_1 + 0x30;
    }
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    local_48 = 1;
    FUN_01667c7c(lVar14,&local_60);
    puVar11 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
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
        piVar2 = (int *)((long)local_60 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_130 = (undefined1 *)*puVar11;
          FUN_00c44438(lVar14 + 0x8040,&local_130);
        }
      }
      else if (sVar4 == 0) goto LAB_01a0b1d8;
    }
  }
  if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar14 = *(long *)puVar8;
  *(long *)puVar9 = lVar14;
  if (lVar14 != 0) {
    local_68[0] = 0x26;
    lVar3 = 0;
    if (param_1 != 0) {
      lVar3 = param_1 + 0x28;
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_70 = 1;
    local_78 = lVar3;
    FUN_0178e4dc(&local_28,lVar14,local_68,&local_88);
    plVar15 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (plVar15 != (long *)0x0) {
      lVar16 = plVar15[6];
      psVar1 = (short *)(lVar16 + 0x1a);
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
        *(undefined8 *)(lVar16 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_01a0b24c;
    }
    uVar12 = local_28;
    puVar11 = local_88;
    local_28 = 0;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    if (local_88 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_88 + 3);
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
        piVar2 = (int *)((long)local_88 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar16;
          local_130 = (undefined1 *)*puVar11;
          FUN_00c44438(lVar16 + 0x8040,&local_130);
        }
      }
      else if (sVar4 == 0) goto LAB_01a0b1d8;
    }
    local_68[0] = 0x126;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    local_90 = 1;
    local_98 = lVar3;
    FUN_0178e4dc(&local_28,lVar14,local_68,&local_a8);
    plVar15 = *(long **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (plVar15 != (long *)0x0) {
      lVar14 = plVar15[6];
      psVar1 = (short *)(lVar14 + 0x1a);
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
        *(undefined8 *)(lVar14 + 0x10) = 0;
        (**(code **)(*plVar15 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_01a0b24c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar12 = local_28;
    puVar11 = local_a8;
    local_28 = 0;
    *(undefined8 *)(param_1 + 0x48) = uVar12;
    if (local_a8 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a8 + 3);
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
        piVar2 = (int *)((long)local_a8 + 0x1c);
        do {
          iVar13 = *piVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar13 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_130 = (undefined1 *)*puVar11;
          FUN_00c44438(lVar14 + 0x8040,&local_130);
        }
      }
      else if (sVar4 == 0) {
LAB_01a0b1d8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  local_130 = &LAB_00b1eaf8;
  local_128 = FUN_00b1eb48;
  local_120 = &LAB_00b1eb4c;
  puStack_118 = &LAB_00b1eb58;
  local_110[0] = param_1;
  FUN_01a0b544(&local_130);
  pcVar10 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = (undefined1 *)0x0;
    puStack_118 = (undefined1 *)0x0;
    local_130 = (undefined1 *)0x0;
    local_128 = (code *)0x0;
    (*pcVar10)(local_110);
  }
  return;
}


