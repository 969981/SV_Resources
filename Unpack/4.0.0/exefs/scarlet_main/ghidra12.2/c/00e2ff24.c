/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e2ff24; name: FUN_00e2ff24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e2ff24(long param_1,size_t param_2)

{
  LightEventType *pLVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  char *pcVar15;
  bool bVar16;
  uint uVar17;
  long *plVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  ushort *puVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  ulong *puVar30;
  ulong uVar31;
  long lVar32;
  long *plVar33;
  long lVar34;
  long lVar35;
  undefined4 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  int local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  long lStack_d8;
  long local_d0;
  long *local_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined4 local_80;
  
  plVar9 = (long *)(param_1 + 0x1b0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar9 == 0) {
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar16) {
      *plVar9 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
    if (cVar6 == '\0') goto LAB_00e2ff6c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1b8));
  do {
    if (*plVar9 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1b8));
        while (*plVar9 == 0) {
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar16) {
            *plVar9 = lVar8;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_00e2ff6c;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar16) {
      *plVar9 = lVar8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_00e2ff6c:
  if (*(long *)(param_1 + 0x160) == 0) {
    *(undefined1 *)(param_1 + 0x154) = 0;
    goto LAB_00e30e74;
  }
  FUN_0170be6c(param_1);
  local_80 = 0;
  local_90 = (long *)0x0;
  local_88 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_98 = (long *)0x0;
  plVar9 = (long *)(**(code **)(*(long *)(DAT_0485a098 + 0x30) + 0x30))();
  if (plVar9 != (long *)0x0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    snprintf((char *)&local_c0,0x20,"%s%zu",PTR_s_CB_Screen_047e11d8,param_2);
    FUN_014217b4(&local_e8,&local_c0);
    plVar18 = (long *)CONCAT44(uStack_e4,local_e8);
    plVar28 = (long *)PTR_DAT_047d8b70;
    if (plVar18 != (long *)0x0) {
      plVar28 = plVar18 + 6;
    }
    local_e0 = *plVar28;
    plVar28 = (long *)PTR_PTR_047d4508;
    if (plVar18 != (long *)0x0) {
      plVar28 = plVar18 + 7;
    }
    lStack_d8 = *plVar28;
    if (plVar18 == (long *)0x0) {
      local_d0 = 0;
    }
    else {
      local_d0 = plVar18[8];
    }
    local_c8 = (long *)0x0;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x18))(plVar18);
    }
    local_c8 = plVar18;
    uVar10 = (**(code **)(*plVar9 + 0x88))(plVar9,&local_e0,&local_88);
    if (local_c8 != (long *)0x0) {
      (**(code **)(*local_c8 + 0x20))();
    }
    if ((long *)CONCAT44(uStack_e4,local_e8) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(uStack_e4,local_e8) + 0x20))();
    }
    plVar9 = local_a0;
    if ((uVar10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x19c) = local_80;
      *(undefined1 *)(param_1 + 0x198) = 1;
      if (local_88 != (long *)0x0) {
        plVar28 = local_88 + 5;
        do {
          lVar8 = *plVar28;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar16) {
            *(int *)plVar28 = (int)lVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar34 = local_e0;
        lVar32 = local_c0;
        if ((int)lVar8 == -1) goto LAB_00e314f0;
      }
      local_a0 = local_88;
      if (plVar9 != (long *)0x0) {
        plVar28 = plVar9 + 5;
        do {
          lVar8 = *plVar28;
          iVar7 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar16) {
            *(int *)plVar28 = iVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        else if ((int)lVar8 == 0) goto LAB_00e31470;
      }
    }
  }
  plVar9 = DAT_0485a0e8;
  if (DAT_0485a0e8 != (long *)0x0) {
    plVar28 = DAT_0485a0e8 + 5;
    do {
      lVar8 = *plVar28;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar16) {
        *(int *)plVar28 = (int)lVar8 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar34 = local_e0;
    lVar32 = local_c0;
    if ((int)lVar8 == -1) goto LAB_00e314f0;
  }
  lVar8 = *(long *)(param_1 + 0x160);
  if (*(long *)(lVar8 + 0x218) != *(long *)(lVar8 + 0x210)) {
    uVar10 = 0;
    plVar28 = plVar9 + 0x1ae;
    pLVar1 = (LightEventType *)(plVar9 + 0x1b0);
    do {
      lVar34 = *(long *)(lVar8 + 0x210);
      lVar32 = (long)(int)uVar10;
      lVar35 = lVar34 + (long)(int)uVar10 * 400;
      uVar11 = FUN_00d4e220(plVar9,lVar35,param_2);
      lVar8 = lVar34 + lVar32 * 400;
      if ((uVar11 & 0xff) == 0) {
        uVar11 = FUN_011e86a0(plVar9,lVar35,lVar8 + 0x20,param_2);
LAB_00e30170:
        uVar21 = uVar11 & 0xffffffffffffff00;
        uVar11 = uVar11 & 0xff;
      }
      else {
        iVar7 = strcmp(*(char **)(lVar8 + 0x28),"IrradianceVolume");
        if (iVar7 != 0) {
          lVar8 = plVar9[7] + ((long)uVar11 >> 0x20) * 0x1d0;
          *(int *)(lVar8 + 0x1c0) = *(int *)(lVar8 + 0x1c0) + 1;
          goto LAB_00e30170;
        }
        uVar21 = 0;
        uVar11 = 0;
      }
      lVar8 = lVar34 + lVar32 * 400;
      plVar27 = (long *)(lVar8 + 0x80);
      plVar18 = (long *)*plVar27;
      plVar29 = (long *)(lVar8 + 0x88);
      plVar33 = (long *)*plVar29;
      lVar8 = (long)uVar21 >> 0x20;
      iVar7 = (int)uVar11;
      if (plVar18 != plVar33) {
        plVar23 = plVar33;
        plVar14 = plVar18;
        do {
          plVar25 = plVar18;
          if ((plVar18 != plVar23) && (*plVar18 != *plVar14)) {
            do {
              plVar25 = plVar25 + 4;
              if (plVar23 == plVar25) {
                plVar25 = plVar23;
                goto LAB_00e301f4;
              }
            } while (*plVar25 != *plVar14);
          }
LAB_00e301f4:
          uVar36 = 0;
          uVar17 = (uint)((ulong)((long)plVar25 - (long)plVar18) >> 5);
          if (plVar23 == plVar25) {
            uVar17 = 0xffffffff;
          }
          if (-1 < (int)uVar17) {
            piVar22 = *(int **)(lVar34 + lVar32 * 400 + 0x78);
            uVar36 = 0;
            puVar19 = (uint *)((long)piVar22 +
                              (ulong)*(ushort *)((long)piVar22 + (10 - (long)*piVar22)));
            puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
            if (uVar17 < *puVar19) {
              puVar19 = puVar19 + (ulong)uVar17 + 1;
              piVar22 = (int *)((long)puVar19 + (ulong)*puVar19);
              puVar24 = (ushort *)((long)piVar22 - (long)*piVar22);
              if (*puVar24 < 9) {
                uVar36 = 0;
                if (6 < *puVar24) goto LAB_00e31408;
              }
              else if ((ulong)puVar24[4] == 0) {
LAB_00e31408:
                uVar36 = 0;
                if ((ulong)puVar24[3] != 0) {
                  uVar36 = *(undefined4 *)((long)piVar22 + (ulong)puVar24[3]);
                }
              }
              else {
                puVar19 = (uint *)((long)piVar22 + (ulong)puVar24[4]);
                uVar36 = FUN_00c72bf0(0,0,(long)puVar19 + (ulong)*puVar19);
              }
            }
          }
          if (iVar7 != 0) {
            lVar35 = nn::os::GetCurrentThread();
LAB_00e30244:
            if (*plVar28 == 0 && plVar9[0x1af] == 0) goto code_r0x00e30250;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar1);
            do {
              if (*plVar28 != 0 || plVar9[0x1af] != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent(pLVar1);
                  while (*plVar28 == 0 && plVar9[0x1af] == 0) {
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar16) {
                      *plVar28 = lVar35;
                      plVar9[0x1af] = 0;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_00e30258;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar35;
                plVar9[0x1af] = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_00e30258:
            lVar35 = plVar9[7] + lVar8 * 0x1d0;
            puVar12 = (undefined4 *)FUN_00c42268(lVar35 + 0x80,plVar14);
            *puVar12 = uVar36;
            *(undefined1 *)(lVar35 + 0x1b9) = 1;
            do {
              lVar35 = *plVar28;
              lVar5 = plVar9[0x1af];
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar35;
                plVar9[0x1af] = lVar5;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar2 = *plVar28;
              lVar3 = plVar9[0x1af];
              if (lVar2 != lVar35 || lVar3 != lVar5) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00e30300;
              }
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = 0;
                *(long *)((long)plVar9 + 0xd74) = lVar5;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar16 = true;
LAB_00e30300:
            if (!bVar16) {
              do {
                lVar35 = *plVar28;
                lVar5 = plVar9[0x1af];
                if (lVar35 != lVar2 || lVar5 != lVar3) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00e31334;
                }
                cVar6 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar16) {
                  *plVar28 = 0;
                  *(long *)((long)plVar9 + 0xd74) = lVar3;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar16 = true;
joined_r0x00e31334:
              if (!bVar16) {
                do {
                  lVar2 = *plVar28;
                  lVar3 = plVar9[0x1af];
                  if (lVar2 != lVar35 || lVar3 != lVar5) {
                    bVar16 = false;
                    ClearExclusiveLocal();
                    lVar35 = lVar2;
                    lVar5 = lVar3;
                    goto joined_r0x00e31334;
                  }
                  cVar6 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar16) {
                    *plVar28 = 0;
                    *(long *)((long)plVar9 + 0xd74) = lVar5;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar16 = true;
                lVar35 = lVar2;
                lVar5 = lVar3;
                goto joined_r0x00e31334;
              }
            }
            nn::os::SignalLightEvent(pLVar1);
          }
          plVar14 = plVar14 + 4;
          if (plVar14 == plVar33) break;
          plVar18 = (long *)*plVar27;
          plVar23 = (long *)*plVar29;
        } while( true );
      }
      lVar35 = lVar34 + lVar32 * 400;
      plVar33 = (long *)(lVar35 + 0xb8);
      plVar18 = (long *)*plVar33;
      plVar29 = (long *)(lVar35 + 0xc0);
      plVar27 = (long *)*plVar29;
      if (plVar18 != plVar27) {
        plVar23 = plVar27;
        plVar14 = plVar18;
        do {
          plVar25 = plVar18;
          if ((plVar18 != plVar23) && (*plVar18 != *plVar14)) {
            do {
              plVar25 = plVar25 + 4;
              if (plVar23 == plVar25) {
                plVar25 = plVar23;
                goto LAB_00e303a4;
              }
            } while (*plVar25 != *plVar14);
          }
LAB_00e303a4:
          uVar37 = 0;
          uVar38 = 0;
          uVar17 = (uint)((ulong)((long)plVar25 - (long)plVar18) >> 5);
          if (plVar23 == plVar25) {
            uVar17 = 0xffffffff;
          }
          if (-1 < (int)uVar17) {
            piVar22 = *(int **)(lVar34 + lVar32 * 400 + 0x78);
            uVar37 = 0;
            uVar38 = 0;
            puVar19 = (uint *)((long)piVar22 +
                              (ulong)*(ushort *)((long)piVar22 + (0xc - (long)*piVar22)));
            puVar19 = (uint *)((long)puVar19 + (ulong)*puVar19);
            if (uVar17 < *puVar19) {
              puVar19 = puVar19 + (ulong)uVar17 + 1;
              piVar22 = (int *)((long)puVar19 + (ulong)*puVar19);
              puVar24 = (ushort *)((long)piVar22 - (long)*piVar22);
              if ((*puVar24 < 9) || ((ulong)puVar24[4] == 0)) {
                uVar37 = *(undefined8 *)((long)piVar22 + (ulong)puVar24[3]);
                uVar38 = ((undefined8 *)((long)piVar22 + (ulong)puVar24[3]))[1];
              }
              else {
                puVar19 = (uint *)((long)piVar22 + (ulong)puVar24[4]);
                uVar39 = 0;
                uVar40 = 0;
                uVar41 = 0;
                uVar36 = FUN_00c72aa0(0,(long)puVar19 + (ulong)*puVar19);
                uVar37 = CONCAT44(uVar39,uVar36);
                uVar38 = CONCAT44(uVar41,uVar40);
              }
            }
          }
          if (iVar7 != 0) {
            lVar35 = nn::os::GetCurrentThread();
LAB_00e30444:
            if (*plVar28 == 0 && plVar9[0x1af] == 0) goto code_r0x00e30450;
            ClearExclusiveLocal();
            nn::os::WaitLightEvent(pLVar1);
            do {
              if (*plVar28 != 0 || plVar9[0x1af] != 0) {
                do {
                  ClearExclusiveLocal();
                  nn::os::WaitLightEvent(pLVar1);
                  while (*plVar28 == 0 && plVar9[0x1af] == 0) {
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                    if (bVar16) {
                      *plVar28 = lVar35;
                      plVar9[0x1af] = 0;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                    if (cVar6 == '\0') goto LAB_00e30458;
                  }
                } while( true );
              }
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar35;
                plVar9[0x1af] = 0;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
LAB_00e30458:
            lVar35 = plVar9[7] + lVar8 * 0x1d0;
            puVar13 = (undefined8 *)FUN_00c5f1b0(lVar35 + 0xe8,plVar14);
            puVar13[1] = uVar38;
            *puVar13 = uVar37;
            *(undefined1 *)(lVar35 + 0x1b9) = 1;
            do {
              lVar35 = *plVar28;
              lVar5 = plVar9[0x1af];
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = lVar35;
                plVar9[0x1af] = lVar5;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            do {
              lVar2 = *plVar28;
              lVar3 = plVar9[0x1af];
              if (lVar2 != lVar35 || lVar3 != lVar5) {
                bVar16 = false;
                ClearExclusiveLocal();
                goto LAB_00e30504;
              }
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = 0;
                *(long *)((long)plVar9 + 0xd74) = lVar5;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar16 = true;
LAB_00e30504:
            if (!bVar16) {
              do {
                lVar35 = *plVar28;
                lVar5 = plVar9[0x1af];
                if (lVar35 != lVar2 || lVar5 != lVar3) {
                  bVar16 = false;
                  ClearExclusiveLocal();
                  goto joined_r0x00e313a0;
                }
                cVar6 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar16) {
                  *plVar28 = 0;
                  *(long *)((long)plVar9 + 0xd74) = lVar3;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              bVar16 = true;
joined_r0x00e313a0:
              if (!bVar16) {
                do {
                  lVar2 = *plVar28;
                  lVar3 = plVar9[0x1af];
                  if (lVar2 != lVar35 || lVar3 != lVar5) {
                    bVar16 = false;
                    ClearExclusiveLocal();
                    lVar35 = lVar2;
                    lVar5 = lVar3;
                    goto joined_r0x00e313a0;
                  }
                  cVar6 = '\x01';
                  bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar16) {
                    *plVar28 = 0;
                    *(long *)((long)plVar9 + 0xd74) = lVar5;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                bVar16 = true;
                lVar35 = lVar2;
                lVar5 = lVar3;
                goto joined_r0x00e313a0;
              }
            }
            nn::os::SignalLightEvent(pLVar1);
          }
          plVar14 = plVar14 + 4;
          if (plVar14 == plVar27) break;
          plVar18 = (long *)*plVar33;
          plVar23 = (long *)*plVar29;
        } while( true );
      }
      if (*(char *)(lVar34 + lVar32 * 400 + 0x70) != '\0' && iVar7 != 0) {
        lVar35 = nn::os::GetCurrentThread();
LAB_00e3084c:
        if (*plVar28 == 0 && plVar9[0x1af] == 0) goto code_r0x00e30858;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        do {
          if (*plVar28 != 0 || plVar9[0x1af] != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar1);
              while (*plVar28 == 0 && plVar9[0x1af] == 0) {
                cVar6 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar16) {
                  *plVar28 = lVar35;
                  plVar9[0x1af] = 0;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') goto LAB_00e30860;
              }
            } while( true );
          }
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar16) {
            *plVar28 = lVar35;
            plVar9[0x1af] = 0;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
LAB_00e30860:
        lVar8 = plVar9[7] + lVar8 * 0x1d0;
        memcpy((void *)(lVar8 + 0x50),(void *)(lVar34 + lVar32 * 400 + 0x40),0x30);
        *(undefined1 *)(lVar8 + 0x1b9) = 1;
        do {
          lVar8 = *plVar28;
          lVar35 = plVar9[0x1af];
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar16) {
            *plVar28 = lVar8;
            plVar9[0x1af] = lVar35;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          lVar5 = *plVar28;
          lVar2 = plVar9[0x1af];
          if (lVar5 != lVar8 || lVar2 != lVar35) {
            bVar16 = false;
            ClearExclusiveLocal();
            goto LAB_00e30904;
          }
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar16) {
            *plVar28 = 0;
            *(long *)((long)plVar9 + 0xd74) = lVar35;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar16 = true;
LAB_00e30904:
        if (!bVar16) {
          do {
            lVar8 = *plVar28;
            lVar35 = plVar9[0x1af];
            if (lVar8 != lVar5 || lVar35 != lVar2) {
              bVar16 = false;
              ClearExclusiveLocal();
              goto joined_r0x00e314a8;
            }
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar16) {
              *plVar28 = 0;
              *(long *)((long)plVar9 + 0xd74) = lVar2;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          bVar16 = true;
joined_r0x00e314a8:
          if (!bVar16) {
            do {
              lVar5 = *plVar28;
              lVar2 = plVar9[0x1af];
              if (lVar5 != lVar8 || lVar2 != lVar35) {
                bVar16 = false;
                ClearExclusiveLocal();
                lVar8 = lVar5;
                lVar35 = lVar2;
                goto joined_r0x00e314a8;
              }
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar16) {
                *plVar28 = 0;
                *(long *)((long)plVar9 + 0xd74) = lVar35;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            bVar16 = true;
            lVar8 = lVar5;
            lVar35 = lVar2;
            goto joined_r0x00e314a8;
          }
        }
        nn::os::SignalLightEvent(pLVar1);
      }
      lVar34 = lVar34 + lVar32 * 400;
      plVar18 = (long *)(lVar34 + 0xf0);
      lVar8 = *plVar18;
      plVar27 = (long *)(lVar34 + 0xf8);
      if (*plVar27 != lVar8) {
        plVar29 = (long *)(*(long *)(*(long *)(param_1 + 0x160) + 0x248) + lVar32 * 0x38);
        uVar31 = 0;
        do {
          plVar33 = (long *)(lVar8 + uVar31 * 0x20);
          lVar8 = *plVar33;
          plVar33 = (long *)plVar33[3];
          if (plVar33 != (long *)0x0) {
            (**(code **)(*plVar33 + 0x18))(plVar33);
          }
          lVar34 = *plVar29;
          if (uVar31 < (ulong)(plVar29[1] - lVar34 >> 6)) {
            lVar34 = *(long *)(lVar34 + uVar31 * 0x40 + 8);
            lVar32 = *(long *)(*(long *)(lVar34 + 0x1f8) + 0x58);
            if ((lVar32 == 0) || (*(int *)(*(long *)(lVar32 + 0x38) + 4) == 0)) {
              iVar7 = 0xb;
            }
            else {
              uVar37 = FUN_00ec0c08(lVar34,*(long *)(**(long **)(lVar32 + 0x28) + 0x60) + 2);
              if (lVar8 == 0x51dbe1b7f78e1b29) {
                plVar14 = (long *)FUN_00e31554();
                local_c0 = *plVar14;
                plVar14 = (long *)FUN_00cf3764(&local_e0,*(undefined8 *)(local_c0 + 8),&local_c0);
                if (plVar14 != (long *)0x0) {
                  plVar23 = plVar14 + 5;
                  do {
                    lVar8 = *plVar23;
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar16) {
                      *(int *)plVar23 = (int)lVar8 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  lVar34 = local_e0;
                  lVar32 = local_c0;
                  if ((int)lVar8 == -1) goto LAB_00e314f0;
                }
                FUN_00ec0d30(plVar14,uVar37,1);
                plVar23 = local_90;
                local_90 = (long *)0x0;
                if (plVar23 != (long *)0x0) {
                  plVar25 = plVar23 + 5;
                  do {
                    lVar8 = *plVar25;
                    iVar7 = (int)lVar8 + -1;
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar16) {
                      *(int *)plVar25 = iVar7;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar7 == 0) {
                    (**(code **)(*plVar23 + 0x10))();
                  }
                  else if ((int)lVar8 == 0) goto LAB_00e31470;
                }
                iVar7 = 0;
                local_90 = plVar14;
              }
              else if (lVar8 == 0x3ec97bb01f9f4caa) {
                plVar14 = (long *)FUN_00e31554();
                local_c0 = *plVar14;
                plVar14 = (long *)FUN_00cf3764(&local_e0,*(undefined8 *)(local_c0 + 8),&local_c0);
                if (plVar14 != (long *)0x0) {
                  plVar23 = plVar14 + 5;
                  do {
                    lVar8 = *plVar23;
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                    if (bVar16) {
                      *(int *)plVar23 = (int)lVar8 + 1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  lVar34 = local_e0;
                  lVar32 = local_c0;
                  if ((int)lVar8 == -1) goto LAB_00e314f0;
                }
                FUN_00ec0d30(plVar14,uVar37,1);
                plVar23 = local_98;
                local_98 = (long *)0x0;
                if (plVar23 != (long *)0x0) {
                  plVar25 = plVar23 + 5;
                  do {
                    lVar8 = *plVar25;
                    iVar7 = (int)lVar8 + -1;
                    cVar6 = '\x01';
                    bVar16 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                    if (bVar16) {
                      *(int *)plVar25 = iVar7;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar7 == 0) {
                    (**(code **)(*plVar23 + 0x10))();
                  }
                  else if ((int)lVar8 == 0) goto LAB_00e31470;
                }
                iVar7 = 0;
                local_98 = plVar14;
              }
              else {
                iVar7 = 0;
              }
            }
          }
          else {
            iVar7 = 9;
          }
          if (plVar33 != (long *)0x0) {
            (**(code **)(*plVar33 + 0x20))(plVar33);
          }
          if ((iVar7 != 0xb) && (iVar7 != 0)) break;
          uVar31 = (ulong)((int)uVar31 + 1);
          lVar8 = *plVar18;
        } while (uVar31 < (ulong)(*plVar27 - lVar8 >> 5));
      }
      puVar4 = *(ulong **)(param_1 + 0x1d0);
      if (puVar4 == *(ulong **)(param_1 + 0x1d8)) {
        uVar26 = *(ulong *)(param_1 + 0x1e8);
        lVar8 = (long)puVar4 - *(long *)(param_1 + 0x1c8) >> 3;
        uVar31 = lVar8 + 1;
        if (0x7ffffffffffffffe < uVar26) {
          uVar26 = 0x7fffffffffffffff;
        }
        if (uVar26 < uVar31) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar34 = (long)*(ulong **)(param_1 + 0x1d8) - *(long *)(param_1 + 0x1c8);
        uVar20 = lVar34 >> 2;
        if (uVar31 <= uVar20) {
          uVar31 = uVar20;
        }
        if (uVar26 >> 1 <= (ulong)(lVar34 >> 3)) {
          uVar31 = uVar26;
        }
        if (uVar31 == 0) {
          lVar34 = 0;
        }
        else {
          lVar34 = (**(code **)(**(long **)(param_1 + 0x1e0) + 0x10))
                             (*(long **)(param_1 + 0x1e0),uVar31 << 3,4);
          if (lVar34 == 0) {
            (**(code **)(**(long **)(param_1 + 0x1e0) + 0xe8))();
          }
        }
        puVar4 = (ulong *)(lVar34 + lVar8 * 8);
        uVar37 = *(undefined8 *)(param_1 + 0x1e0);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *puVar4 = uVar11 | uVar21;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00e3143c;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar37;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar4 = uVar11 | uVar21;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar8 = *(long *)(param_1 + 0x1c8);
        lVar32 = *(long *)(param_1 + 0x1d0);
        puVar30 = puVar4;
        if (lVar32 != lVar8) {
          do {
            uVar37 = *(undefined8 *)(param_1 + 0x1e0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar35 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar35 == 0) {
              puVar30[-1] = *(ulong *)(lVar32 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar35 + 0x80)) goto LAB_00e3143c;
              *(undefined8 *)(lVar35 + *(ulong *)(lVar35 + 0x80) * 8) = uVar37;
              *(long *)(lVar35 + 0x80) = *(long *)(lVar35 + 0x80) + 1;
              puVar30[-1] = *(ulong *)(lVar32 + -8);
              *(long *)(lVar35 + 0x80) = *(long *)(lVar35 + 0x80) + -1;
            }
            lVar32 = lVar32 + -8;
            puVar30 = puVar30 + -1;
          } while (lVar8 != lVar32);
          lVar8 = *(long *)(param_1 + 0x1c8);
        }
        *(ulong **)(param_1 + 0x1c8) = puVar30;
        *(ulong **)(param_1 + 0x1d0) = puVar4 + 1;
        lVar32 = *(long *)(param_1 + 0x1d8);
        *(ulong *)(param_1 + 0x1d8) = lVar34 + uVar31 * 8;
        if (lVar8 != 0) {
          lVar32 = lVar32 - lVar8;
          plVar18 = *(long **)(param_1 + 0x1e0);
          uVar11 = (**(code **)(*plVar18 + 0xf8))(plVar18);
          if (((uVar11 & 1) == 0) || (lVar34 = FUN_00c4e600(), *(int *)(lVar34 + 0x12c8) < 1)) {
            (**(code **)(*plVar18 + 0x18))(plVar18,lVar8,lVar32,4);
          }
          else {
            FUN_00c48fe8(plVar18,lVar8,lVar32,4);
          }
        }
      }
      else {
        uVar37 = *(undefined8 *)(param_1 + 0x1e0);
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *puVar4 = uVar11 | uVar21;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00e3143c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar37;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *puVar4 = uVar11 | uVar21;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        *(ulong **)(param_1 + 0x1d0) = puVar4 + 1;
      }
      lVar8 = *(long *)(param_1 + 0x160);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulong)((*(long *)(lVar8 + 0x218) - *(long *)(lVar8 + 0x210) >> 4) *
                             -0x70a3d70a3d70a3d7));
  }
  plVar18 = *(long **)(param_1 + 0x208);
  plVar28 = *(long **)(param_1 + 0x200);
  lVar34 = local_e0;
  lVar32 = local_c0;
  while( true ) {
    local_e0 = lVar34;
    local_c0 = lVar32;
    if (plVar28 == plVar18) break;
    if ((local_90 != (long *)0x0) && (*(char *)(param_1 + 0x1a8) != '\0')) {
      plVar27 = *(long **)(*plVar28 + 0x58);
      local_e0._4_4_ = (undefined4)((ulong)lVar34 >> 0x20);
      local_c0._1_7_ = (uint7)((ulong)lVar32 >> 8);
      if (plVar27 == (long *)0x0) {
        local_e8 = *(int *)(param_1 + 0x1ac);
        local_e0 = CONCAT44(local_e0._4_4_,2);
        local_c0 = (ulong)local_c0._1_7_ << 8;
        piVar22 = _DAT_00000110;
        if (_DAT_00000110 != _DAT_00000118) {
LAB_00e31048:
          if ((*piVar22 != 2) || (piVar22[1] != local_e8)) goto LAB_00e31060;
          plVar27 = local_90 + 5;
          do {
            lVar8 = *plVar27;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar16) {
              *(int *)plVar27 = (int)lVar8 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar8 == -1) goto LAB_00e31530;
          plVar27 = *(long **)(piVar22 + 2);
          *(long **)(piVar22 + 2) = local_90;
          if (plVar27 == (long *)0x0) goto LAB_00e30c0c;
          plVar29 = plVar27 + 5;
          do {
            lVar8 = *plVar29;
            iVar7 = (int)lVar8 + -1;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar16) {
              *(int *)plVar29 = iVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 == 0) {
            lVar8 = *plVar27;
            goto LAB_00e30f54;
          }
          if ((int)lVar8 != 0) goto LAB_00e30c0c;
          goto LAB_00e31130;
        }
LAB_00e3106c:
        FUN_00d11148(0x110,&local_e0,&local_e8,&local_90,&local_c0);
      }
      else {
        plVar29 = plVar27 + 5;
        do {
          lVar8 = *plVar29;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *(int *)plVar29 = (int)lVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar8 == -1) goto LAB_00e314f0;
        local_e8 = *(int *)(param_1 + 0x1ac);
        local_e0 = CONCAT44(local_e0._4_4_,2);
        local_c0 = (ulong)local_c0._1_7_ << 8;
        piVar22 = (int *)plVar27[0x22];
        if (piVar22 != (int *)plVar27[0x23]) {
LAB_00e30b80:
          if ((*piVar22 != 2) || (piVar22[1] != local_e8)) goto LAB_00e30b98;
          if (local_90 != (long *)0x0) {
            plVar33 = local_90 + 5;
            do {
              lVar8 = *plVar33;
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *(int *)plVar33 = (int)lVar8 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar8 == -1) goto LAB_00e31530;
          }
          plVar33 = *(long **)(piVar22 + 2);
          *(long **)(piVar22 + 2) = local_90;
          if (plVar33 == (long *)0x0) goto LAB_00e30bf4;
          plVar14 = plVar33 + 5;
          do {
            lVar8 = *plVar14;
            iVar7 = (int)lVar8 + -1;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar16) {
              *(int *)plVar14 = iVar7;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar7 == 0) {
            (**(code **)(*plVar33 + 0x10))();
            goto LAB_00e30bf4;
          }
          if ((int)lVar8 != 0) goto LAB_00e30bf4;
          goto LAB_00e31130;
        }
LAB_00e311ac:
        FUN_00d11148(plVar27 + 0x22,&local_e0,&local_e8,&local_90,&local_c0);
LAB_00e30bf4:
        do {
          lVar8 = *plVar29;
          iVar7 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *(int *)plVar29 = iVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 == 0) {
          lVar8 = *plVar27;
LAB_00e30f54:
          (**(code **)(lVar8 + 0x10))(plVar27);
        }
        else if ((int)lVar8 == 0) goto LAB_00e31470;
      }
    }
LAB_00e30c0c:
    if ((local_98 != (long *)0x0) && (*(char *)(param_1 + 0x1a0) != '\0')) {
      plVar27 = *(long **)(*plVar28 + 0x58);
      if (plVar27 == (long *)0x0) {
        local_e8 = *(int *)(param_1 + 0x1a4);
        local_e0 = CONCAT44(local_e0._4_4_,2);
        local_c0 = (ulong)local_c0._1_7_ << 8;
        piVar22 = _DAT_00000110;
        if (_DAT_00000110 != _DAT_00000118) {
LAB_00e310a8:
          if ((*piVar22 != 2) || (piVar22[1] != local_e8)) goto LAB_00e310c0;
          plVar27 = local_98 + 5;
          do {
            lVar8 = *plVar27;
            cVar6 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar16) {
              *(int *)plVar27 = (int)lVar8 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar8 == -1) goto LAB_00e31530;
          plVar27 = *(long **)(piVar22 + 2);
          *(long **)(piVar22 + 2) = local_98;
          if (plVar27 != (long *)0x0) {
            plVar29 = plVar27 + 5;
            do {
              lVar8 = *plVar29;
              iVar7 = (int)lVar8 + -1;
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
              if (bVar16) {
                *(int *)plVar29 = iVar7;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar7 != 0) {
              if ((int)lVar8 != 0) goto LAB_00e30cec;
              goto LAB_00e31130;
            }
            lVar8 = *plVar27;
            goto LAB_00e30f68;
          }
          goto LAB_00e30cec;
        }
LAB_00e310cc:
        FUN_00d11148(0x110,&local_e0,&local_e8,&local_98,&local_c0);
      }
      else {
        plVar29 = plVar27 + 5;
        do {
          lVar8 = *plVar29;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *(int *)plVar29 = (int)lVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar34 = local_e0;
        lVar32 = local_c0;
        if ((int)lVar8 == -1) goto LAB_00e314f0;
        local_e8 = *(int *)(param_1 + 0x1a4);
        local_e0 = CONCAT44(local_e0._4_4_,2);
        local_c0 = (ulong)local_c0._1_7_ << 8;
        piVar22 = (int *)plVar27[0x22];
        if (piVar22 != (int *)plVar27[0x23]) {
LAB_00e30c60:
          if ((*piVar22 != 2) || (piVar22[1] != local_e8)) goto LAB_00e30c78;
          if (local_98 != (long *)0x0) {
            plVar33 = local_98 + 5;
            do {
              lVar8 = *plVar33;
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar33,0x10);
              if (bVar16) {
                *(int *)plVar33 = (int)lVar8 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((int)lVar8 == -1) {
LAB_00e31530:
              pcVar15 = 
              "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
              ;
              goto LAB_00e31510;
            }
          }
          plVar33 = *(long **)(piVar22 + 2);
          *(long **)(piVar22 + 2) = local_98;
          if (plVar33 != (long *)0x0) {
            plVar14 = plVar33 + 5;
            do {
              lVar8 = *plVar14;
              iVar7 = (int)lVar8 + -1;
              cVar6 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar16) {
                *(int *)plVar14 = iVar7;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar33 + 0x10))();
            }
            else if ((int)lVar8 == 0) {
LAB_00e31130:
              pcVar15 = 
              "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
              ;
              goto LAB_00e31490;
            }
          }
          goto LAB_00e30cd4;
        }
LAB_00e311c8:
        FUN_00d11148(plVar27 + 0x22,&local_e0,&local_e8,&local_98,&local_c0);
LAB_00e30cd4:
        do {
          lVar8 = *plVar29;
          iVar7 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *(int *)plVar29 = iVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 == 0) {
          lVar8 = *plVar27;
LAB_00e30f68:
          (**(code **)(lVar8 + 0x10))(plVar27);
        }
        else if ((int)lVar8 == 0) goto LAB_00e31470;
      }
    }
LAB_00e30cec:
    if ((local_a0 != (long *)0x0) && (*(char *)(param_1 + 0x198) != '\0')) {
      plVar27 = *(long **)(*plVar28 + 0x58);
      if (plVar27 == (long *)0x0) {
        FUN_00c4b998(0,0x1f,*(undefined4 *)(param_1 + 0x19c),&local_a0);
      }
      else {
        plVar29 = plVar27 + 5;
        do {
          lVar8 = *plVar29;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *(int *)plVar29 = (int)lVar8 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        lVar34 = local_e0;
        lVar32 = local_c0;
        if ((int)lVar8 == -1) {
LAB_00e314f0:
          local_c0 = lVar32;
          local_e0 = lVar34;
          pcVar15 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
          ;
LAB_00e31510:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",pcVar15,0x53,
                     "Reference counter overflows.");
        }
        FUN_00c4b998(plVar27,0x1f,*(undefined4 *)(param_1 + 0x19c),&local_a0);
        do {
          lVar8 = *plVar29;
          iVar7 = (int)lVar8 + -1;
          cVar6 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar16) {
            *(int *)plVar29 = iVar7;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
        }
        else if ((int)lVar8 == 0) goto LAB_00e31470;
      }
    }
    plVar28 = plVar28 + 1;
    lVar34 = local_e0;
    lVar32 = local_c0;
  }
  *(undefined1 *)(param_1 + 0x154) = 0;
  if (plVar9 != (long *)0x0) {
    plVar28 = plVar9 + 5;
    do {
      lVar8 = *plVar28;
      iVar7 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar16) {
        *(int *)plVar28 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00e31470;
  }
  if (local_a0 != (long *)0x0) {
    plVar9 = local_a0 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *(int *)plVar9 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00e31470;
  }
  if (local_98 != (long *)0x0) {
    plVar9 = local_98 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *(int *)plVar9 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00e31470;
  }
  if (local_90 != (long *)0x0) {
    plVar9 = local_90 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *(int *)plVar9 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    else if ((int)lVar8 == 0) goto LAB_00e31470;
  }
  if (local_88 != (long *)0x0) {
    plVar9 = local_88 + 5;
    do {
      lVar8 = *plVar9;
      iVar7 = (int)lVar8 + -1;
      cVar6 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar16) {
        *(int *)plVar9 = iVar7;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
    else if ((int)lVar8 == 0) {
LAB_00e31470:
      pcVar15 = 
      "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
      ;
LAB_00e31490:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 pcVar15,0x58,"Reference counter underflows.");
    }
  }
LAB_00e30e74:
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1b8));
  return;
code_r0x00e30250:
  cVar6 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar16) {
    *plVar28 = lVar35;
    plVar9[0x1af] = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00e30258;
  goto LAB_00e30244;
code_r0x00e30450:
  cVar6 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar16) {
    *plVar28 = lVar35;
    plVar9[0x1af] = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00e30458;
  goto LAB_00e30444;
code_r0x00e30858:
  cVar6 = '\x01';
  bVar16 = (bool)ExclusiveMonitorPass(plVar28,0x10);
  if (bVar16) {
    *plVar28 = lVar35;
    plVar9[0x1af] = 0;
    cVar6 = ExclusiveMonitorsStatus();
  }
  if (cVar6 == '\0') goto LAB_00e30860;
  goto LAB_00e3084c;
LAB_00e31060:
  piVar22 = piVar22 + 8;
  if (_DAT_00000118 == piVar22) goto LAB_00e3106c;
  goto LAB_00e31048;
LAB_00e30b98:
  piVar22 = piVar22 + 8;
  if ((int *)plVar27[0x23] == piVar22) goto LAB_00e311ac;
  goto LAB_00e30b80;
LAB_00e310c0:
  piVar22 = piVar22 + 8;
  if (_DAT_00000118 == piVar22) goto LAB_00e310cc;
  goto LAB_00e310a8;
LAB_00e30c78:
  piVar22 = piVar22 + 8;
  if ((int *)plVar27[0x23] == piVar22) goto LAB_00e311c8;
  goto LAB_00e30c60;
}


