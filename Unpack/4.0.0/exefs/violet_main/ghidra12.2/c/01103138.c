/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01103138; name: FUN_01103138
 */


void FUN_01103138(long param_1,undefined8 param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  int iVar21;
  ulong uVar22;
  undefined *puVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  ulong local_e0;
  undefined1 *local_c0;
  byte *pbStack_b8;
  size_t local_b0;
  long *local_a8;
  undefined1 *local_a0;
  byte *pbStack_98;
  size_t local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  byte local_68 [8];
  
  lVar17 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
  if ((((lVar17 != 0) && (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) == *(int *)(lVar17 + 0x2c)))
      && (lVar17 = FUN_00c41664(), lVar17 != 0)) &&
     (lVar17 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8), 0 < **(int **)(lVar17 + 0x238))) {
    iVar21 = 0;
    pbVar20 = PTR_DAT_047d8a48;
    puVar23 = PTR_LAB_047dcf08;
    do {
      lVar17 = *(long *)(*(long *)(param_1 + 0x1c0) + 0xf8);
      if ((lVar17 == 0) || (*(int *)(*(long *)(param_1 + 0x1c0) + 0x100) != *(int *)(lVar17 + 0x2c))
         ) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_00c41664();
      }
      lVar17 = FUN_01102618(uVar8,iVar21);
      if (lVar17 != 0) {
        lVar25 = *(long *)(*(long *)(lVar17 + 0x238) + 0x318);
        if (lVar25 != 0) {
          if (*(int *)(lVar25 + 4) != 2) {
            if (*(char *)(param_1 + 0x1cc) == '\0') {
              if (((*pbVar20 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar20), iVar6 != 0)) {
                FUN_00100190(puVar23,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
                __cxa_guard_release(pbVar20);
              }
              lVar15 = *(long *)PTR_DAT_047d8a50;
              *(long *)PTR_DAT_047d8a58 = lVar15;
              uVar7 = FUN_01104ec4(lVar15 + 0x610);
              *(uint *)(param_1 + 0x1d0) = uVar7;
              *(undefined1 *)(param_1 + 0x1cc) = 1;
            }
            else {
              uVar7 = *(uint *)(param_1 + 0x1d0);
            }
            snprintf((char *)local_68,8,"%d",(ulong)uVar7);
            FUN_00c9e664(&local_80,param_1 + 0xe8);
            lVar15 = 0;
            if (local_78 != (long *)0x0) {
              lVar15 = local_78[9];
            }
            lVar24 = *(long *)(lVar17 + 0xa0);
            local_90 = strlen((char *)(lVar24 + 0x10));
            bVar2 = *(byte *)(lVar24 + 0x10);
            local_a0 = &DAT_cbf29ce484222645;
            if (bVar2 != 0) {
              local_a0 = &DAT_cbf29ce484222645;
              pbVar20 = (byte *)(lVar24 + 0x11);
              do {
                local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = *pbVar20;
                pbVar20 = pbVar20 + 1;
              } while (bVar2 != 0);
            }
            local_88 = (long *)0x0;
            pbStack_98 = (byte *)(lVar24 + 0x10);
            local_b0 = strlen((char *)local_68);
            local_c0 = &DAT_cbf29ce484222645;
            if (local_68[0] != 0) {
              local_c0 = &DAT_cbf29ce484222645;
              pbVar20 = (byte *)((ulong)local_68 | 1);
              bVar2 = local_68[0];
              do {
                local_c0 = (undefined1 *)(((ulong)local_c0 ^ (ulong)bVar2) * 0x100000001b3);
                bVar2 = *pbVar20;
                pbVar20 = pbVar20 + 1;
              } while (bVar2 != 0);
            }
            local_a8 = (long *)0x0;
            pbStack_b8 = local_68;
            FUN_01104e20(&local_70,lVar15 + 0x368,&local_a0,param_2,&local_c0);
            plVar5 = local_70;
            local_70 = (long *)0x0;
            if (local_78 != (long *)0x0) {
              plVar1 = local_78 + 5;
              do {
                lVar15 = *plVar1;
                iVar6 = (int)lVar15 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = iVar6;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar6 == 0) {
                (**(code **)(*local_78 + 0x10))();
              }
              else if ((int)lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
            if (local_80 != (long *)0x0) {
              (**(code **)(*local_80 + 0x60))();
            }
            lVar15 = DAT_0485a0e8;
            plVar1 = (long *)PTR_DAT_047d8b70;
            if (plVar5 != (long *)0x0) {
              plVar1 = plVar5 + 6;
            }
            local_a0 = (undefined1 *)*plVar1;
            plVar9 = (long *)PTR_PTR_047d4508;
            if (plVar5 != (long *)0x0) {
              plVar9 = plVar5 + 7;
            }
            pbStack_98 = (byte *)*plVar9;
            if (plVar5 == (long *)0x0) {
              local_90 = 0;
              local_88 = (long *)0x0;
            }
            else {
              local_90 = plVar5[8];
              (**(code **)(*plVar5 + 0x18))(plVar5);
              local_88 = plVar5;
            }
            uVar10 = FUN_00d4e220(lVar15,&local_a0,0);
            if (local_88 != (long *)0x0) {
              (**(code **)(*local_88 + 0x20))();
            }
            if ((uVar10 & 0xff) == 0) {
              if (((*PTR_DAT_047d8a48 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d8a48), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047dcf08,PTR_DAT_047d8a50,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d8a48);
              }
              *(undefined8 *)PTR_DAT_047d8a58 = *(undefined8 *)PTR_DAT_047d8a50;
              iVar6 = *(int *)(lVar25 + 4);
              pbVar20 = PTR_s_Point_047dcf18;
              if (iVar6 != 1) {
                iVar12 = 1;
                while (iVar6 = iVar6 >> 1, iVar6 != 1) {
                  iVar12 = iVar12 + 1;
                }
                pbVar19 = &UNK_03d61c84;
                if (iVar12 != 2) {
                  pbVar19 = &DAT_03c886bc;
                }
                pbVar20 = (byte *)"PointWind";
                if (iVar12 != 3) {
                  pbVar20 = pbVar19;
                }
              }
              local_90 = strlen((char *)pbVar20);
              lVar25 = DAT_0485a0e8;
              bVar2 = *pbVar20;
              if (bVar2 == 0) {
                local_a0 = &DAT_cbf29ce484222645;
              }
              else {
                local_a0 = &DAT_cbf29ce484222645;
                pbVar19 = pbVar20;
                do {
                  pbVar19 = pbVar19 + 1;
                  local_a0 = (undefined1 *)(((ulong)local_a0 ^ (ulong)bVar2) * 0x100000001b3);
                  bVar2 = *pbVar19;
                } while (bVar2 != 0);
              }
              local_88 = (long *)0x0;
              local_c0 = (undefined1 *)*plVar1;
              pbStack_b8 = (byte *)*plVar9;
              pbStack_98 = pbVar20;
              if (plVar5 == (long *)0x0) {
                local_b0 = 0;
                local_a8 = (long *)0x0;
              }
              else {
                local_b0 = plVar5[8];
                (**(code **)(*plVar5 + 0x18))(plVar5);
                local_a8 = plVar5;
              }
              uVar10 = FUN_00d4e220(lVar25,&local_c0,0);
              if ((uVar10 & 0xff) == 0) {
                uVar10 = FUN_011e86a0(lVar25,&local_c0,&local_a0,0);
LAB_0110332c:
                uVar13 = uVar10 & 0xffffffffffffff00;
                uVar10 = uVar10 & 0xff;
              }
              else {
                iVar6 = strcmp((char *)pbVar20,"IrradianceVolume");
                if (iVar6 != 0) {
                  lVar25 = *(long *)(lVar25 + 0x38) + ((long)uVar10 >> 0x20) * 0x1d0;
                  *(int *)(lVar25 + 0x1c0) = *(int *)(lVar25 + 0x1c0) + 1;
                  goto LAB_0110332c;
                }
                uVar13 = 0;
                uVar10 = 0;
              }
              uVar10 = uVar10 | uVar13;
              if (local_a8 != (long *)0x0) {
                (**(code **)(*local_a8 + 0x20))();
              }
            }
            plVar1 = (long *)(param_1 + 0x1d8);
            uVar22 = *(ulong *)(param_1 + 0x1e0);
            uVar13 = *(long *)(lVar17 + 0xa0) + 0x10;
            if (uVar22 == 0) {
LAB_0110335c:
              plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x210) + 0x10))
                                         (*(long **)(param_1 + 0x210),0x20,8);
              if (plVar9 == (long *)0x0) {
                (**(code **)(**(long **)(param_1 + 0x210) + 0xe8))();
              }
              uVar8 = *(undefined8 *)(param_1 + 0x210);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar17 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar17 == 0) {
                plVar9[2] = uVar13;
                *(undefined1 *)(plVar9 + 3) = 0;
              }
              else {
                if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar8;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
                plVar9[2] = uVar13;
                *(undefined1 *)(plVar9 + 3) = 0;
                *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
              }
              *plVar9 = 0;
              plVar9[1] = uVar13;
              fVar26 = (float)(*(long *)(param_1 + 0x230) + 1);
              if ((uVar22 == 0) ||
                 (uVar18 = local_e0, *(float *)(param_1 + 0x238) * (float)uVar22 < fVar26)) {
                uVar22 = (ulong)(uVar22 < 3 || (uVar22 & uVar22 - 1) != 0) | uVar22 << 1;
                uVar18 = (ulong)(fVar26 / *(float *)(param_1 + 0x238));
                if (uVar18 <= uVar22) {
                  uVar18 = uVar22;
                }
                if (uVar18 - 1 == 0) {
                  uVar18 = 2;
                }
                else if ((uVar18 & uVar18 - 1) != 0) {
                  uVar18 = std::__next_prime(uVar18);
                }
                uVar22 = *(ulong *)(param_1 + 0x1e0);
                if (uVar22 < uVar18) {
                  uVar11 = uVar18;
LAB_01103448:
                  FUN_011055c4(plVar1,uVar11);
                }
                else if (uVar18 < uVar22) {
                  uVar11 = (ulong)((float)*(ulong *)(param_1 + 0x230) / *(float *)(param_1 + 0x238))
                  ;
                  if ((uVar22 < 3) ||
                     (uVar16 = uVar22 - (uVar22 >> 1 & 0x5555555555555555),
                     uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333),
                     1 < (uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))
                  {
                    uVar11 = std::__next_prime(uVar11);
                  }
                  else if (1 < uVar11) {
                    uVar11 = 1L << (-LZCOUNT(uVar11 - 1) & 0x3fU);
                  }
                  if (uVar11 <= uVar18) {
                    uVar11 = uVar18;
                  }
                  if (uVar11 < uVar22) goto LAB_01103448;
                }
                uVar22 = *(ulong *)(param_1 + 0x1e0);
                if ((uVar22 & uVar22 - 1) == 0) {
                  uVar18 = uVar22 - 1 & uVar13;
                }
                else if (uVar13 < uVar22) {
                  uVar18 = uVar13;
                }
                else {
                  uVar18 = 0;
                  if (uVar22 != 0) {
                    uVar18 = uVar13 / uVar22;
                  }
                  uVar18 = uVar13 - uVar18 * uVar22;
                }
              }
              plVar14 = *(long **)(*plVar1 + uVar18 * 8);
              if (plVar14 == (long *)0x0) {
                *plVar9 = *(long *)(param_1 + 0x208);
                *(long **)(param_1 + 0x208) = plVar9;
                *(long *)(*(long *)(param_1 + 0x1d8) + uVar18 * 8) = param_1 + 0x208;
                if (*plVar9 != 0) {
                  uVar13 = *(ulong *)(*plVar9 + 8);
                  if ((uVar22 & uVar22 - 1) == 0) {
                    uVar13 = uVar13 & uVar22 - 1;
                  }
                  else if (uVar22 <= uVar13) {
                    uVar18 = 0;
                    if (uVar22 != 0) {
                      uVar18 = uVar13 / uVar22;
                    }
                    uVar13 = uVar13 - uVar18 * uVar22;
                  }
                  plVar14 = (long *)(*plVar1 + uVar13 * 8);
                  goto LAB_01103914;
                }
              }
              else {
                *plVar9 = *plVar14;
LAB_01103914:
                *plVar14 = (long)plVar9;
              }
              *(long *)(param_1 + 0x230) = *(long *)(param_1 + 0x230) + 1;
            }
            else {
              uVar18 = uVar22 - 1;
              if ((uVar22 & uVar18) == 0) {
                local_e0 = uVar18 & uVar13;
                plVar9 = *(long **)(*plVar1 + local_e0 * 8);
                if (plVar9 == (long *)0x0) goto LAB_0110335c;
                do {
                  plVar9 = (long *)*plVar9;
                  if ((plVar9 == (long *)0x0) ||
                     (plVar9[1] != uVar13 && (plVar9[1] & uVar18) != local_e0)) goto LAB_0110335c;
                } while (plVar9[2] != uVar13);
              }
              else {
                if (uVar13 < uVar22) {
                  uVar18 = uVar13;
                }
                else {
                  uVar18 = 0;
                  if (uVar22 != 0) {
                    uVar18 = uVar13 / uVar22;
                  }
                  uVar18 = uVar13 - uVar18 * uVar22;
                }
                plVar9 = *(long **)(*plVar1 + uVar18 * 8);
                if (plVar9 == (long *)0x0) {
LAB_01103820:
                  local_e0 = uVar18;
                  goto LAB_0110335c;
                }
                do {
                  plVar9 = (long *)*plVar9;
                  if (plVar9 == (long *)0x0) goto LAB_01103820;
                  uVar11 = plVar9[1];
                  if (uVar11 != uVar13) {
                    if (uVar22 <= uVar11) {
                      uVar16 = 0;
                      if (uVar22 != 0) {
                        uVar16 = uVar11 / uVar22;
                      }
                      uVar11 = uVar11 - uVar16 * uVar22;
                    }
                    local_e0 = uVar18;
                    if (uVar11 != uVar18) goto LAB_0110335c;
                  }
                } while (plVar9[2] != uVar13);
              }
            }
            plVar9[3] = uVar10;
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x20))();
            }
            pbVar20 = PTR_DAT_047d8a48;
            puVar23 = PTR_LAB_047dcf08;
          }
        }
      }
      iVar21 = iVar21 + 1;
      lVar17 = FUN_00c41664(*(long *)(param_1 + 0x1c0) + 0xf8);
    } while (iVar21 < **(int **)(lVar17 + 0x238));
  }
  return;
}


