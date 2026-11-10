/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a62084; name: FUN_00a62084
 */


void FUN_00a62084(long param_1,long *param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ushort *puVar14;
  ulong uVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  __compar_fn_t __compar;
  int *local_b0;
  int *local_a8;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (param_2 != (long *)0x0) {
    if (param_3 == 2) {
      puVar11 = (undefined8 *)(param_1 + 0x60);
    }
    else if (param_3 == 1) {
      puVar11 = (undefined8 *)(param_1 + 0x48);
    }
    else {
      if (param_3 != 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("false","GetDataTable",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/ui/pokedex/data/pokedex_fbs_data_base.cpp"
                   ,0x7d,"pokedex kind out of range");
      }
      puVar11 = (undefined8 *)(param_1 + 0x30);
    }
    local_78 = *puVar11;
    local_70 = puVar11[1];
    uStack_68 = puVar11[2];
    local_98 = &DAT_fbec41851566601b;
    pcStack_90 = "values";
    local_88 = 6;
    local_80 = (long *)0x0;
    piVar6 = (int *)FUN_00efa07c(&local_78,&local_98);
    if (piVar6 == (int *)0x0) {
      iVar21 = 0;
    }
    else {
      iVar21 = *piVar6;
    }
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
      __compar = (__compar_fn_t)PTR_LAB_047d5600;
    }
    PTR_LAB_047d5600 = __compar;
    if (iVar21 != 0) {
      iVar18 = 0;
      do {
        local_88 = 6;
        local_80 = (long *)0x0;
        local_98 = &DAT_fbec41851566601b;
        pcStack_90 = "values";
        FUN_00e90ee0(&local_b0,&local_78,&local_98,iVar18);
        if (local_80 != (long *)0x0) {
          (**(code **)(*local_80 + 0x20))();
        }
        if (local_a8 != (int *)0x0) {
          if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
             (uVar13 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar13 == 0)) {
            puVar8 = (uint *)0x0;
          }
          else {
            puVar8 = (uint *)((long)local_a8 + uVar13);
            puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
          }
          local_98 = "capturenum";
          pvVar7 = bsearch(&local_98,puVar8 + 1,(ulong)*puVar8,4,__compar);
          if ((pvVar7 != (void *)0x0) && (local_a8 != (int *)0x0)) {
            if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
               (uVar13 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar13 == 0)) {
              puVar8 = (uint *)0x0;
            }
            else {
              puVar8 = (uint *)((long)local_a8 + uVar13);
              puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
            }
            local_98 = "itemid";
            pvVar7 = bsearch(&local_98,puVar8 + 1,(ulong)*puVar8,4,__compar);
            if ((pvVar7 != (void *)0x0) && (local_a8 != (int *)0x0)) {
              if ((*(ushort *)((long)local_a8 - (long)*local_a8) < 7) ||
                 (uVar13 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3], uVar13 == 0)) {
                puVar8 = (uint *)0x0;
              }
              else {
                puVar8 = (uint *)((long)local_a8 + uVar13);
                puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
              }
              local_98 = "itemnum";
              pvVar7 = bsearch(&local_98,puVar8 + 1,(ulong)*puVar8,4,__compar);
              if (pvVar7 != (void *)0x0) {
                if (((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7)
                    ) || (uVar13 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3],
                         uVar13 == 0)) {
LAB_00a62370:
                  iVar4 = 0;
                }
                else {
                  puVar8 = (uint *)((long)local_a8 + uVar13);
                  local_98 = "capturenum";
                  puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                  puVar8 = bsearch(&local_98,puVar8 + 1,(ulong)*puVar8,4,__compar);
                  if ((puVar8 == (uint *)0x0) || (local_b0 == (int *)0x0)) goto LAB_00a62370;
                  piVar6 = (int *)((long)puVar8 + (ulong)*puVar8);
                  puVar14 = (ushort *)((long)piVar6 - (long)*piVar6);
                  uVar3 = *puVar14;
                  if (uVar3 < 7) {
                    piVar17 = (int *)0x0;
                  }
                  else {
                    piVar17 = (int *)0x0;
                    if ((ulong)puVar14[3] != 0) {
                      puVar8 = (uint *)((long)piVar6 + (ulong)puVar14[3]);
                      piVar17 = (int *)((long)puVar8 + (ulong)*puVar8);
                    }
                  }
                  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
                     (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar13 == 0))
                  {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = (long)*(char *)((long)piVar17 + uVar13) & 0xffffffff;
                  }
                  if (*(long *)(PTR_DAT_047d5608 + uVar13 * 8) == 4) {
                    if (uVar3 < 0xb) {
                      uVar16 = 0;
LAB_00a6238c:
                      iVar4 = 0;
                    }
                    else {
                      uVar16 = 0;
                      if ((ulong)puVar14[5] != 0) {
                        uVar16 = (uint)*(ushort *)((long)piVar6 + (ulong)puVar14[5]);
                      }
                      if ((uVar3 < 0xd) || ((ulong)puVar14[6] == 0)) goto LAB_00a6238c;
                      iVar4 = *(int *)((long)piVar6 + (ulong)puVar14[6]);
                    }
                    if ((uVar16 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
                       (uVar13 = (ulong)*(ushort *)
                                         (((long)local_b0 - (long)*local_b0) + (ulong)uVar16),
                       uVar13 != 0)) {
                      iVar4 = *(int *)((long)local_b0 + uVar13);
                    }
                  }
                  else {
                    if ((uVar3 < 0xd) || ((ulong)puVar14[6] == 0)) {
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = *(int *)((long)piVar6 + (ulong)puVar14[6]);
                    }
                    __compar = (__compar_fn_t)PTR_LAB_047d5600;
                  }
                }
                local_98 = (char *)0x3d51861fdc81335b;
                pcStack_90 = "itemid";
                local_88 = 6;
                local_80 = (long *)0x0;
                piVar6 = (int *)FUN_00d27b5c(&local_b0,&local_98);
                if (((piVar6 == (int *)0x0) || (*(ushort *)((long)piVar6 - (long)*piVar6) < 7)) ||
                   (uVar13 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[3], uVar13 == 0)) {
                  iVar20 = 0;
                }
                else {
                  iVar20 = *(int *)((long)piVar6 + uVar13);
                }
                if (local_80 != (long *)0x0) {
                  (**(code **)(*local_80 + 0x20))();
                }
                if (((local_a8 == (int *)0x0) || (*(ushort *)((long)local_a8 - (long)*local_a8) < 7)
                    ) || (uVar13 = (ulong)((ushort *)((long)local_a8 - (long)*local_a8))[3],
                         uVar13 == 0)) {
LAB_00a624fc:
                  iVar25 = 0;
                }
                else {
                  puVar8 = (uint *)((long)local_a8 + uVar13);
                  puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
                  local_98 = "itemnum";
                  puVar8 = bsearch(&local_98,puVar8 + 1,(ulong)*puVar8,4,__compar);
                  if ((puVar8 == (uint *)0x0) || (local_b0 == (int *)0x0)) goto LAB_00a624fc;
                  piVar6 = (int *)((long)puVar8 + (ulong)*puVar8);
                  puVar14 = (ushort *)((long)piVar6 - (long)*piVar6);
                  uVar3 = *puVar14;
                  if (uVar3 < 7) {
                    piVar17 = (int *)0x0;
                  }
                  else {
                    piVar17 = (int *)0x0;
                    if ((ulong)puVar14[3] != 0) {
                      puVar8 = (uint *)((long)piVar6 + (ulong)puVar14[3]);
                      piVar17 = (int *)((long)puVar8 + (ulong)*puVar8);
                    }
                  }
                  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
                     (uVar13 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar13 == 0))
                  {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = (long)*(char *)((long)piVar17 + uVar13) & 0xffffffff;
                  }
                  if (*(long *)(PTR_DAT_047d5608 + uVar13 * 8) == 4) {
                    if (uVar3 < 0xb) {
                      uVar16 = 0;
LAB_00a62528:
                      iVar25 = 0;
                    }
                    else {
                      uVar16 = 0;
                      if ((ulong)puVar14[5] != 0) {
                        uVar16 = (uint)*(ushort *)((long)piVar6 + (ulong)puVar14[5]);
                      }
                      if ((uVar3 < 0xd) || ((ulong)puVar14[6] == 0)) goto LAB_00a62528;
                      iVar25 = *(int *)((long)piVar6 + (ulong)puVar14[6]);
                    }
                    if ((uVar16 < *(ushort *)((long)local_b0 - (long)*local_b0)) &&
                       (uVar13 = (ulong)*(ushort *)
                                         (((long)local_b0 - (long)*local_b0) + (ulong)uVar16),
                       uVar13 != 0)) {
                      iVar25 = *(int *)((long)local_b0 + uVar13);
                    }
                  }
                  else {
                    if ((uVar3 < 0xd) || ((ulong)puVar14[6] == 0)) {
                      iVar25 = 0;
                    }
                    else {
                      iVar25 = *(int *)((long)piVar6 + (ulong)puVar14[6]);
                    }
                    __compar = (__compar_fn_t)PTR_LAB_047d5600;
                  }
                }
                piVar6 = (int *)param_2[1];
                bVar1 = iVar4 <= param_4;
                if (piVar6 < (int *)param_2[2]) {
                  lVar19 = param_2[3];
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar9 == 0) {
                    *piVar6 = iVar4;
                    piVar6[1] = iVar20;
                    piVar6[2] = iVar25;
                    *(bool *)(piVar6 + 3) = bVar1;
                    *(undefined1 *)((long)piVar6 + 0xf) = local_98._2_1_;
                    *(undefined2 *)((long)piVar6 + 0xd) = (undefined2)local_98;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00a629d8:
                    /* WARNING: Subroutine does not return */
                      abort();
                    }
                    *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar19;
                    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                    *piVar6 = iVar4;
                    piVar6[1] = iVar20;
                    piVar6[2] = iVar25;
                    *(bool *)(piVar6 + 3) = bVar1;
                    *(undefined1 *)((long)piVar6 + 0xf) = local_98._2_1_;
                    *(undefined2 *)((long)piVar6 + 0xd) = (undefined2)local_98;
                    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                  }
                  param_2[1] = (long)(piVar6 + 4);
                }
                else {
                  uVar15 = param_2[4];
                  lVar19 = (long)piVar6 - *param_2 >> 4;
                  uVar13 = lVar19 + 1;
                  if (0x7ffffffffffffffe < uVar15) {
                    uVar15 = 0x7fffffffffffffff;
                  }
                  if (uVar15 < uVar13) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar9 = param_2[2] - *param_2;
                  uVar12 = lVar9 >> 3;
                  if (uVar13 <= uVar12) {
                    uVar13 = uVar12;
                  }
                  if (uVar15 >> 1 <= (ulong)(lVar9 >> 4)) {
                    uVar13 = uVar15;
                  }
                  if (uVar13 == 0) {
                    lVar9 = 0;
                  }
                  else {
                    lVar9 = (**(code **)(*(long *)param_2[3] + 0x10))
                                      ((long *)param_2[3],uVar13 << 4,4);
                    if (lVar9 == 0) {
                      (**(code **)(*(long *)param_2[3] + 0xe8))();
                    }
                  }
                  lVar23 = param_2[3];
                  piVar6 = (int *)(lVar9 + lVar19 * 0x10);
                  if (((DAT_04865a38 & 1) == 0) &&
                     (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
                    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                    __cxa_guard_release(&DAT_04865a38);
                  }
                  lVar19 = nn::os::GetTlsValue(DAT_04865a30);
                  if (lVar19 == 0) {
                    *piVar6 = iVar4;
                    piVar6[1] = iVar20;
                    piVar6[2] = iVar25;
                    *(bool *)(piVar6 + 3) = bVar1;
                    *(undefined1 *)((long)piVar6 + 0xf) = local_98._2_1_;
                    *(undefined2 *)((long)piVar6 + 0xd) = (undefined2)local_98;
                  }
                  else {
                    if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_00a629d8;
                    *(long *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = lVar23;
                    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
                    *piVar6 = iVar4;
                    piVar6[1] = iVar20;
                    piVar6[2] = iVar25;
                    *(bool *)(piVar6 + 3) = bVar1;
                    *(undefined1 *)((long)piVar6 + 0xf) = local_98._2_1_;
                    *(undefined2 *)((long)piVar6 + 0xd) = (undefined2)local_98;
                    *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
                  }
                  lVar19 = *param_2;
                  lVar23 = param_2[1];
                  piVar17 = piVar6;
                  if (lVar23 != lVar19) {
                    do {
                      lVar24 = param_2[3];
                      if (((DAT_04865a38 & 1) == 0) &&
                         (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
                        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                        __cxa_guard_release(&DAT_04865a38);
                      }
                      lVar10 = nn::os::GetTlsValue(DAT_04865a30);
                      if (lVar10 == 0) {
                        uVar2 = *(undefined8 *)(lVar23 + -8);
                        *(undefined8 *)(piVar17 + -4) = *(undefined8 *)(lVar23 + -0x10);
                        *(undefined8 *)(piVar17 + -2) = uVar2;
                      }
                      else {
                        if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00a629d8;
                        *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar24;
                        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
                        uVar2 = *(undefined8 *)(lVar23 + -8);
                        *(undefined8 *)(piVar17 + -4) = *(undefined8 *)(lVar23 + -0x10);
                        *(undefined8 *)(piVar17 + -2) = uVar2;
                        *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
                      }
                      lVar23 = lVar23 + -0x10;
                      piVar17 = piVar17 + -4;
                    } while (lVar19 != lVar23);
                    lVar19 = *param_2;
                  }
                  *param_2 = (long)piVar17;
                  param_2[1] = (long)(piVar6 + 4);
                  lVar23 = param_2[2];
                  param_2[2] = lVar9 + uVar13 * 0x10;
                  __compar = (__compar_fn_t)PTR_LAB_047d5600;
                  if (lVar19 != 0) {
                    plVar22 = (long *)param_2[3];
                    uVar13 = (**(code **)(*plVar22 + 0xf8))(plVar22);
                    if (((uVar13 & 1) == 0) ||
                       (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
                      (**(code **)(*plVar22 + 0x18))(plVar22,lVar19,lVar23 - lVar19,4);
                      __compar = (__compar_fn_t)PTR_LAB_047d5600;
                    }
                    else {
                      FUN_00c48fe8(plVar22,lVar19,lVar23 - lVar19,4);
                      __compar = (__compar_fn_t)PTR_LAB_047d5600;
                    }
                  }
                }
              }
            }
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != iVar21);
    }
  }
  return;
}


