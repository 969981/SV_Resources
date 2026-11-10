/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00db3d00; name: FUN_00db3d00
 */


void FUN_00db3d00(undefined1 *param_1,long param_2,undefined8 *param_3,long *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  bool bVar12;
  bool bVar13;
  long lVar14;
  code *pcVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long *plVar20;
  undefined1 *puVar21;
  undefined8 unaff_x20;
  undefined8 *puVar22;
  undefined8 uVar23;
  char *pcVar24;
  long lVar25;
  long *plVar26;
  undefined8 unaff_x27;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  undefined1 *puVar30;
  long *plVar31;
  float fVar32;
  char local_370 [8];
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  long *local_350;
  long *local_348;
  undefined1 *local_340;
  byte *pbStack_338;
  size_t local_330;
  long *local_328;
  byte local_320;
  undefined7 uStack_31f;
  char local_120 [8];
  long local_118;
  char *pcStack_110;
  ulong local_108;
  long *local_100;
  long *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long *local_e0;
  long *local_d8;
  char local_d0;
  long local_c8;
  char *pcStack_c0;
  ulong local_b8;
  long *local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  undefined8 *puStack_78;
  undefined1 local_70;
  
  plVar1 = (long *)(param_2 + 0xe0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_2 + 0xe8) == 0) {
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_00db3d50;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf0));
  do {
    if (*plVar1 != 0 || *(long *)(param_2 + 0xe8) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf0));
        while (*plVar1 == 0 && *(long *)(param_2 + 0xe8) == 0) {
          cVar5 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar12) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_2 + 0xe8) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_00db3d50;
        }
      } while( true );
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_2 + 0xe8) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_00db3d50:
  plVar9 = (long *)FUN_00db51e4(param_2,param_4,param_5);
  if (((ulong)plVar9 & 0xff) == 0) {
LAB_00db3f34:
    lVar8 = *(long *)(param_2 + 0x30) + 0x68;
    lVar14 = *(long *)(*(long *)(param_2 + 0x30) + 0x70);
    if (lVar8 == lVar14) {
LAB_00db3f6c:
      if ((lVar8 != lVar14) &&
         (lVar8 = *(long *)(lVar14 + 0x10),
         (int)((ulong)(*(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50)) >> 3) != 0)) {
        uVar27 = 0;
        do {
          plVar9 = *(long **)(*(long *)(lVar8 + 0x50) + uVar27 * 8);
          if (plVar9 != (long *)0x0) {
            plVar2 = plVar9 + 5;
            do {
              lVar8 = *plVar2;
              cVar5 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *(int *)plVar2 = (int)lVar8 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              plVar26 = (long *)PTR_DAT_047d8b70;
              plVar31 = (long *)PTR_PTR_047d4508;
            } while (cVar5 != '\0');
            if ((int)lVar8 == -1) goto LAB_00db5190;
            lVar8 = plVar9[0x1d];
            if (lVar8 != *param_5) {
              do {
                lVar8 = *plVar2;
                iVar6 = (int)lVar8 + -1;
                cVar5 = '\x01';
                bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar12) {
                  *(int *)plVar2 = iVar6;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
              else if ((int)lVar8 == 0) goto LAB_00db4aa0;
              goto LAB_00db3fdc;
            }
            if (*(char *)plVar9[0x22] == '\0') {
              pcVar24 = (char *)plVar9[0x1e];
              uVar27 = plVar9[0x1f];
              plVar26 = (long *)plVar9[0x20];
              plVar28 = plVar26;
              if (plVar26 != (long *)0x0) {
                pcVar15 = *(code **)(*plVar26 + 0x18);
LAB_00db475c:
                (*pcVar15)(plVar26);
              }
            }
            else {
              FUN_00d1e980(&local_320,plVar9 + 0x21,&DAT_03c9c9c5,plVar9 + 0x1d);
              plVar28 = (long *)CONCAT71(uStack_31f,local_320);
              if (plVar28 != (long *)0x0) {
                plVar26 = plVar28 + 6;
              }
              lVar8 = *plVar26;
              plVar26 = plVar31;
              if (plVar28 != (long *)0x0) {
                plVar26 = plVar28 + 7;
              }
              pcVar24 = (char *)*plVar26;
              if (plVar28 == (long *)0x0) {
                uVar27 = 0;
              }
              else {
                uVar27 = plVar28[8];
                (**(code **)(*plVar28 + 0x18))(plVar28);
                plVar26 = (long *)CONCAT71(uStack_31f,local_320);
                if (plVar26 != (long *)0x0) {
                  pcVar15 = *(code **)(*plVar26 + 0x20);
                  goto LAB_00db475c;
                }
              }
            }
            if (plVar28 != (long *)0x0) {
              (**(code **)(*plVar28 + 0x18))(plVar28);
            }
            local_120[0] = '\x01';
            local_118 = lVar8;
            pcStack_110 = pcVar24;
            local_108 = uVar27;
            local_100 = plVar28;
            if ((uVar27 < 4) || (iVar6 = strncmp(pcVar24,"iso:",4), iVar6 != 0)) {
              snprintf((char *)&local_320,0x200,"%s%s:%s","iso:",(char *)param_4[1],
                       (char *)plVar9[0x1e]);
              local_330 = strlen((char *)&local_320);
              local_340 = &DAT_cbf29ce484222645;
              if (local_320 != 0) {
                local_340 = &DAT_cbf29ce484222645;
                pbVar17 = (byte *)((ulong)&local_320 | 1);
                do {
                  local_340 = (undefined1 *)(((ulong)local_340 ^ (ulong)local_320) * 0x100000001b3);
                  local_320 = *pbVar17;
                  pbVar17 = pbVar17 + 1;
                } while (local_320 != 0);
              }
              local_328 = (long *)0x0;
              pbStack_338 = &local_320;
              snprintf((char *)&local_f8,0x10,"%d",(ulong)*(uint *)(param_2 + 0xd8));
              FUN_00db53a4(&local_348,&local_340,&local_f8);
              plVar11 = local_348;
              uVar23 = *param_3;
              plVar26 = plVar31;
              local_f8 = (long *)PTR_DAT_047d8b70;
              if (local_348 != (long *)0x0) {
                plVar26 = local_348 + 7;
                local_f8 = local_348 + 6;
              }
              local_f8 = (long *)*local_f8;
              local_f0 = (undefined1 *)*plVar26;
              if (local_348 == (long *)0x0) {
                local_e8 = (undefined1 *)0x0;
              }
              else {
                local_e8 = (undefined1 *)local_348[8];
              }
              local_e0 = (long *)0x0;
              if (local_348 != (long *)0x0) {
                (**(code **)(*local_348 + 0x18))(local_348);
              }
              local_e0 = plVar11;
              FUN_00db5a24(local_370,uVar23,local_120,&local_f8,0);
              if (local_e0 != (long *)0x0) {
                (**(code **)(*local_e0 + 0x20))();
              }
              if (local_370[0] == '\0') {
                *param_1 = 0;
                if (local_120[0] != '\0') {
                  *(long *)(param_1 + 8) = local_118;
                  *(char **)(param_1 + 0x10) = pcStack_110;
                  *(ulong *)(param_1 + 0x18) = local_108;
                  *(long **)(param_1 + 0x20) = local_100;
                  if (local_100 != (long *)0x0) {
                    (**(code **)(*local_100 + 0x18))();
                  }
                  *param_1 = 1;
                }
              }
              else {
                do {
                  lVar8 = *plVar2;
                  cVar5 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar12) {
                    *(int *)plVar2 = (int)lVar8 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((int)lVar8 == -1) {
LAB_00db5190:
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl
                            ("count != 0","IncrementReferenceInternal",
                             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                             ,0x53,"Reference counter overflows.");
                }
                lVar8 = *(long *)(param_2 + 0x38);
                lVar14 = *(long *)(param_2 + 0x40);
                local_a8 = '\0';
                local_f8 = (long *)0x0;
                local_f0 = &DAT_cbf29ce484222645;
                local_e8 = &DAT_03c886bc;
                local_e0 = (long *)0x0;
                local_d8 = (long *)0x0;
                local_d0 = '\0';
                pcVar24 = (char *)plVar9[0x1e];
                if (*pcVar24 == '\0') {
                  plVar26 = (long *)FUN_00d44228();
                  if (plVar26 != (long *)0x0) {
                    (**(code **)(*plVar26 + 0x18))(plVar26);
                  }
                }
                else {
                  if (((*PTR_DAT_047d4240 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_047d4240), iVar6 != 0)) {
                    FUN_00100190(PTR_LAB_047d4510,PTR_DAT_047d4248,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d4240);
                  }
                  uVar23 = *(undefined8 *)PTR_DAT_047d4248;
                  *(undefined8 *)PTR_DAT_047d4250 = uVar23;
                  FUN_00cf9884(&local_80,uVar23,pcVar24);
                  plVar26 = local_80;
                }
                plVar11 = (long *)PTR_DAT_047d8b70;
                if (plVar26 != (long *)0x0) {
                  plVar11 = plVar26 + 6;
                }
                lVar25 = *plVar11;
                if (plVar26 != (long *)0x0) {
                  plVar31 = plVar26 + 7;
                }
                lVar29 = *plVar31;
                if (plVar26 == (long *)0x0) {
                  plVar31 = (long *)0x0;
                }
                else {
                  plVar31 = (long *)plVar26[8];
                  (**(code **)(*plVar26 + 0x18))(plVar26);
                }
                plVar11 = local_d8;
                local_d8 = (long *)0x0;
                local_f0 = (undefined1 *)lVar25;
                local_e8 = (undefined1 *)lVar29;
                local_e0 = plVar31;
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x20))();
                }
                iVar6 = (int)(lVar14 - lVar8 >> 3) * -0x11111111;
                local_d8 = plVar26;
                if (plVar26 != (long *)0x0) {
                  (**(code **)(*plVar26 + 0x20))(plVar26);
                }
                do {
                  lVar8 = *plVar2;
                  cVar5 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar12) {
                    *(int *)plVar2 = (int)lVar8 + 1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if ((int)lVar8 == -1) goto LAB_00db5190;
                plVar26 = plVar9;
                if (local_f8 != (long *)0x0) {
                  plVar31 = local_f8 + 5;
                  do {
                    lVar8 = *plVar31;
                    iVar7 = (int)lVar8 + -1;
                    cVar5 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar31,0x10);
                    if (bVar12) {
                      *(int *)plVar31 = iVar7;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar7 == 0) {
                    lVar8 = *local_f8;
                    local_f8 = plVar9;
                    (**(code **)(lVar8 + 0x10))();
                    plVar26 = local_f8;
                  }
                  else {
                    local_f8 = plVar9;
                    if ((int)lVar8 == 0) goto LAB_00db4aa0;
                  }
                }
                local_f8 = plVar26;
                plVar26 = local_100;
                if (local_d0 == '\0') {
                  if (local_120[0] != '\0') {
                    local_c8 = local_118;
                    pcStack_c0 = pcStack_110;
                    local_b8 = local_108;
                    local_b0 = local_100;
                    if (local_100 != (long *)0x0) {
                      (**(code **)(*local_100 + 0x18))();
                    }
                    local_d0 = '\x01';
                  }
                }
                else if (local_120[0] == '\0') {
                  if (local_b0 != (long *)0x0) {
                    (**(code **)(*local_b0 + 0x20))();
                  }
                  local_d0 = '\0';
                }
                else {
                  local_c8 = local_118;
                  pcStack_c0 = pcStack_110;
                  local_b8 = local_108;
                  if (local_100 != (long *)0x0) {
                    (**(code **)(*local_100 + 0x18))(local_100);
                  }
                  plVar31 = local_b0;
                  local_b0 = plVar26;
                  if (plVar31 != (long *)0x0) {
                    (**(code **)(*plVar31 + 0x20))();
                  }
                }
                plVar26 = local_350;
                if (local_a8 == '\0') {
                  if (local_370[0] != '\0') {
                    local_a0 = local_368;
                    uStack_98 = uStack_360;
                    local_90 = local_358;
                    local_88 = local_350;
                    if (local_350 != (long *)0x0) {
                      (**(code **)(*local_350 + 0x18))();
                    }
                    local_a8 = '\x01';
                  }
                }
                else if (local_370[0] == '\0') {
                  if (local_88 != (long *)0x0) {
                    (**(code **)(*local_88 + 0x20))();
                  }
                  local_a8 = '\0';
                }
                else {
                  local_a0 = local_368;
                  uStack_98 = uStack_360;
                  local_90 = local_358;
                  if (local_350 != (long *)0x0) {
                    (**(code **)(*local_350 + 0x18))(local_350);
                  }
                  plVar31 = local_88;
                  local_88 = plVar26;
                  if (plVar31 != (long *)0x0) {
                    (**(code **)(*plVar31 + 0x20))();
                  }
                }
                uVar27 = *(ulong *)(param_2 + 0x40);
                puVar22 = (undefined8 *)(param_2 + 0x50);
                if (uVar27 < *(ulong *)(param_2 + 0x48)) {
                  FUN_00db5420(puVar22,uVar27,&local_f8);
                  *(ulong *)(param_2 + 0x40) = uVar27 + 0x78;
                }
                else {
                  lVar8 = (long)(uVar27 - *(long *)(param_2 + 0x38)) >> 3;
                  uVar27 = *(ulong *)(param_2 + 0x58);
                  if (0x7ffffffffffffffe < uVar27) {
                    uVar27 = 0x7fffffffffffffff;
                  }
                  uVar3 = lVar8 * -0x1111111111111111 + 1;
                  if (uVar27 < uVar3) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar14 = (long)(*(ulong *)(param_2 + 0x48) - *(long *)(param_2 + 0x38)) >> 3;
                  uVar19 = lVar14 * -0x2222222222222222;
                  if (uVar3 <= uVar19) {
                    uVar3 = uVar19;
                  }
                  if (uVar27 >> 1 <= (ulong)(lVar14 * -0x1111111111111111)) {
                    uVar3 = uVar27;
                  }
                  if (uVar3 == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = (**(code **)(*(long *)*puVar22 + 0x10))
                                       ((long *)*puVar22,uVar3 * 0x78,8);
                    if (lVar14 == 0) {
                      (**(code **)(*(long *)*puVar22 + 0xe8))();
                    }
                  }
                  lVar8 = lVar14 + lVar8 * 8;
                  FUN_00db5420(puVar22,lVar8,&local_f8);
                  plVar26 = *(long **)(param_2 + 0x38);
                  plVar31 = *(long **)(param_2 + 0x40);
                  if (plVar31 == plVar26) {
                    lVar25 = lVar8;
                    plVar31 = plVar26;
                  }
                  else {
                    lVar25 = 0;
                    do {
                      uVar23 = *puVar22;
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar29 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar29 != 0) {
                        if (0xf < *(ulong *)(lVar29 + 0x80)) goto LAB_00db51d8;
                        *(undefined8 *)(lVar29 + *(ulong *)(lVar29 + 0x80) * 8) = uVar23;
                        *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + 1;
                      }
                      uVar23 = *(undefined8 *)((long)plVar31 + lVar25 + -0x78);
                      lVar4 = lVar8 + lVar25;
                      *(undefined8 *)((long)plVar31 + lVar25 + -0x78) = 0;
                      *(undefined8 *)(lVar4 + -0x78) = uVar23;
                      *(undefined8 *)(lVar4 + -0x70) =
                           *(undefined8 *)((long)plVar31 + lVar25 + -0x70);
                      *(undefined8 *)(lVar4 + -0x68) =
                           *(undefined8 *)((long)plVar31 + lVar25 + -0x68);
                      *(undefined8 *)(lVar4 + -0x60) =
                           *(undefined8 *)((long)plVar31 + lVar25 + -0x60);
                      uVar23 = *(undefined8 *)((long)plVar31 + lVar25 + -0x58);
                      *(undefined8 *)((long)plVar31 + lVar25 + -0x58) = 0;
                      *(undefined8 *)(lVar4 + -0x58) = uVar23;
                      *(undefined1 *)(lVar4 + -0x50) = 0;
                      if (*(char *)((long)plVar31 + lVar25 + -0x50) != '\0') {
                        *(undefined8 *)(lVar4 + -0x48) =
                             *(undefined8 *)((long)plVar31 + lVar25 + -0x48);
                        *(undefined8 *)(lVar4 + -0x40) =
                             *(undefined8 *)((long)plVar31 + lVar25 + -0x40);
                        *(undefined8 *)(lVar4 + -0x38) =
                             *(undefined8 *)((long)plVar31 + lVar25 + -0x38);
                        uVar23 = *(undefined8 *)((long)plVar31 + lVar25 + -0x30);
                        *(undefined8 *)((long)plVar31 + lVar25 + -0x30) = 0;
                        *(undefined8 *)(lVar4 + -0x30) = uVar23;
                        *(undefined1 *)(lVar4 + -0x50) = 1;
                      }
                      *(undefined1 *)(lVar4 + -0x28) = 0;
                      if (*(char *)((long)plVar31 + lVar25 + -0x28) != '\0') {
                        *(undefined8 *)(lVar4 + -0x20) =
                             *(undefined8 *)((long)plVar31 + lVar25 + -0x20);
                        *(undefined8 *)(lVar4 + -0x18) =
                             *(undefined8 *)((long)plVar31 + lVar25 + -0x18);
                        *(undefined8 *)(lVar4 + -0x10) =
                             *(undefined8 *)((long)plVar31 + lVar25 + -0x10);
                        uVar23 = *(undefined8 *)((long)plVar31 + lVar25 + -8);
                        *(undefined8 *)((long)plVar31 + lVar25 + -8) = 0;
                        *(undefined8 *)(lVar4 + -8) = uVar23;
                        *(undefined1 *)(lVar4 + -0x28) = 1;
                      }
                      if (lVar29 != 0) {
                        *(long *)(lVar29 + 0x80) = *(long *)(lVar29 + 0x80) + -1;
                      }
                      lVar25 = lVar25 + -0x78;
                    } while ((long)plVar26 - (long)plVar31 != lVar25);
                    plVar26 = *(long **)(param_2 + 0x40);
                    lVar25 = lVar8 + lVar25;
                    plVar31 = *(long **)(param_2 + 0x38);
                  }
                  lVar29 = *(long *)(param_2 + 0x48);
                  *(long *)(param_2 + 0x38) = lVar25;
                  *(long *)(param_2 + 0x40) = lVar8 + 0x78;
                  *(ulong *)(param_2 + 0x48) = lVar14 + uVar3 * 0x78;
                  while (plVar26 != plVar31) {
                    if ((char)plVar26[-5] != '\0') {
                      if ((long *)plVar26[-1] != (long *)0x0) {
                        (**(code **)(*(long *)plVar26[-1] + 0x20))();
                      }
                      *(undefined1 *)(plVar26 + -5) = 0;
                    }
                    plVar11 = plVar26 + -0xf;
                    if ((char)plVar26[-10] != '\0') {
                      if ((long *)plVar26[-6] != (long *)0x0) {
                        (**(code **)(*(long *)plVar26[-6] + 0x20))();
                      }
                      *(undefined1 *)(plVar26 + -10) = 0;
                    }
                    if ((long *)plVar26[-0xb] != (long *)0x0) {
                      (**(code **)(*(long *)plVar26[-0xb] + 0x20))();
                    }
                    plVar10 = (long *)*plVar11;
                    plVar26 = plVar11;
                    if (plVar10 != (long *)0x0) {
                      plVar11 = plVar10 + 5;
                      do {
                        lVar8 = *plVar11;
                        iVar7 = (int)lVar8 + -1;
                        cVar5 = '\x01';
                        bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                        if (bVar12) {
                          *(int *)plVar11 = iVar7;
                          cVar5 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar5 != '\0');
                      if (iVar7 == 0) {
                        (**(code **)(*plVar10 + 0x10))();
                      }
                      else if ((int)lVar8 == 0) goto LAB_00db4aa0;
                    }
                  }
                  if (plVar31 != (long *)0x0) {
                    lVar29 = lVar29 - (long)plVar31;
                    plVar26 = (long *)*puVar22;
                    uVar27 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                    if (((uVar27 & 1) == 0) ||
                       (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                      (**(code **)(*plVar26 + 0x18))(plVar26,plVar31,lVar29,8);
                    }
                    else {
                      FUN_00c48fe8(plVar26,plVar31,lVar29,8);
                    }
                  }
                }
                puVar22 = (undefined8 *)(param_2 + 0xa8);
                plVar26 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))((long *)*puVar22,0x20,8);
                if (plVar26 == (long *)0x0) {
                  (**(code **)(*(long *)*puVar22 + 0xe8))();
                }
                plVar31 = (long *)PTR_PTR_047d4508;
                local_70 = 0;
                uVar23 = *puVar22;
                local_80 = plVar26;
                puStack_78 = puVar22;
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar8 = nn::os::GetTlsValue(DAT_04865a30);
                plVar11 = local_80;
                if (lVar8 == 0) {
                  plVar26[2] = (long)local_340;
                  *(int *)(plVar26 + 3) = iVar6;
                  puVar16 = local_340;
                }
                else {
                  if (0xf < *(ulong *)(lVar8 + 0x80)) {
LAB_00db51d8:
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar23;
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                  plVar26[2] = (long)local_340;
                  *(int *)(plVar26 + 3) = iVar6;
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                  puVar16 = (undefined1 *)plVar26[2];
                }
                local_70 = 1;
                plVar10 = (long *)(param_2 + 0x70);
                *plVar26 = 0;
                plVar26[1] = (long)puVar16;
                puVar30 = *(undefined1 **)(param_2 + 0x78);
                if (puVar30 == (undefined1 *)0x0) {
LAB_00db479c:
                  fVar32 = (float)(*(long *)(param_2 + 200) + 1);
                  if ((puVar30 == (undefined1 *)0x0) ||
                     (*(float *)(param_2 + 0xd0) * (float)puVar30 < fVar32)) {
                    puVar16 = (undefined1 *)
                              ((ulong)(puVar30 < (undefined1 *)0x3 ||
                                      ((ulong)puVar30 & (ulong)(puVar30 + -1)) != 0) |
                              (long)puVar30 << 1);
                    puVar18 = (undefined1 *)(long)(fVar32 / *(float *)(param_2 + 0xd0));
                    if (puVar18 <= puVar16) {
                      puVar18 = puVar16;
                    }
                    if (puVar18 + -1 == (undefined1 *)0x0) {
                      puVar18 = (undefined1 *)0x2;
                    }
                    else if (((ulong)puVar18 & (ulong)(puVar18 + -1)) != 0) {
                      puVar18 = (undefined1 *)std::__next_prime((ulong)puVar18);
                      puVar30 = *(undefined1 **)(param_2 + 0x78);
                    }
                    if (puVar30 < puVar18) {
                      puVar16 = puVar18;
LAB_00db4808:
                      FUN_00db56d8(plVar10,puVar16);
                    }
                    else if (puVar18 < puVar30) {
                      puVar16 = (undefined1 *)
                                (long)((float)*(ulong *)(param_2 + 200) / *(float *)(param_2 + 0xd0)
                                      );
                      if ((puVar30 < (undefined1 *)0x3) ||
                         (uVar27 = (long)puVar30 - ((ulong)puVar30 >> 1 & 0x5555555555555555),
                         uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333)
                         , 1 < (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                               0x38)) {
                        puVar16 = (undefined1 *)std::__next_prime((ulong)puVar16);
                      }
                      else if ((undefined1 *)0x1 < puVar16) {
                        puVar16 = (undefined1 *)(1L << (-LZCOUNT(puVar16 + -1) & 0x3fU));
                      }
                      if (puVar16 <= puVar18) {
                        puVar16 = puVar18;
                      }
                      plVar31 = (long *)PTR_PTR_047d4508;
                      if (puVar16 < puVar30) goto LAB_00db4808;
                    }
                    puVar30 = *(undefined1 **)(param_2 + 0x78);
                    puVar16 = (undefined1 *)plVar26[1];
                  }
                  uVar27 = (long)puVar30 - ((ulong)puVar30 >> 1 & 0x5555555555555555);
                  uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
                  uVar27 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
                  if (uVar27 < 2) {
                    puVar16 = (undefined1 *)((ulong)(puVar30 + -1) & (ulong)puVar16);
                  }
                  else if (puVar30 <= puVar16) {
                    uVar3 = 0;
                    if (puVar30 != (undefined1 *)0x0) {
                      uVar3 = (ulong)puVar16 / (ulong)puVar30;
                    }
                    puVar16 = puVar16 + -(uVar3 * (long)puVar30);
                  }
                  plVar11 = *(long **)(*plVar10 + (long)puVar16 * 8);
                  if (plVar11 == (long *)0x0) {
                    plVar11 = (long *)(param_2 + 0xa0);
                    *plVar26 = *plVar11;
                    *plVar11 = (long)plVar26;
                    *(long **)(*(long *)(param_2 + 0x70) + (long)puVar16 * 8) = plVar11;
                    if (*plVar26 != 0) {
                      puVar16 = *(undefined1 **)(*plVar26 + 8);
                      if (uVar27 < 2) {
                        puVar16 = (undefined1 *)((ulong)puVar16 & (ulong)(puVar30 + -1));
                      }
                      else if (puVar30 <= puVar16) {
                        uVar27 = 0;
                        if (puVar30 != (undefined1 *)0x0) {
                          uVar27 = (ulong)puVar16 / (ulong)puVar30;
                        }
                        puVar16 = puVar16 + -(uVar27 * (long)puVar30);
                      }
                      plVar11 = (long *)(*plVar10 + (long)puVar16 * 8);
                      goto LAB_00db48ac;
                    }
                  }
                  else {
                    *plVar26 = *plVar11;
LAB_00db48ac:
                    *plVar11 = (long)plVar26;
                  }
                  *(long *)(param_2 + 200) = *(long *)(param_2 + 200) + 1;
                  local_80 = (long *)0x0;
                }
                else {
                  puVar18 = puVar30 + -1;
                  if (((ulong)puVar30 & (ulong)puVar18) != 0) {
                    puVar18 = puVar16;
                    if (puVar30 <= puVar16) {
                      uVar27 = 0;
                      if (puVar30 != (undefined1 *)0x0) {
                        uVar27 = (ulong)puVar16 / (ulong)puVar30;
                      }
                      puVar18 = puVar16 + -(uVar27 * (long)puVar30);
                    }
                    plVar20 = *(long **)(*plVar10 + (long)puVar18 * 8);
                    if (plVar20 != (long *)0x0) {
                      while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
                        puVar21 = (undefined1 *)plVar20[1];
                        if (puVar30 <= puVar21) {
                          uVar27 = 0;
                          if (puVar30 != (undefined1 *)0x0) {
                            uVar27 = (ulong)puVar21 / (ulong)puVar30;
                          }
                          puVar21 = puVar21 + -(uVar27 * (long)puVar30);
                        }
                        if (puVar21 != puVar18) break;
                        if ((undefined1 *)plVar20[2] == puVar16) goto LAB_00db472c;
                      }
                    }
                    goto LAB_00db479c;
                  }
                  plVar20 = *(long **)(*plVar10 + ((ulong)puVar18 & (ulong)puVar16) * 8);
                  if (plVar20 == (long *)0x0) goto LAB_00db479c;
                  do {
                    plVar20 = (long *)*plVar20;
                    if ((plVar20 == (long *)0x0) ||
                       ((plVar20[1] & (ulong)puVar18) != ((ulong)puVar18 & (ulong)puVar16)))
                    goto LAB_00db479c;
                  } while ((undefined1 *)plVar20[2] != puVar16);
LAB_00db472c:
                  local_80 = (long *)0x0;
                  if (plVar11 != (long *)0x0) {
                    FUN_0277e474(&puStack_78);
                  }
                }
                plVar26 = (long *)PTR_DAT_047d8b70;
                if (local_a8 != '\0') {
                  if (local_88 != (long *)0x0) {
                    (**(code **)(*local_88 + 0x20))();
                  }
                  local_a8 = '\0';
                }
                if (local_d0 != '\0') {
                  if (local_b0 != (long *)0x0) {
                    (**(code **)(*local_b0 + 0x20))();
                  }
                  local_d0 = '\0';
                }
                if (local_d8 != (long *)0x0) {
                  (**(code **)(*local_d8 + 0x20))();
                }
                if (local_f8 != (long *)0x0) {
                  plVar11 = local_f8 + 5;
                  do {
                    lVar8 = *plVar11;
                    iVar6 = (int)lVar8 + -1;
                    cVar5 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                    if (bVar12) {
                      *(int *)plVar11 = iVar6;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar6 == 0) {
                    (**(code **)(*local_f8 + 0x10))();
                  }
                  else if ((int)lVar8 == 0) goto LAB_00db4aa0;
                }
                do {
                  lVar8 = *plVar2;
                  iVar6 = (int)lVar8 + -1;
                  cVar5 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar12) {
                    *(int *)plVar2 = iVar6;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar6 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
                else if ((int)lVar8 == 0) goto LAB_00db4aa0;
                plVar11 = (long *)plVar9[0x24];
                plVar9[0x21] = (long)&DAT_cbf29ce484222645;
                plVar9[0x24] = 0;
                plVar9[0x22] = (long)&DAT_03c886bc;
                plVar9[0x23] = 0;
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x20))();
                }
                plVar11 = local_348;
                if (local_348 != (long *)0x0) {
                  plVar26 = local_348 + 6;
                }
                lVar8 = *plVar26;
                if (local_348 != (long *)0x0) {
                  plVar31 = local_348 + 7;
                }
                lVar14 = *plVar31;
                if (local_348 == (long *)0x0) {
                  plVar9[0x1d] = lVar8;
                  plVar9[0x1e] = lVar14;
                  plVar9[0x1f] = 0;
                }
                else {
                  lVar25 = local_348[8];
                  (**(code **)(*local_348 + 0x18))(local_348);
                  plVar9[0x1d] = lVar8;
                  plVar9[0x1e] = lVar14;
                  plVar9[0x1f] = lVar25;
                  (**(code **)(*plVar11 + 0x18))(plVar11);
                }
                plVar26 = (long *)plVar9[0x20];
                plVar9[0x20] = (long)plVar11;
                if (plVar26 != (long *)0x0) {
                  (**(code **)(*plVar26 + 0x20))();
                }
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 0x20))(plVar11);
                }
                FUN_00eb0770(plVar9,param_3);
                FUN_00c5ecb4(&local_f8,*param_3,local_370);
                if (local_f8 != (long *)0x0) {
                  FUN_00eaabc4();
                }
                *param_1 = 0;
                if (local_370[0] != '\0') {
                  *(undefined8 *)(param_1 + 8) = local_368;
                  *(undefined8 *)(param_1 + 0x10) = uStack_360;
                  *(undefined8 *)(param_1 + 0x18) = local_358;
                  *(long **)(param_1 + 0x20) = local_350;
                  if (local_350 != (long *)0x0) {
                    (**(code **)(*local_350 + 0x18))();
                  }
                  *param_1 = 1;
                }
                if (local_f8 != (long *)0x0) {
                  plVar26 = local_f8 + 5;
                  do {
                    lVar8 = *plVar26;
                    iVar6 = (int)lVar8 + -1;
                    cVar5 = '\x01';
                    bVar12 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                    if (bVar12) {
                      *(int *)plVar26 = iVar6;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  if (iVar6 == 0) {
                    (**(code **)(*local_f8 + 0x10))();
                  }
                  else if ((int)lVar8 == 0) goto LAB_00db4aa0;
                }
              }
              if (local_370[0] != '\0') {
                if (local_350 != (long *)0x0) {
                  (**(code **)(*local_350 + 0x20))();
                }
                local_370[0] = '\0';
              }
              if (local_348 != (long *)0x0) {
                (**(code **)(*local_348 + 0x20))();
              }
              if (local_328 != (long *)0x0) {
                (**(code **)(*local_328 + 0x20))();
              }
            }
            else {
              *(ulong *)(param_1 + 0x18) = uVar27;
              *(long **)(param_1 + 0x20) = plVar28;
              *param_1 = 0;
              *(long *)(param_1 + 8) = lVar8;
              *(char **)(param_1 + 0x10) = pcVar24;
              if (plVar28 != (long *)0x0) {
                (**(code **)(*plVar28 + 0x18))(plVar28);
              }
              *param_1 = 1;
            }
            if (local_120[0] != '\0') {
              if (local_100 != (long *)0x0) {
                (**(code **)(*local_100 + 0x20))();
              }
              local_120[0] = '\0';
            }
            if (plVar28 != (long *)0x0) {
              (**(code **)(*plVar28 + 0x20))(plVar28);
            }
            do {
              lVar8 = *plVar2;
              iVar6 = (int)lVar8 + -1;
              cVar5 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar12) {
                *(int *)plVar2 = iVar6;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            else if ((int)lVar8 == 0) {
LAB_00db4aa0:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
            goto LAB_00db3ed0;
          }
LAB_00db3fdc:
          lVar8 = *(long *)(lVar14 + 0x10);
          uVar27 = uVar27 + 1;
        } while (uVar27 < ((ulong)(*(long *)(lVar8 + 0x58) - *(long *)(lVar8 + 0x50)) >> 3 &
                          0xffffffff));
      }
    }
    else {
      do {
        if (*(long *)(*(long *)(lVar14 + 0x10) + 0x30) == *param_4) goto LAB_00db3f6c;
        lVar14 = *(long *)(lVar14 + 8);
      } while (lVar8 != lVar14);
    }
    *param_1 = 0;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      lVar14 = *plVar1;
      lVar25 = *(long *)(param_2 + 0xe8);
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar14;
        *(long *)(param_2 + 0xe8) = lVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00db3d84:
    while ((lVar14 != 0 && (lVar8 != lVar14))) {
      nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xf0));
      do {
        lVar14 = *plVar1;
        lVar25 = *(long *)(param_2 + 0xe8);
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = lVar14;
          *(long *)(param_2 + 0xe8) = lVar25;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    do {
      lVar29 = *plVar1;
      if (lVar29 != lVar14 || *(long *)(param_2 + 0xe8) != lVar25) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto LAB_00db3db4;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = lVar14;
        *(long *)(param_2 + 0xe4) = lVar25 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
LAB_00db3db4:
    if (!bVar12) {
      lVar14 = lVar29;
      lVar25 = *(long *)(param_2 + 0xe8);
      goto LAB_00db3d84;
    }
    lVar14 = *(long *)(param_2 + 0x38);
    if (((ulong)plVar9 >> 0x20 <
         (ulong)((*(long *)(param_2 + 0x40) - lVar14 >> 3) * -0x1111111111111111)) &&
       (*(char *)(lVar14 + ((ulong)plVar9 >> 0x20) * 0x78 + 0x50) != '\0')) {
      lVar14 = lVar14 + ((ulong)plVar9 >> 0x20) * 0x78;
      unaff_x27 = *(undefined8 *)(lVar14 + 0x58);
      lVar8 = *(long *)(lVar14 + 0x60);
      unaff_x20 = *(undefined8 *)(lVar14 + 0x68);
      plVar9 = *(long **)(lVar14 + 0x70);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    do {
      lVar14 = *plVar1;
      lVar25 = *(long *)(param_2 + 0xe8);
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar14;
        *(long *)(param_2 + 0xe8) = lVar25;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      lVar29 = *plVar1;
      lVar4 = *(long *)(param_2 + 0xe8);
      if (lVar29 != lVar14 || lVar4 != lVar25) {
        bVar13 = false;
        ClearExclusiveLocal();
        goto LAB_00db3eac;
      }
      cVar5 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *plVar1 = lVar14;
        *(long *)(param_2 + 0xe4) = lVar25 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar13 = true;
LAB_00db3eac:
    if (!bVar13) {
      do {
        lVar14 = *plVar1;
        lVar25 = *(long *)(param_2 + 0xe8);
        if (lVar14 != lVar29 || lVar25 != lVar4) {
          bVar13 = false;
          ClearExclusiveLocal();
          goto joined_r0x00db4e40;
        }
        cVar5 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar13) {
          *plVar1 = lVar29;
          *(long *)(param_2 + 0xe4) = lVar4 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar13 = true;
joined_r0x00db4e40:
      if (!bVar13) {
        do {
          lVar29 = *plVar1;
          lVar4 = *(long *)(param_2 + 0xe8);
          if (lVar29 != lVar14 || lVar4 != lVar25) {
            bVar13 = false;
            ClearExclusiveLocal();
            lVar14 = lVar29;
            lVar25 = lVar4;
            goto joined_r0x00db4e40;
          }
          cVar5 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *plVar1 = lVar14;
            *(long *)(param_2 + 0xe4) = lVar25 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        bVar13 = true;
        lVar14 = lVar29;
        lVar25 = lVar4;
        goto joined_r0x00db4e40;
      }
    }
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xf0));
    if (bVar12) goto LAB_00db3f34;
    *param_1 = 1;
    *(undefined8 *)(param_1 + 8) = unaff_x27;
    *(long *)(param_1 + 0x10) = lVar8;
    *(undefined8 *)(param_1 + 0x18) = unaff_x20;
    *(long **)(param_1 + 0x20) = plVar9;
  }
LAB_00db3ed0:
  do {
    lVar8 = *plVar1;
    lVar14 = *(long *)(param_2 + 0xe8);
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = lVar8;
      *(long *)(param_2 + 0xe8) = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar25 = *plVar1;
    lVar29 = *(long *)(param_2 + 0xe8);
    if (lVar25 != lVar8 || lVar29 != lVar14) {
      bVar12 = false;
      ClearExclusiveLocal();
      goto LAB_00db3f0c;
    }
    cVar5 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar12) {
      *plVar1 = 0;
      *(long *)(param_2 + 0xe4) = lVar14;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar12 = true;
LAB_00db3f0c:
  if (!bVar12) {
    do {
      lVar8 = *plVar1;
      lVar14 = *(long *)(param_2 + 0xe8);
      if (lVar8 != lVar25 || lVar14 != lVar29) {
        bVar12 = false;
        ClearExclusiveLocal();
        goto joined_r0x00db5150;
      }
      cVar5 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar12) {
        *plVar1 = 0;
        *(long *)(param_2 + 0xe4) = lVar29;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar12 = true;
joined_r0x00db5150:
    if (!bVar12) {
      do {
        lVar25 = *plVar1;
        lVar29 = *(long *)(param_2 + 0xe8);
        if (lVar25 != lVar8 || lVar29 != lVar14) {
          bVar12 = false;
          ClearExclusiveLocal();
          lVar8 = lVar25;
          lVar14 = lVar29;
          goto joined_r0x00db5150;
        }
        cVar5 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar12) {
          *plVar1 = 0;
          *(long *)(param_2 + 0xe4) = lVar14;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar12 = true;
      lVar8 = lVar25;
      lVar14 = lVar29;
      goto joined_r0x00db5150;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xf0));
  return;
}


