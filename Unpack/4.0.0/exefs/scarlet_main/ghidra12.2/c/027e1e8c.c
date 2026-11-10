/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e1e8c; name: FUN_027e1e8c
 */


void FUN_027e1e8c(undefined8 param_1,long param_2,undefined8 param_3)

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
  long *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [104];
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  ulong local_38;
  
  local_e0 = (ulong *)0x0;
  local_d8 = (code *)0x0;
  FUN_00c43ef0(&local_e0,param_2 + 0x30);
  local_100 = (long *)0x0;
  local_f8 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = param_2 + 0x28;
  }
  if (local_e0[2] == uVar5) {
    FUN_015d2a6c(&local_100,&local_e0);
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
        local_38 = *puVar10;
        FUN_00c44438(lVar16 + 0x8040,&local_38);
      }
    }
    else if (sVar14 == 0) goto LAB_027e2058;
  }
  plVar9 = local_100;
  if (local_100 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_100 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_100 + 0x1a);
      sVar14 = *(short *)((long)local_100 + 0x1a);
      do {
        sVar6 = *psVar1;
        if (sVar6 == sVar14) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar8) {
            *psVar1 = sVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_027e20d8;
          bVar8 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_027e20d8:
          bVar8 = false;
        }
        if (bVar8) {
          plVar15 = (long *)0x0;
          if (local_100[2] != 0) {
            plVar15 = (long *)(local_100[2] + -0x28);
          }
          goto LAB_027e2100;
        }
        sVar14 = sVar6;
      } while (sVar6 != 0);
    }
    plVar15 = (long *)0x0;
LAB_027e2100:
    plVar3 = local_100 + 3;
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
      piVar4 = (int *)((long)local_100 + 0x1c);
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
    else if (sVar14 == 0) goto LAB_027e2058;
  }
  local_38 = local_38 & 0xffffffff00000000;
  local_58 = 0x27a978b51017af09;
  pcStack_50 = "RetryBody";
  local_48 = 9;
  local_40 = (long *)0x0;
  local_100 = plVar15;
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_027e2058;
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
    else if (sVar14 == -1) goto LAB_027e2058;
  }
  local_f8 = CONCAT71(local_f8._1_7_,0xff);
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_02790ba0(&local_f0,param_3);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = (ulong *)0x0;
  local_d8 = (code *)0x0;
  FUN_027ff5a0(&local_e0,&local_100);
  FUN_015d1ba8(param_1,&local_58,&local_38,&local_e0);
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
    else if (sVar14 == 0) goto LAB_027e2058;
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
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
LAB_027e2058:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


