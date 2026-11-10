/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a5d408; name: FUN_01a5d408
 */


void FUN_01a5d408(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  ulong *puVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  code *pcVar11;
  long *plVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  long lVar18;
  undefined8 *local_110;
  undefined8 uStack_108;
  ulong *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [96];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  ulong local_38;
  
  local_100 = (ulong *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,param_2 + 0x30);
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 + 0x28;
  }
  if (local_100[2] == uVar5) {
    FUN_015d2a6c(&local_60,&local_100);
  }
  puVar10 = local_100;
  if (local_100 != (ulong *)0x0) {
    puVar2 = local_100 + 3;
    do {
      sVar16 = (short)*puVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(short *)puVar2 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_100 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_38 = *puVar10;
        FUN_00c44438(lVar18 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  plVar12 = local_60;
  if (local_60 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar16 = *(short *)((long)local_60 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar16 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_01a5d77c;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a5d77c:
          bVar8 = false;
        }
        if (bVar8) {
          plVar17 = (long *)0x0;
          if (local_60[2] != 0) {
            plVar17 = (long *)(local_60[2] + -0x28);
          }
          goto LAB_01a5d7a4;
        }
        sVar16 = sVar6;
      } while (sVar6 != 0);
    }
    plVar17 = (long *)0x0;
LAB_01a5d7a4:
    plVar3 = local_60 + 3;
    do {
      sVar16 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_60 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_100 = (ulong *)*plVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_100);
      }
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  local_80 = *param_3;
  uStack_78 = param_3[1];
  local_70 = param_3[2];
  local_68 = (long *)param_3[3];
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x18))();
  }
  local_38 = local_38 & 0xffffffff00000000;
  local_60 = plVar17;
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_01a5d6d8;
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar16 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar14;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar16 == -1) goto LAB_01a5d6d8;
  }
  local_58 = (long *)*param_4;
  *param_4 = 0;
  local_100 = (ulong *)0x0;
  local_f8 = (code *)0x0;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_01a5db28(&local_100,&local_60);
  FUN_015d1ba8(param_1,&local_80,&local_38,&local_100);
  pcVar11 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (ulong *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar11)(auStack_e0);
  }
  if (local_58 != (long *)0x0) {
    lVar18 = local_58[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_58 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  if (local_60 != (long *)0x0) {
    lVar18 = local_60[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar18 = *param_1;
  local_100 = (ulong *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,param_2 + 0x30);
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  if (local_100[2] == uVar5) {
    FUN_015d2a6c(&local_60,&local_100);
  }
  puVar10 = local_100;
  if (local_100 != (ulong *)0x0) {
    puVar2 = local_100 + 3;
    do {
      sVar16 = (short)*puVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(short *)puVar2 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_100 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_38 = *puVar10;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  FUN_0177de7c(&local_110,&local_60);
  if (((*(char *)(lVar18 + 0x140) != '\0') && (local_110 != (undefined8 *)0x0)) &&
     (local_110[2] != 0)) {
    (**(code **)(*(long *)(local_110[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar18 + 0x130,&local_110);
  puVar9 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar16 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_110 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_100 = (ulong *)*puVar9;
        FUN_00c44438(lVar18 + 0x8040,&local_100);
      }
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  plVar12 = local_60;
  if (local_60 != (long *)0x0) {
    plVar3 = local_60 + 3;
    do {
      sVar16 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      piVar4 = (int *)((long)local_60 + 0x1c);
      do {
        iVar13 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar13 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_100 = (ulong *)*plVar12;
        FUN_00c44438(lVar18 + 0x8040,&local_100);
      }
    }
    else if (sVar16 == 0) goto LAB_01a5d6d8;
  }
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar16 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17);
    }
    else if (sVar16 == 0) {
LAB_01a5d6d8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


