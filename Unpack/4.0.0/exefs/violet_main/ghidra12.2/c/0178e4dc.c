/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0178e4dc; name: FUN_0178e4dc
 */


void FUN_0178e4dc(undefined8 *param_1,long param_2,char *param_3,long param_4)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  long *local_60;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  if ((*param_3 < '\0') || (lVar13 = *(long *)(param_2 + 0x70), lVar13 == 0)) {
LAB_0178e7dc:
    *param_1 = 0;
    return;
  }
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00c43ef0(&local_80,param_4);
  local_70 = *(undefined8 *)(param_4 + 0x10);
  local_68 = *(undefined1 *)(param_4 + 0x18);
  FUN_0178ea5c(&local_60,lVar13,param_3,&local_80);
  puVar10 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_80 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_80 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58[0] = (undefined8 *)*puVar10;
        FUN_00c44438(lVar13 + 0x8040,local_58);
      }
    }
    else if (sVar5 == 0) goto LAB_0178e738;
  }
  if (local_60 == (long *)0x0) goto LAB_0178e7dc;
  *(undefined8 *)(param_2 + 0x138) = 0;
  puVar9 = PTR_DAT_047d0a08;
  lVar13 = *(long *)PTR_DAT_047d0a08;
  if (lVar13 == 0) {
LAB_0178e5c8:
    lVar13 = 0;
  }
  else {
    lVar15 = *(long *)(lVar13 + 0xd8);
    lVar1 = lVar13 + 0xd0;
    if (lVar15 != lVar1) {
      local_58[0] = *(undefined8 **)(lVar15 + 0x10);
      lVar13 = param_2 + 0x110;
      FUN_00fe9c44(lVar13,local_58);
      lVar15 = *(long *)(lVar15 + 8);
      if (lVar15 != lVar1) {
        local_58[0] = *(undefined8 **)(lVar15 + 0x10);
        FUN_00fe9c44(lVar13,local_58);
        lVar15 = *(long *)(lVar15 + 8);
        if (lVar15 != lVar1) {
          local_58[0] = *(undefined8 **)(lVar15 + 0x10);
          FUN_00fe9c44(lVar13,local_58);
          while (lVar15 = *(long *)(lVar15 + 8), lVar15 != lVar1) {
            local_58[0] = *(undefined8 **)(lVar15 + 0x10);
            FUN_00fe9c44(lVar13,local_58);
          }
        }
      }
      lVar13 = *(long *)puVar9;
      if (lVar13 == 0) goto LAB_0178e5c8;
    }
    lVar13 = *(long *)(lVar13 + 0xb8);
  }
  plVar6 = *(long **)(param_2 + 0x130);
  plVar4 = plVar6;
  if (*(long *)(param_2 + 0x138) != 0) {
    plVar4 = plVar6 + *(long *)(param_2 + 0x138);
  }
  if (plVar6 != plVar4) {
    if (*plVar6 != lVar13) {
      FUN_0178e9f0(local_60,plVar6);
    }
    while (plVar6 = plVar6 + 1, plVar6 != plVar4) {
      if (*plVar6 != lVar13) {
        FUN_0178e9f0(local_60,plVar6);
      }
    }
  }
  plVar6 = local_60;
  plVar14 = local_60 + 5;
  (**(code **)(*local_60 + 0x18))(local_58,local_60);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  plVar4 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar14;
  }
  if ((long *)local_58[0][2] == plVar4) {
    FUN_0178ee74(&local_90,local_58);
  }
  puVar10 = local_58[0];
  if (local_58[0] != (undefined8 *)0x0) {
    psVar2 = (short *)(local_58[0] + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_58[0] + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_48 = *puVar10;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar5 == 0) goto LAB_0178e738;
  }
  FUN_0178f234(param_2 + 0x78,&local_90);
  puVar10 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar2 = (short *)(local_90 + 3);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar3 = (int *)((long)local_90 + 0x1c);
      do {
        iVar11 = *piVar3;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar8) {
          *piVar3 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar11 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58[0] = (undefined8 *)*puVar10;
        FUN_00c44438(lVar13 + 0x8040,local_58);
      }
    }
    else if (sVar5 == 0) goto LAB_0178e738;
  }
  *param_1 = local_60;
  if (local_60 == (long *)0x0) {
    return;
  }
  lVar13 = local_60[6];
  if (*(long *)(lVar13 + 0x10) != 0) {
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar5 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar12;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_0178e738;
    if (local_60 == (long *)0x0) {
      return;
    }
    lVar13 = local_60[6];
    psVar2 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar2;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar8) {
        *psVar2 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_60 + 0x50))();
      return;
    }
    if (sVar5 != 0) {
      return;
    }
  }
LAB_0178e738:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


