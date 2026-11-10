/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027ff724; name: FUN_027ff724
 */


void FUN_027ff724(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  plVar12 = (long *)*param_1;
  local_60 = 0x94e8fd0f216ecadc;
  pcStack_58 = "RecoverOnRetry";
  local_50 = 0xe;
  local_48 = (long *)0x0;
  local_80 = plVar12;
  if (plVar12 != (long *)0x0) {
    lVar13 = plVar12[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027ffb28;
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
    else if (sVar5 == -1) goto LAB_027ffb28;
  }
  local_78 = CONCAT71(local_78._1_7_,(char)param_1[1]);
  local_70 = 0;
  uStack_68 = 0;
  FUN_02790ba0(&local_70,param_1 + 2);
  FUN_027fff5c(&local_40,plVar12,&local_60,&local_80);
  FUN_0279064c(&local_70);
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
    else if (sVar5 == 0) goto LAB_027ffb28;
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_88 = (long *)*param_2;
  if (local_88 == (long *)0x0) {
    local_90 = (long *)0x0;
  }
  else {
    lVar13 = local_88[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027ffb28;
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
    else if (sVar5 == -1) goto LAB_027ffb28;
    local_90 = (long *)*param_2;
    if (local_90 != (long *)0x0) {
      lVar13 = local_90[6];
      if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027ffb28;
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
      else if (sVar5 == -1) goto LAB_027ffb28;
    }
  }
  local_98 = (long *)*param_2;
  if (local_98 != (long *)0x0) {
    lVar13 = local_98[6];
    if (*(long *)(lVar13 + 0x10) == 0) goto LAB_027ffb28;
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
    else if (sVar5 == -1) goto LAB_027ffb28;
  }
  local_80 = (long *)CONCAT44(local_80._4_4_,1);
  FUN_02800418(&local_a0,*(undefined8 *)(*param_1 + 8),&local_80,&local_88,&local_90,&local_98);
  plVar12 = local_40;
  FUN_01932260(local_40 + 0x1e,&local_a0);
  if ((int)plVar12[9] - 1U < 3) {
    FUN_0174a3b8(plVar12);
  }
  FUN_0177dc44(&local_80,*param_2);
  plVar12 = local_80;
  if (local_80 != (long *)0x0) {
    lVar13 = local_80[2];
    plVar3 = (long *)0x0;
    if (lVar13 != 0) {
      plVar3 = (long *)(lVar13 + -0x28);
    }
    plVar4 = local_80 + 3;
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
      piVar2 = (int *)((long)local_80 + 0x1c);
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
        local_c0 = (undefined8 *)*plVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_c0);
      }
    }
    else if (sVar5 == 0) goto LAB_027ffb28;
    plVar12 = local_40;
    if (lVar13 != 0) {
      local_80 = (long *)0x0;
      local_78 = 0;
      FUN_00c43ef0(&local_80,local_40 + 6);
      local_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      plVar4 = (long *)0x0;
      if (plVar12 != (long *)0x0) {
        plVar4 = plVar12 + 5;
      }
      if ((long *)local_80[2] == plVar4) {
        FUN_015d2a6c(&local_c0,&local_80);
      }
      plVar12 = local_80;
      if (local_80 != (long *)0x0) {
        plVar4 = local_80 + 3;
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
          piVar2 = (int *)((long)local_80 + 0x1c);
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
            local_38 = *plVar12;
            FUN_00c44438(lVar13 + 0x8040,&local_38);
          }
        }
        else if (sVar5 == 0) goto LAB_027ffb28;
      }
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      FUN_0177de7c(&local_b0,&local_c0);
      (**(code **)(*plVar3 + 0x90))(plVar3,&local_b0);
      puVar8 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b0 + 3);
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
          piVar2 = (int *)((long)local_b0 + 0x1c);
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
            local_80 = (long *)*puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_80);
          }
        }
        else if (sVar5 == 0) goto LAB_027ffb28;
      }
      puVar8 = local_c0;
      if (local_c0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_c0 + 3);
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
          piVar2 = (int *)((long)local_c0 + 0x1c);
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
            local_80 = (long *)*puVar8;
            FUN_00c44438(lVar13 + 0x8040,&local_80);
          }
        }
        else if (sVar5 == 0) goto LAB_027ffb28;
      }
    }
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
    else if (sVar5 == 0) goto LAB_027ffb28;
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
    else if (sVar5 == 0) goto LAB_027ffb28;
  }
  if (local_90 != (long *)0x0) {
    lVar13 = local_90[6];
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
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar5 == 0) goto LAB_027ffb28;
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
    else if (sVar5 == 0) goto LAB_027ffb28;
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
LAB_027ffb28:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


