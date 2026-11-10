/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c0a578; name: FUN_02c0a578
 */


void FUN_02c0a578(char *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  if (*param_1 == '\0') {
    local_58 = (undefined8 *)0xc2c2fee5bc249345;
    pcStack_50 = "test";
    local_48 = 4;
    local_40 = (long *)0x0;
    FUN_01987400(&local_70,&local_58,&DAT_03d68960);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
  }
  else {
    local_58 = (undefined8 *)&DAT_38f485c380b144f3;
    pcStack_50 = "CreateGameSessionShortAlias";
    local_48 = 0x1b;
    local_40 = (long *)0x0;
    local_68 = (undefined8 *)0x0;
    uStack_60 = 0;
    FUN_027c2138(&local_68,*(long *)(param_1 + 8) + 0x78);
    FUN_027d0464(&local_70,&local_58,&local_68);
    FUN_027bfe38(&local_68);
  }
  FUN_0177dc44(&local_58,*(undefined8 *)(param_1 + 0x18));
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    lVar12 = local_58[2];
    plVar3 = (long *)0x0;
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + -0x28);
    }
    psVar1 = (short *)(local_58 + 3);
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
      piVar2 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if ((*PTR_DAT_047d3908 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908);
          if (iVar10 != 0) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_68 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar11 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_02c0a9a8;
    plVar8 = local_70;
    if (lVar12 != 0) {
      local_58 = (undefined8 *)0x0;
      pcStack_50 = (char *)0x0;
      FUN_00c43ef0(&local_58,local_70 + 6);
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      plVar4 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 5;
      }
      if ((long *)local_58[2] == plVar4) {
        FUN_015d2a6c(&local_68,&local_58);
      }
      puVar9 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
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
          piVar2 = (int *)((long)local_58 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_38 = *puVar9;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02c0a9a8;
      }
      local_58 = (undefined8 *)0x0;
      pcStack_50 = (char *)0x0;
      FUN_0177de7c(&local_58,&local_68);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_58);
      puVar9 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58 + 3);
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
          piVar2 = (int *)((long)local_58 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_38 = *puVar9;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02c0a9a8;
      }
      puVar9 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_68 + 3);
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
          piVar2 = (int *)((long)local_68 + 0x1c);
          do {
            iVar10 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_38 = *puVar9;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02c0a9a8;
      }
    }
  }
  plVar3 = local_70;
  FUN_0191d764(local_70 + 0x1e,param_1 + 0x10);
  if ((int)plVar3[9] - 1U < 3) {
    FUN_0174a3b8(plVar3);
  }
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02c0a9a8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


