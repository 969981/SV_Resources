/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0279c824; name: FUN_0279c824
 */


void FUN_0279c824(undefined8 *param_1,long *param_2)

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
  long *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  undefined1 local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  uVar12 = *param_1;
  local_60 = 0xaab34d49cc8a6590;
  pcStack_58 = "RecoverThen";
  local_50 = 0xb;
  local_48 = (long *)0x0;
  local_68 = (long *)*param_2;
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0279cc78;
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
    else if (sVar5 == -1) goto LAB_0279cc78;
  }
  FUN_0279d04c(&local_38,uVar12,&local_60,&local_68);
  plVar8 = local_38;
  local_88 = 0x89797befd2cf9766;
  pcStack_80 = "RecoverCatch";
  local_78 = 0xc;
  local_70 = (long *)0x0;
  local_a0 = (long *)*param_2;
  if (local_a0 != (long *)0x0) {
    lVar13 = local_a0[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0279cc78;
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
    else if (sVar5 == -1) goto LAB_0279cc78;
  }
  local_98 = (long *)param_1[1];
  if (local_98 != (long *)0x0) {
    lVar13 = local_98[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0279cc78;
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
    else if (sVar5 == -1) goto LAB_0279cc78;
  }
  local_90 = *(undefined1 *)(param_1 + 2);
  FUN_0279d178(&local_e8,plVar8,&local_88,&local_a0);
  plVar8 = local_e8;
  local_c0 = 0xb23cc3a7edb7ac7d;
  pcStack_b8 = "RecoverCancel";
  local_b0 = 0xd;
  local_a8 = (long *)0x0;
  local_c8 = (long *)*param_2;
  if (local_c8 != (long *)0x0) {
    lVar13 = local_c8[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_0279cc78;
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
    else if (sVar5 == -1) goto LAB_0279cc78;
  }
  FUN_0279d93c(&local_40,plVar8,&local_c0,&local_c8);
  if (local_c8 != (long *)0x0) {
    lVar13 = local_c8[6];
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
      (**(code **)(*local_c8 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0279cc78;
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    lVar13 = local_e8[6];
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
      (**(code **)(*local_e8 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0279cc78;
  }
  if (local_98 != (long *)0x0) {
    lVar13 = local_98[6];
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
      (**(code **)(*local_98 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0279cc78;
  }
  if (local_a0 != (long *)0x0) {
    lVar13 = local_a0[6];
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
      (**(code **)(*local_a0 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0279cc78;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
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
    else if (sVar5 == 0) goto LAB_0279cc78;
  }
  if (local_68 != (long *)0x0) {
    lVar13 = local_68[6];
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
      (**(code **)(*local_68 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_0279cc78;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_0177dc44(&local_a0,*param_2);
  plVar8 = local_a0;
  if (local_a0 != (long *)0x0) {
    lVar13 = local_a0[2];
    plVar3 = (long *)0x0;
    if (lVar13 != 0) {
      plVar3 = (long *)(lVar13 + -0x28);
    }
    plVar4 = local_a0 + 3;
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
      piVar2 = (int *)((long)local_a0 + 0x1c);
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
        local_e8 = (long *)*plVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_e8);
      }
    }
    else if (sVar5 == 0) goto LAB_0279cc78;
    plVar8 = local_40;
    if (lVar13 != 0) {
      local_a0 = (long *)0x0;
      local_98 = (long *)0x0;
      FUN_00c43ef0(&local_a0,local_40 + 6);
      local_e8 = (long *)0x0;
      uStack_e0 = 0;
      plVar4 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 5;
      }
      if ((long *)local_a0[2] == plVar4) {
        FUN_015d2a6c(&local_e8,&local_a0);
      }
      plVar8 = local_a0;
      if (local_a0 != (long *)0x0) {
        plVar4 = local_a0 + 3;
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
          piVar2 = (int *)((long)local_a0 + 0x1c);
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
        else if (sVar5 == 0) goto LAB_0279cc78;
      }
      local_d8 = (long *)0x0;
      uStack_d0 = 0;
      FUN_0177de7c(&local_d8,&local_e8);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_d8);
      plVar8 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar3 = local_d8 + 3;
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
          piVar2 = (int *)((long)local_d8 + 0x1c);
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
            local_a0 = (long *)*plVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_a0);
          }
        }
        else if (sVar5 == 0) goto LAB_0279cc78;
      }
      plVar8 = local_e8;
      if (local_e8 != (long *)0x0) {
        plVar3 = local_e8 + 3;
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
          piVar2 = (int *)((long)local_e8 + 0x1c);
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
            local_a0 = (long *)*plVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_a0);
          }
        }
        else if (sVar5 == 0) goto LAB_0279cc78;
      }
    }
  }
  if (local_40 != (long *)0x0) {
    lVar13 = local_40[6];
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
      (**(code **)(*local_40 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_0279cc78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


