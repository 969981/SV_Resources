/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c37c74; name: FUN_02c37c74
 */


void FUN_02c37c74(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *local_78;
  undefined4 local_6c;
  undefined8 *local_68;
  long lStack_60;
  long local_58;
  long *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_0177dbc8(&local_38,param_1 + 1,"+inner");
  plVar7 = local_38;
  plVar10 = (long *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    plVar10 = local_38 + 6;
  }
  local_68 = (undefined8 *)*plVar10;
  plVar10 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar10 = local_38 + 7;
  }
  lStack_60 = *plVar10;
  if (local_38 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    local_58 = local_38[8];
  }
  local_50 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  local_50 = plVar7;
  local_6c = 0;
  lVar13 = *(long *)(*param_1 + 0x40);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0x48) == 0)) {
    if (*(char *)(lVar13 + 0xd0) == '\0') {
      *(undefined8 *)(lVar13 + 0xd8) = 0;
      *(undefined1 *)(lVar13 + 0xd0) = 1;
    }
    else {
      *(undefined8 *)(lVar13 + 0xd8) = 0;
    }
    uVar11 = *(undefined8 *)(lVar13 + 0xe0);
    lVar12 = tpidr_el0;
    if (*(long *)(lVar12 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar12 + 0x30) = DAT_04859430;
    }
    local_48 = *(undefined8 **)(lVar12 + 0x30);
    local_40 = *(undefined8 *)(lVar12 + 0x38);
    *(undefined2 *)(lVar12 + 0x38) = 1;
    *(undefined8 *)(lVar12 + 0x30) = uVar11;
    plVar10 = *(long **)(lVar13 + 0xe8);
    *(undefined8 *)(lVar13 + 0xe8) = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    *(undefined8 **)(lVar12 + 0x30) = local_48;
    *(undefined2 *)(lVar12 + 0x38) = (undefined2)local_40;
    *(undefined4 *)(lVar13 + 0x48) = 1;
    FUN_0174a3b8(lVar13);
  }
  local_48 = (undefined8 *)0x0;
  FUN_01945a78(&local_78,&local_68,&local_6c,&local_48);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_0177dc44(&local_68,param_1[6]);
  puVar8 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    lVar13 = local_68[2];
    plVar10 = (long *)0x0;
    if (lVar13 != 0) {
      plVar10 = (long *)(lVar13 + -0x28);
    }
    psVar1 = (short *)(local_68 + 3);
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
      piVar2 = (int *)((long)local_68 + 0x1c);
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_48 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar4 == 0) goto LAB_02c381b0;
    plVar7 = local_78;
    if (lVar13 != 0) {
      local_68 = (undefined8 *)0x0;
      lStack_60 = 0;
      FUN_00c43ef0(&local_68,local_78 + 6);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      plVar3 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        plVar3 = plVar7 + 5;
      }
      if ((long *)local_68[2] == plVar3) {
        FUN_015d2a6c(&local_48,&local_68);
      }
      puVar8 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
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
          piVar2 = (int *)((long)local_68 + 0x1c);
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
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = (long *)*puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) goto LAB_02c381b0;
      }
      local_68 = (undefined8 *)0x0;
      lStack_60 = 0;
      FUN_0177de7c(&local_68,&local_48);
      (**(code **)(*plVar10 + 0x90))(plVar10,&local_68);
      puVar8 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
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
          piVar2 = (int *)((long)local_68 + 0x1c);
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
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = (long *)*puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) goto LAB_02c381b0;
      }
      puVar8 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48 + 3);
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
          piVar2 = (int *)((long)local_48 + 0x1c);
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
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = (long *)*puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) goto LAB_02c381b0;
      }
    }
  }
  plVar10 = local_78;
  FUN_0191d764(local_78 + 0x1e,param_1 + 5);
  if ((int)plVar10[9] - 1U < 3) {
    FUN_0174a3b8(plVar10);
  }
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[6];
    psVar1 = (short *)(lVar13 + 0x1a);
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
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_02c381b0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


