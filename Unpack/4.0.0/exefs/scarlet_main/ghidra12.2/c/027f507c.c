/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027f507c; name: FUN_027f507c
 */


void FUN_027f507c(long *param_1)

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
  code *pcVar11;
  long lVar12;
  long lVar13;
  long *local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 local_48;
  long *local_28;
  
  FUN_019db778(&local_98);
  FUN_01e94688(&local_70,&local_98);
  lVar12 = tpidr_el0;
  if ((char)local_70 == '\0') {
    FUN_0186e318(&local_28);
    plVar8 = local_28;
    local_70 = (long *)0x34a9bbed8424e7c3;
    local_68 = "LeaveSuccess";
    local_60 = 0xc;
    local_58 = (long *)0x0;
    FUN_019db778(&local_80,&local_98);
    FUN_027f5d78(&local_88,plVar8,&local_70,&local_80);
    plVar8 = local_80;
    if (*(long *)(lVar12 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar12 + 0x30) = DAT_04859430;
    }
    plVar3 = local_78;
    local_50 = *(long **)(lVar12 + 0x30);
    local_48 = *(undefined8 *)(lVar12 + 0x38);
    *(long **)(lVar12 + 0x30) = plVar8;
    *(undefined2 *)(lVar12 + 0x38) = 1;
    local_78 = (long *)0x0;
    if (plVar3 == (long *)0x0) {
      *(long **)(lVar12 + 0x30) = local_50;
      *(undefined2 *)(lVar12 + 0x38) = (undefined2)local_48;
    }
    else {
      (**(code **)(*plVar3 + 8))();
      *(long **)(lVar12 + 0x30) = local_50;
      *(undefined2 *)(lVar12 + 0x38) = (undefined2)local_48;
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 8))(local_78);
      }
    }
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar13 = local_28[6];
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
        pcVar11 = *(code **)(*local_28 + 0x50);
        goto LAB_027f5740;
      }
      if (sVar5 == 0) goto LAB_027f5634;
    }
  }
  else {
    local_70 = (long *)&DAT_5bd47e3c1dfde0bd;
    local_68 = "NotMatching";
    local_60 = 0xb;
    local_58 = (long *)0x0;
    FUN_027f5b8c(&local_88,&local_70);
    if (local_58 != (long *)0x0) {
      pcVar11 = *(code **)(*local_58 + 0x20);
LAB_027f5740:
      (*pcVar11)();
    }
  }
  plVar8 = local_88;
  local_b8 = 0x88fe387cc5f312e6;
  pcStack_b0 = "RecoverSuccess";
  local_a8 = 0xe;
  local_a0 = (long *)0x0;
  local_70 = (long *)*param_1;
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027f5634;
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
    else if (sVar5 == -1) goto LAB_027f5634;
  }
  FUN_027f6588(&local_80,plVar8,&local_b8,&local_70);
  plVar8 = local_80;
  local_d8 = 0xa7c06656e360bf1e;
  pcStack_d0 = "RecoverFailred";
  local_c8 = 0xe;
  local_c0 = (long *)0x0;
  local_e0 = (long *)*param_1;
  if (local_e0 != (long *)0x0) {
    lVar13 = local_e0[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027f5634;
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
    else if (sVar5 == -1) goto LAB_027f5634;
  }
  FUN_027f66b4(&local_50,plVar8,&local_d8,&local_e0);
  plVar8 = local_50;
  local_100 = 0xb23cc3a7edb7ac7d;
  pcStack_f8 = "RecoverCancel";
  local_f0 = 0xd;
  local_e8 = (long *)0x0;
  local_108 = (long *)*param_1;
  if (local_108 != (long *)0x0) {
    lVar13 = local_108[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027f5634;
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
    else if (sVar5 == -1) goto LAB_027f5634;
  }
  FUN_027f6dd4(&local_28,plVar8,&local_100,&local_108);
  if (local_108 != (long *)0x0) {
    lVar13 = local_108[6];
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
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f5634;
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
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
    else if (sVar5 == 0) goto LAB_027f5634;
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
    else if (sVar5 == 0) goto LAB_027f5634;
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    lVar13 = local_80[6];
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
      (**(code **)(*local_80 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f5634;
  }
  if (local_70 != (long *)0x0) {
    lVar13 = local_70[6];
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
      (**(code **)(*local_70 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f5634;
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    lVar13 = local_88[6];
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
      (**(code **)(*local_88 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027f5634;
  }
  if (*(long *)(lVar12 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar12 + 0x30) = DAT_04859430;
  }
  plVar8 = local_90;
  local_70 = *(long **)(lVar12 + 0x30);
  local_68 = *(char **)(lVar12 + 0x38);
  *(undefined8 *)(lVar12 + 0x30) = local_98;
  *(undefined2 *)(lVar12 + 0x38) = 1;
  local_90 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    *(long **)(lVar12 + 0x30) = local_70;
    *(undefined2 *)(lVar12 + 0x38) = local_68._0_2_;
  }
  else {
    (**(code **)(*plVar8 + 8))();
    *(long **)(lVar12 + 0x30) = local_70;
    *(undefined2 *)(lVar12 + 0x38) = local_68._0_2_;
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 8))(local_90);
    }
  }
  FUN_0177dc44(&local_70,*param_1);
  plVar8 = local_70;
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[2];
    plVar3 = (long *)0x0;
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + -0x28);
    }
    plVar4 = local_70 + 3;
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
      piVar2 = (int *)((long)local_70 + 0x1c);
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
        local_50 = (long *)*plVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_50);
      }
    }
    else if (sVar5 == 0) goto LAB_027f5634;
    plVar8 = local_28;
    if (lVar12 != 0) {
      local_70 = (long *)0x0;
      local_68 = (char *)0x0;
      FUN_00c43ef0(&local_70,local_28 + 6);
      local_50 = (long *)0x0;
      local_48 = 0;
      plVar4 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar4 = plVar8 + 5;
      }
      if ((long *)local_70[2] == plVar4) {
        FUN_015d2a6c(&local_50,&local_70);
      }
      plVar8 = local_70;
      if (local_70 != (long *)0x0) {
        plVar4 = local_70 + 3;
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
          piVar2 = (int *)((long)local_70 + 0x1c);
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
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_80 = (long *)*plVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_80);
          }
        }
        else if (sVar5 == 0) goto LAB_027f5634;
      }
      local_118 = (long *)0x0;
      uStack_110 = 0;
      FUN_0177de7c(&local_118,&local_50);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_118);
      plVar8 = local_118;
      if (local_118 != (long *)0x0) {
        plVar3 = local_118 + 3;
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
          piVar2 = (int *)((long)local_118 + 0x1c);
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
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_70 = (long *)*plVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_70);
          }
        }
        else if (sVar5 == 0) goto LAB_027f5634;
      }
      plVar8 = local_50;
      if (local_50 != (long *)0x0) {
        plVar3 = local_50 + 3;
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
          piVar2 = (int *)((long)local_50 + 0x1c);
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
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_70 = (long *)*plVar8;
            FUN_00c44438(lVar12 + 0x8040,&local_70);
          }
        }
        else if (sVar5 == 0) goto LAB_027f5634;
      }
    }
  }
  if (local_28 != (long *)0x0) {
    lVar12 = local_28[6];
    psVar1 = (short *)(lVar12 + 0x1a);
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
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar5 == 0) {
LAB_027f5634:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


