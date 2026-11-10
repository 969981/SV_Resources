/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c14000; name: FUN_02c14000
 */


void FUN_02c14000(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined4 local_5c;
  long *local_58;
  long lStack_50;
  long local_48;
  long *local_40;
  long local_38;
  
  FUN_0177dbc8(&local_78,param_1 + 1,"+inner");
  plVar8 = local_78;
  local_58 = (long *)PTR_DAT_047d8b70;
  if (local_78 != (long *)0x0) {
    local_58 = local_78 + 6;
  }
  local_58 = (long *)*local_58;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (local_78 != (long *)0x0) {
    plVar3 = local_78 + 7;
  }
  lStack_50 = *plVar3;
  if (local_78 == (long *)0x0) {
    local_48 = 0;
  }
  else {
    local_48 = local_78[8];
  }
  local_40 = (long *)0x0;
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))(local_78);
  }
  local_40 = plVar8;
  local_5c = 0;
  if (*(long *)(*param_1 + 0x40) != 0) {
    FUN_01e83db8();
  }
  local_38 = 0;
  FUN_01945a78(&local_68,&local_58,&local_5c,&local_38);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  FUN_0177dc44(&local_58,param_1[6]);
  plVar8 = local_58;
  if (local_58 != (long *)0x0) {
    lVar11 = local_58[2];
    plVar3 = (long *)0x0;
    if (lVar11 != 0) {
      plVar3 = (long *)(lVar11 + -0x28);
    }
    plVar4 = local_58 + 3;
    do {
      sVar5 = (short)*plVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(short *)plVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar9 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_78 = (long *)*plVar8;
        FUN_00c44438(lVar10 + 0x8040,&local_78);
      }
    }
    else if (sVar5 == 0) goto LAB_02c14454;
    plVar8 = local_68;
    if (lVar11 != 0) {
      local_58 = (long *)0x0;
      lStack_50 = 0;
      FUN_00c43ef0(&local_58,local_68 + 6);
      local_78 = (long *)0x0;
      uStack_70 = 0;
      plVar4 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 5;
      }
      if ((long *)local_58[2] == plVar4) {
        FUN_015d2a6c(&local_78,&local_58);
      }
      plVar8 = local_58;
      if (local_58 != (long *)0x0) {
        plVar4 = local_58 + 3;
        do {
          sVar5 = (short)*plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *(short *)plVar4 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_58 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
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
            local_38 = *plVar8;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02c14454;
      }
      local_58 = (long *)0x0;
      lStack_50 = 0;
      FUN_0177de7c(&local_58,&local_78);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_58);
      plVar8 = local_58;
      if (local_58 != (long *)0x0) {
        plVar3 = local_58 + 3;
        do {
          sVar5 = (short)*plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(short *)plVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_58 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
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
            local_38 = *plVar8;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02c14454;
      }
      plVar8 = local_78;
      if (local_78 != (long *)0x0) {
        plVar3 = local_78 + 3;
        do {
          sVar5 = (short)*plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(short *)plVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_78 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
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
            local_38 = *plVar8;
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02c14454;
      }
    }
  }
  plVar8 = local_68;
  FUN_0191d764(local_68 + 0x1e,param_1 + 5);
  if ((int)plVar8[9] - 1U < 3) {
    FUN_0174a3b8(plVar8);
  }
  if (local_68 != (long *)0x0) {
    lVar11 = local_68[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02c14454:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


