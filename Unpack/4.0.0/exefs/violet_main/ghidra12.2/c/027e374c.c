/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e374c; name: FUN_027e374c
 */


void FUN_027e374c(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

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
  undefined8 *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long *local_120;
  undefined1 auStack_118 [8];
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [108];
  undefined4 local_84;
  undefined1 auStack_80 [24];
  long *local_68;
  undefined1 auStack_60 [8];
  long *local_58;
  
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_140 = (long *)0x0;
  local_138 = 0;
  lVar12 = 0;
  if (param_2 != 0) {
    lVar12 = param_2 + 0x28;
  }
  if (local_110[2] == lVar12) {
    FUN_015d2a6c(&local_140,&local_110);
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
        local_58 = (long *)*puVar7;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar13 == 0) goto LAB_027e3a40;
  }
  plVar8 = local_140;
  if (local_140 == (long *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_140 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_140 + 0x1a);
      sVar13 = *(short *)((long)local_140 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_027e3b04;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027e3b04:
          bVar6 = false;
        }
        if (bVar6) {
          plVar14 = (long *)0x0;
          if (local_140[2] != 0) {
            plVar14 = (long *)(local_140[2] + -0x28);
          }
          goto LAB_027e3b2c;
        }
        sVar13 = sVar4;
      } while (sVar4 != 0);
    }
    plVar14 = (long *)0x0;
LAB_027e3b2c:
    plVar2 = local_140 + 3;
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
      piVar3 = (int *)((long)local_140 + 0x1c);
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
    else if (sVar13 == 0) goto LAB_027e3a40;
  }
  FUN_027e7f08(auStack_60,*(undefined8 *)(param_2 + 8),param_4);
  FUN_01050714(&local_58,param_3);
  FUN_0135d26c(auStack_80,&local_58);
  local_84 = 0;
  local_140 = plVar14;
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_027e3a40;
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
    else if (sVar13 == -1) goto LAB_027e3a40;
  }
  local_138 = *param_3;
  uStack_130 = param_3[1];
  local_128 = param_3[2];
  local_120 = (long *)param_3[3];
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x18))();
  }
  FUN_027e7f9c(auStack_118,auStack_60);
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_027e802c(&local_110,&local_140);
  FUN_015d1ba8(param_1,auStack_80,&local_84,&local_110);
  pcVar9 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(auStack_f0);
  }
  FUN_027e813c(auStack_118);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    lVar15 = local_140[6];
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
      (**(code **)(*local_140 + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_027e3a40;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar15 = *param_1;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_140 = (long *)0x0;
  local_138 = 0;
  if (local_110[2] == lVar12) {
    FUN_015d2a6c(&local_140,&local_110);
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
        local_58 = (long *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_58);
      }
    }
    else if (sVar13 == 0) goto LAB_027e3a40;
  }
  local_150 = (undefined8 *)0x0;
  uStack_148 = 0;
  FUN_0177de7c(&local_150,&local_140);
  if (((*(char *)(lVar15 + 0x140) != '\0') && (local_150 != (undefined8 *)0x0)) &&
     (local_150[2] != 0)) {
    (**(code **)(*(long *)(local_150[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar15 + 0x130,&local_150);
  puVar7 = local_150;
  if (local_150 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_150 + 3);
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
        local_110 = (undefined8 *)*puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_110);
      }
    }
    else if (sVar13 == 0) goto LAB_027e3a40;
  }
  plVar8 = local_140;
  if (local_140 != (long *)0x0) {
    plVar2 = local_140 + 3;
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
      piVar3 = (int *)((long)local_140 + 0x1c);
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
    else if (sVar13 == 0) goto LAB_027e3a40;
  }
  FUN_027e813c(auStack_60);
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
LAB_027e3a40:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


