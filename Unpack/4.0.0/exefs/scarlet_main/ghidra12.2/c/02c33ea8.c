/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c33ea8; name: FUN_02c33ea8
 */


void FUN_02c33ea8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long *plStack_1d8;
  undefined1 auStack_1d0 [8];
  byte local_1c8;
  undefined7 uStack_1c7;
  undefined8 local_1b8;
  long *plStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 local_1a0;
  undefined1 local_148;
  undefined8 local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [104];
  undefined1 local_58;
  undefined8 local_50;
  long lStack_48;
  long *local_28;
  
  uVar12 = *param_2;
  lVar13 = *param_1;
  memset(&local_1f0,0,0x68);
  FUN_027c1cd0(&local_1f0);
  FUN_027c6838(&local_100,uVar12,&local_1f0);
  FUN_027c2bd0(auStack_1a8,local_1a0);
  if ((local_1c8 & 1) != 0) {
    (**(code **)(*plStack_1b0 + 0x18))
              (plStack_1b0,local_1b8,CONCAT71(uStack_1c7,local_1c8) & 0xfffffffffffffffe,1);
  }
  FUN_01cfa410(auStack_1d0);
  if (((ulong)local_1f0 & 1) != 0) {
    (**(code **)(*plStack_1d8 + 0x18))
              (plStack_1d8,local_1e0,(ulong)local_1f0 & 0xfffffffffffffffe,1);
  }
  if ((char)param_1[1] != '\0') {
    FUN_027c3f5c(&local_1f0,(long)param_1 + 0xc);
    FUN_01d0e1a8(auStack_e0,&local_1f0);
    if (((ulong)local_1f0 & 1) != 0) {
      (**(code **)(*plStack_1d8 + 0x18))
                (plStack_1d8,local_1e0,(ulong)local_1f0 & 0xfffffffffffffffe,1);
    }
  }
  if (DAT_0485e9d8 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_027c2014();
  }
  FUN_027c6880(&local_100,uVar12);
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0xe1a3d887bca4131b;
  pcStack_118 = "JoinSession";
  local_110 = 0xb;
  uStack_108 = 0;
  FUN_027c2138(&local_130,lVar13 + 0x78);
  FUN_01cfa5b0(&local_1f0,&local_100);
  FUN_01cfa5b0(auStack_1d0,auStack_e0);
  FUN_027c2388(&plStack_1b0,auStack_c0);
  local_148 = local_58;
  local_140 = local_50;
  lStack_138 = lStack_48;
  if (lStack_48 != 0) {
    plVar1 = (long *)(lStack_48 + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = *plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  FUN_027d3144(&local_28,&local_120,&local_130,&local_1f0);
  FUN_027c70c0(&local_1f0);
  FUN_027bfe38(&local_130);
  FUN_027c70c0(&local_100);
  FUN_0177dc44(&local_100,param_1[8]);
  puVar8 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    lVar13 = local_100[2];
    plVar1 = (long *)0x0;
    if (lVar13 != 0) {
      plVar1 = (long *)(lVar13 + -0x28);
    }
    psVar2 = (short *)(local_100 + 3);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_100 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_1f0 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_1f0);
      }
    }
    else if (sVar5 == 0) goto LAB_02c343e4;
    plVar9 = local_28;
    if (lVar13 != 0) {
      local_100 = (undefined8 *)0x0;
      uStack_f8 = 0;
      FUN_00c43ef0(&local_100,local_28 + 6);
      local_1f0 = (undefined8 *)0x0;
      uStack_1e8 = 0;
      plVar4 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        plVar4 = plVar9 + 5;
      }
      if ((long *)local_100[2] == plVar4) {
        FUN_015d2a6c(&local_1f0,&local_100);
      }
      puVar8 = local_100;
      if (local_100 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_100 + 3);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_100 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_120 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_120);
          }
        }
        else if (sVar5 == 0) goto LAB_02c343e4;
      }
      local_100 = (undefined8 *)0x0;
      uStack_f8 = 0;
      FUN_0177de7c(&local_100,&local_1f0);
      (**(code **)(*plVar1 + 0x90))(plVar1,&local_100);
      puVar8 = local_100;
      if (local_100 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_100 + 3);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_100 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_120 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_120);
          }
        }
        else if (sVar5 == 0) goto LAB_02c343e4;
      }
      puVar8 = local_1f0;
      if (local_1f0 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_1f0 + 3);
        do {
          sVar5 = *psVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar7) {
            *psVar2 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar3 = (int *)((long)local_1f0 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_120 = *puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_120);
          }
        }
        else if (sVar5 == 0) goto LAB_02c343e4;
      }
    }
  }
  plVar1 = local_28;
  FUN_0191d764(local_28 + 0x1e,param_1 + 7);
  if ((int)plVar1[9] - 1U < 3) {
    FUN_0174a3b8(plVar1);
  }
  if (local_28 != (long *)0x0) {
    lVar13 = local_28[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar7) {
        *psVar2 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_02c343e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


