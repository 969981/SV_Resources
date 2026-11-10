/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014f12cc; name: FUN_014f12cc
 */


void FUN_014f12cc(long *param_1)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *local_70;
  long *local_68;
  
  *param_1 = (long)&DAT_046010a0;
  param_1[4] = (long)&PTR_LAB_04601250;
  param_1[5] = (long)&DAT_04601378;
  param_1[0x24] = (long)&PTR_LAB_04601430;
  param_1[6] = (long)&PTR_LAB_046013d0;
  param_1[7] = (long)&PTR_LAB_046013f8;
  FUN_014f1d64();
  if ((char)param_1[0x7e] != '\0') {
    *(undefined1 *)(param_1 + 0x62) = 0;
    (**(code **)(*param_1 + 0x198))(param_1);
  }
  puVar22 = (undefined8 *)param_1[0x7f];
  if (puVar22 != (undefined8 *)0x0) {
    plVar21 = (long *)*puVar22;
    puVar22 = puVar22 + 1;
    plVar17 = (long *)*puVar22;
    if (plVar21 != plVar17) {
      do {
        lVar15 = *plVar21;
        psVar1 = (short *)(lVar15 + 0x1a);
        sVar5 = *psVar1;
        if (sVar5 == *(short *)(lVar15 + 0x1a)) {
          cVar7 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = *(short *)(lVar15 + 0x1a) + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_014f13f4;
          bVar10 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014f13f4:
          bVar10 = false;
        }
        while (!bVar10) {
          sVar6 = *psVar1;
          if (sVar6 == sVar5) {
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar5 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_014f1398;
            bVar10 = true;
            sVar5 = sVar6;
          }
          else {
            ClearExclusiveLocal();
LAB_014f1398:
            bVar10 = false;
            sVar5 = sVar6;
          }
        }
        lVar15 = *(long *)(lVar15 + 0x10);
        plVar20 = (long *)0x0;
        if (lVar15 != 0) {
          plVar20 = (long *)(lVar15 + -0x28);
        }
        if (*(uint *)((long)plVar20 + 0x74) < 3) {
          *(undefined4 *)((long)plVar20 + 0x74) =
               *(undefined4 *)(&DAT_03d6b558 + (long)(int)*(uint *)((long)plVar20 + 0x74) * 4);
LAB_014f13c8:
          lVar15 = plVar20[6];
          psVar1 = (short *)(lVar15 + 0x1a);
          do {
            sVar5 = *psVar1;
            cVar7 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar10) {
              *psVar1 = sVar5 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (sVar5 == 1) {
            *(undefined8 *)(lVar15 + 0x10) = 0;
            (**(code **)(*plVar20 + 0x50))();
          }
          else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        else if (lVar15 != 0) goto LAB_014f13c8;
        puVar9 = PTR_DAT_047d3918;
        puVar8 = PTR_DAT_047d3910;
        plVar21 = plVar21 + 2;
      } while (plVar21 != plVar17);
      plVar21 = *(long **)param_1[0x7f];
      puVar22 = (undefined8 *)param_1[0x7f] + 1;
      plVar17 = (long *)*puVar22;
      if (plVar17 != plVar21) {
        pbVar16 = PTR_DAT_047d3908;
        do {
          plVar17 = plVar17 + -2;
          puVar18 = (undefined8 *)*plVar17;
          if (puVar18 != (undefined8 *)0x0) {
            psVar1 = (short *)(puVar18 + 3);
            do {
              sVar5 = *psVar1;
              cVar7 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar10) {
                *psVar1 = sVar5 + -1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (sVar5 == 1) {
              piVar2 = (int *)((long)puVar18 + 0x1c);
              do {
                iVar11 = *piVar2;
                cVar7 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                  *piVar2 = -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (iVar11 != -1) {
                if (((*pbVar16 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
                  FUN_00100190(PTR_LAB_047d3de8,puVar8,&PTR_LOOP_04483000);
                  __cxa_guard_release(PTR_DAT_047d3908);
                }
                lVar15 = *(long *)puVar8;
                *(long *)puVar9 = lVar15;
                local_68 = (long *)*puVar18;
                FUN_00c44438(lVar15 + 0x8040,&local_68);
                pbVar16 = PTR_DAT_047d3908;
              }
            }
            else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x33,"Reference counter underflows.");
            }
          }
        } while (plVar17 != plVar21);
      }
    }
    *puVar22 = plVar21;
    lVar15 = param_1[0x7f];
    param_1[0x7f] = 0;
    if (lVar15 != 0) {
      FUN_00c4e600();
      FUN_00c4e600();
      lVar12 = FUN_00c4e600();
      iVar4 = *(int *)(lVar12 + 0x12c8);
      iVar11 = iVar4 + 1;
      *(int *)(lVar12 + 0x12c8) = iVar11;
      if (*(int *)(lVar12 + 0x12cc) <= iVar4) {
        *(int *)(lVar12 + 0x12cc) = iVar11;
      }
      FUN_014f1eb4(lVar15);
      plVar21 = (long *)param_1[0x80];
      lVar12 = param_1[0x81];
      lVar19 = param_1[0x82];
      uVar13 = (**(code **)(*plVar21 + 0xf8))(plVar21);
      if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar15,lVar12,lVar19);
      }
      else {
        FUN_00c48fe8(plVar21,lVar15,lVar12,lVar19);
      }
      lVar15 = FUN_00c4e600();
      iVar11 = *(int *)(lVar15 + 0x12c8) + -1;
      *(int *)(lVar15 + 0x12c8) = iVar11;
      if (iVar11 == 0) {
        plVar21 = (long *)FUN_00c4e600();
        if (plVar21[600] != 0) {
          local_70 = plVar21 + plVar21[600] * 3;
          local_68 = plVar21;
          FUN_00c4ea30(&local_68,&local_70);
          plVar20 = (long *)*plVar21;
          plVar17 = plVar21;
          if (plVar21[600] != 0) {
            plVar17 = plVar21 + plVar21[600] * 3;
          }
          if (plVar17 == plVar21) {
            uVar23 = 0;
            uVar13 = 0;
          }
          else {
            (**(code **)(*(long *)*plVar21 + 0xd0))();
            if ((long *)*plVar21 != plVar20) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar21,plVar21);
              plVar20 = (long *)*plVar21;
            }
            plVar3 = plVar21 + 3;
            if (plVar17 == plVar3) {
              uVar23 = 0;
              uVar13 = 1;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              bVar10 = (long *)*plVar3 != plVar20;
              if (bVar10) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar21,plVar21 + 3);
                plVar20 = (long *)plVar21[3];
              }
              uVar23 = (ulong)bVar10;
              plVar3 = plVar21 + 6;
              if (plVar17 == plVar3) {
                uVar13 = 2;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 6);
                  plVar20 = (long *)plVar21[6];
                  uVar23 = 2;
                }
                plVar3 = plVar21 + 9;
                if (plVar17 == plVar3) {
                  uVar13 = 3;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 9);
                    plVar20 = (long *)plVar21[9];
                    uVar23 = 3;
                  }
                  plVar3 = plVar21 + 0xc;
                  if (plVar17 == plVar3) {
                    uVar13 = 4;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 0xc);
                      plVar20 = (long *)plVar21[0xc];
                      uVar23 = 4;
                    }
                    plVar3 = plVar21 + 0xf;
                    if (plVar17 == plVar3) {
                      uVar13 = 5;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 0xf);
                        plVar20 = (long *)plVar21[0xf];
                        uVar23 = 5;
                      }
                      uVar13 = 6;
                      for (plVar3 = plVar21 + 0x12; plVar17 != plVar3; plVar3 = plVar3 + 3) {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar20) {
                          (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar3);
                          plVar20 = (long *)*plVar3;
                          uVar23 = uVar13;
                        }
                        uVar13 = uVar13 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
          (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + uVar13 * 3);
          plVar21[600] = 0;
        }
        *(undefined4 *)(lVar15 + 0x12cc) = 0;
      }
    }
  }
  lVar15 = param_1[0x83];
  param_1[0x83] = 0;
  if (lVar15 != 0) {
    FUN_014f24d4(param_1 + 0x84);
  }
  lVar15 = param_1[0x87];
  param_1[0x87] = 0;
  if (lVar15 == 0) {
    param_1[0x87] = 0;
  }
  else {
    FUN_014f20b4(param_1 + 0x88);
    lVar15 = param_1[0x87];
    param_1[0x87] = 0;
    if (lVar15 != 0) {
      FUN_014f20b4(param_1 + 0x88);
    }
  }
  lVar15 = param_1[0x83];
  param_1[0x83] = 0;
  if (lVar15 != 0) {
    FUN_014f24d4(param_1 + 0x84);
  }
  lVar15 = param_1[0x7f];
  param_1[0x7f] = 0;
  if (lVar15 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar12 = FUN_00c4e600();
    iVar4 = *(int *)(lVar12 + 0x12c8);
    iVar11 = iVar4 + 1;
    *(int *)(lVar12 + 0x12c8) = iVar11;
    if (*(int *)(lVar12 + 0x12cc) <= iVar4) {
      *(int *)(lVar12 + 0x12cc) = iVar11;
    }
    FUN_014f1eb4(lVar15);
    plVar21 = (long *)param_1[0x80];
    lVar12 = param_1[0x81];
    lVar19 = param_1[0x82];
    uVar13 = (**(code **)(*plVar21 + 0xf8))(plVar21);
    if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
      (**(code **)(*plVar21 + 0x18))(plVar21,lVar15,lVar12,lVar19);
    }
    else {
      FUN_00c48fe8(plVar21,lVar15,lVar12,lVar19);
    }
    lVar15 = FUN_00c4e600();
    iVar11 = *(int *)(lVar15 + 0x12c8) + -1;
    *(int *)(lVar15 + 0x12c8) = iVar11;
    if (iVar11 == 0) {
      plVar21 = (long *)FUN_00c4e600();
      if (plVar21[600] != 0) {
        local_70 = plVar21 + plVar21[600] * 3;
        local_68 = plVar21;
        FUN_00c4ea30(&local_68,&local_70);
        plVar20 = (long *)*plVar21;
        plVar17 = plVar21;
        if (plVar21[600] != 0) {
          plVar17 = plVar21 + plVar21[600] * 3;
        }
        if (plVar17 == plVar21) {
          uVar23 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar21 + 0xd0))();
          if ((long *)*plVar21 != plVar20) {
            (**(code **)(*plVar20 + 0x100))(plVar20,plVar21,plVar21);
            plVar20 = (long *)*plVar21;
          }
          plVar3 = plVar21 + 3;
          if (plVar17 == plVar3) {
            uVar23 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar3 + 0xd0))();
            bVar10 = (long *)*plVar3 != plVar20;
            if (bVar10) {
              (**(code **)(*plVar20 + 0x100))(plVar20,plVar21,plVar21 + 3);
              plVar20 = (long *)plVar21[3];
            }
            uVar23 = (ulong)bVar10;
            plVar3 = plVar21 + 6;
            if (plVar17 == plVar3) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar3 + 0xd0))();
              if ((long *)*plVar3 != plVar20) {
                (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 6);
                plVar20 = (long *)plVar21[6];
                uVar23 = 2;
              }
              plVar3 = plVar21 + 9;
              if (plVar17 == plVar3) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar3 + 0xd0))();
                if ((long *)*plVar3 != plVar20) {
                  (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 9);
                  plVar20 = (long *)plVar21[9];
                  uVar23 = 3;
                }
                plVar3 = plVar21 + 0xc;
                if (plVar17 == plVar3) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  if ((long *)*plVar3 != plVar20) {
                    (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 0xc);
                    plVar20 = (long *)plVar21[0xc];
                    uVar23 = 4;
                  }
                  plVar3 = plVar21 + 0xf;
                  if (plVar17 == plVar3) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar20) {
                      (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + 0xf);
                      plVar20 = (long *)plVar21[0xf];
                      uVar23 = 5;
                    }
                    uVar13 = 6;
                    for (plVar3 = plVar21 + 0x12; plVar17 != plVar3; plVar3 = plVar3 + 3) {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar20) {
                        (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar3);
                        plVar20 = (long *)*plVar3;
                        uVar23 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar20 + 0x100))(plVar20,plVar21 + uVar23 * 3,plVar21 + uVar13 * 3);
        plVar21[600] = 0;
      }
      *(undefined4 *)(lVar15 + 0x12cc) = 0;
    }
  }
  if ((long *)param_1[0x7d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7d] + 0x20))();
  }
  if ((long *)param_1[0x7c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x7c] + 0x20))();
  }
  FUN_013ec594(param_1);
  return;
}


