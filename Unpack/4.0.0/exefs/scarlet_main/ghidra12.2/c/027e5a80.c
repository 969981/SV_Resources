/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e5a80; name: FUN_027e5a80
 */


void FUN_027e5a80(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  short *psVar1;
  ulong *puVar2;
  long *plVar3;
  int *piVar4;
  ulong uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  ulong *puVar9;
  code *pcVar10;
  long *plVar11;
  int iVar12;
  undefined8 uVar13;
  short sVar14;
  long lVar15;
  long *plVar16;
  ulong *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  ulong local_38;
  
  local_f0 = (ulong *)0x0;
  local_e8 = (code *)0x0;
  FUN_00c43ef0(&local_f0,param_2 + 0x30);
  local_48 = (long *)0x0;
  local_40 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 + 0x28;
  }
  if (local_f0[2] == uVar5) {
    FUN_015d2a6c(&local_48,&local_f0);
  }
  puVar9 = local_f0;
  if (local_f0 != (ulong *)0x0) {
    puVar2 = local_f0 + 3;
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
      piVar4 = (int *)((long)local_f0 + 0x1c);
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
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_38 = *puVar9;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar14 == 0) goto LAB_027e5c30;
  }
  plVar11 = local_48;
  if (local_48 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_48 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48 + 0x1a);
      sVar14 = *(short *)((long)local_48 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar14) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_027e5cb0;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027e5cb0:
          bVar8 = false;
        }
        if (bVar8) {
          plVar16 = (long *)0x0;
          if (local_48[2] != 0) {
            plVar16 = (long *)(local_48[2] + -0x28);
          }
          goto LAB_027e5cd8;
        }
        sVar14 = sVar6;
      } while (sVar6 != 0);
    }
    plVar16 = (long *)0x0;
LAB_027e5cd8:
    plVar3 = local_48 + 3;
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
      piVar4 = (int *)((long)local_48 + 0x1c);
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
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_f0 = (ulong *)*plVar11;
        FUN_00c44438(lVar15 + 0x8040,&local_f0);
      }
    }
    else if (sVar14 == 0) goto LAB_027e5c30;
  }
  local_68 = *param_3;
  uStack_60 = param_3[1];
  local_58 = param_3[2];
  local_50 = (long *)param_3[3];
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x18))();
  }
  local_38 = local_38 & 0xffffffff00000000;
  local_48 = plVar16;
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[6];
    if (*(long *)(lVar15 + 0x10) == 0) goto LAB_027e5c30;
    psVar1 = (short *)(lVar15 + 0x1a);
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
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar13;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_027e5c30;
  }
  local_40 = *param_4;
  local_f0 = (ulong *)0x0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_027e904c(&local_f0,&local_48);
  FUN_015d1ba8(param_1,&local_68,&local_38,&local_f0);
  pcVar10 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = (ulong *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar10)(auStack_d0);
  }
  if (local_48 != (long *)0x0) {
    lVar15 = local_48[6];
    psVar1 = (short *)(lVar15 + 0x1a);
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
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_027e5c30;
  }
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[6];
    psVar1 = (short *)(lVar15 + 0x1a);
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
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*plVar16 + 0x50))(plVar16);
    }
    else if (sVar14 == 0) {
LAB_027e5c30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


