/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027f5d78; name: FUN_027f5d78
 */


void FUN_027f5d78(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  code *pcVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  short sVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_138;
  undefined8 uStack_130;
  long *local_128;
  undefined8 local_120;
  long *local_118;
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [100];
  undefined4 local_8c;
  long *local_88;
  undefined1 auStack_80 [24];
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_128 = (long *)0x0;
  local_120 = 0;
  lVar12 = 0;
  if (param_2 != 0) {
    lVar12 = param_2 + 0x28;
  }
  if (local_110[2] == lVar12) {
    FUN_015d2a6c(&local_128,&local_110);
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
        local_60 = *puVar7;
        FUN_00c44438(lVar15 + 0x8040,&local_60);
      }
    }
    else if (sVar13 == 0) goto LAB_027f60e0;
  }
  plVar8 = local_128;
  if (local_128 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_128 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_128 + 0x1a);
      sVar13 = *(short *)((long)local_128 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_027f6194;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027f6194:
          bVar6 = false;
        }
        if (bVar6) {
          plVar14 = (long *)0x0;
          if (local_128[2] != 0) {
            plVar14 = (long *)(local_128[2] + -0x28);
          }
          goto LAB_027f61bc;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027f61bc:
    plVar2 = local_128 + 3;
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
      piVar3 = (int *)((long)local_128 + 0x1c);
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
        local_110 = (undefined8 *)*plVar8;
        FUN_00c44438(lVar15 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027f60e0;
  }
  FUN_01050714(&local_88,param_3);
  FUN_0135d26c(auStack_80,&local_88);
  local_8c = 0;
  local_128 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_027f60e0;
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
    else if (sVar13 == -1) goto LAB_027f60e0;
  }
  FUN_01f07a84(&local_120,param_4);
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_027f7f50(&local_110,&local_128);
  FUN_015d1ba8(param_1,auStack_80,&local_8c,&local_110);
  pcVar9 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(auStack_f0);
  }
  uVar11 = local_120;
  lVar15 = tpidr_el0;
  if (*(long *)(lVar15 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar15 + 0x30) = DAT_04859430;
  }
  plVar8 = local_118;
  local_60 = *(undefined8 *)(lVar15 + 0x30);
  local_58 = *(undefined8 *)(lVar15 + 0x38);
  *(undefined8 *)(lVar15 + 0x30) = uVar11;
  *(undefined2 *)(lVar15 + 0x38) = 1;
  local_118 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    *(undefined8 *)(lVar15 + 0x30) = local_60;
    *(undefined2 *)(lVar15 + 0x38) = (undefined2)local_58;
  }
  else {
    (**(code **)(*plVar8 + 8))();
    *(undefined8 *)(lVar15 + 0x30) = local_60;
    *(undefined2 *)(lVar15 + 0x38) = (undefined2)local_58;
    if (local_118 != (long *)0x0) {
      (**(code **)(*local_118 + 8))(local_118);
    }
  }
  if (local_128 != (long *)0x0) {
    lVar15 = local_128[6];
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
      (**(code **)(*local_128 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027f60e0;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  lVar15 = *param_1;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_128 = (long *)0x0;
  local_120 = 0;
  if (local_110[2] == lVar12) {
    FUN_015d2a6c(&local_128,&local_110);
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
        local_60 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_60);
      }
    }
    else if (sVar13 == 0) goto LAB_027f60e0;
  }
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  FUN_0177de7c(&local_138,&local_128);
  if (((*(char *)(lVar15 + 0x140) != '\0') && (local_138 != (undefined8 *)0x0)) &&
     (local_138[2] != 0)) {
    (**(code **)(*(long *)(local_138[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar15 + 0x130,&local_138);
  puVar7 = local_138;
  if (local_138 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_138 + 3);
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
      piVar3 = (int *)((long)local_138 + 0x1c);
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
    else if (sVar13 == 0) goto LAB_027f60e0;
  }
  plVar8 = local_128;
  if (local_128 != (long *)0x0) {
    plVar2 = local_128 + 3;
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
      piVar3 = (int *)((long)local_128 + 0x1c);
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
        local_110 = (undefined8 *)*plVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027f60e0;
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
LAB_027f60e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


