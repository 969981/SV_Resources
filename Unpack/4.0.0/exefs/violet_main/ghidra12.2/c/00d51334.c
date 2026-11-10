/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d51334; name: FUN_00d51334
 */


undefined8 FUN_00d51334(int *param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  undefined1 *puVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  short sVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  bool bVar16;
  long lVar17;
  long lVar18;
  long *local_a8;
  undefined8 *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_48;
  
  if (param_2 != 0) {
    plVar11 = (long *)(param_1 + 0x30);
    if ((*plVar11 == 0) || (*(short *)(*plVar11 + 0x1a) == 0)) {
      plVar10 = (long *)(param_2 + 0x110);
      lVar17 = *plVar10;
      lVar9 = nn::os::GetCurrentThread();
      if (lVar9 == lVar17) {
        bVar16 = true;
      }
      else {
        lVar9 = nn::os::GetCurrentThread();
        do {
          if (*plVar10 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x118));
              while (*plVar10 == 0) {
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                if (bVar16) {
                  *plVar10 = lVar9;
                  cVar7 = ExclusiveMonitorsStatus();
                }
                if (cVar7 == '\0') goto LAB_00d513a8;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar16) {
            *plVar10 = lVar9;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
LAB_00d513a8:
        bVar16 = false;
      }
      plVar10 = (long *)FUN_01197610(*(undefined8 *)(param_2 + 0x128),
                                     *(undefined8 *)(param_2 + 0x130));
      if ((*(long **)(param_2 + 0x130) == plVar10) || (*plVar10 == 0)) {
        plVar10 = (long *)FUN_01197610(*(undefined8 *)(param_2 + 0x160),
                                       *(undefined8 *)(param_2 + 0x168));
        if (*(long **)(param_2 + 0x168) == plVar10) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if (*plVar10 != 0) {
            lVar9 = *plVar10 + -0x20;
          }
        }
      }
      else {
        lVar9 = *plVar10 + -0x20;
      }
      if (!bVar16) {
        *(undefined8 *)(param_2 + 0x110) = 0;
        nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x118));
      }
      if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x278) & 1) != 0)) {
        plVar5 = *(long **)(lVar9 + 0x180);
        for (plVar10 = *(long **)(lVar9 + 0x178); plVar10 != plVar5; plVar10 = plVar10 + 1) {
          lVar18 = *plVar10;
          plVar1 = (long *)(lVar18 + 0x60);
          lVar17 = nn::os::GetCurrentThread();
          do {
            if (*plVar1 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar18 + 0x68));
                while (*plVar1 == 0) {
                  cVar7 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar16) {
                    *plVar1 = lVar17;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                  if (cVar7 == '\0') goto LAB_00d51428;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar16) {
              *plVar1 = lVar17;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
LAB_00d51428:
          cVar7 = *(char *)(lVar18 + 0xeb);
          *(undefined8 *)(lVar18 + 0x60) = 0;
          nn::os::SignalLightEvent((LightEventType *)(lVar18 + 0x68));
          if (cVar7 == '\0') goto LAB_00d5167c;
        }
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_00c43ef0(&local_80,lVar9 + 0x98);
        local_a0 = (undefined8 *)0x0;
        pcStack_98 = (char *)0x0;
        if (local_80[2] == lVar9 + 0x28) {
          FUN_00d94688(&local_a0,&local_80);
        }
        puVar15 = local_80;
        if (local_80 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_80 + 3);
          do {
            sVar13 = *psVar2;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)local_80 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar16) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_48 = *puVar15;
              FUN_00c44438(lVar17 + 0x8040,&local_48);
            }
          }
          else if (sVar13 == 0) goto LAB_00d51e40;
        }
        FUN_00d48230(plVar11,&local_a0);
        puVar15 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_a0 + 3);
          do {
            sVar13 = *psVar2;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)local_a0 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar16) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_80 = (undefined8 *)*puVar15;
              FUN_00c44438(lVar17 + 0x8040,&local_80);
            }
          }
          else if (sVar13 == 0) goto LAB_00d51e40;
        }
        local_a0 = (undefined8 *)&DAT_b49a716fb65dbb9c;
        pcStack_98 = "face";
        local_90 = 4;
        local_88 = (long *)0x0;
        FUN_00f0c464(&local_80,*(undefined8 *)(lVar9 + 0x170),&local_a0);
        FUN_00c43ef0(param_1 + 0x5a,&local_80);
        puVar15 = local_80;
        param_1[0x60] = local_68;
        *(undefined8 *)(param_1 + 0x5e) = local_70;
        if (local_80 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_80 + 3);
          do {
            sVar13 = *psVar2;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)local_80 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar16) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar17 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar17;
              local_48 = *puVar15;
              FUN_00c44438(lVar17 + 0x8040,&local_48);
            }
          }
          else if (sVar13 == 0) goto LAB_00d51e40;
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_a0 = (undefined8 *)0x3cf22a9518ac7bc;
        pcStack_98 = "mouth";
        local_90 = 5;
        local_88 = (long *)0x0;
        FUN_00f0c464(&local_80,*(undefined8 *)(lVar9 + 0x170),&local_a0);
        FUN_00c43ef0(param_1 + 0x62,&local_80);
        puVar15 = local_80;
        param_1[0x68] = local_68;
        *(undefined8 *)(param_1 + 0x66) = local_70;
        if (local_80 != (undefined8 *)0x0) {
          psVar2 = (short *)(local_80 + 3);
          do {
            sVar13 = *psVar2;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)local_80 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar16) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_48 = *puVar15;
              FUN_00c44438(lVar9 + 0x8040,&local_48);
            }
          }
          else if (sVar13 == 0) goto LAB_00d51e40;
        }
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        puVar15 = *(undefined8 **)(param_1 + 0x42);
        param_1[0x42] = 0;
        param_1[0x43] = 0;
        if (puVar15 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar15 + 3);
          do {
            sVar13 = *psVar2;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)puVar15 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar16) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_80 = (undefined8 *)*puVar15;
              FUN_00c44438(lVar9 + 0x8040,&local_80);
            }
          }
          else if (sVar13 == 0) goto LAB_00d51e40;
        }
        param_1[0x44] = 0;
        param_1[0x45] = 0;
        puVar15 = *(undefined8 **)(param_1 + 0x54);
        param_1[0x54] = 0;
        param_1[0x55] = 0;
        *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_1 + 0x34);
        if (puVar15 != (undefined8 *)0x0) {
          psVar2 = (short *)(puVar15 + 3);
          do {
            sVar13 = *psVar2;
            cVar7 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar16) {
              *psVar2 = sVar13 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar13 == 1) {
            piVar3 = (int *)((long)puVar15 + 0x1c);
            do {
              iVar8 = *piVar3;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar16) {
                *piVar3 = -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar8 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_80 = (undefined8 *)*puVar15;
              FUN_00c44438(lVar9 + 0x8040,&local_80);
            }
          }
          else if (sVar13 == 0) goto LAB_00d51e40;
        }
        param_1[0x56] = 0;
        param_1[0x57] = 0;
        *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x46);
      }
    }
LAB_00d5167c:
    lVar9 = *plVar11;
    if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar9 + 0x1a);
      sVar13 = *(short *)(lVar9 + 0x1a);
      do {
        sVar6 = *psVar2;
        if (sVar6 == sVar13) {
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar16) {
            *psVar2 = sVar13 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_00d51998;
          bVar16 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d51998:
          bVar16 = false;
        }
        if (bVar16) {
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) {
            return 0;
          }
          if ((*(long *)(param_1 + 0x42) != 0) &&
             (*(short *)(*(long *)(param_1 + 0x42) + 0x1a) != 0)) goto LAB_00d51b08;
          plVar11 = *(long **)(lVar9 + 0x150);
          plVar10 = *(long **)(lVar9 + 0x158);
          if (plVar11 == plVar10) goto LAB_00d51a00;
          goto LAB_00d519e0;
        }
        sVar13 = sVar6;
        if (sVar6 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_00d51a00:
  if ((plVar11 == plVar10) || (*plVar11 == 0)) goto LAB_00d51b04;
  FUN_01f83538(&local_a8,*plVar11,&local_80);
  if (local_a8 != (long *)0x0) {
    plVar11 = local_a8 + 5;
    (**(code **)(*local_a8 + 0x18))(&local_80);
    local_a0 = (undefined8 *)0x0;
    pcStack_98 = (char *)0x0;
    if ((long *)local_80[2] == plVar11) {
      FUN_00e14860(&local_a0,&local_80);
    }
    puVar15 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_80 + 3);
      do {
        sVar13 = *psVar2;
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar13 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar16) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_48 = *puVar15;
          FUN_00c44438(lVar17 + 0x8040,&local_48);
        }
      }
      else if (sVar13 == 0) goto LAB_00d51e40;
    }
    FUN_0136345c(param_1 + 0x42,&local_a0);
    puVar15 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar2 = (short *)(local_a0 + 3);
      do {
        sVar13 = *psVar2;
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar13 == 1) {
        piVar3 = (int *)((long)local_a0 + 0x1c);
        do {
          iVar8 = *piVar3;
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar16) {
            *piVar3 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar8 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar17 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar17;
          local_80 = (undefined8 *)*puVar15;
          FUN_00c44438(lVar17 + 0x8040,&local_80);
        }
      }
      else if (sVar13 == 0) goto LAB_00d51e40;
    }
    FUN_02a1891c(param_1,0);
    if (local_a8 != (long *)0x0) {
      lVar17 = local_a8[6];
      psVar2 = (short *)(lVar17 + 0x1a);
      do {
        sVar13 = *psVar2;
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar13 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar13 == 1) {
        *(undefined8 *)(lVar17 + 0x10) = 0;
        (**(code **)(*local_a8 + 0x50))();
      }
      else if (sVar13 == 0) goto LAB_00d51cb0;
    }
  }
  goto LAB_00d51b08;
LAB_00d521d4:
  sVar6 = *psVar2;
  if (sVar6 == sVar13) {
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar16) {
      *psVar2 = sVar13 + 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 != '\0') goto LAB_00d521f8;
    bVar16 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_00d521f8:
    bVar16 = false;
  }
  if (!bVar16) goto code_r0x00d52200;
  lVar18 = *(long *)(lVar18 + 0x10);
  if (lVar18 == 0) {
LAB_00d52090:
    uVar14 = 0;
  }
  else {
    lVar12 = *(long *)(lVar18 + 8);
    psVar2 = (short *)(lVar12 + 0x1a);
    do {
      sVar13 = *psVar2;
      cVar7 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar16) {
        *psVar2 = sVar13 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar13 == 1) {
      *(undefined8 *)(lVar12 + 0x10) = 0;
      (**(code **)(*(long *)(lVar18 + -0x28) + 0x50))();
    }
    else if (sVar13 == 0) goto LAB_00d51cb0;
LAB_00d52080:
    uVar14 = 1;
  }
  goto LAB_00d52094;
code_r0x00d52200:
  uVar14 = 0;
  sVar13 = sVar6;
  if (sVar6 == 0) goto LAB_00d52094;
  goto LAB_00d521d4;
LAB_00d52094:
  lVar18 = *(long *)(lVar17 + 8);
  psVar2 = (short *)(lVar18 + 0x1a);
  do {
    sVar13 = *psVar2;
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar16) {
      *psVar2 = sVar13 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar18 + 0x10) = 0;
    (**(code **)(*(long *)(lVar17 + -0x28) + 0x50))();
  }
  else if (sVar13 == 0) goto LAB_00d51cb0;
  goto LAB_00d51c88;
  while (plVar11 = plVar11 + 1, plVar10 != plVar11) {
LAB_00d519e0:
    if (*(undefined1 **)(*plVar11 + 0x1d0) == &DAT_afc4d6c05abef19e) goto LAB_00d51a00;
  }
LAB_00d51b04:
  local_a8 = (long *)0x0;
LAB_00d51b08:
  iVar8 = *param_1;
  if (iVar8 != 2) {
    if (*(long *)(param_1 + 0x54) != 0) {
      if (*(short *)(*(long *)(param_1 + 0x54) + 0x1a) != 0) goto LAB_00d51c7c;
      iVar8 = *param_1;
    }
    puVar4 = &DAT_b49a716fb65dbb9c;
    if (iVar8 != 0) {
      puVar4 = (undefined1 *)0xd36b2ac302427423;
    }
    plVar11 = *(long **)(lVar9 + 0x150);
    plVar10 = *(long **)(lVar9 + 0x158);
    if (plVar11 == plVar10) {
LAB_00d51b70:
      if ((plVar11 != plVar10) && (*plVar11 != 0)) {
        FUN_01f83538(&local_a8,*plVar11,&local_80);
        if (local_a8 != (long *)0x0) {
          plVar11 = local_a8 + 5;
          (**(code **)(*local_a8 + 0x18))(&local_80);
          local_a0 = (undefined8 *)0x0;
          pcStack_98 = (char *)0x0;
          if ((long *)local_80[2] == plVar11) {
            FUN_00e14860(&local_a0,&local_80);
          }
          puVar15 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_80 + 3);
            do {
              sVar13 = *psVar2;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar13 == 1) {
              piVar3 = (int *)((long)local_80 + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar16) {
                  *piVar3 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar17 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar17;
                local_48 = *puVar15;
                FUN_00c44438(lVar17 + 0x8040,&local_48);
              }
            }
            else if (sVar13 == 0) goto LAB_00d51e40;
          }
          FUN_0136345c(param_1 + 0x54,&local_a0);
          puVar15 = local_a0;
          if (local_a0 != (undefined8 *)0x0) {
            psVar2 = (short *)(local_a0 + 3);
            do {
              sVar13 = *psVar2;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar13 == 1) {
              piVar3 = (int *)((long)local_a0 + 0x1c);
              do {
                iVar8 = *piVar3;
                cVar7 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar16) {
                  *piVar3 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar8 != -1) {
                if (((*PTR_DAT_047d3908 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar17 = *(long *)PTR_DAT_047d3910;
                *(long *)PTR_DAT_047d3918 = lVar17;
                local_80 = (undefined8 *)*puVar15;
                FUN_00c44438(lVar17 + 0x8040,&local_80);
              }
            }
            else if (sVar13 == 0) {
LAB_00d51e40:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
          FUN_02a1891c(param_1,1);
          if (local_a8 != (long *)0x0) {
            lVar17 = local_a8[6];
            psVar2 = (short *)(lVar17 + 0x1a);
            do {
              sVar13 = *psVar2;
              cVar7 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
              if (bVar16) {
                *psVar2 = sVar13 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar13 == 1) {
              *(undefined8 *)(lVar17 + 0x10) = 0;
              (**(code **)(*local_a8 + 0x50))();
            }
            else if (sVar13 == 0) goto LAB_00d51cb0;
          }
        }
        goto LAB_00d51c7c;
      }
    }
    else {
      do {
        if (*(undefined1 **)(*plVar11 + 0x1d0) == puVar4) goto LAB_00d51b70;
        plVar11 = plVar11 + 1;
      } while (plVar10 != plVar11);
    }
    local_a8 = (long *)0x0;
  }
LAB_00d51c7c:
  lVar17 = *(long *)(param_1 + 0x42);
  if ((lVar17 == 0) || (*(short *)(lVar17 + 0x1a) == 0)) {
LAB_00d51c84:
    uVar14 = 0;
  }
  else {
    psVar2 = (short *)(lVar17 + 0x1a);
    sVar13 = *(short *)(lVar17 + 0x1a);
    do {
      sVar6 = *psVar2;
      if (sVar6 == sVar13) {
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar16) {
          *psVar2 = sVar13 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_00d52058;
        bVar16 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00d52058:
        bVar16 = false;
      }
      if (bVar16) {
        lVar17 = *(long *)(lVar17 + 0x10);
        if (lVar17 == 0) goto LAB_00d51c84;
        if (*param_1 != 0) goto LAB_00d52080;
        lVar18 = *(long *)(param_1 + 0x54);
        if ((lVar18 == 0) || (*(short *)(lVar18 + 0x1a) == 0)) goto LAB_00d52090;
        psVar2 = (short *)(lVar18 + 0x1a);
        sVar13 = *(short *)(lVar18 + 0x1a);
        goto LAB_00d521d4;
      }
      uVar14 = 0;
      sVar13 = sVar6;
    } while (sVar6 != 0);
  }
LAB_00d51c88:
  lVar17 = *(long *)(lVar9 + 0x70);
  psVar2 = (short *)(lVar17 + 0x1a);
  do {
    sVar13 = *psVar2;
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(psVar2,0x10);
    if (bVar16) {
      *psVar2 = sVar13 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (sVar13 == 1) {
    *(undefined8 *)(lVar17 + 0x10) = 0;
    (**(code **)(*(long *)(lVar9 + -0x28) + 0x50))();
  }
  else if (sVar13 == 0) {
LAB_00d51cb0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return uVar14;
}


