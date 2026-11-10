/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010161a0; name: FUN_010161a0
 */


void FUN_010161a0(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  short sVar11;
  long *plVar12;
  long *local_e0 [18];
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_28;
  
  if (((char)param_1[0x37] != '\0') &&
     ((param_1[0x27] == 0 || (*(short *)(param_1[0x27] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_0101a698(param_1,param_1[1],&local_50,param_1 + 0x38);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_0101b6a8(local_e0,lVar8);
      FUN_0101e88c(param_1 + 0x27,local_e0);
      FUN_010193f8(local_e0);
    }
  }
  if ((*(char *)((long)param_1 + 0x1b9) != '\0') &&
     ((param_1[0x29] == 0 || (*(short *)(param_1[0x29] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_01019c48(param_1,param_1[1],&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_0101b804(local_e0,lVar8);
      FUN_0101ebb0(param_1 + 0x29,local_e0);
      FUN_01019508(local_e0);
    }
  }
  if ((*(char *)((long)param_1 + 0x1ba) != '\0') &&
     ((param_1[0x2b] == 0 || (*(short *)(param_1[0x2b] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_01018930(param_1,param_1[1],&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_0101b960(local_e0,lVar8);
      FUN_0101eed4(param_1 + 0x2b,local_e0);
      FUN_01019618(local_e0);
    }
    lVar8 = param_1[1];
    FUN_0101c3b8(local_e0);
    FUN_0101886c(&local_50,lVar8,local_e0);
    plVar9 = (long *)param_1[0x1b2];
    param_1[0x1b2] = 0;
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar11 == 0) goto LAB_01016604;
    }
    param_1[0x1b2] = (long)local_50;
    lVar8 = param_1[0x1b3];
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar11 = *(short *)(lVar8 + 0x1a);
LAB_010171a0:
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_010171c4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_010171c4:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x010171cc;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        plVar12 = (long *)param_1[0x1b2];
        (**(code **)(*plVar12 + 0x18))(local_e0,plVar12);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        plVar9 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          plVar9 = plVar12 + 5;
        }
        if ((long *)local_e0[0][2] == plVar9) {
          FUN_01ab09f0(&local_50,local_e0);
        }
        plVar9 = local_e0[0];
        if (local_e0[0] != (long *)0x0) {
          plVar12 = local_e0[0] + 3;
          do {
            sVar11 = (short)*plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(short *)plVar12 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_e0[0] + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = (long *)*plVar9;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar11 == 0) goto LAB_01016820;
        }
        plVar9 = (long *)(lVar8 + -0x28);
        FUN_015c9634(plVar9,&local_50);
        puVar6 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_50 + 3);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_e0[0] = (long *)*puVar6;
              FUN_00c44438(lVar8 + 0x8040,local_e0);
            }
          }
          else if (sVar11 == 0) goto LAB_01016820;
        }
        (**(code **)(*plVar9 + 0x60))(plVar9);
      }
    }
LAB_010164c8:
    lVar8 = param_1[0x1b5];
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar11 = *(short *)(lVar8 + 0x1a);
LAB_010164e0:
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01016504;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01016504:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x0101650c;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        plVar12 = (long *)param_1[0x1b2];
        (**(code **)(*plVar12 + 0x18))(local_e0,plVar12);
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        plVar9 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          plVar9 = plVar12 + 5;
        }
        if ((long *)local_e0[0][2] == plVar9) {
          FUN_01ab09f0(&local_50,local_e0);
        }
        plVar9 = local_e0[0];
        if (local_e0[0] != (long *)0x0) {
          plVar12 = local_e0[0] + 3;
          do {
            sVar11 = (short)*plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *(short *)plVar12 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_e0[0] + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = (long *)*plVar9;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
            }
          }
          else if (sVar11 == 0) goto LAB_01016820;
        }
        plVar9 = (long *)(lVar8 + -0x28);
        FUN_017e0e10(plVar9,&local_50);
        puVar6 = local_50;
        if (local_50 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_50 + 3);
          do {
            sVar11 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar11 == 1) {
            piVar2 = (int *)((long)local_50 + 0x1c);
            do {
              iVar7 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar7 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_e0[0] = (long *)*puVar6;
              FUN_00c44438(lVar8 + 0x8040,local_e0);
            }
          }
          else if (sVar11 == 0) goto LAB_01016820;
        }
        (**(code **)(*plVar9 + 0x60))(plVar9);
      }
    }
  }
LAB_010161d4:
  if ((*(char *)((long)param_1 + 0x1bc) != '\0') &&
     ((param_1[0x2f] == 0 || (*(short *)(param_1[0x2f] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_01018b5c(param_1,param_1[1],&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_0101b294(local_e0,lVar8);
      FUN_0101df20(param_1 + 0x2f,local_e0);
      FUN_010190c8(local_e0);
      FUN_010179d4(local_e0,lVar8);
      FUN_0101c3f8(&local_28,local_e0);
      plVar9 = local_e0[0];
      if (local_e0[0] != (long *)0x0) {
        plVar12 = local_e0[0] + 3;
        do {
          sVar11 = (short)*plVar12;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *(short *)plVar12 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          piVar2 = (int *)((long)local_e0[0] + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar8 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar8;
            local_50 = (undefined8 *)*plVar9;
            FUN_00c44438(lVar8 + 0x8040,&local_50);
          }
        }
        else if (sVar11 == 0) goto LAB_01016820;
      }
      plVar9 = local_28;
      if (local_28 != (long *)0x0) {
        if (param_1[0x1b7] != 0) {
          FUN_0101f1f8(local_28,param_1[0x1b7] + 0x40);
        }
        lVar8 = plVar9[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar11 == 0) {
LAB_01016604:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
  if ((*(char *)((long)param_1 + 0x1bb) != '\0') &&
     ((param_1[0x2d] == 0 || (*(short *)(param_1[0x2d] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_01018d88(param_1,param_1[1],&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_0101b138(local_e0,lVar8);
      FUN_0101dbfc(param_1 + 0x2d,local_e0);
      FUN_01018fb8(local_e0);
    }
  }
  if ((*(char *)((long)param_1 + 0x1bd) != '\0') &&
     ((param_1[0x31] == 0 || (*(short *)(param_1[0x31] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_01017ddc(param_1,param_1[1],&local_50,param_1 + 0x1a6);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_01018710(local_e0,lVar8);
      FUN_0101bde0(param_1 + 0x31,local_e0);
      FUN_01018294(local_e0);
      *(int *)(param_1 + 0xd0) = (int)param_1[0x39];
      *(undefined4 *)((long)param_1 + 0x684) = *(undefined4 *)((long)param_1 + 0x1cc);
      *(int *)(param_1 + 0x182) = (int)param_1[0x39];
      *(undefined4 *)((long)param_1 + 0xc14) = *(undefined4 *)((long)param_1 + 0x1cc);
    }
  }
  if ((*(char *)((long)param_1 + 0x1be) != '\0') &&
     ((param_1[0x33] == 0 || (*(short *)(param_1[0x33] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_01019fb4(param_1,param_1[1],&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    if (lVar8 != 0) {
      FUN_0101b54c(local_e0,lVar8);
      FUN_0101e568(param_1 + 0x33,local_e0);
      FUN_010192e8(local_e0);
    }
  }
  if ((*(char *)((long)param_1 + 0x1bf) != '\0') &&
     ((param_1[0x35] == 0 || (*(short *)(param_1[0x35] + 0x1a) == 0)))) {
    (**(code **)(*param_1 + 0x18))(local_e0,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_e0[0][2] == param_1 + 5) {
      FUN_01017a0c(&local_50,local_e0);
    }
    plVar9 = local_e0[0];
    if (local_e0[0] != (long *)0x0) {
      plVar12 = local_e0[0] + 3;
      do {
        sVar11 = (short)*plVar12;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(short *)plVar12 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_e0[0] + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = (long *)*plVar9;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01016820;
    }
    lVar8 = FUN_0101a32c(param_1,param_1[1],&local_50);
    puVar6 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar11 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar11 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar7 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_e0[0] = (long *)*puVar6;
          FUN_00c44438(lVar10 + 0x8040,local_e0);
        }
      }
      else if (sVar11 == 0) {
LAB_01016820:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (lVar8 != 0) {
      FUN_0101b3f0(local_e0,lVar8);
      FUN_0101e244(param_1 + 0x35,local_e0);
      FUN_010191d8(local_e0);
    }
  }
  return;
code_r0x010171cc:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_010164c8;
  goto LAB_010171a0;
code_r0x0101650c:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_010161d4;
  goto LAB_010164e0;
}


