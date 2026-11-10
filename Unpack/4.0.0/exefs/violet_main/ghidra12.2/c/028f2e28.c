/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028f2e28; name: FUN_028f2e28
 */


void FUN_028f2e28(long *param_1)

{
  long *plVar1;
  short *psVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  long *plVar6;
  short sVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  char cVar13;
  undefined4 uVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  uint uVar20;
  bool bVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  long *local_98;
  ulong local_90;
  long *local_70;
  long *local_68;
  
  *param_1 = (long)&PTR_FUN_045eb6e8;
  param_1[4] = (long)&PTR_LAB_045eb760;
  param_1[5] = (long)&DAT_045eb7b0;
  uVar9 = *(uint *)(param_1 + 0x7c);
  uVar20 = uVar9;
  do {
    lVar24 = (long)(int)uVar20;
    plVar23 = param_1 + (long)(int)uVar20 * 10 + 0x68;
    lVar22 = *plVar23;
    lVar17 = nn::os::GetCurrentThread();
    if (lVar17 != lVar22) {
      lVar17 = nn::os::GetCurrentThread();
LAB_028f2e94:
      if (*plVar23 == 0) goto code_r0x028f2e9c;
      ClearExclusiveLocal();
      nn::os::WaitLightEvent((LightEventType *)(param_1 + lVar24 * 10 + 0x69));
      do {
        if (*plVar23 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + lVar24 * 10 + 0x69));
            while (*plVar23 == 0) {
              cVar13 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar21) {
                *plVar23 = lVar17;
                cVar13 = ExclusiveMonitorsStatus();
              }
              if (cVar13 == '\0') goto LAB_028f2ea4;
            }
          } while( true );
        }
        cVar13 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar21) {
          *plVar23 = lVar17;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
LAB_028f2ea4:
      bVar21 = false;
      goto LAB_028f2ea8;
    }
    plVar23 = (long *)0x0;
    bVar21 = true;
LAB_028f2ea8:
    puVar30 = (undefined8 *)param_1[lVar24 * 10 + 0x6b];
    puVar28 = (undefined8 *)param_1[lVar24 * 10 + 0x6c];
    plVar27 = param_1 + lVar24 * 10 + 0x6c;
    if (puVar30 != puVar28) {
      do {
        puVar26 = (undefined8 *)*puVar30;
        plVar19 = (long *)puVar26[1];
        uVar8 = puVar26[2];
        uVar11 = *(undefined2 *)(puVar26 + 3);
        uVar12 = *(undefined2 *)((long)puVar26 + 0x1a);
        FUN_00c4e600();
        FUN_00c4e600();
        lVar17 = FUN_00c4e600();
        iVar10 = *(int *)(lVar17 + 0x12c8);
        iVar16 = iVar10 + 1;
        *(int *)(lVar17 + 0x12c8) = iVar16;
        if (*(int *)(lVar17 + 0x12cc) <= iVar10) {
          *(int *)(lVar17 + 0x12cc) = iVar16;
        }
        (**(code **)*puVar26)(puVar26);
        uVar18 = (**(code **)(*plVar19 + 0xf8))(plVar19);
        if (((uVar18 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar19 + 0x18))(plVar19,uVar8,uVar11,uVar12);
        }
        else {
          FUN_00c48fe8(plVar19,uVar8,uVar11,uVar12);
        }
        lVar17 = FUN_00c4e600();
        iVar16 = *(int *)(lVar17 + 0x12c8) + -1;
        *(int *)(lVar17 + 0x12c8) = iVar16;
        if (iVar16 == 0) {
          plVar19 = (long *)FUN_00c4e600();
          if (plVar19[600] != 0) {
            local_70 = plVar19 + plVar19[600] * 3;
            local_68 = plVar19;
            FUN_00c4ea30(&local_68,&local_70);
            plVar25 = (long *)*plVar19;
            plVar6 = plVar19;
            if (plVar19[600] != 0) {
              plVar6 = plVar19 + plVar19[600] * 3;
            }
            if (plVar6 == plVar19) {
              local_90 = 0;
              uVar18 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar19 + 0xd0))();
              if ((long *)*plVar19 != plVar25) {
                (**(code **)(*plVar25 + 0x100))(plVar25,plVar19,plVar19);
                plVar25 = (long *)*plVar19;
              }
              plVar1 = plVar19 + 3;
              if (plVar6 == plVar1) {
                local_90 = 0;
                uVar18 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar1 + 0xd0))();
                bVar15 = (long *)*plVar1 != plVar25;
                if (bVar15) {
                  (**(code **)(*plVar25 + 0x100))(plVar25,plVar19,plVar19 + 3);
                  plVar25 = (long *)plVar19[3];
                }
                local_90 = (ulong)bVar15;
                plVar1 = plVar19 + 6;
                if (plVar6 == plVar1) {
                  uVar18 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar1 + 0xd0))();
                  if ((long *)*plVar1 != plVar25) {
                    (**(code **)(*plVar25 + 0x100))(plVar25,plVar19 + local_90 * 3,plVar19 + 6);
                    plVar25 = (long *)plVar19[6];
                    local_90 = 2;
                  }
                  plVar1 = plVar19 + 9;
                  if (plVar6 == plVar1) {
                    uVar18 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar1 + 0xd0))();
                    if ((long *)*plVar1 != plVar25) {
                      (**(code **)(*plVar25 + 0x100))(plVar25,plVar19 + local_90 * 3,plVar19 + 9);
                      plVar25 = (long *)plVar19[9];
                      local_90 = 3;
                    }
                    plVar1 = plVar19 + 0xc;
                    if (plVar6 == plVar1) {
                      uVar18 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar1 + 0xd0))();
                      if ((long *)*plVar1 != plVar25) {
                        (**(code **)(*plVar25 + 0x100))
                                  (plVar25,plVar19 + local_90 * 3,plVar19 + 0xc);
                        plVar25 = (long *)plVar19[0xc];
                        local_90 = 4;
                      }
                      plVar1 = plVar19 + 0xf;
                      if (plVar6 == plVar1) {
                        uVar18 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        if ((long *)*plVar1 != plVar25) {
                          (**(code **)(*plVar25 + 0x100))
                                    (plVar25,plVar19 + local_90 * 3,plVar19 + 0xf);
                          plVar25 = (long *)plVar19[0xf];
                          local_90 = 5;
                        }
                        local_98 = plVar19 + 0x12;
                        if (plVar6 == local_98) {
                          uVar18 = 6;
                        }
                        else {
                          uVar18 = 6;
                          do {
                            (**(code **)(*(long *)*local_98 + 0xd0))();
                            if ((long *)*local_98 != plVar25) {
                              (**(code **)(*plVar25 + 0x100))
                                        (plVar25,plVar19 + local_90 * 3,local_98);
                              plVar25 = (long *)*local_98;
                              local_90 = uVar18;
                            }
                            local_98 = local_98 + 3;
                            uVar18 = uVar18 + 1;
                          } while (plVar6 != local_98);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar25 + 0x100))(plVar25,plVar19 + local_90 * 3,plVar19 + uVar18 * 3);
            plVar19[600] = 0;
          }
          *(undefined4 *)(lVar17 + 0x12cc) = 0;
        }
        puVar30 = puVar30 + 1;
      } while (puVar30 != puVar28);
      puVar30 = (undefined8 *)param_1[lVar24 * 10 + 0x6b];
    }
    *plVar27 = (long)puVar30;
    uVar20 = ~*(uint *)(param_1 + 0x7c) & 1;
    *(uint *)(param_1 + 0x7c) = uVar20;
    if (!bVar21) {
      *plVar23 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar23 + 1));
      uVar20 = *(uint *)(param_1 + 0x7c);
    }
  } while (uVar9 != uVar20);
  lVar17 = param_1[0x61];
  lVar22 = param_1[0x62];
  if (lVar17 != lVar22) {
    do {
      param_1[0x61] = 0;
      param_1[0x62] = 0;
      uVar14 = SUB84(plVar27,0);
      lVar29 = param_1[99];
      plVar23 = (long *)param_1[100];
      param_1[0x65] = 0xfffffffffffffff;
      plVar27 = (long *)(ulong)*(uint *)((long)param_1 + 0x33c);
      param_1[99] = 0;
      *(undefined4 *)(param_1 + 0x67) = 0;
      param_1[100] = param_1[1];
      param_1[0x66] = 0;
      *(undefined4 *)((long)param_1 + 0x33c) = uVar14;
      for (lVar24 = lVar17; lVar22 != lVar24; lVar24 = lVar24 + 0x10) {
        lVar31 = *(long *)(lVar24 + 8);
        FUN_00cb9f64(lVar31 + 0x108);
        plVar19 = *(long **)(lVar31 + 0x538);
        *(undefined8 *)(lVar31 + 0x538) = 0;
        if (plVar19 != (long *)0x0) {
          lVar31 = plVar19[6];
          psVar2 = (short *)(lVar31 + 0x1a);
          do {
            sVar7 = *psVar2;
            cVar13 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
            if (bVar21) {
              *psVar2 = sVar7 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar31 + 0x10) = 0;
            (**(code **)(*plVar19 + 0x50))();
          }
          else if (sVar7 == 0) goto LAB_028f3ae0;
        }
        FUN_00f5958c(*(undefined8 *)(lVar24 + 8));
      }
      if (lVar17 != 0) {
        uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar18 & 1) == 0) || (lVar22 = FUN_00c4e600(), *(int *)(lVar22 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar29 - lVar17,8);
        }
        else {
          FUN_00c48fe8(plVar23,lVar17,lVar29 - lVar17,8);
        }
      }
      lVar17 = param_1[0x61];
      lVar22 = param_1[0x62];
    } while (lVar17 != lVar22);
  }
  plVar23 = (long *)param_1[8];
  param_1[8] = 0;
  if (plVar23 != (long *)0x0) {
    lVar17 = plVar23[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_028f3ae0;
  }
  plVar23 = (long *)param_1[9];
  param_1[9] = 0;
  if (plVar23 != (long *)0x0) {
    lVar17 = plVar23[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_028f3ae0;
  }
  plVar23 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar23 != (long *)0x0) {
    lVar17 = plVar23[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_028f3ae0;
  }
  if (((*PTR_DAT_047e2410 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_047e2410), iVar16 != 0)) {
    FUN_00100190(PTR_LAB_047e2508,PTR_DAT_047e2418,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047e2410);
  }
  DAT_04866020 = *(undefined8 *)PTR_DAT_047e2418;
  FUN_028f3b54(DAT_04866020,param_1);
  lVar17 = param_1[0x75];
  if (lVar17 != 0) {
    lVar22 = param_1[0x77];
    param_1[0x76] = lVar17;
    plVar23 = (long *)param_1[0x78];
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x73));
  lVar17 = param_1[0x6b];
  if (lVar17 != 0) {
    lVar22 = param_1[0x6d];
    param_1[0x6c] = lVar17;
    plVar23 = (long *)param_1[0x6e];
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x69));
  lVar17 = param_1[0x61];
  if (lVar17 != 0) {
    lVar22 = param_1[99];
    param_1[0x62] = lVar17;
    plVar23 = (long *)param_1[100];
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  lVar17 = param_1[0x5a];
  if (lVar17 != 0) {
    lVar22 = param_1[0x5c];
    param_1[0x5b] = lVar17;
    plVar23 = (long *)param_1[0x5d];
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x57));
  FUN_028f3bfc(param_1 + 0x48);
  FUN_028f3cac(param_1 + 0x2a);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x28));
  lVar17 = param_1[0x20];
  if (lVar17 != 0) {
    lVar22 = param_1[0x22];
    plVar23 = (long *)param_1[0x23];
    param_1[0x21] = lVar17;
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  lVar17 = param_1[0x19];
  if (lVar17 != 0) {
    lVar22 = param_1[0x1b];
    plVar23 = (long *)param_1[0x1c];
    param_1[0x1a] = lVar17;
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  FUN_016ad09c(param_1 + 0x12);
  lVar17 = param_1[0xb];
  if (lVar17 != 0) {
    lVar22 = param_1[0xd];
    plVar23 = (long *)param_1[0xe];
    param_1[0xc] = lVar17;
    uVar18 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar18 & 1) == 0) || (lVar24 = FUN_00c4e600(), *(int *)(lVar24 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,lVar22 - lVar17,8);
    }
    else {
      FUN_00c48fe8(plVar23,lVar17,lVar22 - lVar17,8);
    }
  }
  plVar23 = (long *)param_1[10];
  if (plVar23 != (long *)0x0) {
    lVar17 = plVar23[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_028f3ae0;
  }
  plVar23 = (long *)param_1[9];
  if (plVar23 != (long *)0x0) {
    lVar17 = plVar23[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar7 == 0) goto LAB_028f3ae0;
  }
  plVar23 = (long *)param_1[8];
  if (plVar23 != (long *)0x0) {
    lVar17 = plVar23[6];
    psVar2 = (short *)(lVar17 + 0x1a);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*plVar23 + 0x50))();
    }
    else if (sVar7 == 0) {
LAB_028f3ae0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar3 = PTR_DAT_047d8c78 + 0x88;
  puVar4 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar3;
  param_1[5] = (long)puVar4;
  puVar30 = (undefined8 *)param_1[6];
  if (puVar30 != (undefined8 *)0x0) {
    psVar2 = (short *)(puVar30 + 3);
    do {
      sVar7 = *psVar2;
      cVar13 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar21) {
        *psVar2 = sVar7 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)puVar30 + 0x1c);
      do {
        iVar16 = *piVar5;
        cVar13 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar21) {
          *piVar5 = -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      if (iVar16 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar16 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar17;
        local_68 = (long *)*puVar30;
        FUN_00c44438(lVar17 + 0x8040,&local_68);
      }
    }
    else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x028f2e9c:
  cVar13 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar23,0x10);
  if (bVar21) {
    *plVar23 = lVar17;
    cVar13 = ExclusiveMonitorsStatus();
  }
  if (cVar13 == '\0') goto LAB_028f2ea4;
  goto LAB_028f2e94;
}


