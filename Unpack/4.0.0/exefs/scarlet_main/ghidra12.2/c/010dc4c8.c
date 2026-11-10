/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010dc4c8; name: FUN_010dc4c8
 */


void FUN_010dc4c8(long *param_1,long *param_2,long param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  int *piVar20;
  ushort *puVar21;
  byte *pbVar22;
  long lVar23;
  undefined8 uVar24;
  uint *puVar25;
  int *piVar26;
  long *plVar27;
  undefined8 uVar28;
  long *plVar29;
  undefined8 uVar30;
  long *plVar31;
  long lVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  long *local_e8;
  ulong local_e0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *plStack_88;
  long *local_78;
  
  if ((*(ushort *)((long)param_4 - (long)*param_4) < 5) ||
     (uVar14 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[2], uVar14 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar25 = (uint *)((long)param_4 + uVar14);
    lVar10 = (long)puVar25 + (ulong)*puVar25;
  }
  *param_1 = (long)(PTR_DAT_047e31a8 + 0x10);
  param_1[1] = (long)&DAT_cbf29ce484222645;
  param_1[2] = (long)&DAT_03c886bc;
  param_1[3] = 0;
  param_1[4] = 0;
  sVar9 = strlen((char *)(lVar10 + 4));
  bVar5 = *(byte *)(lVar10 + 4);
  puVar15 = &DAT_cbf29ce484222645;
  if (bVar5 != 0) {
    puVar15 = &DAT_cbf29ce484222645;
    pbVar22 = (byte *)(lVar10 + 5);
    do {
      puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar22;
      pbVar22 = pbVar22 + 1;
    } while (bVar5 != 0);
  }
  param_1[6] = param_3;
  *param_1 = (long)&PTR_LAB_04605578;
  param_1[1] = (long)puVar15;
  param_1[2] = lVar10 + 4;
  param_1[3] = sVar9;
  param_1[4] = 0;
  param_1[5] = (long)param_4;
  plVar16 = param_1 + 7;
  *plVar16 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar10 = nn::os::GetTlsValue(DAT_04865a30);
  if (((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
     (plVar17 = *(long **)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), plVar17 == (long *)0x0)) {
    lVar10 = tpidr_el0;
    plVar17 = *(long **)(lVar10 + 0x30);
    if (plVar17 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar17 = DAT_04859430;
      *(long **)(lVar10 + 0x30) = DAT_04859430;
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0x666666666666666;
  param_1[0xc] = 0;
  piVar20 = (int *)param_1[5];
  param_1[10] = (long)plVar17;
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 0xb) ||
     (uVar14 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[5], uVar14 == 0)) {
    puVar25 = (uint *)0x0;
  }
  else {
    puVar25 = (uint *)((long)piVar20 + uVar14);
    puVar25 = (uint *)((long)puVar25 + (ulong)*puVar25);
  }
  lVar10 = param_1[7];
  uVar14 = (ulong)*puVar25;
  if ((ulong)((param_1[9] - lVar10 >> 3) * -0x3333333333333333) < uVar14) {
    lVar23 = param_1[8];
    plVar18 = param_1 + 10;
    local_90 = (long *)0x0;
    plStack_88 = plVar18;
    local_a8 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,uVar14 * 0x28,8);
    if (local_a8 == (long *)0x0) {
      (**(code **)(*(long *)*plVar18 + 0xe8))();
    }
    plVar13 = local_a8 + (lVar23 - lVar10 >> 3);
    plVar27 = local_a8 + uVar14 * 5;
    plVar17 = (long *)param_1[7];
    plVar31 = (long *)param_1[8];
    if (plVar31 == plVar17) {
      plVar29 = plVar13;
      local_98 = plVar17;
    }
    else {
      plVar29 = plVar13 + -5;
      local_a0 = plVar13;
      local_98 = plVar13;
      local_90 = plVar27;
      FUN_010e0290(plVar18,plVar29,plVar31 + -5);
      if (plVar31 + -5 != plVar17) {
        do {
          plVar29 = plVar29 + -5;
          FUN_010e0290(plVar18,plVar29,plVar31 + -10);
          plVar31 = plVar31 + -5;
        } while (plVar17 + 5 != plVar31);
      }
      plVar17 = (long *)param_1[7];
      local_98 = (long *)param_1[8];
    }
    param_1[7] = (long)plVar29;
    param_1[8] = (long)plVar13;
    local_90 = (long *)param_1[9];
    param_1[9] = (long)plVar27;
    local_a8 = plVar17;
    local_a0 = plVar17;
    FUN_010ddf50(&local_a8);
    uVar14 = (ulong)*puVar25;
  }
  if ((int)uVar14 != 0) {
    puVar25 = puVar25 + 1;
    puVar1 = puVar25 + uVar14;
    do {
      piVar20 = (int *)((long)puVar25 + (ulong)*puVar25);
      puVar21 = (ushort *)((long)piVar20 - (long)*piVar20);
      uVar6 = *puVar21;
      if (uVar6 < 5) {
        piVar26 = (int *)0x0;
LAB_010dc9fc:
        uVar33 = 0;
LAB_010dca00:
        uVar34 = 0;
      }
      else {
        if ((ulong)puVar21[2] == 0) {
          piVar26 = (int *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar20 + (ulong)puVar21[2]);
          piVar26 = (int *)((long)puVar2 + (ulong)*puVar2);
        }
        if (uVar6 < 7) goto LAB_010dc9fc;
        uVar33 = 0;
        if ((ulong)puVar21[3] != 0) {
          uVar33 = *(undefined4 *)((long)piVar20 + (ulong)puVar21[3]);
        }
        if ((uVar6 < 9) || ((ulong)puVar21[4] == 0)) goto LAB_010dca00;
        uVar34 = *(undefined4 *)((long)piVar20 + (ulong)puVar21[4]);
      }
      puVar19 = (undefined8 *)param_1[8];
      if (puVar19 < (undefined8 *)param_1[9]) {
        lVar10 = param_1[10];
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar23 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar23 == 0) {
          puVar19[3] = 0;
          puVar19[4] = 0;
          *puVar19 = 0;
          puVar19[1] = 0;
          puVar19[2] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar23 + 0x80)) goto LAB_010dce50;
          *(long *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = lVar10;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
          *puVar19 = 0;
          puVar19[3] = 0;
          puVar19[4] = 0;
          puVar19[1] = 0;
          puVar19[2] = 0;
          *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
        }
        puVar19 = puVar19 + 5;
        param_1[8] = (long)puVar19;
      }
      else {
        FUN_010e05a8(plVar16);
        puVar19 = (undefined8 *)param_1[8];
      }
      lVar10 = *plVar16;
      if ((long)puVar19 - lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar11 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x28,8);
      if (puVar11 == (undefined8 *)0x0) {
        plVar17 = (long *)0x0;
        uVar30 = 0;
        uVar24 = 0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar23 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_010dce50:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = param_2;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
        *puVar11 = piVar26;
        puVar11[1] = &DAT_cbf29ce484222645;
        puVar11[2] = &DAT_03c886bc;
        puVar11[3] = 0;
        puVar11[4] = 0;
        if ((*(ushort *)((long)piVar26 - (long)*piVar26) < 5) ||
           (uVar14 = (ulong)((ushort *)((long)piVar26 - (long)*piVar26))[2], uVar14 == 0)) {
          lVar32 = 0;
        }
        else {
          puVar2 = (uint *)((long)piVar26 + uVar14);
          lVar32 = (long)puVar2 + (ulong)*puVar2;
        }
        sVar9 = strlen((char *)(lVar32 + 4));
        bVar5 = *(byte *)(lVar32 + 4);
        puVar15 = &DAT_cbf29ce484222645;
        if (bVar5 != 0) {
          puVar15 = &DAT_cbf29ce484222645;
          pbVar22 = (byte *)(lVar32 + 5);
          do {
            puVar15 = (undefined1 *)(((ulong)puVar15 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar22;
            pbVar22 = pbVar22 + 1;
          } while (bVar5 != 0);
        }
        puVar11[1] = puVar15;
        puVar11[2] = (char *)(lVar32 + 4);
        uVar30 = 0x28;
        uVar24 = 8;
        puVar11[3] = sVar9;
        puVar11[4] = 0;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
        plVar17 = param_2;
      }
      lVar23 = ((long)puVar19 - lVar10 >> 3) * -0x3333333333333333 + -1;
      plVar18 = (long *)(lVar10 + lVar23 * 0x28);
      lVar32 = *plVar18;
      *plVar18 = (long)puVar11;
      if (lVar32 != 0) {
        FUN_00c4e600();
        FUN_00c4e600();
        lVar12 = FUN_00c4e600();
        iVar4 = *(int *)(lVar12 + 0x12c8);
        iVar8 = iVar4 + 1;
        *(int *)(lVar12 + 0x12c8) = iVar8;
        if (*(int *)(lVar12 + 0x12cc) <= iVar4) {
          *(int *)(lVar12 + 0x12cc) = iVar8;
        }
        if (*(long **)(lVar32 + 0x20) != (long *)0x0) {
          (**(code **)(**(long **)(lVar32 + 0x20) + 0x20))();
        }
        lVar12 = lVar10 + lVar23 * 0x28;
        plVar18 = *(long **)(lVar12 + 8);
        uVar3 = *(undefined8 *)(lVar12 + 0x10);
        uVar28 = *(undefined8 *)(lVar12 + 0x18);
        uVar14 = (**(code **)(*plVar18 + 0xf8))(plVar18);
        if (((uVar14 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar18 + 0x18))(plVar18,lVar32,uVar3,uVar28);
        }
        else {
          FUN_00c48fe8(plVar18,lVar32,uVar3,uVar28);
        }
        lVar32 = FUN_00c4e600();
        iVar8 = *(int *)(lVar32 + 0x12c8) + -1;
        *(int *)(lVar32 + 0x12c8) = iVar8;
        if (iVar8 == 0) {
          plVar18 = (long *)FUN_00c4e600();
          if (plVar18[600] != 0) {
            local_78 = plVar18 + plVar18[600] * 3;
            local_a8 = plVar18;
            FUN_00c4ea30(&local_a8,&local_78);
            plVar13 = (long *)*plVar18;
            plVar31 = plVar18;
            if (plVar18[600] != 0) {
              plVar31 = plVar18 + plVar18[600] * 3;
            }
            if (plVar31 == plVar18) {
              local_e0 = 0;
              uVar14 = 0;
            }
            else {
              (**(code **)(*(long *)*plVar18 + 0xd0))();
              if ((long *)*plVar18 != plVar13) {
                (**(code **)(*plVar13 + 0x100))(plVar13,plVar18,plVar18);
                plVar13 = (long *)*plVar18;
              }
              plVar27 = plVar18 + 3;
              if (plVar31 == plVar27) {
                local_e0 = 0;
                uVar14 = 1;
              }
              else {
                (**(code **)(*(long *)*plVar27 + 0xd0))();
                bVar7 = (long *)*plVar27 != plVar13;
                if (bVar7) {
                  (**(code **)(*plVar13 + 0x100))(plVar13,plVar18,plVar18 + 3);
                  plVar13 = (long *)plVar18[3];
                }
                local_e0 = (ulong)bVar7;
                plVar27 = plVar18 + 6;
                if (plVar31 == plVar27) {
                  uVar14 = 2;
                }
                else {
                  (**(code **)(*(long *)*plVar27 + 0xd0))();
                  if ((long *)*plVar27 != plVar13) {
                    (**(code **)(*plVar13 + 0x100))(plVar13,plVar18 + local_e0 * 3,plVar18 + 6);
                    plVar13 = (long *)plVar18[6];
                    local_e0 = 2;
                  }
                  plVar27 = plVar18 + 9;
                  if (plVar31 == plVar27) {
                    uVar14 = 3;
                  }
                  else {
                    (**(code **)(*(long *)*plVar27 + 0xd0))();
                    if ((long *)*plVar27 != plVar13) {
                      (**(code **)(*plVar13 + 0x100))(plVar13,plVar18 + local_e0 * 3,plVar18 + 9);
                      plVar13 = (long *)plVar18[9];
                      local_e0 = 3;
                    }
                    plVar27 = plVar18 + 0xc;
                    if (plVar31 == plVar27) {
                      uVar14 = 4;
                    }
                    else {
                      (**(code **)(*(long *)*plVar27 + 0xd0))();
                      if ((long *)*plVar27 != plVar13) {
                        (**(code **)(*plVar13 + 0x100))
                                  (plVar13,plVar18 + local_e0 * 3,plVar18 + 0xc);
                        plVar13 = (long *)plVar18[0xc];
                        local_e0 = 4;
                      }
                      plVar27 = plVar18 + 0xf;
                      if (plVar31 == plVar27) {
                        uVar14 = 5;
                      }
                      else {
                        (**(code **)(*(long *)*plVar27 + 0xd0))();
                        if ((long *)*plVar27 != plVar13) {
                          (**(code **)(*plVar13 + 0x100))
                                    (plVar13,plVar18 + local_e0 * 3,plVar18 + 0xf);
                          plVar13 = (long *)plVar18[0xf];
                          local_e0 = 5;
                        }
                        local_e8 = plVar18 + 0x12;
                        if (plVar31 == local_e8) {
                          uVar14 = 6;
                        }
                        else {
                          uVar14 = 6;
                          do {
                            (**(code **)(*(long *)*local_e8 + 0xd0))();
                            if ((long *)*local_e8 != plVar13) {
                              (**(code **)(*plVar13 + 0x100))
                                        (plVar13,plVar18 + local_e0 * 3,local_e8);
                              plVar13 = (long *)*local_e8;
                              local_e0 = uVar14;
                            }
                            local_e8 = local_e8 + 3;
                            uVar14 = uVar14 + 1;
                          } while (plVar31 != local_e8);
                        }
                      }
                    }
                  }
                }
              }
            }
            (**(code **)(*plVar13 + 0x100))(plVar13,plVar18 + local_e0 * 3,plVar18 + uVar14 * 3);
            plVar18[600] = 0;
          }
          *(undefined4 *)(lVar32 + 0x12cc) = 0;
        }
      }
      lVar10 = lVar10 + lVar23 * 0x28;
      *(long **)(lVar10 + 8) = plVar17;
      *(undefined8 *)(lVar10 + 0x10) = uVar30;
      *(undefined4 *)(lVar10 + 0x20) = uVar33;
      *(undefined4 *)(lVar10 + 0x24) = uVar34;
      *(undefined8 *)(lVar10 + 0x18) = uVar24;
      puVar25 = puVar25 + 1;
    } while (puVar25 != puVar1);
  }
  return;
}


