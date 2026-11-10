/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027fff5c; name: FUN_027fff5c
 */


void FUN_027fff5c(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  short *psVar1;
  ulong *puVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  ulong *puVar10;
  code *pcVar11;
  int iVar12;
  undefined8 uVar13;
  short sVar14;
  long *plVar15;
  long lVar16;
  long *local_108;
  long *local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  ulong local_28;
  
  local_e0 = (ulong *)0x0;
  local_d8 = (code *)0x0;
  FUN_00c43ef0(&local_e0,param_2 + 0x30);
  local_108 = (long *)0x0;
  local_100 = (long *)0x0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 + 0x28;
  }
  if (local_e0[2] == uVar5) {
    FUN_015d2a6c(&local_108,&local_e0);
  }
  puVar10 = local_e0;
  if (local_e0 != (ulong *)0x0) {
    puVar2 = local_e0 + 3;
    do {
      sVar14 = (short)*puVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar8) {
        *(short *)puVar2 = sVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_e0 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_28 = *puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_28);
      }
    }
    else if (sVar14 == 0) goto LAB_0280019c;
  }
  plVar9 = local_108;
  if (local_108 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_108 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_108 + 0x1a);
      sVar14 = *(short *)((long)local_108 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar14) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_02800240;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_02800240:
          bVar8 = false;
        }
        if (bVar8) {
          plVar15 = (long *)0x0;
          if (local_108[2] != 0) {
            plVar15 = (long *)(local_108[2] + -0x28);
          }
          goto LAB_02800268;
        }
        sVar14 = sVar6;
      } while (sVar6 != 0);
    }
    plVar15 = (long *)0x0;
LAB_02800268:
    plVar3 = local_108 + 3;
    do {
      sVar14 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_108 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_e0 = (ulong *)*plVar9;
        FUN_00c44438(lVar16 + 0x8040,&local_e0);
      }
    }
    else if (sVar14 == 0) goto LAB_0280019c;
  }
  local_60 = *param_3;
  uStack_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = (long *)param_3[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  local_28 = local_28 & 0xffffffff00000000;
  local_108 = plVar15;
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0280019c;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar13;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_0280019c;
  }
  local_100 = (long *)*param_4;
  if (local_100 != (long *)0x0) {
    lVar16 = local_100[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0280019c;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar14 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar13;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_0280019c;
  }
  local_f8 = (undefined1)param_4[1];
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_02790ba0(&local_f0,param_4 + 2);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (ulong *)0x0;
  local_d8 = (code *)0x0;
  FUN_028004c0(&local_e0,&local_108);
  FUN_015d1ba8(param_1,&local_60,&local_28,&local_e0);
  pcVar11 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = (ulong *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar11)(auStack_c0);
  }
  FUN_0279064c(&local_f0);
  if (local_100 != (long *)0x0) {
    lVar16 = local_100[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_100 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_0280019c;
  }
  if (local_108 != (long *)0x0) {
    lVar16 = local_108[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_0280019c;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar14 == 0) {
LAB_0280019c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


