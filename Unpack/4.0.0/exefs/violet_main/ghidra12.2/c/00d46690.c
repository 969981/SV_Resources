/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d46690; name: FUN_00d46690
 */


void FUN_00d46690(undefined8 *param_1,long param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  short sVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar8 = *param_3;
  lVar11 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48);
  if (lVar11 != 0) {
    plVar10 = (long *)(*(long *)(param_2 + 0x48) + 8);
    uVar9 = (lVar11 >> 4) * -0x5555555555555555;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    lVar11 = 1;
LAB_00d466e0:
    if (*plVar10 != lVar8) goto code_r0x00d466ec;
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00c43ef0(&local_40,param_2 + 0x30);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    lVar8 = 0;
    if (param_2 != 0) {
      lVar8 = param_2 + 0x28;
    }
    if (local_40[2] == lVar8) {
      FUN_00d477dc(&local_60,&local_40);
    }
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_18 = *puVar5;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar7 == 0) goto LAB_00d46bd4;
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00d474b8(&local_50,&local_60);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d471a8(param_1,&local_50);
    puVar5 = local_50;
    *(undefined4 *)(param_1 + 2) = 0;
    *(long *)((long)param_1 + 0x14) = lVar11;
    if (local_50 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_50 + 3);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        piVar2 = (int *)((long)local_50 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_40 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar11 + 0x8040,&local_40);
        }
      }
      else if (sVar7 == 0) goto LAB_00d46bd4;
    }
    if (local_60 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00d46c10;
    }
    goto LAB_00d46884;
  }
LAB_00d466fc:
  lVar11 = *(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x80);
  if (lVar11 != 0) {
    plVar10 = (long *)(*(long *)(param_2 + 0x80) + 8);
    uVar9 = (lVar11 >> 4) * -0x5555555555555555;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    lVar11 = 1;
LAB_00d4672c:
    if (*plVar10 != lVar8) goto code_r0x00d46738;
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00c43ef0(&local_40,param_2 + 0x30);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    lVar8 = 0;
    if (param_2 != 0) {
      lVar8 = param_2 + 0x28;
    }
    if (local_40[2] == lVar8) {
      FUN_00d477dc(&local_60,&local_40);
    }
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_18 = *puVar5;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar7 == 0) goto LAB_00d46bd4;
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00d474b8(&local_70,&local_60);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d471a8(param_1,&local_70);
    puVar5 = local_70;
    *(undefined4 *)(param_1 + 2) = 1;
    *(long *)((long)param_1 + 0x14) = lVar11;
    if (local_70 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_70 + 3);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        piVar2 = (int *)((long)local_70 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_40 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar11 + 0x8040,&local_40);
        }
      }
      else if (sVar7 == 0) goto LAB_00d46bd4;
    }
    if (local_60 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00d46c10;
    }
    goto LAB_00d46884;
  }
LAB_00d46748:
  lVar11 = *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8);
  if (lVar11 != 0) {
    plVar10 = (long *)(*(long *)(param_2 + 0xb8) + 8);
    uVar9 = (lVar11 >> 4) * -0x5555555555555555;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    lVar11 = 1;
LAB_00d46778:
    if (*plVar10 != lVar8) goto code_r0x00d46784;
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00c43ef0(&local_40,param_2 + 0x30);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    lVar8 = 0;
    if (param_2 != 0) {
      lVar8 = param_2 + 0x28;
    }
    if (local_40[2] == lVar8) {
      FUN_00d477dc(&local_60,&local_40);
    }
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        piVar2 = (int *)((long)local_40 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_18 = *puVar5;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar7 == 0) goto LAB_00d46bd4;
    }
    local_80 = (undefined8 *)0x0;
    uStack_78 = 0;
    FUN_00d474b8(&local_80,&local_60);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00d471a8(param_1,&local_80);
    puVar5 = local_80;
    *(undefined4 *)(param_1 + 2) = 2;
    *(long *)((long)param_1 + 0x14) = lVar11;
    if (local_80 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar7 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar7 == 1) {
        piVar2 = (int *)((long)local_80 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_40 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar11 + 0x8040,&local_40);
        }
      }
      else if (sVar7 == 0) goto LAB_00d46bd4;
    }
    if (local_60 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar7 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar7 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_00d46c10;
    }
    goto LAB_00d46884;
  }
LAB_00d46794:
  lVar11 = *(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0);
  if (lVar11 != 0) {
    plVar10 = (long *)(*(long *)(param_2 + 0xf0) + 8);
    uVar9 = (lVar11 >> 4) * -0x5555555555555555;
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    lVar11 = 1;
    do {
      if (*plVar10 == lVar8) {
        local_40 = (undefined8 *)0x0;
        uStack_38 = 0;
        FUN_00c43ef0(&local_40,param_2 + 0x30);
        local_60 = (undefined8 *)0x0;
        uStack_58 = 0;
        lVar8 = 0;
        if (param_2 != 0) {
          lVar8 = param_2 + 0x28;
        }
        if (local_40[2] == lVar8) {
          FUN_00d477dc(&local_60,&local_40);
        }
        puVar5 = local_40;
        if (local_40 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_40 + 3);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            piVar2 = (int *)((long)local_40 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_18 = *puVar5;
              FUN_00c44438(lVar8 + 0x8040,&local_18);
            }
          }
          else if (sVar7 == 0) goto LAB_00d46bd4;
        }
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        FUN_00d474b8(&local_90,&local_60);
        *param_1 = 0;
        param_1[1] = 0;
        FUN_00d471a8(param_1,&local_90);
        puVar5 = local_90;
        *(undefined4 *)(param_1 + 2) = 3;
        *(long *)((long)param_1 + 0x14) = lVar11;
        if (local_90 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_90 + 3);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar4) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            piVar2 = (int *)((long)local_90 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_40 = (undefined8 *)*puVar5;
              FUN_00c44438(lVar11 + 0x8040,&local_40);
            }
          }
          else if (sVar7 == 0) goto LAB_00d46bd4;
        }
        if (local_60 == (undefined8 *)0x0) {
          return;
        }
        psVar1 = (short *)(local_60 + 3);
        do {
          sVar7 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar7 == 1) {
          piVar2 = (int *)((long)local_60 + 0x1c);
          do {
            iVar6 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00d46c10:
          puVar5 = local_60;
          if (iVar6 == -1) {
            return;
          }
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar11 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar11;
          local_40 = (undefined8 *)*puVar5;
          FUN_00c44438(lVar11 + 0x8040,&local_40);
          return;
        }
LAB_00d46884:
        if (sVar7 != 0) {
          return;
        }
LAB_00d46bd4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      lVar11 = lVar11 + 0x100000000;
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + 6;
    } while (uVar9 != 0);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
code_r0x00d466ec:
  lVar11 = lVar11 + 0x100000000;
  uVar9 = uVar9 - 1;
  plVar10 = plVar10 + 6;
  if (uVar9 == 0) goto LAB_00d466fc;
  goto LAB_00d466e0;
code_r0x00d46738:
  lVar11 = lVar11 + 0x100000000;
  uVar9 = uVar9 - 1;
  plVar10 = plVar10 + 6;
  if (uVar9 == 0) goto LAB_00d46748;
  goto LAB_00d4672c;
code_r0x00d46784:
  lVar11 = lVar11 + 0x100000000;
  uVar9 = uVar9 - 1;
  plVar10 = plVar10 + 6;
  if (uVar9 == 0) goto LAB_00d46794;
  goto LAB_00d46778;
}


