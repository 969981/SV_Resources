/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bf5c98; name: FUN_02bf5c98
 */


void FUN_02bf5c98(long param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  
  local_58 = (undefined8 *)&DAT_5bd47e3c1dfde0bd;
  pcStack_50 = "NotMatching";
  local_48 = 0xb;
  local_40 = (long *)0x0;
  FUN_01e7b418(&local_60,&local_58,param_1);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  FUN_0177dc44(&local_58,*(undefined8 *)(param_1 + 0x18));
  puVar8 = local_58;
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
        local_70 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_70);
      }
    }
    else if (sVar5 == 0) goto LAB_02bf6068;
    plVar9 = local_60;
    if (lVar12 != 0) {
      local_58 = (undefined8 *)0x0;
      pcStack_50 = (char *)0x0;
      FUN_00c43ef0(&local_58,local_60 + 6);
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      plVar4 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 5;
      }
      if ((long *)local_58[2] == plVar4) {
        FUN_015d2a6c(&local_70,&local_58);
      }
      puVar8 = local_58;
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
            local_38 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02bf6068;
      }
      local_58 = (undefined8 *)0x0;
      pcStack_50 = (char *)0x0;
      FUN_0177de7c(&local_58,&local_70);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_58);
      puVar8 = local_58;
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
            local_38 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02bf6068;
      }
      puVar8 = local_70;
      if (local_70 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_70 + 3);
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
          piVar2 = (int *)((long)local_70 + 0x1c);
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
            local_38 = *puVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_02bf6068;
      }
    }
  }
  plVar3 = local_60;
  FUN_0191d764(local_60 + 0x1e,param_1 + 0x10);
  if ((int)plVar3[9] - 1U < 3) {
    FUN_0174a3b8(plVar3);
  }
  if (local_60 != (long *)0x0) {
    lVar12 = local_60[6];
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
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02bf6068:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


