/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027a3e20; name: FUN_027a3e20
 */


void FUN_027a3e20(long *param_1,long *param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 uStack_100;
  long *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  long *local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  long *local_a0;
  long *local_98;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long local_68;
  long *local_60;
  long *local_58;
  
  lVar12 = *param_2;
  iVar9 = *(int *)(lVar12 + 0x48);
  if (iVar9 == 0) {
    iVar9 = 2;
    if (*(byte *)(param_1 + 1) != 0) {
      iVar9 = *(byte *)(param_1 + 1) + 1;
    }
    *(int *)(lVar12 + 0x48) = iVar9;
    lVar12 = *param_2;
    iVar9 = *(int *)(lVar12 + 0x48);
  }
  if (iVar9 < 1000) {
    lVar12 = *(long *)(lVar12 + 0x40);
    if (lVar12 == 0) {
      if (iVar9 < 2) {
        return;
      }
    }
    else {
      if (*(char *)(lVar12 + 0x140) != '\0') {
        FUN_01e83db8();
        return;
      }
      if (iVar9 < 2) {
        FUN_0193d1ec(lVar12,param_1 + 2);
        return;
      }
    }
    plVar1 = param_1 + 2;
    FUN_019db778(&local_68,plVar1);
    FUN_027a47e0(&local_118,&local_68);
    cVar7 = (char)local_118;
    if ((char)local_118 != '\0') {
      local_118 = (long *)((ulong)local_118 & 0xffffffffffffff00);
    }
    lVar12 = tpidr_el0;
    if (*(long *)(lVar12 + 0x30) == 0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      *(undefined8 *)(lVar12 + 0x30) = DAT_04859430;
    }
    plVar4 = local_60;
    local_d0 = *(long **)(lVar12 + 0x30);
    local_c8 = *(long **)(lVar12 + 0x38);
    *(long *)(lVar12 + 0x30) = local_68;
    *(undefined2 *)(lVar12 + 0x38) = 1;
    local_60 = (long *)0x0;
    if (plVar4 == (long *)0x0) {
      *(long **)(lVar12 + 0x30) = local_d0;
      *(undefined2 *)(lVar12 + 0x38) = local_c8._0_2_;
    }
    else {
      (**(code **)(*plVar4 + 8))();
      *(long **)(lVar12 + 0x30) = local_d0;
      *(undefined2 *)(lVar12 + 0x38) = local_c8._0_2_;
      if (local_60 != (long *)0x0) {
        (**(code **)(*local_60 + 8))(local_60);
      }
    }
    if (cVar7 == '\0') {
      if (*(long *)(*param_2 + 0x40) == 0) {
        return;
      }
      FUN_0193d1ec(*(long *)(*param_2 + 0x40),plVar1);
      return;
    }
    *(undefined4 *)(*param_1 + 0x48) = 0;
    lVar12 = *param_1;
    local_90 = 0x668d3a044336b1b9;
    pcStack_88 = "retry";
    local_80 = 5;
    local_78 = (long *)0x0;
    local_98 = (long *)*param_2;
    if (local_98 != (long *)0x0) {
      lVar13 = local_98[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027a4334;
      psVar2 = (short *)(lVar13 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
        *(undefined8 *)(lVar13 + 8) = uVar11;
        *(undefined4 *)(lVar13 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) goto LAB_027a4334;
    }
    FUN_027a48e0(&local_58,lVar12,&local_90,&local_98);
    plVar4 = local_58;
    local_b8 = 0x246fdf49326811c6;
    pcStack_b0 = "retry catch";
    local_a8 = 0xb;
    local_a0 = (long *)0x0;
    local_d0 = (long *)*param_2;
    if (local_d0 != (long *)0x0) {
      lVar12 = local_d0[6];
      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_027a4334;
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar11;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) goto LAB_027a4334;
    }
    local_c0 = 1000;
    local_c8 = plVar1;
    FUN_027a4a0c(&local_118,plVar4,&local_b8,&local_d0);
    plVar1 = local_118;
    local_f0 = 0x11f505a8e33beb24;
    pcStack_e8 = "retry canceled";
    local_e0 = 0xe;
    local_d8 = (long *)0x0;
    local_f8 = (long *)*param_2;
    if (local_f8 != (long *)0x0) {
      lVar12 = local_f8[6];
      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_027a4334;
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar11;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar6 == -1) goto LAB_027a4334;
    }
    FUN_027a5138(&local_70,plVar1,&local_f0,&local_f8);
    if (local_f8 != (long *)0x0) {
      lVar12 = local_f8[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_f8 + 0x50))();
      }
      else if (sVar6 == 0) goto LAB_027a4334;
    }
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    if (local_118 != (long *)0x0) {
      lVar12 = local_118[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_118 + 0x50))();
      }
      else if (sVar6 == 0) goto LAB_027a4334;
    }
    if (local_d0 != (long *)0x0) {
      lVar12 = local_d0[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_d0 + 0x50))();
      }
      else if (sVar6 == 0) goto LAB_027a4334;
    }
    if (local_a0 != (long *)0x0) {
      (**(code **)(*local_a0 + 0x20))();
    }
    if (local_58 != (long *)0x0) {
      lVar12 = local_58[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_58 + 0x50))();
      }
      else if (sVar6 == 0) goto LAB_027a4334;
    }
    if (local_98 != (long *)0x0) {
      lVar12 = local_98[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_98 + 0x50))();
      }
      else if (sVar6 == 0) goto LAB_027a4334;
    }
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    FUN_015d209c(*param_1);
    iVar10 = 0x4e7;
    if (iVar9 != 0xff) {
      iVar10 = iVar9 + 999;
    }
    *(int *)(*param_2 + 0x48) = iVar10;
    FUN_0177dc44(&local_d0,*param_2);
    plVar1 = local_d0;
    if (local_d0 != (long *)0x0) {
      lVar12 = local_d0[2];
      plVar4 = (long *)0x0;
      if (lVar12 != 0) {
        plVar4 = (long *)(lVar12 + -0x28);
      }
      plVar5 = local_d0 + 3;
      do {
        sVar6 = (short)*plVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar8) {
          *(short *)plVar5 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar3 = (int *)((long)local_d0 + 0x1c);
        do {
          iVar9 = *piVar3;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar8) {
            *piVar3 = -1;
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
          local_118 = (long *)*plVar1;
          FUN_00c44438(lVar13 + 0x8040,&local_118);
        }
      }
      else if (sVar6 == 0) goto LAB_027a4334;
      plVar1 = local_70;
      if (lVar12 != 0) {
        local_d0 = (long *)0x0;
        local_c8 = (long *)0x0;
        FUN_00c43ef0(&local_d0,local_70 + 6);
        local_118 = (long *)0x0;
        uStack_110 = 0;
        plVar5 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          plVar5 = plVar1 + 5;
        }
        if ((long *)local_d0[2] == plVar5) {
          FUN_015d2a6c(&local_118,&local_d0);
        }
        plVar1 = local_d0;
        if (local_d0 != (long *)0x0) {
          plVar5 = local_d0 + 3;
          do {
            sVar6 = (short)*plVar5;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar8) {
              *(short *)plVar5 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar3 = (int *)((long)local_d0 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_58 = (long *)*plVar1;
              FUN_00c44438(lVar12 + 0x8040,&local_58);
            }
          }
          else if (sVar6 == 0) goto LAB_027a4334;
        }
        local_108 = (long *)0x0;
        uStack_100 = 0;
        FUN_0177de7c(&local_108,&local_118);
        (**(code **)(*plVar4 + 0x90))(plVar4,&local_108);
        plVar1 = local_108;
        if (local_108 != (long *)0x0) {
          plVar4 = local_108 + 3;
          do {
            sVar6 = (short)*plVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(short *)plVar4 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar3 = (int *)((long)local_108 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_d0 = (long *)*plVar1;
              FUN_00c44438(lVar12 + 0x8040,&local_d0);
            }
          }
          else if (sVar6 == 0) goto LAB_027a4334;
        }
        plVar1 = local_118;
        if (local_118 != (long *)0x0) {
          plVar4 = local_118 + 3;
          do {
            sVar6 = (short)*plVar4;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar8) {
              *(short *)plVar4 = sVar6 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar6 == 1) {
            piVar3 = (int *)((long)local_118 + 0x1c);
            do {
              iVar9 = *piVar3;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar8) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar12;
              local_d0 = (long *)*plVar1;
              FUN_00c44438(lVar12 + 0x8040,&local_d0);
            }
          }
          else if (sVar6 == 0) goto LAB_027a4334;
        }
      }
    }
    if (local_70 != (long *)0x0) {
      lVar12 = local_70[6];
      psVar2 = (short *)(lVar12 + 0x1a);
      do {
        sVar6 = *psVar2;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar8) {
          *psVar2 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar12 + 0x10) = 0;
        (**(code **)(*local_70 + 0x50))();
      }
      else if (sVar6 == 0) {
LAB_027a4334:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


