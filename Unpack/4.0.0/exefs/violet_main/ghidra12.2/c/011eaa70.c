/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011eaa70; name: FUN_011eaa70
 */


void FUN_011eaa70(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  ulong *puVar29;
  long *plVar30;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long *local_c8;
  long *local_c0;
  long *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  ulong *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long *local_78;
  undefined1 auStack_70 [16];
  
  lVar20 = *(long *)(param_1 + 0xb0);
  lVar21 = *(long *)(param_1 + 0xb8);
  while (lVar21 != lVar20) {
    plVar24 = *(long **)(lVar21 + -8);
    if (plVar24 != (long *)0x0) {
      plVar30 = plVar24 + 5;
      do {
        lVar22 = *plVar30;
        iVar6 = (int)lVar22 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar4) {
          *(int *)plVar30 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar24 + 0x10))();
      }
      else if ((int)lVar22 == 0) {
LAB_011eb6d0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar24 = (long *)(lVar21 + -0x10);
    lVar21 = lVar21 + -0x30;
    if ((long *)*plVar24 != (long *)0x0) {
      (**(code **)(*(long *)*plVar24 + 0x20))();
    }
  }
  plVar24 = *(long **)(param_1 + 8);
  iVar6 = param_3;
  if (param_3 < 0) {
    iVar6 = 1;
  }
  *(long *)(param_1 + 0xb8) = lVar20;
  local_b0 = (ulong *)0x0;
  local_a8 = (ulong *)0x0;
  local_80 = 0;
  local_90 = 0x1fffffffffffffff;
  uStack_88 = 0;
  local_a0 = (ulong *)0x0;
  local_98 = plVar24;
  if (iVar6 != 0) {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = (long)iVar6 * 8;
    puVar8 = (ulong *)(**(code **)(*plVar24 + 0x10))(plVar24,lVar21,4);
    if (puVar8 == (ulong *)0x0) {
      (**(code **)(*plVar24 + 0xe8))(plVar24);
    }
    puVar5 = PTR_LAB_047d3900;
    puVar29 = puVar8 + iVar6;
    local_b0 = puVar8;
    local_a8 = puVar8;
    local_a0 = puVar29;
    do {
      lVar21 = lVar21 + -8;
      if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar20 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar20 == 0) {
        *(undefined1 *)puVar8 = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_011eb62c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar24;
        *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
        *(undefined1 *)puVar8 = 0;
        *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
      }
      if (lVar21 == 0) goto LAB_011eab9c;
      puVar8 = puVar8 + 1;
      plVar24 = local_98;
    } while( true );
  }
LAB_011eaba4:
  lVar20 = *(long *)(param_2 + 8);
  lVar21 = *(long *)(lVar20 + 0x218) - *(long *)(lVar20 + 0x210);
  if (lVar21 == 0) {
LAB_011eb240:
    plVar24 = local_98;
    puVar8 = local_b0;
    if (local_b0 != (ulong *)0x0) {
      local_a8 = local_b0;
      lVar21 = (long)local_a0 - (long)local_b0;
      uVar12 = (**(code **)(*local_98 + 0xf8))(local_98);
      if (((uVar12 & 1) == 0) || (lVar20 = FUN_00c4e600(), *(int *)(lVar20 + 0x12c8) < 1)) {
        (**(code **)(*plVar24 + 0x18))(plVar24,puVar8,lVar21,4);
      }
      else {
        FUN_00c48fe8(plVar24,puVar8,lVar21,4);
      }
    }
    return;
  }
  uVar12 = 0;
  do {
    lVar22 = *(long *)(lVar20 + 0x210);
    iVar6 = (int)uVar12;
    lVar20 = (long)iVar6;
    if (0 < (int)((ulong)((long)local_a8 - (long)local_b0) >> 3)) {
      lVar27 = lVar22 + (long)iVar6 * 400;
      lVar13 = lVar22 + lVar20 * 400;
      lVar25 = lVar13 + 0x20;
      puVar1 = (undefined8 *)(lVar13 + 0x28);
      uVar12 = 0;
      if (param_3 < 0) {
        do {
          FUN_011e79d8(&local_78,param_1,lVar27,0xffffffff);
          plVar24 = local_78;
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          puVar8 = (ulong *)PTR_DAT_047d8b70;
          if (local_78 != (long *)0x0) {
            puVar8 = (ulong *)(local_78 + 6);
          }
          local_e0 = *puVar8;
          plVar30 = (long *)PTR_PTR_047d4508;
          if (local_78 != (long *)0x0) {
            plVar30 = local_78 + 7;
          }
          local_d8 = *plVar30;
          if (local_78 == (long *)0x0) {
            local_d0 = 0;
          }
          else {
            local_d0 = local_78[8];
            local_c8 = (long *)0x0;
            (**(code **)(*local_78 + 0x18))(local_78);
          }
          local_c8 = plVar24;
          uVar9 = FUN_00d4e220(uVar23,&local_e0,0);
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          plVar24 = local_78;
          if ((uVar9 & 0xff) == 0) {
            lVar13 = *(long *)(param_1 + 0x30);
            puVar8 = (ulong *)PTR_DAT_047d8b70;
            if (local_78 != (long *)0x0) {
              puVar8 = (ulong *)(local_78 + 6);
            }
            local_e0 = *puVar8;
            plVar30 = (long *)PTR_PTR_047d4508;
            if (local_78 != (long *)0x0) {
              plVar30 = local_78 + 7;
            }
            local_d8 = *plVar30;
            if (local_78 == (long *)0x0) {
              local_d0 = 0;
            }
            else {
              local_d0 = local_78[8];
              local_c8 = (long *)0x0;
              (**(code **)(*local_78 + 0x18))(local_78);
            }
            local_c8 = plVar24;
            uVar9 = FUN_00d4e220(lVar13,&local_e0,0);
            if ((uVar9 & 0xff) == 0) {
              uVar9 = FUN_011e86a0(lVar13,&local_e0,lVar25,0);
LAB_011eb500:
              uVar16 = uVar9 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xff;
            }
            else {
              iVar7 = strcmp((char *)*puVar1,"IrradianceVolume");
              if (iVar7 != 0) {
                lVar13 = *(long *)(lVar13 + 0x38) + ((long)uVar9 >> 0x20) * 0x1d0;
                *(int *)(lVar13 + 0x1c0) = *(int *)(lVar13 + 0x1c0) + 1;
                goto LAB_011eb500;
              }
              uVar16 = 0;
              uVar9 = 0;
            }
            uVar9 = uVar9 | uVar16;
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
          }
          local_b0[uVar12] = uVar9;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)((ulong)((long)local_a8 - (long)local_b0) >> 3));
      }
      else {
        do {
          FUN_011e79d8(&local_78,param_1,lVar27,uVar12 & 0xffffffff);
          plVar24 = local_78;
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          puVar8 = (ulong *)PTR_DAT_047d8b70;
          if (local_78 != (long *)0x0) {
            puVar8 = (ulong *)(local_78 + 6);
          }
          local_e0 = *puVar8;
          plVar30 = (long *)PTR_PTR_047d4508;
          if (local_78 != (long *)0x0) {
            plVar30 = local_78 + 7;
          }
          local_d8 = *plVar30;
          if (local_78 == (long *)0x0) {
            local_d0 = 0;
          }
          else {
            local_d0 = local_78[8];
            local_c8 = (long *)0x0;
            (**(code **)(*local_78 + 0x18))(local_78);
          }
          local_c8 = plVar24;
          uVar9 = FUN_00d4e220(uVar23,&local_e0,0);
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          plVar24 = local_78;
          if ((uVar9 & 0xff) == 0) {
            lVar13 = *(long *)(param_1 + 0x30);
            puVar8 = (ulong *)PTR_DAT_047d8b70;
            if (local_78 != (long *)0x0) {
              puVar8 = (ulong *)(local_78 + 6);
            }
            local_e0 = *puVar8;
            plVar30 = (long *)PTR_PTR_047d4508;
            if (local_78 != (long *)0x0) {
              plVar30 = local_78 + 7;
            }
            local_d8 = *plVar30;
            if (local_78 == (long *)0x0) {
              local_d0 = 0;
            }
            else {
              local_d0 = local_78[8];
              local_c8 = (long *)0x0;
              (**(code **)(*local_78 + 0x18))(local_78);
            }
            local_c8 = plVar24;
            uVar9 = FUN_00d4e220(lVar13,&local_e0,0);
            if ((uVar9 & 0xff) == 0) {
              uVar9 = FUN_011e86a0(lVar13,&local_e0,lVar25,0);
LAB_011eb438:
              uVar16 = uVar9 & 0xffffffffffffff00;
              uVar9 = uVar9 & 0xff;
            }
            else {
              iVar7 = strcmp((char *)*puVar1,"IrradianceVolume");
              if (iVar7 != 0) {
                lVar13 = *(long *)(lVar13 + 0x38) + ((long)uVar9 >> 0x20) * 0x1d0;
                *(int *)(lVar13 + 0x1c0) = *(int *)(lVar13 + 0x1c0) + 1;
                goto LAB_011eb438;
              }
              uVar16 = 0;
              uVar9 = 0;
            }
            uVar9 = uVar9 | uVar16;
            if (local_c8 != (long *)0x0) {
              (**(code **)(*local_c8 + 0x20))();
            }
          }
          local_b0[uVar12] = uVar9;
          if (local_78 != (long *)0x0) {
            (**(code **)(*local_78 + 0x20))();
          }
          uVar12 = uVar12 + 1;
        } while ((long)uVar12 < (long)(int)((ulong)((long)local_a8 - (long)local_b0) >> 3));
      }
    }
    lVar22 = lVar22 + lVar20 * 400;
    plVar30 = (long *)(lVar22 + 0xf0);
    lVar25 = *plVar30;
    plVar24 = (long *)(lVar22 + 0xf8);
    lVar22 = *plVar24;
    if (lVar22 != lVar25) {
      lVar13 = *(long *)(*(long *)(param_2 + 8) + 0x248);
      uVar12 = 0;
      do {
        lVar27 = *(long *)(*(long *)(lVar13 + lVar20 * 0x38) + uVar12 * 0x40 + 8);
        lVar14 = *(long *)(*(long *)(lVar27 + 0x1f8) + 0x58);
        if (lVar14 == 0) {
          puVar11 = &DAT_03c886bc;
        }
        else {
          puVar11 = (undefined1 *)(*(long *)(**(long **)(lVar14 + 0x28) + 0x60) + 2);
        }
        lVar27 = FUN_00ec0c08(lVar27,puVar11);
        if (lVar27 != 0) {
          local_e0 = local_e0 & 0xffffffffffffff00;
          local_c0 = (long *)0x0;
          local_b8 = (long *)0x0;
          plVar26 = (long *)(lVar25 + uVar12 * 0x20);
          local_d8 = *plVar26;
          local_d0 = plVar26[1];
          local_c8 = (long *)plVar26[2];
          plVar26 = (long *)plVar26[3];
          if (plVar26 != (long *)0x0) {
            (**(code **)(*plVar26 + 0x18))(plVar26);
          }
          local_78 = *(long **)(param_1 + 0x38);
          local_c0 = plVar26;
          plVar26 = (long *)FUN_00cf3764(auStack_70,local_78[1],&local_78);
          if (plVar26 == (long *)0x0) {
            plVar28 = (long *)0x0;
          }
          else {
            plVar28 = plVar26 + 5;
            do {
              lVar22 = *plVar28;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar4) {
                *(int *)plVar28 = (int)lVar22 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar22 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            plVar28 = local_b8;
          }
          FUN_00ec0d30(plVar26,lVar27,1);
          local_b8 = (long *)0x0;
          if (plVar28 != (long *)0x0) {
            plVar2 = plVar28 + 5;
            do {
              lVar22 = *plVar2;
              iVar7 = (int)lVar22 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *(int *)plVar2 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
            }
            else if ((int)lVar22 == 0) goto LAB_011eb6d0;
          }
          puVar8 = local_a8;
          local_b8 = plVar26;
          if (local_b0 != local_a8) {
            puVar1 = (undefined8 *)(param_1 + 200);
            puVar29 = local_b0;
            do {
              local_e0 = *puVar29;
              uVar9 = *(ulong *)(param_1 + 0xb8);
              if (uVar9 < *(ulong *)(param_1 + 0xc0)) {
                FUN_011eb6f8(puVar1,uVar9,&local_e0);
                *(ulong *)(param_1 + 0xb8) = uVar9 + 0x30;
              }
              else {
                lVar22 = (long)(uVar9 - *(long *)(param_1 + 0xb0)) >> 4;
                uVar9 = *(ulong *)(param_1 + 0xd0);
                if (0x7ffffffffffffffe < uVar9) {
                  uVar9 = 0x7fffffffffffffff;
                }
                uVar16 = lVar22 * -0x5555555555555555 + 1;
                if (uVar9 < uVar16) {
                    /* WARNING: Subroutine does not return */
                  std::__vector_base_common<true>::__throw_length_error();
                }
                lVar25 = (long)(*(ulong *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0)) >> 4;
                uVar18 = lVar25 * 0x5555555555555556;
                if (uVar16 <= uVar18) {
                  uVar16 = uVar18;
                }
                if (uVar9 >> 1 <= (ulong)(lVar25 * -0x5555555555555555)) {
                  uVar16 = uVar9;
                }
                if (uVar16 == 0) {
                  lVar25 = 0;
                }
                else {
                  lVar25 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar16 * 0x30,8);
                  if (lVar25 == 0) {
                    (**(code **)(*(long *)*puVar1 + 0xe8))();
                  }
                }
                lVar27 = lVar25 + lVar22 * 0x10;
                FUN_011eb6f8(puVar1,lVar27,&local_e0);
                lVar22 = *(long *)(param_1 + 0xb0);
                if (*(long *)(param_1 + 0xb8) == lVar22) {
                  lVar15 = lVar27;
                  lVar14 = lVar22;
                }
                else {
                  lVar14 = *(long *)(param_1 + 0xb8);
                  lVar19 = lVar27;
                  do {
                    uVar23 = *puVar1;
                    if (((DAT_04865a38 & 1) == 0) &&
                       (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
                      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                      __cxa_guard_release(&DAT_04865a38);
                    }
                    lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                    if (lVar10 != 0) {
                      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_011eb62c;
                      *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar23;
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                    }
                    *(undefined8 *)(lVar19 + -0x30) = *(undefined8 *)(lVar14 + -0x30);
                    *(undefined8 *)(lVar19 + -0x28) = *(undefined8 *)(lVar14 + -0x28);
                    *(undefined8 *)(lVar19 + -0x20) = *(undefined8 *)(lVar14 + -0x20);
                    *(undefined8 *)(lVar19 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
                    uVar23 = *(undefined8 *)(lVar14 + -0x10);
                    *(undefined8 *)(lVar14 + -0x10) = 0;
                    *(undefined8 *)(lVar19 + -0x10) = uVar23;
                    uVar23 = *(undefined8 *)(lVar14 + -8);
                    lVar15 = lVar19 + -0x30;
                    lVar17 = lVar14 + -0x30;
                    *(undefined8 *)(lVar14 + -8) = 0;
                    *(undefined8 *)(lVar19 + -8) = uVar23;
                    if (lVar10 != 0) {
                      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                    }
                    lVar14 = lVar17;
                    lVar19 = lVar15;
                  } while (lVar22 != lVar17);
                  lVar22 = *(long *)(param_1 + 0xb0);
                  lVar14 = *(long *)(param_1 + 0xb8);
                }
                lVar19 = *(long *)(param_1 + 0xc0);
                *(long *)(param_1 + 0xb0) = lVar15;
                *(long *)(param_1 + 0xb8) = lVar27 + 0x30;
                *(ulong *)(param_1 + 0xc0) = lVar25 + uVar16 * 0x30;
                while (lVar14 != lVar22) {
                  plVar26 = *(long **)(lVar14 + -8);
                  if (plVar26 != (long *)0x0) {
                    plVar28 = plVar26 + 5;
                    do {
                      lVar25 = *plVar28;
                      iVar7 = (int)lVar25 + -1;
                      cVar3 = '\x01';
                      bVar4 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                      if (bVar4) {
                        *(int *)plVar28 = iVar7;
                        cVar3 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar3 != '\0');
                    if (iVar7 == 0) {
                      (**(code **)(*plVar26 + 0x10))();
                    }
                    else if ((int)lVar25 == 0) goto LAB_011eb6d0;
                  }
                  plVar26 = (long *)(lVar14 + -0x10);
                  lVar14 = lVar14 + -0x30;
                  if ((long *)*plVar26 != (long *)0x0) {
                    (**(code **)(*(long *)*plVar26 + 0x20))();
                  }
                }
                if (lVar22 != 0) {
                  lVar19 = lVar19 - lVar22;
                  plVar26 = (long *)*puVar1;
                  uVar9 = (**(code **)(*plVar26 + 0xf8))(plVar26);
                  if (((uVar9 & 1) == 0) || (lVar25 = FUN_00c4e600(), *(int *)(lVar25 + 0x12c8) < 1)
                     ) {
                    (**(code **)(*plVar26 + 0x18))(plVar26,lVar22,lVar19,8);
                  }
                  else {
                    FUN_00c48fe8(plVar26,lVar22,lVar19,8);
                  }
                }
              }
              puVar29 = puVar29 + 1;
            } while (puVar29 != puVar8);
          }
          if (local_b8 != (long *)0x0) {
            plVar26 = local_b8 + 5;
            do {
              lVar22 = *plVar26;
              iVar7 = (int)lVar22 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
              if (bVar4) {
                *(int *)plVar26 = iVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar7 == 0) {
              (**(code **)(*local_b8 + 0x10))(local_b8);
            }
            else if ((int)lVar22 == 0) goto LAB_011eb6d0;
          }
          if (local_c0 != (long *)0x0) {
            (**(code **)(*local_c0 + 0x20))();
          }
          lVar22 = *plVar24;
          lVar25 = *plVar30;
        }
        uVar12 = (ulong)((int)uVar12 + 1);
      } while (uVar12 < (ulong)(lVar22 - lVar25 >> 5));
    }
    uVar12 = (ulong)(iVar6 + 1);
    if ((ulong)((lVar21 >> 4) * -0x70a3d70a3d70a3d7) <= uVar12) goto LAB_011eb240;
    lVar20 = *(long *)(param_2 + 8);
  } while( true );
LAB_011eab9c:
  local_a8 = puVar29;
  goto LAB_011eaba4;
}


