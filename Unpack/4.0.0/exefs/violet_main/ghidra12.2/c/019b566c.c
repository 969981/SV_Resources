/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b566c; name: FUN_019b566c
 */


void FUN_019b566c(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_18;
  
  thunk_FUN_019b5c40(&local_48,*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x30);
  if (local_48 != 0) {
    FUN_019b5b84(param_1 + 0x40,&local_48);
    lVar8 = local_48;
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_00c43ef0(&local_40,local_48 + 0x30);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = lVar8 + 0x28;
    }
    if (local_40[2] == lVar9) {
      FUN_011726f0(&local_58,&local_40);
    }
    puVar6 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_68 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_68);
        }
      }
      else if (sVar3 == 0) goto LAB_019b5854;
    }
    FUN_019b62d4(param_1 + 0x78,0,1,&local_58);
    puVar6 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_40 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_40);
        }
      }
      else if (sVar3 == 0) goto LAB_019b5854;
    }
    local_38 = *(undefined8 *)(param_2 + 0x90);
    local_40._0_2_ = CONCAT11(*(undefined1 *)(param_2 + 0x98),*(undefined1 *)(param_2 + 0x8e));
    FUN_019b65c8(param_1,&local_40);
    if ((*(long *)(param_1 + 0xb8) == 0) || (*(char *)(*(long *)(param_1 + 0xb8) + 0x40) != '\0'))
    goto LAB_019b57f4;
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar8 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar8;
    lVar9 = 0;
    if (lVar8 != 0) {
      lVar9 = 0;
      if (*(long *)PTR_DAT_047d0a08 != 0) {
        lVar9 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
      }
    }
    if (*(long *)(param_2 + 0x90) != lVar9) goto LAB_019b57f4;
    lVar8 = *(long *)(param_1 + 0xb8);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_00c43ef0(&local_40,local_48 + 0x30);
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    lVar9 = 0;
    if (local_48 != 0) {
      lVar9 = local_48 + 0x28;
    }
    if (local_40[2] == lVar9) {
      FUN_011726f0(&local_68,&local_40);
    }
    puVar6 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_18 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) goto LAB_019b5854;
    }
    *(undefined2 *)(lVar8 + 0x42) = 1;
    FUN_00d8e6c4(lVar8 + 0x48,&local_68);
    puVar6 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar3 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar2 = (int *)((long)local_68 + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_40 = (undefined8 *)*puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_40);
        }
      }
      else if (sVar3 == 0) {
LAB_019b5854:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
LAB_019b57f4:
  FUN_019b5bd8(&local_48);
  return;
}


