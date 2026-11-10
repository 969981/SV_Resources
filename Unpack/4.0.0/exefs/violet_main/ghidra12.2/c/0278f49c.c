/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278f49c; name: FUN_0278f49c
 */


void FUN_0278f49c(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  code *pcVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [108];
  undefined4 local_84;
  undefined1 auStack_80 [24];
  long *local_68;
  long *local_60;
  undefined8 local_58;
  long *local_38;
  
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_60 = (long *)0x0;
  local_58 = 0;
  lVar12 = 0;
  if (param_2 != 0) {
    lVar12 = param_2 + 0x28;
  }
  if (local_110[2] == lVar12) {
    FUN_015d2a6c(&local_60,&local_110);
  }
  puVar7 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_38 = (long *)*puVar7;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) goto LAB_0278f738;
  }
  plVar9 = local_60;
  if (local_60 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar13 = *(short *)((long)local_60 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_0278f7ec;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0278f7ec:
          bVar6 = false;
        }
        if (bVar6) {
          plVar14 = (long *)0x0;
          if (local_60[2] != 0) {
            plVar14 = (long *)(local_60[2] + -0x28);
          }
          goto LAB_0278f814;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar14 = (long *)0x0;
LAB_0278f814:
    plVar2 = local_60 + 3;
    do {
      sVar13 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_110 = (undefined8 *)*plVar9;
        FUN_00c44438(lVar15 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_0278f738;
  }
  FUN_01050714(&local_38,param_3);
  FUN_0135d26c(auStack_80,&local_38);
  local_84 = 0;
  local_60 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_0278f738;
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar11;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar13 == -1) goto LAB_0278f738;
  }
  local_58 = *param_4;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_02792650(&local_110,&local_60);
  FUN_015d1ba8(param_1,auStack_80,&local_84,&local_110);
  pcVar8 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar8)(auStack_f0);
  }
  if (local_60 != (long *)0x0) {
    lVar15 = local_60[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_0278f738;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar15 = *param_1;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_60 = (long *)0x0;
  local_58 = 0;
  if (local_110[2] == lVar12) {
    FUN_015d2a6c(&local_60,&local_110);
  }
  puVar7 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_38 = (long *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) goto LAB_0278f738;
  }
  local_120 = (undefined8 *)0x0;
  uStack_118 = 0;
  FUN_0177de7c(&local_120,&local_60);
  if (((*(char *)(lVar15 + 0x140) != '\0') && (local_120 != (undefined8 *)0x0)) &&
     (local_120[2] != 0)) {
    (**(code **)(*(long *)(local_120[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar15 + 0x130,&local_120);
  puVar7 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_120 + 3);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_120 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_110 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_0278f738;
  }
  plVar9 = local_60;
  if (local_60 != (long *)0x0) {
    plVar2 = local_60 + 3;
    do {
      sVar13 = (short)*plVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(short *)plVar2 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      piVar3 = (int *)((long)local_60 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar6) {
          *piVar3 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_110 = (undefined8 *)*plVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_0278f738;
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar13 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar14 + 0x50))(plVar14);
    }
    else if (sVar13 == 0) {
LAB_0278f738:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


