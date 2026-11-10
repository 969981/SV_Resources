/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028013e4; name: FUN_028013e4
 */


void FUN_028013e4(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

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
  long *plVar10;
  ulong *puVar11;
  code *pcVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  short sVar16;
  long *plVar17;
  long lVar18;
  undefined8 *local_130;
  undefined8 uStack_128;
  long *local_120;
  long *local_118;
  long *local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *local_58;
  ulong local_38;
  
  local_f0 = (ulong *)0x0;
  local_e8 = (code *)0x0;
  FUN_00c43ef0(&local_f0,param_2 + 0x30);
  local_120 = (long *)0x0;
  local_118 = (long *)0x0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 + 0x28;
  }
  if (local_f0[2] == uVar5) {
    FUN_015d2a6c(&local_120,&local_f0);
  }
  puVar11 = local_f0;
  if (local_f0 != (ulong *)0x0) {
    puVar2 = local_f0 + 3;
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
      piVar4 = (int *)((long)local_f0 + 0x1c);
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
        local_38 = *puVar11;
        FUN_00c44438(lVar18 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  plVar10 = local_120;
  if (local_120 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_120 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_120 + 0x1a);
      sVar16 = *(short *)((long)local_120 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar16) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar16 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_02801808;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02801808:
          bVar8 = false;
        }
        if (bVar8) {
          plVar17 = (long *)0x0;
          if (local_120[2] != 0) {
            plVar17 = (long *)(local_120[2] + -0x28);
          }
          goto LAB_02801830;
        }
        sVar16 = sVar6;
      } while (sVar6 != 0);
    }
    plVar17 = (long *)0x0;
LAB_02801830:
    plVar3 = local_120 + 3;
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
      piVar4 = (int *)((long)local_120 + 0x1c);
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
        local_f0 = (ulong *)*plVar10;
        FUN_00c44438(lVar18 + 0x8040,&local_f0);
      }
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  local_58 = (long *)param_3[3];
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x18))();
  }
  local_38 = local_38 & 0xffffffff00000000;
  local_120 = plVar17;
  if (plVar17 != (long *)0x0) {
    lVar18 = plVar17[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02801740;
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
    else if (sVar16 == -1) goto LAB_02801740;
  }
  local_118 = (long *)*param_4;
  *param_4 = 0;
  local_110 = (long *)param_4[1];
  if (local_110 != (long *)0x0) {
    lVar18 = local_110[6];
    if (*(long *)(lVar18 + 0x10) == 0) goto LAB_02801740;
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
    else if (sVar16 == -1) goto LAB_02801740;
  }
  local_108 = *(undefined1 *)(param_4 + 2);
  local_100 = 0;
  uStack_f8 = 0;
  FUN_02790ba0(&local_100,param_4 + 3);
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = (ulong *)0x0;
  local_e8 = (code *)0x0;
  FUN_02802a48(&local_f0,&local_120);
  FUN_015d1ba8(param_1,&local_70,&local_38,&local_f0);
  pcVar12 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = (ulong *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar12)(auStack_d0);
  }
  FUN_0279064c(&local_100);
  if (local_110 != (long *)0x0) {
    lVar18 = local_110[6];
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
      (**(code **)(*local_110 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  if (local_118 != (long *)0x0) {
    lVar18 = local_118[6];
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
      (**(code **)(*local_118 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  if (local_120 != (long *)0x0) {
    lVar18 = local_120[6];
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
      (**(code **)(*local_120 + 0x50))();
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar18 = *param_1;
  local_f0 = (ulong *)0x0;
  local_e8 = (code *)0x0;
  FUN_00c43ef0(&local_f0,param_2 + 0x30);
  local_120 = (long *)0x0;
  local_118 = (long *)0x0;
  if (local_f0[2] == uVar5) {
    FUN_015d2a6c(&local_120,&local_f0);
  }
  puVar11 = local_f0;
  if (local_f0 != (ulong *)0x0) {
    puVar2 = local_f0 + 3;
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
      piVar4 = (int *)((long)local_f0 + 0x1c);
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
        local_38 = *puVar11;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  local_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  FUN_0177de7c(&local_130,&local_120);
  if (((*(char *)(lVar18 + 0x140) != '\0') && (local_130 != (undefined8 *)0x0)) &&
     (local_130[2] != 0)) {
    (**(code **)(*(long *)(local_130[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar18 + 0x130,&local_130);
  puVar9 = local_130;
  if (local_130 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_130 + 3);
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
      piVar4 = (int *)((long)local_130 + 0x1c);
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
        local_f0 = (ulong *)*puVar9;
        FUN_00c44438(lVar18 + 0x8040,&local_f0);
      }
    }
    else if (sVar16 == 0) goto LAB_02801740;
  }
  plVar10 = local_120;
  if (local_120 != (long *)0x0) {
    plVar3 = local_120 + 3;
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
      piVar4 = (int *)((long)local_120 + 0x1c);
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
        local_f0 = (ulong *)*plVar10;
        FUN_00c44438(lVar18 + 0x8040,&local_f0);
      }
    }
    else if (sVar16 == 0) goto LAB_02801740;
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
LAB_02801740:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


