/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f89938; name: FUN_00f89938
 */


void FUN_00f89938(long param_1,long *param_2,byte param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  long *plVar23;
  long lVar24;
  undefined8 *local_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  byte local_100;
  long *local_f8;
  long *local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  long *local_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  long local_78;
  undefined8 local_70 [2];
  
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar11 = *(long *)PTR_DAT_047d4e00;
  *(long *)PTR_DAT_047d4e08 = lVar11;
  plVar23 = *(long **)(lVar11 + 0xb4f0);
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar11 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar11;
  lVar21 = *(long *)(lVar11 + 0x30);
  lVar24 = *param_2;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  local_118 = param_1;
  FUN_00c43ef0(&local_b0,param_1 + 0x98);
  local_110 = (undefined8 *)0x0;
  uStack_108 = 0;
  lVar11 = 0;
  if (param_1 != 0) {
    lVar11 = param_1 + 0x28;
  }
  if (local_b0[2] == lVar11) {
    FUN_00f8b440(&local_110,&local_b0);
  }
  puVar18 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_e8 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_e8);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  local_100 = param_3 & 1;
  uVar20 = *(undefined8 *)(lVar24 + 8);
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  puVar7 = PTR_DAT_047d8c68;
  puVar6 = PTR_DAT_047d8c60;
  uVar9 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar9;
  FUN_00f8b03c(&local_f8,uVar9,uVar20);
  (**(code **)(*plVar23 + 0x18))(&local_b0,plVar23);
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  plVar16 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    plVar16 = plVar23 + 5;
  }
  if ((long *)local_b0[2] == plVar16) {
    FUN_00cfd544(&local_e8,&local_b0);
  }
  puVar18 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_128 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_128);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  local_c8 = 0;
  local_d8 = local_118;
  local_d0 = (undefined8 *)0x0;
  FUN_00e27c6c(&local_d0,&local_110);
  local_c0 = (long *)CONCAT71(local_c0._1_7_,local_100);
  local_b8 = local_f8;
  if (local_f8 != (long *)0x0) {
    lVar17 = local_f8[6];
    if (*(long *)(lVar17 + 0x10) == 0) goto LAB_00f8ae1c;
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar20;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) goto LAB_00f8ae3c;
  }
  if ((*(byte *)(lVar24 + 0x6d) & 1) == 0) {
    if ((*(byte *)(lVar24 + 0x6c) & 1) == 0) {
      plVar23 = (long *)(lVar24 + 0x78);
      lVar17 = nn::os::GetCurrentThread();
LAB_00f8a768:
      if (*plVar23 == 0) goto code_r0x00f8a770;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x80));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(lVar24 + 0x80));
            while (*plVar23 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar5) {
                *plVar23 = lVar17;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00f8a778;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar5) {
          *plVar23 = lVar17;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00f8a778:
      if ((*(byte *)(lVar24 + 0x6c) & 1) == 0) {
        local_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        FUN_00f8c918(&local_b0,&local_e8);
        local_a0 = local_d8;
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        FUN_00e9a898(&local_98,&local_d0);
        local_88 = (long *)CONCAT71(local_88._1_7_,local_c0._0_1_);
        local_80 = local_b8;
        if (local_b8 != (long *)0x0) {
          lVar17 = local_b8[6];
          if (*(long *)(lVar17 + 0x10) == 0) goto LAB_00f8ae1c;
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 0) {
            uVar20 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
            *(undefined8 *)(lVar17 + 8) = uVar20;
            *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) goto LAB_00f8ae3c;
        }
        local_78 = lVar24 + 0x58;
        FUN_00f8c574(lVar24 + 200,&local_b0);
        if (local_80 != (long *)0x0) {
          lVar17 = local_80[6];
          psVar1 = (short *)(lVar17 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar17 + 0x10) = 0;
            (**(code **)(*local_80 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_00f8adf4;
        }
        puVar18 = local_98;
        if (local_98 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_98 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_98 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_128 = (undefined8 *)*puVar18;
              FUN_00c44438(lVar17 + 0x8040,&local_128);
            }
          }
          else if (sVar3 == 0) goto LAB_00f8a100;
        }
        puVar18 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_b0 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_128 = (undefined8 *)*puVar18;
              FUN_00c44438(lVar17 + 0x8040,&local_128);
            }
          }
          else if (sVar3 == 0) goto LAB_00f8a100;
        }
      }
      else {
        FUN_00f8c0a8(&local_e8,*(undefined8 *)(lVar24 + 0x60),*(undefined4 *)(lVar24 + 0x68));
      }
      *(undefined8 *)(lVar24 + 0x78) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar24 + 0x80));
      goto LAB_00f89b2c;
    }
    FUN_00f8c0a8(&local_e8,*(undefined8 *)(lVar24 + 0x60),*(undefined4 *)(lVar24 + 0x68));
  }
LAB_00f89b2c:
  if (local_b8 != (long *)0x0) {
    lVar24 = local_b8[6];
    psVar1 = (short *)(lVar24 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar24 + 0x10) = 0;
      (**(code **)(*local_b8 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00f8adf4;
  }
  puVar18 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar24 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar24;
        local_b0 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar24 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  puVar18 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_e8 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar24 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar24;
        local_b0 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar24 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  plVar23 = local_f8;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  FUN_00c43ef0(&local_b0,param_1 + 0x98);
  local_128 = (undefined8 *)0x0;
  uStack_120 = 0;
  if (local_b0[2] == lVar11) {
    FUN_00f8b440(&local_128,&local_b0);
  }
  puVar18 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_e8 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_e8);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  lVar11 = plVar23[1];
  if (((*PTR_DAT_047d8c58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar20 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar20;
  FUN_00cbf5d4(&local_f0,uVar20,lVar11);
  plVar15 = *(long **)(lVar21 + 0x340);
  (**(code **)(*plVar15 + 0x18))(&local_b0,plVar15);
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  plVar16 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    plVar16 = plVar15 + 5;
  }
  if ((long *)local_b0[2] == plVar16) {
    FUN_00f8b9c8(&local_e8,&local_b0);
  }
  puVar18 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_b0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_b0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_70[0] = *puVar18;
        FUN_00c44438(lVar11 + 0x8040,local_70);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(lVar21 + 0x348));
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_00e27c6c(&local_d0,&local_128);
  local_c0 = local_f0;
  if (local_f0 != (long *)0x0) {
    lVar11 = local_f0[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
LAB_00f8ae1c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar20;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
LAB_00f8ae3c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  if ((*(byte *)((long)plVar23 + 0x62) & 1) == 0) {
    if ((*(byte *)((long)plVar23 + 0x61) & 1) == 0) {
      plVar16 = plVar23 + 0xb;
      plVar15 = plVar23 + 0xd;
      lVar11 = nn::os::GetCurrentThread();
LAB_00f89c98:
      if (*plVar15 == 0) goto code_r0x00f89ca0;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0xe));
      do {
        if (*plVar15 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(plVar23 + 0xe));
            while (*plVar15 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar5) {
                *plVar15 = lVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_00f89ca8;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *plVar15 = lVar11;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_00f89ca8:
      if ((*(byte *)((long)plVar23 + 0x61) & 1) == 0) {
        local_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        FUN_00f8b764(&local_b0,&local_e8);
        local_98 = (undefined8 *)0x0;
        local_90 = 0;
        local_a0 = CONCAT44(local_a0._4_4_,(undefined4)local_d8);
        FUN_00e9a898(&local_98,&local_d0);
        local_88 = local_c0;
        if (local_c0 != (long *)0x0) {
          lVar11 = local_c0[6];
          if (*(long *)(lVar11 + 0x10) == 0) goto LAB_00f8ae1c;
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 0) {
            uVar20 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
            *(undefined8 *)(lVar11 + 8) = uVar20;
            *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
          }
          else if (sVar3 == -1) goto LAB_00f8ae3c;
        }
        uVar10 = plVar23[0x18];
        local_80 = plVar16;
        if (uVar10 < (ulong)plVar23[0x19]) {
          FUN_00f8aef8(plVar23[0x1a],uVar10,&local_b0);
          plVar23[0x18] = uVar10 + 0x90;
        }
        else {
          uVar14 = plVar23[0x1b];
          lVar11 = (long)(uVar10 - plVar23[0x17]) >> 4;
          if (0x7ffffffffffffffe < uVar14) {
            uVar14 = 0x7fffffffffffffff;
          }
          uVar10 = lVar11 * -0x71c71c71c71c71c7 + 1;
          if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar21 = plVar23[0x19] - plVar23[0x17] >> 4;
          uVar13 = lVar21 * 0x1c71c71c71c71c72;
          if (uVar10 <= uVar13) {
            uVar10 = uVar13;
          }
          plVar16 = plVar23 + 0x1a;
          if (uVar14 >> 1 <= (ulong)(lVar21 * -0x71c71c71c71c71c7)) {
            uVar10 = uVar14;
          }
          if (uVar10 == 0) {
            lVar21 = 0;
          }
          else {
            lVar21 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar10 * 0x90,0x10);
            if (lVar21 == 0) {
              (**(code **)(*(long *)*plVar16 + 0xe8))();
            }
          }
          lVar24 = lVar21 + lVar11 * 0x10;
          FUN_00f8aef8(plVar23[0x1a],lVar24,&local_b0);
          puVar18 = (undefined8 *)plVar23[0x17];
          puVar19 = (undefined8 *)plVar23[0x18];
          lVar11 = lVar24 + 0x90;
          if (puVar19 == puVar18) {
            puVar19 = puVar18;
          }
          else {
            do {
              lVar24 = lVar24 + -0x90;
              puVar19 = puVar19 + -0x12;
              FUN_00f8c7ec(plVar16,lVar24,puVar19);
            } while (puVar18 != puVar19);
            puVar18 = (undefined8 *)plVar23[0x17];
            puVar19 = (undefined8 *)plVar23[0x18];
          }
          plVar23[0x17] = lVar24;
          plVar23[0x18] = lVar11;
          lVar11 = plVar23[0x19];
          plVar23[0x19] = lVar21 + uVar10 * 0x90;
          if (puVar19 != puVar18) {
            pcVar12 = (code *)puVar19[-0x11];
            puVar22 = puVar19 + -0x12;
            if (pcVar12 != (code *)0x0) {
              puVar19[-0x10] = 0;
              puVar19[-0xf] = 0;
              *puVar22 = 0;
              puVar19[-0x11] = 0;
              (*pcVar12)(puVar19 + -0xe);
            }
            while (puVar19 = puVar22, puVar19 != puVar18) {
              pcVar12 = (code *)puVar19[-0x11];
              puVar22 = puVar19 + -0x12;
              if (pcVar12 != (code *)0x0) {
                puVar19[-0x10] = 0;
                puVar19[-0xf] = 0;
                puVar19[-0x12] = 0;
                puVar19[-0x11] = 0;
                (*pcVar12)(puVar19 + -0xe);
              }
            }
          }
          if (puVar18 != (undefined8 *)0x0) {
            plVar16 = (long *)*plVar16;
            uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
            if (((uVar10 & 1) == 0) || (lVar21 = FUN_00c4e600(), *(int *)(lVar21 + 0x12c8) < 1)) {
              (**(code **)(*plVar16 + 0x18))(plVar16,puVar18,lVar11 - (long)puVar18,0x10);
            }
            else {
              FUN_00c48fe8(plVar16,puVar18,lVar11 - (long)puVar18,0x10);
            }
          }
        }
        if (local_88 != (long *)0x0) {
          lVar11 = local_88[6];
          psVar1 = (short *)(lVar11 + 0x1a);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            *(undefined8 *)(lVar11 + 0x10) = 0;
            (**(code **)(*local_88 + 0x50))();
          }
          else if (sVar3 == 0) goto LAB_00f8adf4;
        }
        puVar18 = local_98;
        if (local_98 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_98 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_98 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_70[0] = *puVar18;
              FUN_00c44438(lVar11 + 0x8040,local_70);
            }
          }
          else if (sVar3 == 0) goto LAB_00f8a100;
        }
        puVar18 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_b0 + 3);
          do {
            sVar3 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar3 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar3 == 1) {
            piVar2 = (int *)((long)local_b0 + 0x1c);
            do {
              iVar8 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar11 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar11;
              local_70[0] = *puVar18;
              FUN_00c44438(lVar11 + 0x8040,local_70);
            }
          }
          else if (sVar3 == 0) goto LAB_00f8a100;
        }
      }
      else {
        FUN_01059940(&local_e8,(char)plVar23[0xc]);
      }
      plVar23[0xd] = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar23 + 0xe));
      goto LAB_00f89e4c;
    }
    FUN_01059940(&local_e8,(char)plVar23[0xc]);
  }
LAB_00f89e4c:
  if (local_c0 != (long *)0x0) {
    lVar11 = local_c0[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_c0 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00f8adf4;
  }
  puVar18 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_d0 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b0 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  puVar18 = local_e8;
  if (local_e8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_e8 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_e8 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b0 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  if (local_f0 != (long *)0x0) {
    lVar11 = local_f0[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_f0 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_00f8adf4;
  }
  puVar18 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_128 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_128 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b0 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) goto LAB_00f8a100;
  }
  if (local_f8 != (long *)0x0) {
    lVar11 = local_f8[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*local_f8 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_00f8adf4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar18 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_110 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_b0 = (undefined8 *)*puVar18;
        FUN_00c44438(lVar11 + 0x8040,&local_b0);
      }
    }
    else if (sVar3 == 0) {
LAB_00f8a100:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x00f8a770:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar5) {
    *plVar23 = lVar17;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f8a778;
  goto LAB_00f8a768;
code_r0x00f89ca0:
  cVar4 = '\x01';
  bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar5) {
    *plVar15 = lVar11;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_00f89ca8;
  goto LAB_00f89c98;
}


