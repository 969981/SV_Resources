/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cb61e8; name: FUN_00cb61e8
 */


void FUN_00cb61e8(long param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  byte *pbVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long *plVar25;
  undefined1 *puVar26;
  bool bVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  int local_cc;
  long *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  int local_8c;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  
  if (*(char *)(param_1 + 0x160) != '\0') {
    return;
  }
  plVar8 = *(long **)(param_1 + 0x120);
  plVar21 = *(long **)(param_1 + 0x128);
  do {
    while( true ) {
      do {
        if (plVar21 == plVar8) {
          *(long **)(param_1 + 0x128) = plVar8;
          FUN_00c9e664(&local_88,param_1 + 0xe8);
          if (local_88 == (long *)0x0) {
            lVar7 = 0;
            goto LAB_00cb62dc;
          }
          if (local_80 == (long *)0x0) {
            lVar30 = 0;
          }
          else {
            lVar30 = local_80[9];
          }
          plVar8 = (long *)(lVar30 + 0x110);
          lVar28 = *plVar8;
          lVar7 = nn::os::GetCurrentThread();
          if (lVar7 != lVar28) {
            lVar7 = nn::os::GetCurrentThread();
            goto LAB_00cb6288;
          }
          bVar27 = true;
          goto LAB_00cb629c;
        }
        plVar21 = plVar21 + -2;
        plVar6 = (long *)*plVar21;
      } while (plVar6 == (long *)0x0);
      plVar12 = plVar6 + 5;
      do {
        lVar7 = *plVar12;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar27) {
          *(int *)plVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 != 0) break;
      (**(code **)(*plVar6 + 0x10))();
    }
  } while ((int)lVar7 != 0);
LAB_00cb6ab4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
LAB_00cb6288:
  if (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar27) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00cb6298;
    goto LAB_00cb6288;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x118));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar30 + 0x118));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar27) {
            *plVar8 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00cb6298;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar27) {
      *plVar8 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00cb6298:
  bVar27 = false;
LAB_00cb629c:
  plVar8 = (long *)FUN_00cb6f50(*(undefined8 *)(lVar30 + 0x128),*(undefined8 *)(lVar30 + 0x130));
  if ((*(long **)(lVar30 + 0x130) == plVar8) || (*plVar8 == 0)) {
    plVar8 = (long *)FUN_00cb6f50(*(undefined8 *)(lVar30 + 0x160),*(undefined8 *)(lVar30 + 0x168));
    if (*(long **)(lVar30 + 0x168) == plVar8) {
      lVar7 = 0;
    }
    else {
      lVar7 = 0;
      if (*plVar8 != 0) {
        lVar7 = *plVar8 + -0x20;
      }
    }
  }
  else {
    lVar7 = *plVar8 + -0x20;
  }
  if (!bVar27) {
    *(undefined8 *)(lVar30 + 0x110) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar30 + 0x118));
  }
LAB_00cb62dc:
  if (local_80 != (long *)0x0) {
    plVar8 = local_80 + 5;
    do {
      lVar30 = *plVar8;
      iVar5 = (int)lVar30 + -1;
      cVar3 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar27) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar30 == 0) goto LAB_00cb6ab4;
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x60))();
  }
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x130) != 3) {
    return;
  }
  plVar8 = (long *)(lVar7 + 0x140);
  lVar28 = *plVar8;
  lVar30 = nn::os::GetCurrentThread();
  if (lVar30 == lVar28) {
    bVar27 = true;
LAB_00cb6358:
    if (*(long *)(lVar7 + 0x1b0) == 0) {
      if ((*PTR_DAT_047d3e28 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28);
        puVar29 = PTR_DAT_047d3e30;
        if (iVar5 != 0) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
          goto LAB_00cb6368;
        }
      }
      puVar29 = PTR_DAT_047d3e30;
    }
    else {
      puVar29 = (undefined *)(*(long *)(lVar7 + 0x188) + 0x10);
    }
LAB_00cb6368:
    if (!bVar27) {
      *(undefined8 *)(lVar7 + 0x140) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x148));
    }
    puVar9 = (undefined8 *)FUN_00cb7028(lVar7,puVar29);
    plVar8 = (long *)*puVar9;
    if (plVar8 != (long *)0x0) {
      plVar21 = plVar8 + 5;
      do {
        lVar30 = *plVar21;
        cVar3 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar27) {
          *(int *)plVar21 = (int)lVar30 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar30 == -1) goto LAB_00cb6dd0;
    }
    if (*(char *)(param_1 + 0x161) != '\0') {
      local_78 = 0x1f;
      local_70 = (long *)0x0;
      local_8c = 2;
      local_88 = (long *)0x92caeea3ef5ad64c;
      local_80 = (long *)PTR_s_LightReceiveType_047d9490;
      local_b0 = (long *)&DAT_cbf29ce484222645;
      puStack_a8 = &DAT_03c886bc;
      local_a0 = 0;
      local_98 = (long *)0x0;
      FUN_00cb7258(plVar8,&local_88,&local_8c,&local_b0);
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      FUN_00cb7244(lVar7,0);
      *(undefined1 *)(param_1 + 0x161) = 0;
    }
    lVar30 = *(long *)(DAT_0485a0d8 + 0x38);
    if (lVar30 != 0) {
      (**(code **)(*(long *)(lVar30 + 0x20) + 0x10))();
    }
    if ((plVar8[0x22] != 0) && (plVar21 = *(long **)(plVar8[0x22] + 0x70), plVar21 != (long *)0x0))
    {
      plVar6 = plVar21 + 5;
      do {
        lVar28 = *plVar6;
        cVar3 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar27) {
          *(int *)plVar6 = (int)lVar28 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar28 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x120) + 0x50) +
              (long)*(int *)(*(long *)(lVar7 + 0x120) + 0x194) * 0x38;
      lVar28 = *(long *)(lVar7 + 8);
      if (lVar28 != lVar7) {
        local_cc = 1;
        do {
          lVar13 = *(long *)(lVar28 + 0x10);
          for (lVar31 = *(long *)(lVar13 + 0x70); lVar31 != lVar13 + 0x68;
              lVar31 = *(long *)(lVar31 + 8)) {
            lVar14 = *(long *)(lVar31 + 0x10);
            uVar19 = *(long *)(lVar14 + 0x58) - *(long *)(lVar14 + 0x50);
            if ((int)(uVar19 >> 3) != 0) {
              uVar32 = 0;
LAB_00cb648c:
              FUN_00c5ecb4(&local_b0,lVar30,*(long *)(*(long *)(lVar14 + 0x50) + uVar32 * 8) + 0x128
                          );
              if (local_b0 != (long *)0x0) {
                lVar14 = local_b0[0x26];
                lVar16 = local_b0[0x27];
                plVar12 = local_b0;
                if ((int)((ulong)(lVar16 - lVar14) >> 5) != 0) {
                  lVar33 = 0;
LAB_00cb64d0:
                  if (((DAT_04838308 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04838308), iVar5 != 0)) {
                    DAT_048382f0 = -0xb7ca90dfaaa4600;
                    DAT_048382f8 = PTR_s_EyeClearCoat_047d9488;
                    DAT_04838300 = 0x1f;
                    __cxa_guard_release(&DAT_04838308);
                  }
                  plVar12 = local_b0;
                  if (*(long *)(local_b0[0x26] + lVar33) != DAT_048382f0) goto code_r0x00cb64f4;
                  if ((*(long *)(local_b0[0x15] + 0xf8) == 0) ||
                     (plVar10 = (long *)(*(long *)(local_b0[0x15] + 0xf8) + 0x30),
                     uVar11 = (**(code **)(*plVar10 + 0x30))(plVar10,&local_8c,"PointLightIndex"),
                     (uVar11 & 1) == 0)) {
                    local_8c = local_cc;
                  }
                  snprintf((char *)&local_88,0x20,"pointlight%d",local_8c);
                  puVar15 = &DAT_cbf29ce484222645;
                  if ((byte)local_88 != 0) {
                    puVar15 = &DAT_cbf29ce484222645;
                    pbVar20 = (byte *)((ulong)&local_88 | 1);
                    bVar2 = (byte)local_88;
                    do {
                      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar2) * 0x100000001b3);
                      bVar2 = *pbVar20;
                      pbVar20 = pbVar20 + 1;
                    } while (bVar2 != 0);
                  }
                  plVar10 = (long *)plVar21[6];
LAB_00cb6608:
                  if (plVar10 != (long *)plVar21[7]) {
                    puVar22 = *(undefined1 **)(*plVar10 + 0x40);
                    if (puVar22 != (undefined1 *)0x0) {
                      uVar11 = (long)puVar22 - ((ulong)puVar22 >> 1 & 0x5555555555555555);
                      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
                      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38;
                      if (uVar11 < 2) {
                        puVar24 = (undefined1 *)((ulong)(puVar22 + -1) & (ulong)puVar15);
                      }
                      else {
                        puVar24 = puVar15;
                        if (puVar22 <= puVar15) {
                          uVar23 = 0;
                          if (puVar22 != (undefined1 *)0x0) {
                            uVar23 = (ulong)puVar15 / (ulong)puVar22;
                          }
                          puVar24 = puVar15 + -(uVar23 * (long)puVar22);
                        }
                      }
                      puVar9 = *(undefined8 **)(*(long *)(*plVar10 + 0x38) + (long)puVar24 * 8);
                      if ((puVar9 != (undefined8 *)0x0) &&
                         (plVar25 = (long *)*puVar9, plVar25 != (long *)0x0)) {
                        if (uVar11 < 2) {
                          do {
                            if ((undefined1 *)plVar25[1] == puVar15) {
                              if ((undefined1 *)plVar25[2] == puVar15) goto LAB_00cb66b8;
                            }
                            else if ((undefined1 *)((ulong)plVar25[1] & (ulong)(puVar22 + -1)) !=
                                     puVar24) break;
                            plVar25 = (long *)*plVar25;
                          } while (plVar25 != (long *)0x0);
                        }
                        else {
                          do {
                            puVar26 = (undefined1 *)plVar25[1];
                            if (puVar26 == puVar15) {
                              if ((undefined1 *)plVar25[2] == puVar15) goto LAB_00cb66b8;
                            }
                            else {
                              if (puVar22 <= puVar26) {
                                uVar11 = 0;
                                if (puVar22 != (undefined1 *)0x0) {
                                  uVar11 = (ulong)puVar26 / (ulong)puVar22;
                                }
                                puVar26 = puVar26 + -(uVar11 * (long)puVar22);
                              }
                              if (puVar26 != puVar24) break;
                            }
                            plVar25 = (long *)*plVar25;
                          } while (plVar25 != (long *)0x0);
                        }
                      }
                    }
                    goto LAB_00cb6604;
                  }
                  goto LAB_00cb6500;
                }
                goto LAB_00cb6504;
              }
              goto LAB_00cb6520;
            }
LAB_00cb6774:
          }
          lVar28 = *(long *)(lVar28 + 8);
        } while (lVar28 != lVar7);
      }
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar27) {
          *(int *)plVar6 = (int)lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar7 == -1) {
LAB_00cb6dd0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar12 = *(long **)(param_1 + 0x158);
      *(long **)(param_1 + 0x158) = plVar21;
      if (plVar12 != (long *)0x0) {
        plVar10 = plVar12 + 5;
        do {
          lVar7 = *plVar10;
          iVar5 = (int)lVar7 + -1;
          cVar3 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar27) {
            *(int *)plVar10 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        else if ((int)lVar7 == 0) goto LAB_00cb6ab4;
      }
      do {
        lVar7 = *plVar6;
        iVar5 = (int)lVar7 + -1;
        cVar3 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar27) {
          *(int *)plVar6 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
      else if ((int)lVar7 == 0) goto LAB_00cb6ab4;
    }
    if (lVar30 != 0) {
      (**(code **)(*(long *)(lVar30 + 0x20) + 0x18))((long *)(lVar30 + 0x20));
    }
    if (plVar8 == (long *)0x0) {
      return;
    }
    plVar21 = plVar8 + 5;
    do {
      lVar7 = *plVar21;
      iVar5 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar27) {
        *(int *)plVar21 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return;
    }
    if ((int)lVar7 != 0) {
      return;
    }
    goto LAB_00cb6ab4;
  }
  lVar30 = nn::os::GetCurrentThread();
  while (*plVar8 == 0) {
    cVar3 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar27) {
      *plVar8 = lVar30;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00cb6354;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x148));
  do {
    if (*plVar8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x148));
        while (*plVar8 == 0) {
          cVar3 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar27) {
            *plVar8 = lVar30;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00cb6354;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar27 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar27) {
      *plVar8 = lVar30;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00cb6354:
  bVar27 = false;
  goto LAB_00cb6358;
code_r0x00cb64f4:
  lVar33 = lVar33 + 0x20;
  if (((ulong)(lVar16 - lVar14) >> 5 & 0xffffffff) * 0x20 == lVar33) goto LAB_00cb6500;
  goto LAB_00cb64d0;
LAB_00cb66b8:
  if ((short)plVar25[6] < 0) {
LAB_00cb6604:
    plVar10 = plVar10 + 2;
    goto LAB_00cb6608;
  }
  sVar4 = *(short *)((long)plVar10 + 10) + (short)plVar25[6];
  if (sVar4 < 1) goto LAB_00cb6500;
  puVar9 = *(undefined8 **)(param_1 + 0x128);
  if (puVar9 < *(undefined8 **)(param_1 + 0x130)) {
    uVar34 = *(undefined8 *)(param_1 + 0x138);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar14 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar14 == 0) {
      *puVar9 = local_b0;
      *(short *)(puVar9 + 1) = sVar4;
    }
    else {
      if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00cb6e00;
      *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar34;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
      *puVar9 = local_b0;
      *(short *)(puVar9 + 1) = sVar4;
      *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
    }
    local_b0 = (long *)0x0;
    *(undefined8 **)(param_1 + 0x128) = puVar9 + 2;
    goto LAB_00cb675c;
  }
  uVar23 = *(ulong *)(param_1 + 0x140);
  lVar14 = (long)puVar9 - *(long *)(param_1 + 0x120) >> 4;
  uVar11 = lVar14 + 1;
  if (0x7ffffffffffffffe < uVar23) {
    uVar23 = 0x7fffffffffffffff;
  }
  if (uVar23 < uVar11) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar16 = (long)*(undefined8 **)(param_1 + 0x130) - *(long *)(param_1 + 0x120);
  uVar17 = lVar16 >> 3;
  if (uVar11 <= uVar17) {
    uVar11 = uVar17;
  }
  if (uVar23 >> 1 <= (ulong)(lVar16 >> 4)) {
    uVar11 = uVar23;
  }
  if (uVar11 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = (**(code **)(**(long **)(param_1 + 0x138) + 0x10))
                       (*(long **)(param_1 + 0x138),uVar11 << 4,8);
    if (lVar16 == 0) {
      (**(code **)(**(long **)(param_1 + 0x138) + 0xe8))();
    }
  }
  puVar9 = (undefined8 *)(lVar16 + lVar14 * 0x10);
  uVar34 = *(undefined8 *)(param_1 + 0x138);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar14 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar14 == 0) {
    *puVar9 = local_b0;
    *(short *)(puVar9 + 1) = sVar4;
  }
  else {
    if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_00cb6e00;
    *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar34;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
    *puVar9 = local_b0;
    *(short *)(puVar9 + 1) = sVar4;
    *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  }
  local_b0 = (long *)0x0;
  plVar12 = *(long **)(param_1 + 0x120);
  plVar10 = *(long **)(param_1 + 0x128);
  if (plVar10 == plVar12) {
    puVar18 = puVar9;
    plVar10 = plVar12;
  }
  else {
    lVar14 = 0;
    do {
      uVar34 = *(undefined8 *)(param_1 + 0x138);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar33 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar33 == 0) {
        uVar34 = *(undefined8 *)((long)plVar10 + lVar14 + -0x10);
        *(undefined8 *)((long)plVar10 + lVar14 + -0x10) = 0;
        *(undefined8 *)((long)puVar9 + lVar14 + -0x10) = uVar34;
        *(undefined2 *)((long)puVar9 + lVar14 + -8) = *(undefined2 *)((long)plVar10 + lVar14 + -8);
      }
      else {
        if (0xf < *(ulong *)(lVar33 + 0x80)) {
LAB_00cb6e00:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar33 + *(ulong *)(lVar33 + 0x80) * 8) = uVar34;
        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + 1;
        uVar34 = *(undefined8 *)((long)plVar10 + lVar14 + -0x10);
        *(undefined8 *)((long)plVar10 + lVar14 + -0x10) = 0;
        *(undefined8 *)((long)puVar9 + lVar14 + -0x10) = uVar34;
        *(undefined2 *)((long)puVar9 + lVar14 + -8) = *(undefined2 *)((long)plVar10 + lVar14 + -8);
        *(long *)(lVar33 + 0x80) = *(long *)(lVar33 + 0x80) + -1;
      }
      lVar14 = lVar14 + -0x10;
    } while ((long)plVar12 - (long)plVar10 != lVar14);
    puVar18 = (undefined8 *)((long)puVar9 + lVar14);
    plVar12 = *(long **)(param_1 + 0x120);
    plVar10 = *(long **)(param_1 + 0x128);
  }
  lVar14 = *(long *)(param_1 + 0x130);
  *(undefined8 **)(param_1 + 0x120) = puVar18;
  *(undefined8 **)(param_1 + 0x128) = puVar9 + 2;
  *(ulong *)(param_1 + 0x130) = lVar16 + uVar11 * 0x10;
  while (plVar10 != plVar12) {
    plVar10 = plVar10 + -2;
    plVar25 = (long *)*plVar10;
    if (plVar25 != (long *)0x0) {
      plVar1 = plVar25 + 5;
      do {
        lVar16 = *plVar1;
        iVar5 = (int)lVar16 + -1;
        cVar3 = '\x01';
        bVar27 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar27) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar25 + 0x10))();
      }
      else if ((int)lVar16 == 0) goto LAB_00cb6ab4;
    }
  }
  if (plVar12 != (long *)0x0) {
    plVar10 = *(long **)(param_1 + 0x138);
    lVar14 = lVar14 - (long)plVar12;
    uVar11 = (**(code **)(*plVar10 + 0xf8))(plVar10);
    if (((uVar11 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar12,lVar14,8);
    }
    else {
      FUN_00c48fe8(plVar10,plVar12,lVar14,8);
    }
  }
LAB_00cb675c:
  local_cc = local_cc + 1;
  plVar12 = local_b0;
LAB_00cb6500:
  if (plVar12 != (long *)0x0) {
LAB_00cb6504:
    plVar10 = plVar12 + 5;
    do {
      lVar14 = *plVar10;
      iVar5 = (int)lVar14 + -1;
      cVar3 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar27) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    else if ((int)lVar14 == 0) goto LAB_00cb6ab4;
  }
LAB_00cb6520:
  uVar32 = uVar32 + 1;
  if (uVar32 == (uVar19 >> 3 & 0xffffffff)) goto LAB_00cb6774;
  lVar14 = *(long *)(lVar31 + 0x10);
  goto LAB_00cb648c;
}


