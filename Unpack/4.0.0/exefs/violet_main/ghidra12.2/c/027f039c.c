/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027f039c; name: FUN_027f039c
 */


void FUN_027f039c(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  long *local_38;
  
  uVar12 = *param_1;
  local_70 = 0xaab34d49cc8a6590;
  pcStack_68 = "RecoverThen";
  local_60 = 0xb;
  local_58 = (long *)0x0;
  local_78 = (long *)*param_2;
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027f0788;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar10;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_027f0788;
  }
  FUN_027f0b24(&local_38,uVar12,&local_70,&local_78);
  plVar8 = local_38;
  local_98 = 0x89797befd2cf9766;
  pcStack_90 = "RecoverCatch";
  local_88 = 0xc;
  local_80 = (long *)0x0;
  local_48 = (long *)*param_2;
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027f0788;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar12;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_027f0788;
  }
  local_40 = param_1[1];
  FUN_027f0c50(&local_e0,plVar8,&local_98,&local_48);
  plVar8 = local_e0;
  local_b8 = 0xb23cc3a7edb7ac7d;
  pcStack_b0 = "RecoverCancel";
  local_a8 = 0xd;
  local_a0 = (long *)0x0;
  local_c0 = (long *)*param_2;
  if (local_c0 != (long *)0x0) {
    lVar13 = local_c0[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027f0788;
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      *(undefined8 *)(lVar13 + 8) = uVar12;
      *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
    }
    else if (sVar5 == -1) goto LAB_027f0788;
  }
  FUN_027f1374(&local_50,plVar8,&local_b8,&local_c0);
  if (local_c0 != (long *)0x0) {
    lVar13 = local_c0[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_c0 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f0788;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    lVar13 = local_e0[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_e0 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f0788;
  }
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f0788;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    lVar13 = local_38[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_38 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f0788;
  }
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f0788;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  FUN_0177dc44(&local_48,*param_2);
  plVar8 = local_48;
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[2];
    plVar3 = (long *)0x0;
    if (lVar13 != 0) {
      plVar3 = (long *)(lVar13 + -0x28);
    }
    plVar4 = local_48 + 3;
    do {
      sVar5 = (short)*plVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar7) {
        *(short *)plVar4 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e0 = (long *)*plVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_e0);
      }
    }
    else if (sVar5 == 0) goto LAB_027f0788;
    plVar8 = local_50;
    if (lVar13 != 0) {
      local_48 = (long *)0x0;
      local_40 = 0;
      FUN_00c43ef0(&local_48,local_50 + 6);
      local_e0 = (long *)0x0;
      uStack_d8 = 0;
      plVar4 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 5;
      }
      if ((long *)local_48[2] == plVar4) {
        FUN_015d2a6c(&local_e0,&local_48);
      }
      plVar8 = local_48;
      if (local_48 != (long *)0x0) {
        plVar4 = local_48 + 3;
        do {
          sVar5 = (short)*plVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar7) {
            *(short *)plVar4 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_48 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_38 = (long *)*plVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_027f0788;
      }
      local_d0 = (long *)0x0;
      uStack_c8 = 0;
      FUN_0177de7c(&local_d0,&local_e0);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_d0);
      plVar8 = local_d0;
      if (local_d0 != (long *)0x0) {
        plVar3 = local_d0 + 3;
        do {
          sVar5 = (short)*plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(short *)plVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_d0 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_48 = (long *)*plVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_48);
          }
        }
        else if (sVar5 == 0) goto LAB_027f0788;
      }
      plVar8 = local_e0;
      if (local_e0 != (long *)0x0) {
        plVar3 = local_e0 + 3;
        do {
          sVar5 = (short)*plVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(short *)plVar3 = sVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar5 == 1) {
          piVar2 = (int *)((long)local_e0 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar13 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar13;
            local_48 = (long *)*plVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_48);
          }
        }
        else if (sVar5 == 0) goto LAB_027f0788;
      }
    }
  }
  if (local_50 != (long *)0x0) {
    lVar13 = local_50[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_027f0788:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


