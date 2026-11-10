/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029c1694; name: FUN_029c1694
 */


void FUN_029c1694(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  long *plVar4;
  int *piVar5;
  long *plVar6;
  short sVar7;
  undefined8 uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  lVar18 = param_1[0x49];
  *param_1 = (long)&PTR_FUN_04605a70;
  param_1[4] = (long)&PTR_LAB_04605bb8;
  param_1[5] = (long)&PTR_LAB_04605c68;
  param_1[0x49] = 0;
  param_1[0xd] = (long)&PTR_LAB_04605cc0;
  param_1[0xe] = (long)&PTR_LAB_04605d50;
  if (lVar18 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar15 = FUN_00c4e600();
    iVar9 = *(int *)(lVar15 + 0x12c8);
    iVar12 = iVar9 + 1;
    *(int *)(lVar15 + 0x12c8) = iVar12;
    if (*(int *)(lVar15 + 0x12cc) <= iVar9) {
      *(int *)(lVar15 + 0x12cc) = iVar12;
    }
    FUN_00e165a4(lVar18);
    plVar14 = (long *)param_1[0x4a];
    lVar15 = param_1[0x4b];
    lVar23 = param_1[0x4c];
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar18,lVar15,lVar23);
    }
    else {
      FUN_00c48fe8(plVar14,lVar18,lVar15,lVar23);
    }
    lVar18 = FUN_00c4e600();
    iVar12 = *(int *)(lVar18 + 0x12c8) + -1;
    *(int *)(lVar18 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar14 = (long *)FUN_00c4e600();
      if (plVar14[600] != 0) {
        local_70 = plVar14 + plVar14[600] * 3;
        local_68 = plVar14;
        FUN_00c4ea30(&local_68,&local_70);
        plVar24 = (long *)*plVar14;
        plVar6 = plVar14;
        if (plVar14[600] != 0) {
          plVar6 = plVar14 + plVar14[600] * 3;
        }
        if (plVar6 == plVar14) {
          uVar25 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar14 + 0xd0))();
          if ((long *)*plVar14 != plVar24) {
            (**(code **)(*plVar24 + 0x100))(plVar24,plVar14,plVar14);
            plVar24 = (long *)*plVar14;
          }
          plVar4 = plVar14 + 3;
          if (plVar6 == plVar4) {
            uVar25 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar4 + 0xd0))();
            bVar11 = (long *)*plVar4 != plVar24;
            if (bVar11) {
              (**(code **)(*plVar24 + 0x100))(plVar24,plVar14,plVar14 + 3);
              plVar24 = (long *)plVar14[3];
            }
            uVar25 = (ulong)bVar11;
            plVar4 = plVar14 + 6;
            if (plVar6 == plVar4) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar4 + 0xd0))();
              if ((long *)*plVar4 != plVar24) {
                (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + uVar25 * 3,plVar14 + 6);
                plVar24 = (long *)plVar14[6];
                uVar25 = 2;
              }
              plVar4 = plVar14 + 9;
              if (plVar6 == plVar4) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar4 + 0xd0))();
                if ((long *)*plVar4 != plVar24) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + uVar25 * 3,plVar14 + 9);
                  plVar24 = (long *)plVar14[9];
                  uVar25 = 3;
                }
                plVar4 = plVar14 + 0xc;
                if (plVar6 == plVar4) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  if ((long *)*plVar4 != plVar24) {
                    (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + uVar25 * 3,plVar14 + 0xc);
                    plVar24 = (long *)plVar14[0xc];
                    uVar25 = 4;
                  }
                  plVar4 = plVar14 + 0xf;
                  if (plVar6 == plVar4) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar24) {
                      (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + uVar25 * 3,plVar14 + 0xf);
                      plVar24 = (long *)plVar14[0xf];
                      uVar25 = 5;
                    }
                    uVar13 = 6;
                    for (plVar4 = plVar14 + 0x12; plVar6 != plVar4; plVar4 = plVar4 + 3) {
                      (**(code **)(*(long *)*plVar4 + 0xd0))();
                      if ((long *)*plVar4 != plVar24) {
                        (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + uVar25 * 3,plVar4);
                        plVar24 = (long *)*plVar4;
                        uVar25 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + uVar25 * 3,plVar14 + uVar13 * 3);
        plVar14[600] = 0;
      }
      *(undefined4 *)(lVar18 + 0x12cc) = 0;
    }
  }
  if ((long *)param_1[0x47] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x47] + 0x18))();
  }
  pcVar17 = (code *)param_1[0x37];
  if (pcVar17 != (code *)0x0) {
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    (*pcVar17)(param_1 + 0x3a);
  }
  pcVar17 = (code *)param_1[0x27];
  if (pcVar17 != (code *)0x0) {
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    (*pcVar17)(param_1 + 0x2a);
  }
  puVar21 = (undefined8 *)param_1[0x1e];
  if (puVar21 != (undefined8 *)0x0) {
    puVar19 = (undefined8 *)param_1[0x1f];
    puVar20 = puVar21;
    if (puVar19 != puVar21) {
      pcVar17 = (code *)puVar19[-0xf];
      if (pcVar17 != (code *)0x0) {
        puVar19[-0xe] = 0;
        puVar19[-0xd] = 0;
        puVar19[-0x10] = 0;
        puVar19[-0xf] = 0;
        (*pcVar17)(puVar19 + -0xc);
      }
      if (puVar19 + -0x10 != puVar21) {
        pcVar17 = (code *)puVar19[-0x1f];
        if (pcVar17 != (code *)0x0) {
          puVar19[-0x1e] = 0;
          puVar19[-0x1d] = 0;
          puVar19[-0x20] = 0;
          puVar19[-0x1f] = 0;
          (*pcVar17)(puVar19 + -0x1c);
        }
        if (puVar19 + -0x20 != puVar21) {
          do {
            pcVar17 = (code *)puVar19[-0x2f];
            if (pcVar17 != (code *)0x0) {
              puVar19[-0x2e] = 0;
              puVar19[-0x2d] = 0;
              puVar19[-0x30] = 0;
              puVar19[-0x2f] = 0;
              (*pcVar17)(puVar19 + -0x2c);
            }
            puVar19 = puVar19 + -0x10;
          } while (puVar21 + 0x20 != puVar19);
        }
      }
      puVar20 = (undefined8 *)param_1[0x1e];
    }
    lVar18 = param_1[0x20];
    plVar14 = (long *)param_1[0x21];
    param_1[0x1f] = (long)puVar21;
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar20,lVar18 - (long)puVar20,0x10);
    }
    else {
      FUN_00c48fe8(plVar14,puVar20,lVar18 - (long)puVar20,0x10);
    }
  }
  lVar18 = param_1[0x1a];
  param_1[0x1a] = 0;
  if (lVar18 != 0) {
    FUN_00e1613c(param_1 + 0x1b);
  }
  lVar18 = param_1[0x16];
  param_1[0x16] = 0;
  if (lVar18 != 0) {
    FUN_00e15cc8(param_1 + 0x17);
  }
  puVar21 = (undefined8 *)param_1[0xf];
  if (puVar21 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x10] == puVar21) {
      puVar20 = puVar21;
    }
    else {
      puVar20 = (undefined8 *)param_1[0x10];
      do {
        puVar26 = puVar20 + -4;
        puVar19 = (undefined8 *)*puVar26;
        *puVar26 = 0;
        if (puVar19 != (undefined8 *)0x0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar18 = FUN_00c4e600();
          iVar9 = *(int *)(lVar18 + 0x12c8);
          iVar12 = iVar9 + 1;
          *(int *)(lVar18 + 0x12c8) = iVar12;
          if (*(int *)(lVar18 + 0x12cc) <= iVar9) {
            *(int *)(lVar18 + 0x12cc) = iVar12;
          }
          (**(code **)*puVar19)(puVar19);
          plVar14 = (long *)puVar20[-3];
          uVar8 = puVar20[-2];
          uVar22 = puVar20[-1];
          uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar13 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,puVar19,uVar8,uVar22);
          }
          else {
            FUN_00c48fe8(plVar14,puVar19,uVar8,uVar22);
          }
          lVar18 = FUN_00c4e600();
          iVar12 = *(int *)(lVar18 + 0x12c8) + -1;
          *(int *)(lVar18 + 0x12c8) = iVar12;
          if (iVar12 == 0) {
            plVar14 = (long *)FUN_00c4e600();
            if (plVar14[600] != 0) {
              local_70 = plVar14 + plVar14[600] * 3;
              local_68 = plVar14;
              FUN_00c4ea30(&local_68,&local_70);
              plVar24 = (long *)*plVar14;
              plVar6 = plVar14;
              if (plVar14[600] != 0) {
                plVar6 = plVar14 + plVar14[600] * 3;
              }
              if (plVar6 == plVar14) {
                local_78 = 0;
                uVar13 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar14 + 0xd0))();
                if ((long *)*plVar14 != plVar24) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,plVar14,plVar14);
                  plVar24 = (long *)*plVar14;
                }
                plVar4 = plVar14 + 3;
                if (plVar6 == plVar4) {
                  local_78 = 0;
                  uVar13 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  bVar11 = (long *)*plVar4 != plVar24;
                  if (bVar11) {
                    (**(code **)(*plVar24 + 0x100))(plVar24,plVar14,plVar14 + 3);
                    plVar24 = (long *)plVar14[3];
                  }
                  local_78 = (ulong)bVar11;
                  plVar4 = plVar14 + 6;
                  if (plVar6 == plVar4) {
                    uVar13 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar24) {
                      (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + local_78 * 3,plVar14 + 6);
                      plVar24 = (long *)plVar14[6];
                      local_78 = 2;
                    }
                    plVar4 = plVar14 + 9;
                    if (plVar6 == plVar4) {
                      uVar13 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar4 + 0xd0))();
                      if ((long *)*plVar4 != plVar24) {
                        (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + local_78 * 3,plVar14 + 9);
                        plVar24 = (long *)plVar14[9];
                        local_78 = 3;
                      }
                      plVar4 = plVar14 + 0xc;
                      if (plVar6 == plVar4) {
                        uVar13 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar4 + 0xd0))();
                        if ((long *)*plVar4 != plVar24) {
                          (**(code **)(*plVar24 + 0x100))
                                    (plVar24,plVar14 + local_78 * 3,plVar14 + 0xc);
                          plVar24 = (long *)plVar14[0xc];
                          local_78 = 4;
                        }
                        plVar4 = plVar14 + 0xf;
                        if (plVar6 == plVar4) {
                          uVar13 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar4 + 0xd0))();
                          if ((long *)*plVar4 != plVar24) {
                            (**(code **)(*plVar24 + 0x100))
                                      (plVar24,plVar14 + local_78 * 3,plVar14 + 0xf);
                            plVar24 = (long *)plVar14[0xf];
                            local_78 = 5;
                          }
                          local_80 = plVar14 + 0x12;
                          if (plVar6 == local_80) {
                            uVar13 = 6;
                          }
                          else {
                            uVar13 = 6;
                            do {
                              (**(code **)(*(long *)*local_80 + 0xd0))();
                              if ((long *)*local_80 != plVar24) {
                                (**(code **)(*plVar24 + 0x100))
                                          (plVar24,plVar14 + local_78 * 3,local_80);
                                plVar24 = (long *)*local_80;
                                local_78 = uVar13;
                              }
                              local_80 = local_80 + 3;
                              uVar13 = uVar13 + 1;
                            } while (plVar6 != local_80);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar24 + 0x100))(plVar24,plVar14 + local_78 * 3,plVar14 + uVar13 * 3);
              plVar14[600] = 0;
            }
            *(undefined4 *)(lVar18 + 0x12cc) = 0;
          }
        }
        puVar20 = puVar26;
      } while (puVar26 != puVar21);
      puVar20 = (undefined8 *)param_1[0xf];
    }
    lVar18 = param_1[0x11];
    plVar14 = (long *)param_1[0x12];
    param_1[0x10] = (long)puVar21;
    uVar13 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,puVar20,lVar18 - (long)puVar20,8);
    }
    else {
      FUN_00c48fe8(plVar14,puVar20,lVar18 - (long)puVar20,8);
    }
  }
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  param_1[5] = (long)(puVar1 + 0x170);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 9));
  puVar1 = PTR_DAT_047e3080 + 0x88;
  puVar2 = PTR_DAT_047e3080 + 0x138;
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar21 = (undefined8 *)param_1[6];
  if (puVar21 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar21 + 3);
    do {
      sVar7 = *psVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar11) {
        *psVar3 = sVar7 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar7 == 1) {
      piVar5 = (int *)((long)puVar21 + 0x1c);
      do {
        iVar12 = *piVar5;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar11) {
          *piVar5 = -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_68 = (long *)*puVar21;
        FUN_00c44438(lVar18 + 0x8040,&local_68);
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
}


