/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0279b668; name: FUN_0279b668
 */


void FUN_0279b668(long *param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  long local_38;
  
  plVar11 = (long *)*param_1;
  local_70 = 0x94e8fd0f216ecadc;
  pcStack_68 = "RecoverOnRetry";
  local_60 = 0xe;
  local_58 = (long *)0x0;
  local_48 = plVar11;
  if (plVar11 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    lVar12 = plVar11[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0279ba4c;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar9;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0279ba4c;
    plVar13 = local_48;
  }
  local_40 = CONCAT71(local_40._1_7_,(char)param_1[1]);
  FUN_0279be0c(&local_50,plVar11,&local_70,&local_48);
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar4 == 0) goto LAB_0279ba4c;
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  local_78 = (long *)*param_2;
  if (local_78 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    lVar12 = local_78[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0279ba4c;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar9;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0279ba4c;
    local_80 = (long *)*param_2;
    if (local_80 != (long *)0x0) {
      lVar12 = local_80[6];
      if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0279ba4c;
      psVar1 = (short *)(lVar12 + 0x1a);
      do {
        sVar4 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar4 == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar9;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar4 == -1) goto LAB_0279ba4c;
    }
  }
  local_88 = (long *)*param_2;
  if (local_88 != (long *)0x0) {
    lVar12 = local_88[6];
    if (*(long *)(lVar12 + 0x10) == 0) goto LAB_0279ba4c;
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      *(undefined8 *)(lVar12 + 8) = uVar9;
      *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
    }
    else if (sVar4 == -1) goto LAB_0279ba4c;
  }
  local_48 = (long *)CONCAT44(local_48._4_4_,1);
  FUN_0279c2a0(&local_90,*(undefined8 *)(*param_1 + 8),&local_48,&local_78,&local_80,&local_88);
  plVar11 = local_50;
  FUN_02795884(local_50 + 0x1e,&local_90);
  if ((int)plVar11[9] - 1U < 3) {
    FUN_0174a3b8(plVar11);
  }
  FUN_0177dc44(&local_48,*param_2);
  plVar11 = local_48;
  if (local_48 != (long *)0x0) {
    lVar12 = local_48[2];
    plVar13 = (long *)0x0;
    if (lVar12 != 0) {
      plVar13 = (long *)(lVar12 + -0x28);
    }
    plVar3 = local_48 + 3;
    do {
      sVar4 = (short)*plVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(short *)plVar3 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar10 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar10;
        local_b0 = (undefined8 *)*plVar11;
        FUN_00c44438(lVar10 + 0x8040,&local_b0);
      }
    }
    else if (sVar4 == 0) goto LAB_0279ba4c;
    plVar11 = local_50;
    if (lVar12 != 0) {
      local_48 = (long *)0x0;
      local_40 = 0;
      FUN_00c43ef0(&local_48,local_50 + 6);
      local_b0 = (undefined8 *)0x0;
      uStack_a8 = 0;
      plVar3 = (long *)0x0;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 5;
      }
      if ((long *)local_48[2] == plVar3) {
        FUN_015d2a6c(&local_b0,&local_48);
      }
      plVar11 = local_48;
      if (local_48 != (long *)0x0) {
        plVar3 = local_48 + 3;
        do {
          sVar4 = (short)*plVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(short *)plVar3 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_48 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_38 = *plVar11;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
          }
        }
        else if (sVar4 == 0) goto LAB_0279ba4c;
      }
      local_a0 = (undefined8 *)0x0;
      uStack_98 = 0;
      FUN_0177de7c(&local_a0,&local_b0);
      (**(code **)(*plVar13 + 0x90))(plVar13,&local_a0);
      puVar7 = local_a0;
      if (local_a0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_a0 + 3);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_a0 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_48 = (long *)*puVar7;
            FUN_00c44438(lVar12 + 0x8040,&local_48);
          }
        }
        else if (sVar4 == 0) goto LAB_0279ba4c;
      }
      puVar7 = local_b0;
      if (local_b0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_b0 + 3);
        do {
          sVar4 = *psVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar6) {
            *psVar1 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_b0 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar12;
            local_48 = (long *)*puVar7;
            FUN_00c44438(lVar12 + 0x8040,&local_48);
          }
        }
        else if (sVar4 == 0) goto LAB_0279ba4c;
      }
    }
  }
  if (local_90 != (long *)0x0) {
    lVar12 = local_90[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_90 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0279ba4c;
  }
  if (local_88 != (long *)0x0) {
    lVar12 = local_88[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_88 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0279ba4c;
  }
  if (local_80 != (long *)0x0) {
    lVar12 = local_80[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_80 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0279ba4c;
  }
  if (local_78 != (long *)0x0) {
    lVar12 = local_78[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar4 == 0) goto LAB_0279ba4c;
  }
  if (local_50 != (long *)0x0) {
    lVar12 = local_50[6];
    psVar1 = (short *)(lVar12 + 0x1a);
    do {
      sVar4 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar4 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*local_50 + 0x50))();
    }
    else if (sVar4 == 0) {
LAB_0279ba4c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  return;
}


