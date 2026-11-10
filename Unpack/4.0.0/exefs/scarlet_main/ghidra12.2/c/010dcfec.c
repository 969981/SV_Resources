/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010dcfec; name: FUN_010dcfec
 */


void FUN_010dcfec(long *param_1,long *param_2,long param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  size_t sVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  int *piVar19;
  ushort *puVar20;
  byte *pbVar21;
  long lVar22;
  undefined8 uVar23;
  uint *puVar24;
  int *piVar25;
  undefined8 uVar26;
  long *plVar27;
  long *plVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  undefined4 uVar32;
  ulong local_d8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar13 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar13 == 0)) {
    lVar9 = 0;
  }
  else {
    puVar24 = (uint *)((long)param_4 + uVar13);
    lVar9 = (long)puVar24 + (ulong)*puVar24;
  }
  *param_1 = (long)(PTR_DAT_047e31a8 + 0x10);
  param_1[1] = (long)&DAT_cbf29ce484222645;
  param_1[2] = (long)&DAT_03c886bc;
  param_1[3] = 0;
  param_1[4] = 0;
  sVar8 = strlen((char *)(lVar9 + 4));
  bVar5 = *(byte *)(lVar9 + 4);
  puVar14 = &DAT_cbf29ce484222645;
  if (bVar5 != 0) {
    puVar14 = &DAT_cbf29ce484222645;
    pbVar21 = (byte *)(lVar9 + 5);
    do {
      puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar21;
      pbVar21 = pbVar21 + 1;
    } while (bVar5 != 0);
  }
  param_1[6] = param_3;
  *param_1 = (long)&PTR_LAB_046053d0;
  param_1[1] = (long)puVar14;
  param_1[2] = lVar9 + 4;
  param_1[3] = sVar8;
  param_1[4] = 0;
  param_1[5] = (long)param_4;
  plVar15 = param_1 + 7;
  *plVar15 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (plVar16 = *(long **)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), plVar16 == (long *)0x0)) {
    lVar9 = tpidr_el0;
    plVar16 = *(long **)(lVar9 + 0x30);
    if (plVar16 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar16 = DAT_04859430;
      *(long **)(lVar9 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0x666666666666666;
  param_1[0xc] = 0;
  piVar19 = (int *)param_1[5];
  param_1[10] = (long)plVar16;
  if ((*(ushort *)((long)piVar19 - (long)*piVar19) < 9) ||
     (uVar13 = (ulong)((ushort *)((long)piVar19 - (long)*piVar19))[4], uVar13 == 0)) {
    puVar24 = (uint *)0x0;
  }
  else {
    puVar24 = (uint *)((long)piVar19 + uVar13);
    puVar24 = (uint *)((long)puVar24 + (ulong)*puVar24);
  }
  lVar9 = param_1[7];
  uVar13 = (ulong)*puVar24;
  if ((ulong)((param_1[9] - lVar9 >> 3) * -0x3333333333333333) < uVar13) {
    lVar22 = param_1[8];
    plVar17 = param_1 + 10;
    local_88 = (long *)0x0;
    plStack_80 = plVar17;
    local_a0 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,uVar13 * 0x28,8);
    if (local_a0 == (long *)0x0) {
      (**(code **)(*(long *)*plVar17 + 0xe8))();
    }
    plVar12 = local_a0 + (lVar22 - lVar9 >> 3);
    plVar28 = local_a0 + uVar13 * 5;
    plVar16 = (long *)param_1[7];
    plVar30 = (long *)param_1[8];
    if (plVar30 == plVar16) {
      plVar27 = plVar12;
      local_90 = plVar16;
    }
    else {
      plVar27 = plVar12 + -5;
      local_98 = plVar12;
      local_90 = plVar12;
      local_88 = plVar28;
      FUN_010e01a0(plVar17,plVar27,plVar30 + -5);
      if (plVar30 + -5 != plVar16) {
        do {
          plVar27 = plVar27 + -5;
          FUN_010e01a0(plVar17,plVar27,plVar30 + -10);
          plVar30 = plVar30 + -5;
        } while (plVar16 + 5 != plVar30);
      }
      plVar16 = (long *)param_1[7];
      local_90 = (long *)param_1[8];
    }
    param_1[7] = (long)plVar27;
    param_1[8] = (long)plVar12;
    local_88 = (long *)param_1[9];
    param_1[9] = (long)plVar28;
    local_a0 = plVar16;
    local_98 = plVar16;
    FUN_010ddaec(&local_a0);
    uVar13 = (ulong)*puVar24;
  }
  if ((int)uVar13 != 0) {
    puVar24 = puVar24 + 1;
    puVar1 = puVar24 + uVar13;
    do {
      piVar19 = (int *)((long)puVar24 + (ulong)*puVar24);
      puVar20 = (ushort *)((long)piVar19 - (long)*piVar19);
      if (*puVar20 < 5) {
        piVar25 = (int *)0x0;
LAB_010dd504:
        uVar32 = 0;
      }
      else {
        if ((ulong)puVar20[2] == 0) {
          piVar25 = (int *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar19 + (ulong)puVar20[2]);
          piVar25 = (int *)((long)puVar2 + (ulong)*puVar2);
        }
        if ((*puVar20 < 7) || ((ulong)puVar20[3] == 0)) goto LAB_010dd504;
        uVar32 = *(undefined4 *)((long)piVar19 + (ulong)puVar20[3]);
      }
      puVar18 = (undefined8 *)param_1[8];
      if (puVar18 < (undefined8 *)param_1[9]) {
        lVar9 = param_1[10];
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar22 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar22 == 0) {
          puVar18[3] = 0;
          puVar18[4] = 0;
          *puVar18 = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar22 + 0x80)) goto LAB_010dd95c;
          *(long *)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = lVar9;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
          *puVar18 = 0;
          puVar18[3] = 0;
          puVar18[4] = 0;
          puVar18[1] = 0;
          puVar18[2] = 0;
          *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
        }
        puVar18 = puVar18 + 5;
        param_1[8] = (long)puVar18;
      }
      else {
        FUN_010e0380(plVar15);
        puVar18 = (undefined8 *)param_1[8];
      }
      lVar9 = *plVar15;
      if ((long)puVar18 - lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar10 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
      if (puVar10 == (undefined8 *)0x0) {
        plVar16 = (long *)0x0;
        uVar29 = 0;
        uVar23 = 0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar22 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar22 + 0x80)) {
LAB_010dd95c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar22 + *(ulong *)(lVar22 + 0x80) * 8) = param_2;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + 1;
        *puVar10 = piVar25;
        puVar10[1] = &DAT_cbf29ce484222645;
        puVar10[2] = &DAT_03c886bc;
        puVar10[3] = 0;
        puVar10[4] = 0;
        if ((*(ushort *)((long)piVar25 - (long)*piVar25) < 5) ||
           (uVar13 = (ulong)((ushort *)((long)piVar25 - (long)*piVar25))[2], uVar13 == 0)) {
          lVar31 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar25 + uVar13);
          lVar31 = (long)puVar2 + (ulong)*puVar2;
        }
        sVar8 = strlen((char *)(lVar31 + 4));
        bVar5 = *(byte *)(lVar31 + 4);
        puVar14 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar14 = &DAT_cbf29ce484222645;
          pbVar21 = (byte *)(lVar31 + 5);
          do {
            puVar14 = (undefined1 *)(((ulong)puVar14 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar21;
            pbVar21 = pbVar21 + 1;
          } while (bVar5 != 0);
        }
        puVar10[1] = puVar14;
        puVar10[2] = (char *)(lVar31 + 4);
        uVar29 = 0x28;
        uVar23 = 8;
        puVar10[3] = sVar8;
        puVar10[4] = 0;
        *(long *)(lVar22 + 0x80) = *(long *)(lVar22 + 0x80) + -1;
        plVar16 = param_2;
      }
      lVar22 = ((long)puVar18 - lVar9 >> 3) * -0x3333333333333333 + -1;
      plVar17 = (long *)(lVar9 + lVar22 * 0x28);
      lVar31 = *plVar17;
      *plVar17 = (long)puVar10;
      if (lVar31 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar11 = FUN_00c4e600();
        iVar4 = *(int *)(lVar11 + 0x12c8);
        iVar7 = iVar4 + 1;
        *(int *)(lVar11 + 0x12c8) = iVar7;
        if (*(int *)(lVar11 + 0x12cc) <= iVar4) {
          *(int *)(lVar11 + 0x12cc) = iVar7;
        }
        if (*(long **)(lVar31 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar31 + 0x20) + 0x20))();
        }
        lVar11 = lVar9 + lVar22 * 0x28;
        plVar17 = *(long **)(lVar11 + 8);
        uVar3 = *(undefined8 *)(lVar11 + 0x10);
        uVar26 = *(undefined8 *)(lVar11 + 0x18);
        uVar13 = (**(code **)(*plVar17 + 0xf8))(plVar17);
        if (((uVar13 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
          (**(code **)(*plVar17 + 0x18))(plVar17,lVar31,uVar3,uVar26);
        }
        else {
          FUN_00c48fe8(plVar17,lVar31,uVar3,uVar26);
        }
        lVar31 = FUN_00c4e600();
        iVar7 = *(int *)(lVar31 + 0x12c8) + -1;
        *(int *)(lVar31 + 0x12c8) = iVar7;
        if (iVar7 == 0) {
          plVar17 = (long *)FUN_00c4e600();
          if (plVar17[600] != 0) {
            local_78 = plVar17 + plVar17[600] * 3;
            local_a0 = plVar17;
            FUN_00c4ea30(&local_a0,&local_78);
            plVar12 = (long *)*plVar17;
            plVar30 = plVar17;
            if (plVar17[600] != 0) {
              plVar30 = plVar17 + plVar17[600] * 3;
            }
            if (plVar30 == plVar17) {
              local_d8 = 0;
              uVar13 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar17 + 0xd0))();
              if ((long *)*plVar17 != plVar12) {
                (**(code **)(*plVar12 + 0x100))(plVar12,plVar17,plVar17);
                plVar12 = (long *)*plVar17;
              }
              plVar28 = plVar17 + 3;
              if (plVar30 == plVar28) {
                local_d8 = 0;
                uVar13 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar28 + 0xd0))();
                bVar6 = (long *)*plVar28 != plVar12;
                if (bVar6) {
                  (**(code **)(*plVar12 + 0x100))(plVar12,plVar17,plVar17 + 3);
                  plVar12 = (long *)plVar17[3];
                }
                local_d8 = (ulong)bVar6;
                plVar28 = plVar17 + 6;
                if (plVar30 == plVar28) {
                  uVar13 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar28 + 0xd0))();
                  if ((long *)*plVar28 != plVar12) {
                    (**(code **)(*plVar12 + 0x100))(plVar12,plVar17 + local_d8 * 3,plVar17 + 6);
                    plVar12 = (long *)plVar17[6];
                    local_d8 = 2;
                  }
                  plVar28 = plVar17 + 9;
                  if (plVar30 == plVar28) {
                    uVar13 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar28 + 0xd0))();
                    if ((long *)*plVar28 != plVar12) {
                      (**(code **)(*plVar12 + 0x100))(plVar12,plVar17 + local_d8 * 3,plVar17 + 9);
                      plVar12 = (long *)plVar17[9];
                      local_d8 = 3;
                    }
                    plVar28 = plVar17 + 0xc;
                    if (plVar30 == plVar28) {
                      uVar13 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar28 + 0xd0))();
                      if ((long *)*plVar28 != plVar12) {
                        (**(code **)(*plVar12 + 0x100))
                                  (plVar12,plVar17 + local_d8 * 3,plVar17 + 0xc);
                        plVar12 = (long *)plVar17[0xc];
                        local_d8 = 4;
                      }
                      plVar28 = plVar17 + 0xf;
                      if (plVar30 == plVar28) {
                        uVar13 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar28 + 0xd0))();
                        if ((long *)*plVar28 != plVar12) {
                          (**(code **)(*plVar12 + 0x100))
                                    (plVar12,plVar17 + local_d8 * 3,plVar17 + 0xf);
                          plVar12 = (long *)plVar17[0xf];
                          local_d8 = 5;
                        }
                        plVar28 = plVar17 + 0x12;
                        if (plVar30 == plVar28) {
                          uVar13 = 6;
                        }
                        else {
                          uVar13 = 6;
                          do {
                            (**(code **)(*(long *)*plVar28 + 0xd0))();
                            if ((long *)*plVar28 != plVar12) {
                              (**(code **)(*plVar12 + 0x100))
                                        (plVar12,plVar17 + local_d8 * 3,plVar28);
                              plVar12 = (long *)*plVar28;
                              local_d8 = uVar13;
                            }
                            plVar28 = plVar28 + 3;
                            uVar13 = uVar13 + 1;
                          } while (plVar30 != plVar28);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar12 + 0x100))(plVar12,plVar17 + local_d8 * 3,plVar17 + uVar13 * 3);
            plVar17[600] = 0;
          }
          *(undefined4 *)(lVar31 + 0x12cc) = 0;
        }
      }
      lVar9 = lVar9 + lVar22 * 0x28;
      *(long **)(lVar9 + 8) = plVar16;
      *(undefined8 *)(lVar9 + 0x10) = uVar29;
      *(undefined8 *)(lVar9 + 0x18) = uVar23;
      *(undefined4 *)(lVar9 + 0x20) = uVar32;
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar1);
  }
  return;
}


