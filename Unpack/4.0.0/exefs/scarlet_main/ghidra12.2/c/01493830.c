/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01493830; name: FUN_01493830
 */


void FUN_01493830(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  int *piVar5;
  short sVar6;
  long *plVar7;
  undefined8 uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  undefined8 uVar26;
  long *plVar27;
  ulong uVar28;
  undefined8 *puVar29;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  
  *param_1 = (long)&DAT_0459be40;
  param_1[4] = (long)&PTR_LAB_0459beb8;
  param_1[5] = (long)&DAT_0459bf08;
  if ((char)param_1[0xb] != '\0') {
    lVar19 = *(long *)(param_1[0x75] + 200);
    if (*(long *)(lVar19 + 0x260) != 0) {
      pcVar16 = *(code **)(lVar19 + 0x268);
      if (pcVar16 != (code *)0x0) {
        *(undefined8 *)(lVar19 + 0x270) = 0;
        *(undefined8 *)(lVar19 + 0x278) = 0;
        *(undefined8 *)(lVar19 + 0x260) = 0;
        *(undefined8 *)(lVar19 + 0x268) = 0;
        (*pcVar16)(lVar19 + 0x280);
      }
      lVar17 = *(long *)(lVar19 + 0x208);
      *(undefined4 *)(lVar19 + 0x2e0) = 0;
      lVar19 = *(long *)(lVar19 + 0x210);
      if (((lVar17 != lVar19) && (*(undefined1 *)(lVar17 + 0x10) = 1, lVar17 + 0x18 != lVar19)) &&
         (*(undefined1 *)(lVar17 + 0x28) = 1, lVar17 + 0x30 != lVar19)) {
        *(undefined1 *)(lVar17 + 0x40) = 1;
        for (lVar17 = lVar17 + 0x48; lVar17 != lVar19; lVar17 = lVar17 + 0x18) {
          *(undefined1 *)(lVar17 + 0x10) = 1;
        }
      }
    }
    FUN_01494e1c(param_1 + 0x68,&DAT_00003010 + *(long *)(param_1[8] + 0x30),FUN_0216bb30,param_1);
    if ((int)param_1[0x49] != 0) {
      uVar18 = 0;
      do {
        FUN_01495258(param_1,uVar18);
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_1 + 0x49));
    }
    lVar19 = param_1[0x45];
    param_1[0x45] = 0;
    if (lVar19 != 0) {
      FUN_00fae4c4(param_1 + 0x46);
    }
    *(undefined4 *)(param_1 + 0x49) = 0;
    FUN_01494f04(param_1[0xc],&DAT_00003010 + *(long *)(param_1[8] + 0x30));
  }
  param_1[0x104] = (long)&PTR_LAB_0459bf60;
  FUN_01495094(param_1 + 0x104);
  puVar20 = (undefined8 *)param_1[0x116];
  if (puVar20 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar20 + 3);
    do {
      sVar6 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar6 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar20 + 0x1c);
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_68 = (long *)*puVar20;
        FUN_00c44438(lVar19 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) goto LAB_01493ec0;
  }
  pcVar16 = (code *)param_1[0x107];
  if (pcVar16 != (code *)0x0) {
    param_1[0x109] = 0;
    param_1[0x108] = 0;
    param_1[0x107] = 0;
    param_1[0x106] = 0;
    (*pcVar16)(param_1 + 0x10a);
  }
  FUN_00f60478(param_1 + 0xf7);
  plVar25 = (long *)param_1[0xf0];
  while (plVar25 != (long *)0x0) {
    plVar23 = (long *)*plVar25;
    plVar24 = (long *)plVar25[0xb];
    if (plVar24 != (long *)0x0) {
      plVar7 = plVar24 + 5;
      do {
        lVar19 = *plVar7;
        iVar12 = (int)lVar19 + -1;
        cVar10 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar11) {
          *(int *)plVar7 = iVar12;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (iVar12 == 0) {
        (**(code **)(*plVar24 + 0x10))();
      }
      else if ((int)lVar19 == 0) goto LAB_01493e30;
    }
    if ((long *)plVar25[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar25[5] + 0x20))();
    }
    plVar24 = (long *)param_1[0xf1];
    uVar13 = (**(code **)(*plVar24 + 0xf8))(plVar24);
    if (((uVar13 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar24 + 0x18))(plVar24,plVar25,0x60,8);
      plVar25 = plVar23;
    }
    else {
      FUN_00c48fe8(plVar24,plVar25,0x60,8);
      plVar25 = plVar23;
    }
  }
  lVar19 = param_1[0xea];
  param_1[0xea] = 0;
  if (lVar19 != 0) {
    lVar17 = param_1[0xeb];
    plVar25 = (long *)param_1[0xec];
    uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,lVar17 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar25,lVar19,lVar17 << 3,8);
    }
  }
  FUN_00fef2c4(param_1 + 0xdd);
  plVar25 = (long *)param_1[0xd6];
  while (plVar25 != (long *)0x0) {
    plVar24 = (long *)*plVar25;
    if ((long *)plVar25[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar25[5] + 0x20))();
    }
    plVar23 = (long *)param_1[0xd7];
    uVar13 = (**(code **)(*plVar23 + 0xf8))(plVar23);
    if (((uVar13 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
      (**(code **)(*plVar23 + 0x18))(plVar23,plVar25,0x38,8);
      plVar25 = plVar24;
    }
    else {
      FUN_00c48fe8(plVar23,plVar25,0x38,8);
      plVar25 = plVar24;
    }
  }
  lVar19 = param_1[0xd0];
  param_1[0xd0] = 0;
  if (lVar19 != 0) {
    lVar17 = param_1[0xd1];
    plVar25 = (long *)param_1[0xd2];
    uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,lVar17 << 3,8);
    }
    else {
      FUN_00c48fe8(plVar25,lVar19,lVar17 << 3,8);
    }
  }
  lVar19 = param_1[0xc9];
  if (lVar19 != 0) {
    lVar17 = param_1[0xcb];
    param_1[0xca] = lVar19;
    plVar25 = (long *)param_1[0xcc];
    uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar19,lVar17 - lVar19,8);
    }
    else {
      FUN_00c48fe8(plVar25,lVar19,lVar17 - lVar19,8);
    }
  }
  if ((long *)param_1[199] != (long *)0x0) {
    (**(code **)(*(long *)param_1[199] + 0x60))();
  }
  plVar25 = (long *)param_1[0xc6];
  if (plVar25 != (long *)0x0) {
    lVar19 = plVar25[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar6 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar25 + 0x50))();
    }
    else if (sVar6 == 0) goto LAB_01494060;
  }
  pcVar16 = (code *)param_1[0xb7];
  if (pcVar16 != (code *)0x0) {
    param_1[0xb9] = 0;
    param_1[0xb8] = 0;
    param_1[0xb7] = 0;
    param_1[0xb6] = 0;
    (*pcVar16)(param_1 + 0xba);
  }
  pcVar16 = (code *)param_1[0xa7];
  if (pcVar16 != (code *)0x0) {
    param_1[0xa9] = 0;
    param_1[0xa8] = 0;
    param_1[0xa7] = 0;
    param_1[0xa6] = 0;
    (*pcVar16)(param_1 + 0xaa);
  }
  FUN_01494e14(param_1 + 0x91);
  FUN_011949c8(param_1 + 0x76);
  plVar25 = (long *)param_1[0x75];
  if (plVar25 != (long *)0x0) {
    plVar24 = plVar25 + 5;
    do {
      lVar19 = *plVar24;
      iVar12 = (int)lVar19 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(int *)plVar24 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_01493e30;
  }
  plVar25 = (long *)param_1[0x73];
  if (plVar25 != (long *)0x0) {
    lVar19 = plVar25[6];
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar6 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar6 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar6 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*plVar25 + 0x50))();
    }
    else if (sVar6 == 0) {
LAB_01494060:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar25 = (long *)param_1[0x67];
  if (plVar25 != (long *)0x0) {
    plVar24 = plVar25 + 5;
    do {
      lVar19 = *plVar24;
      iVar12 = (int)lVar19 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(int *)plVar24 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_01493e30;
  }
  plVar25 = (long *)param_1[0x66];
  if (plVar25 != (long *)0x0) {
    plVar24 = plVar25 + 5;
    do {
      lVar19 = *plVar24;
      iVar12 = (int)lVar19 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(int *)plVar24 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_01493e30;
  }
  plVar25 = (long *)param_1[0x65];
  if (plVar25 != (long *)0x0) {
    plVar24 = plVar25 + 5;
    do {
      lVar19 = *plVar24;
      iVar12 = (int)lVar19 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(int *)plVar24 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_01493e30;
  }
  puVar20 = (undefined8 *)param_1[0x5e];
  if (puVar20 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x5f] == puVar20) {
      puVar22 = puVar20;
    }
    else {
      puVar22 = (undefined8 *)param_1[0x5f];
      do {
        puVar29 = puVar22 + -4;
        puVar21 = (undefined8 *)*puVar29;
        *puVar29 = 0;
        if (puVar21 != (undefined8 *)0x0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar19 = FUN_00c4e600();
          iVar9 = *(int *)(lVar19 + 0x12c8);
          iVar12 = iVar9 + 1;
          *(int *)(lVar19 + 0x12c8) = iVar12;
          if (*(int *)(lVar19 + 0x12cc) <= iVar9) {
            *(int *)(lVar19 + 0x12cc) = iVar12;
          }
          (**(code **)*puVar21)(puVar21);
          plVar25 = (long *)puVar22[-3];
          uVar8 = puVar22[-2];
          uVar26 = puVar22[-1];
          uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
          if (((uVar13 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar25 + 0x18))(plVar25,puVar21,uVar8,uVar26);
          }
          else {
            FUN_00c48fe8(plVar25,puVar21,uVar8,uVar26);
          }
          lVar19 = FUN_00c4e600();
          iVar12 = *(int *)(lVar19 + 0x12c8) + -1;
          *(int *)(lVar19 + 0x12c8) = iVar12;
          if (iVar12 == 0) {
            plVar25 = (long *)FUN_00c4e600();
            if (plVar25[600] != 0) {
              local_70 = plVar25 + plVar25[600] * 3;
              local_68 = plVar25;
              FUN_00c4ea30(&local_68,&local_70);
              plVar23 = (long *)*plVar25;
              plVar24 = plVar25;
              if (plVar25[600] != 0) {
                plVar24 = plVar25 + plVar25[600] * 3;
              }
              if (plVar24 == plVar25) {
                local_78 = 0;
                uVar13 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar25 + 0xd0))();
                if ((long *)*plVar25 != plVar23) {
                  (**(code **)(*plVar23 + 0x100))(plVar23,plVar25,plVar25);
                  plVar23 = (long *)*plVar25;
                }
                plVar7 = plVar25 + 3;
                if (plVar24 == plVar7) {
                  local_78 = 0;
                  uVar13 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar7 + 0xd0))();
                  bVar11 = (long *)*plVar7 != plVar23;
                  if (bVar11) {
                    (**(code **)(*plVar23 + 0x100))(plVar23,plVar25,plVar25 + 3);
                    plVar23 = (long *)plVar25[3];
                  }
                  local_78 = (ulong)bVar11;
                  plVar7 = plVar25 + 6;
                  if (plVar24 == plVar7) {
                    uVar13 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar7 + 0xd0))();
                    if ((long *)*plVar7 != plVar23) {
                      (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + local_78 * 3,plVar25 + 6);
                      plVar23 = (long *)plVar25[6];
                      local_78 = 2;
                    }
                    plVar7 = plVar25 + 9;
                    if (plVar24 == plVar7) {
                      uVar13 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar7 + 0xd0))();
                      if ((long *)*plVar7 != plVar23) {
                        (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + local_78 * 3,plVar25 + 9);
                        plVar23 = (long *)plVar25[9];
                        local_78 = 3;
                      }
                      plVar7 = plVar25 + 0xc;
                      if (plVar24 == plVar7) {
                        uVar13 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar7 + 0xd0))();
                        if ((long *)*plVar7 != plVar23) {
                          (**(code **)(*plVar23 + 0x100))
                                    (plVar23,plVar25 + local_78 * 3,plVar25 + 0xc);
                          plVar23 = (long *)plVar25[0xc];
                          local_78 = 4;
                        }
                        plVar7 = plVar25 + 0xf;
                        if (plVar24 == plVar7) {
                          uVar13 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar7 + 0xd0))();
                          if ((long *)*plVar7 != plVar23) {
                            (**(code **)(*plVar23 + 0x100))
                                      (plVar23,plVar25 + local_78 * 3,plVar25 + 0xf);
                            plVar23 = (long *)plVar25[0xf];
                            local_78 = 5;
                          }
                          local_80 = plVar25 + 0x12;
                          if (plVar24 == local_80) {
                            uVar13 = 6;
                          }
                          else {
                            uVar13 = 6;
                            do {
                              (**(code **)(*(long *)*local_80 + 0xd0))();
                              if ((long *)*local_80 != plVar23) {
                                (**(code **)(*plVar23 + 0x100))
                                          (plVar23,plVar25 + local_78 * 3,local_80);
                                plVar23 = (long *)*local_80;
                                local_78 = uVar13;
                              }
                              local_80 = local_80 + 3;
                              uVar13 = uVar13 + 1;
                            } while (plVar24 != local_80);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + local_78 * 3,plVar25 + uVar13 * 3);
              plVar25[600] = 0;
            }
            *(undefined4 *)(lVar19 + 0x12cc) = 0;
          }
        }
        puVar22 = puVar29;
      } while (puVar29 != puVar20);
      puVar22 = (undefined8 *)param_1[0x5e];
    }
    lVar19 = param_1[0x60];
    param_1[0x5f] = (long)puVar20;
    plVar25 = (long *)param_1[0x61];
    uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar13 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,puVar22,lVar19 - (long)puVar22,8);
    }
    else {
      FUN_00c48fe8(plVar25,puVar22,lVar19 - (long)puVar22,8);
    }
  }
  plVar25 = (long *)param_1[0x57];
  if (plVar25 != (long *)0x0) {
    if ((long *)param_1[0x58] == plVar25) {
      plVar24 = plVar25;
    }
    else {
      plVar24 = (long *)param_1[0x58];
      do {
        plVar23 = plVar24 + -4;
        lVar19 = *plVar23;
        *plVar23 = 0;
        if (lVar19 != 0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar17 = FUN_00c4e600();
          iVar9 = *(int *)(lVar17 + 0x12c8);
          iVar12 = iVar9 + 1;
          *(int *)(lVar17 + 0x12c8) = iVar12;
          if (*(int *)(lVar17 + 0x12cc) <= iVar9) {
            *(int *)(lVar17 + 0x12cc) = iVar12;
          }
          plVar7 = (long *)plVar24[-3];
          lVar17 = plVar24[-2];
          lVar15 = plVar24[-1];
          uVar13 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar13 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,lVar19,lVar17,lVar15);
          }
          else {
            FUN_00c48fe8(plVar7,lVar19,lVar17,lVar15);
          }
          lVar19 = FUN_00c4e600();
          iVar12 = *(int *)(lVar19 + 0x12c8) + -1;
          *(int *)(lVar19 + 0x12c8) = iVar12;
          if (iVar12 == 0) {
            plVar24 = (long *)FUN_00c4e600();
            if (plVar24[600] != 0) {
              local_70 = plVar24 + plVar24[600] * 3;
              local_68 = plVar24;
              FUN_00c4ea30(&local_68,&local_70);
              plVar27 = (long *)*plVar24;
              plVar7 = plVar24;
              if (plVar24[600] != 0) {
                plVar7 = plVar24 + plVar24[600] * 3;
              }
              if (plVar7 == plVar24) {
                local_78 = 0;
                uVar13 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar24 + 0xd0))();
                if ((long *)*plVar24 != plVar27) {
                  (**(code **)(*plVar27 + 0x100))(plVar27,plVar24,plVar24);
                  plVar27 = (long *)*plVar24;
                }
                plVar4 = plVar24 + 3;
                if (plVar7 == plVar4) {
                  local_78 = 0;
                  uVar13 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar4 + 0xd0))();
                  bVar11 = (long *)*plVar4 != plVar27;
                  if (bVar11) {
                    (**(code **)(*plVar27 + 0x100))(plVar27,plVar24,plVar24 + 3);
                    plVar27 = (long *)plVar24[3];
                  }
                  local_78 = (ulong)bVar11;
                  plVar4 = plVar24 + 6;
                  if (plVar7 == plVar4) {
                    uVar13 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar4 + 0xd0))();
                    if ((long *)*plVar4 != plVar27) {
                      (**(code **)(*plVar27 + 0x100))(plVar27,plVar24 + local_78 * 3,plVar24 + 6);
                      plVar27 = (long *)plVar24[6];
                      local_78 = 2;
                    }
                    plVar4 = plVar24 + 9;
                    if (plVar7 == plVar4) {
                      uVar13 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar4 + 0xd0))();
                      if ((long *)*plVar4 != plVar27) {
                        (**(code **)(*plVar27 + 0x100))(plVar27,plVar24 + local_78 * 3,plVar24 + 9);
                        plVar27 = (long *)plVar24[9];
                        local_78 = 3;
                      }
                      plVar4 = plVar24 + 0xc;
                      if (plVar7 == plVar4) {
                        uVar13 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar4 + 0xd0))();
                        if ((long *)*plVar4 != plVar27) {
                          (**(code **)(*plVar27 + 0x100))
                                    (plVar27,plVar24 + local_78 * 3,plVar24 + 0xc);
                          plVar27 = (long *)plVar24[0xc];
                          local_78 = 4;
                        }
                        plVar4 = plVar24 + 0xf;
                        if (plVar7 == plVar4) {
                          uVar13 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar4 + 0xd0))();
                          if ((long *)*plVar4 != plVar27) {
                            (**(code **)(*plVar27 + 0x100))
                                      (plVar27,plVar24 + local_78 * 3,plVar24 + 0xf);
                            plVar27 = (long *)plVar24[0xf];
                            local_78 = 5;
                          }
                          local_80 = plVar24 + 0x12;
                          if (plVar7 == local_80) {
                            uVar13 = 6;
                          }
                          else {
                            uVar13 = 6;
                            do {
                              (**(code **)(*(long *)*local_80 + 0xd0))();
                              if ((long *)*local_80 != plVar27) {
                                (**(code **)(*plVar27 + 0x100))
                                          (plVar27,plVar24 + local_78 * 3,local_80);
                                plVar27 = (long *)*local_80;
                                local_78 = uVar13;
                              }
                              local_80 = local_80 + 3;
                              uVar13 = uVar13 + 1;
                            } while (plVar7 != local_80);
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar27 + 0x100))(plVar27,plVar24 + local_78 * 3,plVar24 + uVar13 * 3);
              plVar24[600] = 0;
            }
            *(undefined4 *)(lVar19 + 0x12cc) = 0;
          }
        }
        plVar24 = plVar23;
      } while (plVar23 != plVar25);
      plVar24 = (long *)param_1[0x57];
    }
    lVar19 = param_1[0x59];
    param_1[0x58] = (long)plVar25;
    plVar25 = (long *)param_1[0x5a];
    uVar13 = (**(code **)(*plVar25 + 0xf8))(plVar25);
    if (((uVar13 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
      (**(code **)(*plVar25 + 0x18))(plVar25,plVar24,lVar19 - (long)plVar24,8);
    }
    else {
      FUN_00c48fe8(plVar25,plVar24,lVar19 - (long)plVar24,8);
    }
  }
  FUN_00fef2c4(param_1 + 0x4a);
  lVar19 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar19 != 0) {
    FUN_00fae4c4(param_1 + 0x46);
  }
  FUN_01494e18(param_1 + 0x10);
  plVar25 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar25 != (long *)0x0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar19 = FUN_00c4e600();
    iVar9 = *(int *)(lVar19 + 0x12c8);
    iVar12 = iVar9 + 1;
    *(int *)(lVar19 + 0x12c8) = iVar12;
    if (*(int *)(lVar19 + 0x12cc) <= iVar9) {
      *(int *)(lVar19 + 0x12cc) = iVar12;
    }
    (**(code **)(*plVar25 + 8))(plVar25);
    plVar24 = (long *)param_1[0xd];
    lVar19 = param_1[0xe];
    lVar17 = param_1[0xf];
    uVar13 = (**(code **)(*plVar24 + 0xf8))(plVar24);
    if (((uVar13 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
      (**(code **)(*plVar24 + 0x18))(plVar24,plVar25,lVar19,lVar17);
    }
    else {
      FUN_00c48fe8(plVar24,plVar25,lVar19,lVar17);
    }
    lVar19 = FUN_00c4e600();
    iVar12 = *(int *)(lVar19 + 0x12c8) + -1;
    *(int *)(lVar19 + 0x12c8) = iVar12;
    if (iVar12 == 0) {
      plVar25 = (long *)FUN_00c4e600();
      if (plVar25[600] != 0) {
        local_70 = plVar25 + plVar25[600] * 3;
        local_68 = plVar25;
        FUN_00c4ea30(&local_68,&local_70);
        plVar23 = (long *)*plVar25;
        plVar24 = plVar25;
        if (plVar25[600] != 0) {
          plVar24 = plVar25 + plVar25[600] * 3;
        }
        if (plVar24 == plVar25) {
          uVar28 = 0;
          uVar13 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar25 + 0xd0))();
          if ((long *)*plVar25 != plVar23) {
            (**(code **)(*plVar23 + 0x100))(plVar23,plVar25,plVar25);
            plVar23 = (long *)*plVar25;
          }
          plVar7 = plVar25 + 3;
          if (plVar24 == plVar7) {
            uVar28 = 0;
            uVar13 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar7 + 0xd0))();
            bVar11 = (long *)*plVar7 != plVar23;
            if (bVar11) {
              (**(code **)(*plVar23 + 0x100))(plVar23,plVar25,plVar25 + 3);
              plVar23 = (long *)plVar25[3];
            }
            uVar28 = (ulong)bVar11;
            plVar7 = plVar25 + 6;
            if (plVar24 == plVar7) {
              uVar13 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar7 + 0xd0))();
              if ((long *)*plVar7 != plVar23) {
                (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + uVar28 * 3,plVar25 + 6);
                plVar23 = (long *)plVar25[6];
                uVar28 = 2;
              }
              plVar7 = plVar25 + 9;
              if (plVar24 == plVar7) {
                uVar13 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar7 + 0xd0))();
                if ((long *)*plVar7 != plVar23) {
                  (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + uVar28 * 3,plVar25 + 9);
                  plVar23 = (long *)plVar25[9];
                  uVar28 = 3;
                }
                plVar7 = plVar25 + 0xc;
                if (plVar24 == plVar7) {
                  uVar13 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar7 + 0xd0))();
                  if ((long *)*plVar7 != plVar23) {
                    (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + uVar28 * 3,plVar25 + 0xc);
                    plVar23 = (long *)plVar25[0xc];
                    uVar28 = 4;
                  }
                  plVar7 = plVar25 + 0xf;
                  if (plVar24 == plVar7) {
                    uVar13 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar7 + 0xd0))();
                    if ((long *)*plVar7 != plVar23) {
                      (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + uVar28 * 3,plVar25 + 0xf);
                      plVar23 = (long *)plVar25[0xf];
                      uVar28 = 5;
                    }
                    uVar13 = 6;
                    for (plVar7 = plVar25 + 0x12; plVar24 != plVar7; plVar7 = plVar7 + 3) {
                      (**(code **)(*(long *)*plVar7 + 0xd0))();
                      if ((long *)*plVar7 != plVar23) {
                        (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + uVar28 * 3,plVar7);
                        plVar23 = (long *)*plVar7;
                        uVar28 = uVar13;
                      }
                      uVar13 = uVar13 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar23 + 0x100))(plVar23,plVar25 + uVar28 * 3,plVar25 + uVar13 * 3);
        plVar25[600] = 0;
      }
      *(undefined4 *)(lVar19 + 0x12cc) = 0;
    }
  }
  puVar20 = (undefined8 *)param_1[9];
  if (puVar20 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar20 + 3);
    do {
      sVar6 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar6 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar20 + 0x1c);
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_68 = (long *)*puVar20;
        FUN_00c44438(lVar19 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) goto LAB_01493ec0;
  }
  plVar25 = (long *)param_1[8];
  if (plVar25 != (long *)0x0) {
    plVar24 = plVar25 + 5;
    do {
      lVar19 = *plVar24;
      iVar12 = (int)lVar19 + -1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar11) {
        *(int *)plVar24 = iVar12;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar25 + 0x10))();
    }
    else if ((int)lVar19 == 0) {
LAB_01493e30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar20 = (undefined8 *)param_1[6];
  if (puVar20 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar20 + 3);
    do {
      sVar6 = *psVar1;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar11) {
        *psVar1 = sVar6 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (sVar6 == 1) {
      piVar5 = (int *)((long)puVar20 + 0x1c);
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_68 = (long *)*puVar20;
        FUN_00c44438(lVar19 + 0x8040,&local_68);
      }
    }
    else if (sVar6 == 0) {
LAB_01493ec0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


