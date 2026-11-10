/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027e9ea8; name: FUN_027e9ea8
 */


void FUN_027e9ea8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  short *psVar4;
  int *piVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long local_40;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_045e34b8;
  param_1[4] = (long)&PTR_LAB_045e3560;
  param_1[5] = (long)&DAT_045e35b0;
  if (param_1[0xc4] != 0) {
    FUN_014ece90();
  }
  plVar10 = (long *)param_1[0xc5];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 3;
    do {
      sVar6 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)plVar10 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_40 = *plVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_40);
      }
    }
    else if (sVar6 == 0) goto LAB_027ea098;
  }
  plVar10 = (long *)param_1[0xc4];
  if (plVar10 != (long *)0x0) {
    lVar13 = plVar10[6];
    psVar4 = (short *)(lVar13 + 0x1a);
    do {
      sVar6 = *psVar4;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar4,0x10);
      if (bVar8) {
        *psVar4 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_027ea098;
  }
  FUN_027ea2a4(param_1 + 0xbd);
  lVar11 = param_1[0xbb];
  lVar13 = tpidr_el0;
  if (*(long *)(lVar13 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar13 + 0x30) = DAT_04859430;
  }
  local_40 = *(long *)(lVar13 + 0x30);
  local_38 = *(undefined8 *)(lVar13 + 0x38);
  *(long *)(lVar13 + 0x30) = lVar11;
  *(undefined2 *)(lVar13 + 0x38) = 1;
  plVar10 = (long *)param_1[0xbc];
  param_1[0xbc] = 0;
  if (plVar10 == (long *)0x0) {
    *(long *)(lVar13 + 0x30) = local_40;
    *(undefined2 *)(lVar13 + 0x38) = (undefined2)local_38;
  }
  else {
    (**(code **)(*plVar10 + 8))();
    plVar10 = (long *)param_1[0xbc];
    *(long *)(lVar13 + 0x30) = local_40;
    *(undefined2 *)(lVar13 + 0x38) = (undefined2)local_38;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_01f5027c(param_1 + 0x2b);
    if ((char)param_1[0x25] != '\0') {
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  pcVar12 = (code *)param_1[0xb];
  if (pcVar12 != (code *)0x0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    (*pcVar12)(param_1 + 0xe);
  }
  puVar1 = PTR_DAT_047e2118 + 0xb8;
  puVar2 = PTR_DAT_047e2118 + 0x108;
  *param_1 = (long)(PTR_DAT_047e2118 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 0x20))();
  }
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  plVar10 = (long *)param_1[6];
  if (plVar10 != (long *)0x0) {
    plVar3 = plVar10 + 3;
    do {
      sVar6 = (short)*plVar3;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar8) {
        *(short *)plVar3 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)plVar10 + 0x1c);
      do {
        iVar9 = *piVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar8) {
          *piVar5 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_40 = *plVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_40);
      }
    }
    else if (sVar6 == 0) {
LAB_027ea098:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


