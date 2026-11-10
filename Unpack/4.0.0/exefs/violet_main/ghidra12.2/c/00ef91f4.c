/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ef91f4; name: FUN_00ef91f4
 */


void FUN_00ef91f4(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long lVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int *piVar21;
  ulong uVar22;
  int *piVar23;
  int iVar24;
  uint *puVar25;
  long *plVar26;
  uint *puVar27;
  long *plVar28;
  undefined8 uVar29;
  long *plVar30;
  undefined8 uVar31;
  undefined1 *puVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  long *plVar35;
  long *local_80;
  ulong local_78;
  long *local_70;
  long *plStack_68;
  
  lVar18 = (long)*param_2;
  uVar5 = *(ushort *)((long)param_2 - lVar18);
  if (10 < uVar5) {
    uVar20 = (ulong)((ushort *)((long)param_2 - lVar18))[5];
    if (uVar20 != 0) {
      puVar27 = (uint *)((long)param_2 + uVar20);
      piVar21 = (int *)((long)puVar27 + (ulong)*puVar27);
      if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
         (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar20 == 0)) {
        piVar21 = (int *)0x0;
      }
      else {
        puVar27 = (uint *)((long)piVar21 + uVar20);
        piVar21 = (int *)((long)puVar27 + (ulong)*puVar27);
      }
      plVar26 = *(long **)(param_1 + 0x168);
      if (plVar26 == (long *)0x0) {
        plVar26 = *(long **)(param_1 + 8);
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar26 + 0x10))(plVar26,0x28,8);
      if (puVar9 == (undefined8 *)0x0) {
        plVar26 = (long *)0x0;
        uVar31 = 0;
        uVar29 = 0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar18 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ef9f04;
        *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar26;
        puVar32 = &DAT_cbf29ce484222645;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        puVar9[4] = 0;
        *puVar9 = piVar21;
        puVar9[1] = &DAT_cbf29ce484222645;
        puVar9[2] = &DAT_03c886bc;
        puVar9[3] = 0;
        if ((*(ushort *)((long)piVar21 - (long)*piVar21) < 5) ||
           (uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[2], uVar20 == 0)) {
          lVar14 = 0;
        }
        else {
          puVar27 = (uint *)((long)piVar21 + uVar20);
          lVar14 = (long)puVar27 + (ulong)*puVar27;
        }
        sVar10 = strlen((char *)(lVar14 + 4));
        bVar4 = *(byte *)(lVar14 + 4);
        if (bVar4 != 0) {
          pbVar12 = (byte *)(lVar14 + 5);
          do {
            puVar32 = (undefined1 *)(((ulong)puVar32 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar4 != 0);
        }
        puVar9[1] = puVar32;
        puVar9[2] = (char *)(lVar14 + 4);
        uVar31 = 0x28;
        puVar9[3] = sVar10;
        puVar9[4] = 0;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        uVar29 = 8;
      }
      puVar13 = *(undefined8 **)(param_1 + 0x210);
      puVar33 = *(undefined8 **)(param_1 + 0x218);
      puVar19 = puVar13;
      if (puVar13 == puVar33) {
        puVar33 = puVar13;
      }
      else {
        piVar21 = (int *)*puVar9;
        do {
          piVar23 = *(int **)*puVar19;
          if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 7) ||
             (uVar20 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[3], uVar20 == 0)) {
            iVar8 = 0;
          }
          else {
            iVar8 = *(int *)((long)piVar23 + uVar20);
          }
          if (*(ushort *)((long)piVar21 - (long)*piVar21) < 7) {
            iVar24 = 0;
          }
          else {
            uVar20 = (ulong)((ushort *)((long)piVar21 - (long)*piVar21))[3];
            iVar24 = 0;
            if (uVar20 != 0) {
              iVar24 = *(int *)((long)piVar21 + uVar20);
            }
          }
          if (iVar8 == iVar24) {
            if (((undefined8 *)*puVar19)[1] == puVar9[1]) goto LAB_00ef9494;
          }
          puVar19 = puVar19 + 4;
        } while (puVar33 != puVar19);
        puVar19 = puVar33;
      }
LAB_00ef9494:
      if (puVar33 == puVar19) {
        if (puVar33 < *(undefined8 **)(param_1 + 0x220)) {
          uVar34 = *(undefined8 *)(param_1 + 0x228);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar18 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar18 == 0) {
            *puVar33 = puVar9;
            puVar33[1] = plVar26;
            puVar33[2] = uVar31;
            puVar33[3] = uVar29;
          }
          else {
            if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ef9f04;
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
            *puVar33 = puVar9;
            puVar33[1] = plVar26;
            puVar33[2] = uVar31;
            puVar33[3] = uVar29;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
          *(undefined8 **)(param_1 + 0x218) = puVar33 + 4;
        }
        else {
          uVar22 = *(ulong *)(param_1 + 0x230);
          lVar18 = (long)puVar33 - (long)puVar13 >> 5;
          uVar20 = lVar18 + 1;
          if (0x7ffffffffffffffe < uVar22) {
            uVar22 = 0x7fffffffffffffff;
          }
          if (uVar22 < uVar20) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar14 = (long)*(undefined8 **)(param_1 + 0x220) - (long)puVar13;
          uVar15 = lVar14 >> 4;
          if (uVar20 <= uVar15) {
            uVar20 = uVar15;
          }
          if (uVar22 >> 1 <= (ulong)(lVar14 >> 5)) {
            uVar20 = uVar22;
          }
          if (uVar20 == 0) {
            lVar14 = 0;
          }
          else {
            lVar14 = (**(code **)(**(long **)(param_1 + 0x228) + 0x10))
                               (*(long **)(param_1 + 0x228),uVar20 << 5,8);
            if (lVar14 == 0) {
              (**(code **)(**(long **)(param_1 + 0x228) + 0xe8))();
            }
          }
          puVar19 = (undefined8 *)(lVar14 + lVar18 * 0x20);
          uVar34 = *(undefined8 *)(param_1 + 0x228);
          if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar18 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar18 == 0) {
            *puVar19 = puVar9;
            puVar19[1] = plVar26;
            puVar19[2] = uVar31;
            puVar19[3] = uVar29;
          }
          else {
            if (0xf < *(ulong *)(lVar18 + 0x80)) {
LAB_00ef9f04:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar34;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
            *puVar19 = puVar9;
            puVar19[1] = plVar26;
            puVar19[2] = uVar31;
            puVar19[3] = uVar29;
            *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
          }
          puVar6 = PTR_LAB_047d3900;
          plVar35 = *(long **)(param_1 + 0x210);
          plVar26 = *(long **)(param_1 + 0x218);
          puVar9 = puVar19;
          if (plVar26 == plVar35) {
            puVar33 = puVar19;
            plVar26 = plVar35;
          }
          else {
            do {
              uVar29 = *(undefined8 *)(param_1 + 0x228);
              if (((DAT_04865a38 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
                FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                FUN_00100190(puVar6,&DAT_04865a30,&PTR_LOOP_04483000);
                __cxa_guard_release(&DAT_04865a38);
              }
              lVar18 = nn::os::GetTlsValue(DAT_04865a30);
              if (lVar18 != 0) {
                if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ef9f04;
                *(undefined8 *)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = uVar29;
                *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
              }
              lVar16 = plVar26[-4];
              plVar26[-4] = 0;
              puVar9[-4] = lVar16;
              lVar16 = plVar26[-3];
              lVar17 = plVar26[-1];
              puVar9[-2] = plVar26[-2];
              puVar9[-1] = lVar17;
              puVar33 = puVar9 + -4;
              plVar26 = plVar26 + -4;
              puVar9[-3] = lVar16;
              if (lVar18 != 0) {
                *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
              }
              puVar9 = puVar33;
            } while (plVar35 != plVar26);
            plVar35 = *(long **)(param_1 + 0x210);
            plVar26 = *(long **)(param_1 + 0x218);
          }
          *(undefined8 **)(param_1 + 0x210) = puVar33;
          lVar18 = *(long *)(param_1 + 0x220);
          *(undefined8 **)(param_1 + 0x218) = puVar19 + 4;
          *(ulong *)(param_1 + 0x220) = lVar14 + uVar20 * 0x20;
          if (plVar26 != plVar35) {
            do {
              plVar28 = plVar26 + -4;
              lVar14 = *plVar28;
              *plVar28 = 0;
              if (lVar14 != 0) {
                FUN_00c4e600();
                FUN_00c4e600();
                lVar16 = FUN_00c4e600();
                iVar24 = *(int *)(lVar16 + 0x12c8);
                iVar8 = iVar24 + 1;
                *(int *)(lVar16 + 0x12c8) = iVar8;
                if (*(int *)(lVar16 + 0x12cc) <= iVar24) {
                  *(int *)(lVar16 + 0x12cc) = iVar8;
                }
                if (*(long **)(lVar14 + 0x20) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar14 + 0x20) + 0x20))();
                }
                plVar2 = (long *)plVar26[-3];
                lVar16 = plVar26[-2];
                lVar17 = plVar26[-1];
                uVar20 = (**(code **)(*plVar2 + 0xf8))(plVar2);
                if (((uVar20 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1))
                {
                  (**(code **)(*plVar2 + 0x18))(plVar2,lVar14,lVar16,lVar17);
                }
                else {
                  FUN_00c48fe8(plVar2,lVar14,lVar16,lVar17);
                }
                lVar14 = FUN_00c4e600();
                iVar8 = *(int *)(lVar14 + 0x12c8) + -1;
                *(int *)(lVar14 + 0x12c8) = iVar8;
                if (iVar8 == 0) {
                  plVar26 = (long *)FUN_00c4e600();
                  if (plVar26[600] != 0) {
                    local_70 = plVar26 + plVar26[600] * 3;
                    plStack_68 = plVar26;
                    FUN_00c4ea30(&plStack_68,&local_70);
                    plVar30 = (long *)*plVar26;
                    plVar2 = plVar26;
                    if (plVar26[600] != 0) {
                      plVar2 = plVar26 + plVar26[600] * 3;
                    }
                    if (plVar2 == plVar26) {
                      local_78 = 0;
                      uVar20 = 0;
                    }
                    else {
                      (**(code **)(*(long *)*plVar26 + 0xd0))();
                      if ((long *)*plVar26 != plVar30) {
                        (**(code **)(*plVar30 + 0x100))(plVar30,plVar26,plVar26);
                        plVar30 = (long *)*plVar26;
                      }
                      plVar1 = plVar26 + 3;
                      if (plVar2 == plVar1) {
                        local_78 = 0;
                        uVar20 = 1;
                      }
                      else {
                        (**(code **)(*(long *)*plVar1 + 0xd0))();
                        bVar7 = (long *)*plVar1 != plVar30;
                        if (bVar7) {
                          (**(code **)(*plVar30 + 0x100))(plVar30,plVar26,plVar26 + 3);
                          plVar30 = (long *)plVar26[3];
                        }
                        local_78 = (ulong)bVar7;
                        plVar1 = plVar26 + 6;
                        if (plVar2 == plVar1) {
                          uVar20 = 2;
                        }
                        else {
                          (**(code **)(*(long *)*plVar1 + 0xd0))();
                          if ((long *)*plVar1 != plVar30) {
                            (**(code **)(*plVar30 + 0x100))
                                      (plVar30,plVar26 + local_78 * 3,plVar26 + 6);
                            plVar30 = (long *)plVar26[6];
                            local_78 = 2;
                          }
                          plVar1 = plVar26 + 9;
                          if (plVar2 == plVar1) {
                            uVar20 = 3;
                          }
                          else {
                            (**(code **)(*(long *)*plVar1 + 0xd0))();
                            if ((long *)*plVar1 != plVar30) {
                              (**(code **)(*plVar30 + 0x100))
                                        (plVar30,plVar26 + local_78 * 3,plVar26 + 9);
                              plVar30 = (long *)plVar26[9];
                              local_78 = 3;
                            }
                            plVar1 = plVar26 + 0xc;
                            if (plVar2 == plVar1) {
                              uVar20 = 4;
                            }
                            else {
                              (**(code **)(*(long *)*plVar1 + 0xd0))();
                              if ((long *)*plVar1 != plVar30) {
                                (**(code **)(*plVar30 + 0x100))
                                          (plVar30,plVar26 + local_78 * 3,plVar26 + 0xc);
                                plVar30 = (long *)plVar26[0xc];
                                local_78 = 4;
                              }
                              plVar1 = plVar26 + 0xf;
                              if (plVar2 == plVar1) {
                                uVar20 = 5;
                              }
                              else {
                                (**(code **)(*(long *)*plVar1 + 0xd0))();
                                if ((long *)*plVar1 != plVar30) {
                                  (**(code **)(*plVar30 + 0x100))
                                            (plVar30,plVar26 + local_78 * 3,plVar26 + 0xf);
                                  plVar30 = (long *)plVar26[0xf];
                                  local_78 = 5;
                                }
                                local_80 = plVar26 + 0x12;
                                uVar20 = 6;
                                if (plVar2 != local_80) {
                                  do {
                                    (**(code **)(*(long *)*local_80 + 0xd0))();
                                    if ((long *)*local_80 != plVar30) {
                                      (**(code **)(*plVar30 + 0x100))
                                                (plVar30,plVar26 + local_78 * 3,local_80);
                                      plVar30 = (long *)*local_80;
                                      local_78 = uVar20;
                                    }
                                    local_80 = local_80 + 3;
                                    uVar20 = uVar20 + 1;
                                  } while (plVar2 != local_80);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    (**(code **)(*plVar30 + 0x100))
                              (plVar30,plVar26 + local_78 * 3,plVar26 + uVar20 * 3);
                    plVar26[600] = 0;
                  }
                  *(undefined4 *)(lVar14 + 0x12cc) = 0;
                }
              }
              plVar26 = plVar28;
            } while (plVar28 != plVar35);
          }
          if (plVar35 != (long *)0x0) {
            plVar26 = *(long **)(param_1 + 0x228);
            lVar18 = lVar18 - (long)plVar35;
            uVar20 = (**(code **)(*plVar26 + 0xf8))(plVar26);
            if (((uVar20 & 1) == 0) || (lVar14 = FUN_00c4e600(), *(int *)(lVar14 + 0x12c8) < 1)) {
              (**(code **)(*plVar26 + 0x18))(plVar26,plVar35,lVar18,8);
            }
            else {
              FUN_00c48fe8(plVar26,plVar35,lVar18,8);
            }
          }
        }
      }
      else if (puVar9 != (undefined8 *)0x0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar18 = FUN_00c4e600();
        iVar24 = *(int *)(lVar18 + 0x12c8);
        iVar8 = iVar24 + 1;
        *(int *)(lVar18 + 0x12c8) = iVar8;
        if (*(int *)(lVar18 + 0x12cc) <= iVar24) {
          *(int *)(lVar18 + 0x12cc) = iVar8;
        }
        if ((long *)puVar9[4] != (long *)0x0) {
          (**(code **)(*(long *)puVar9[4] + 0x20))();
        }
        uVar20 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar20 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,puVar9,uVar31,uVar29);
        }
        else {
          FUN_00c48fe8(plVar26,puVar9,uVar31,uVar29);
        }
        lVar18 = FUN_00c4e600();
        iVar8 = *(int *)(lVar18 + 0x12c8) + -1;
        *(int *)(lVar18 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar26 = (long *)FUN_00c4e600();
          if (plVar26[600] != 0) {
            local_70 = plVar26 + plVar26[600] * 3;
            plStack_68 = plVar26;
            FUN_00c4ea30(&plStack_68,&local_70);
            plVar28 = (long *)*plVar26;
            plVar35 = plVar26;
            if (plVar26[600] != 0) {
              plVar35 = plVar26 + plVar26[600] * 3;
            }
            if (plVar35 == plVar26) {
              uVar22 = 0;
              uVar20 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar26 + 0xd0))();
              if ((long *)*plVar26 != plVar28) {
                (**(code **)(*plVar28 + 0x100))(plVar28,plVar26,plVar26);
                plVar28 = (long *)*plVar26;
              }
              plVar2 = plVar26 + 3;
              if (plVar35 == plVar2) {
                uVar22 = 0;
                uVar20 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar2 + 0xd0))();
                bVar7 = (long *)*plVar2 != plVar28;
                if (bVar7) {
                  (**(code **)(*plVar28 + 0x100))(plVar28,plVar26,plVar26 + 3);
                  plVar28 = (long *)plVar26[3];
                }
                uVar22 = (ulong)bVar7;
                plVar2 = plVar26 + 6;
                if (plVar35 == plVar2) {
                  uVar20 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar2 + 0xd0))();
                  if ((long *)*plVar2 != plVar28) {
                    (**(code **)(*plVar28 + 0x100))(plVar28,plVar26 + uVar22 * 3,plVar26 + 6);
                    plVar28 = (long *)plVar26[6];
                    uVar22 = 2;
                  }
                  plVar2 = plVar26 + 9;
                  if (plVar35 == plVar2) {
                    uVar20 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar2 + 0xd0))();
                    if ((long *)*plVar2 != plVar28) {
                      (**(code **)(*plVar28 + 0x100))(plVar28,plVar26 + uVar22 * 3,plVar26 + 9);
                      plVar28 = (long *)plVar26[9];
                      uVar22 = 3;
                    }
                    plVar2 = plVar26 + 0xc;
                    if (plVar35 == plVar2) {
                      uVar20 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar2 + 0xd0))();
                      if ((long *)*plVar2 != plVar28) {
                        (**(code **)(*plVar28 + 0x100))(plVar28,plVar26 + uVar22 * 3,plVar26 + 0xc);
                        plVar28 = (long *)plVar26[0xc];
                        uVar22 = 4;
                      }
                      plVar2 = plVar26 + 0xf;
                      if (plVar35 == plVar2) {
                        uVar20 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar2 + 0xd0))();
                        if ((long *)*plVar2 != plVar28) {
                          (**(code **)(*plVar28 + 0x100))
                                    (plVar28,plVar26 + uVar22 * 3,plVar26 + 0xf);
                          plVar28 = (long *)plVar26[0xf];
                          uVar22 = 5;
                        }
                        uVar20 = 6;
                        for (plVar2 = plVar26 + 0x12; plVar35 != plVar2; plVar2 = plVar2 + 3) {
                          (**(code **)(*(long *)*plVar2 + 0xd0))();
                          if ((long *)*plVar2 != plVar28) {
                            (**(code **)(*plVar28 + 0x100))(plVar28,plVar26 + uVar22 * 3,plVar2);
                            plVar28 = (long *)*plVar2;
                            uVar22 = uVar20;
                          }
                          uVar20 = uVar20 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar28 + 0x100))(plVar28,plVar26 + uVar22 * 3,plVar26 + uVar20 * 3);
            plVar26[600] = 0;
          }
          *(undefined4 *)(lVar18 + 0x12cc) = 0;
        }
      }
      lVar18 = (long)*param_2;
      uVar5 = *(ushort *)((long)param_2 - lVar18);
    }
    if ((0xe < uVar5) && (uVar20 = (ulong)*(ushort *)((long)param_2 + (0xe - lVar18)), uVar20 != 0))
    {
      puVar27 = (uint *)((long)param_2 + uVar20);
      puVar27 = (uint *)((long)puVar27 + (ulong)*puVar27);
      puVar25 = puVar27 + 1;
      uVar3 = *puVar27;
      uVar20 = (ulong)uVar3;
      if (uVar20 != 0) {
        FUN_00ef91f4(param_1,(long)puVar25 + (ulong)*puVar25);
        if (uVar3 != 1) {
          FUN_00ef91f4(param_1,(long)(puVar27 + 2) + (ulong)puVar27[2]);
          if (puVar27 + 3 != puVar25 + uVar20) {
            lVar18 = uVar20 * 4 + -8;
            puVar27 = puVar27 + 3;
            do {
              FUN_00ef91f4(param_1,(long)puVar27 + (ulong)*puVar27);
              lVar18 = lVar18 + -4;
              puVar27 = puVar27 + 1;
            } while (lVar18 != 0);
          }
        }
      }
    }
  }
  return;
}


