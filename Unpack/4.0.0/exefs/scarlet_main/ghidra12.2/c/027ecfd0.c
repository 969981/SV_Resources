/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ecfd0; name: FUN_027ecfd0
 */


void FUN_027ecfd0(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 undefined2 param_5)

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
  undefined8 *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long *local_130;
  undefined1 auStack_128 [8];
  undefined8 *local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [108];
  undefined4 local_94;
  undefined1 auStack_90 [24];
  long *local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_54 [2];
  long *local_38;
  
  local_68 = 0x40b3880000000000;
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  local_60 = param_2;
  local_54[0] = param_5;
  FUN_00c43ef0(&local_120,param_3 + 0x30);
  local_150 = (long *)0x0;
  local_148 = 0;
  lVar12 = 0;
  if (param_3 != 0) {
    lVar12 = param_3 + 0x28;
  }
  if (local_120[2] == lVar12) {
    FUN_015d2a6c(&local_150,&local_120);
  }
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
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_38 = (long *)*puVar7;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) goto LAB_027ed2dc;
  }
  plVar8 = local_150;
  if (local_150 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_150 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_150 + 0x1a);
      sVar13 = *(short *)((long)local_150 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_027ed3a0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027ed3a0:
          bVar6 = false;
        }
        if (bVar6) {
          plVar14 = (long *)0x0;
          if (local_150[2] != 0) {
            plVar14 = (long *)(local_150[2] + -0x28);
          }
          goto LAB_027ed3c8;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027ed3c8:
    plVar2 = local_150 + 3;
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
      piVar3 = (int *)((long)local_150 + 0x1c);
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
        local_120 = (undefined8 *)*plVar8;
        FUN_00c44438(lVar15 + 0x8040,&local_120);
      }
    }
    else if (sVar13 == 0) goto LAB_027ed2dc;
  }
  FUN_027edc44(auStack_70,*(undefined8 *)(param_3 + 8),local_54,&local_60,&local_68);
  FUN_01050714(&local_38,param_4);
  FUN_0135d26c(auStack_90,&local_38);
  local_94 = 0;
  local_150 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_027ed2dc;
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
    else if (sVar13 == -1) goto LAB_027ed2dc;
  }
  local_148 = *param_4;
  uStack_140 = param_4[1];
  local_138 = param_4[2];
  local_130 = (long *)param_4[3];
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x18))();
  }
  FUN_027edcd8(auStack_128,auStack_70);
  local_110 = 0;
  uStack_108 = 0;
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  FUN_027edd68(&local_120,&local_150);
  FUN_015d1ba8(param_1,auStack_90,&local_94,&local_120);
  pcVar9 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = (undefined8 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar9)(auStack_100);
  }
  FUN_027ede78(auStack_128);
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    lVar15 = local_150[6];
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
      (**(code **)(*local_150 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027ed2dc;
  }
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  lVar15 = *param_1;
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  FUN_00c43ef0(&local_120,param_3 + 0x30);
  local_150 = (long *)0x0;
  local_148 = 0;
  if (local_120[2] == lVar12) {
    FUN_015d2a6c(&local_150,&local_120);
  }
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
        local_38 = (long *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar13 == 0) goto LAB_027ed2dc;
  }
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  FUN_0177de7c(&local_160,&local_150);
  if (((*(char *)(lVar15 + 0x140) != '\0') && (local_160 != (undefined8 *)0x0)) &&
     (local_160[2] != 0)) {
    (**(code **)(*(long *)(local_160[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar15 + 0x130,&local_160);
  puVar7 = local_160;
  if (local_160 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_160 + 3);
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
      piVar3 = (int *)((long)local_160 + 0x1c);
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
        local_120 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_120);
      }
    }
    else if (sVar13 == 0) goto LAB_027ed2dc;
  }
  plVar8 = local_150;
  if (local_150 != (long *)0x0) {
    plVar2 = local_150 + 3;
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
      piVar3 = (int *)((long)local_150 + 0x1c);
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
        local_120 = (undefined8 *)*plVar8;
        FUN_00c44438(lVar12 + 0x8040,&local_120);
      }
    }
    else if (sVar13 == 0) goto LAB_027ed2dc;
  }
  FUN_027ede78(auStack_70);
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
LAB_027ed2dc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


