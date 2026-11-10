/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ad8e10; name: FUN_02ad8e10
 */


/* WARNING: Removing unreachable block (ram,0x02ada6b4) */

void FUN_02ad8e10(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  long lVar14;
  ushort uVar15;
  long lVar16;
  undefined8 uVar17;
  ushort *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  uint uVar23;
  int *piVar24;
  uint uVar25;
  ulong uVar26;
  long *plVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  float fVar30;
  char *local_118;
  char *local_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  long *local_b0;
  long local_a8;
  int *local_a0;
  int *local_90;
  int *local_88;
  
  local_c8 = *param_2;
  local_c0 = (undefined *)param_2[1];
  local_b8 = param_2[2];
  *(undefined1 *)(param_1 + 0x250) = 1;
  *(undefined **)(param_1 + 0xb28) = local_c0;
  *(undefined8 *)(param_1 + 0xb20) = local_c8;
  *(undefined8 *)(param_1 + 0xb30) = local_b8;
  local_118 = &DAT_fbec41851566601b;
  local_110 = "values";
  local_108 = 6;
  local_100 = (long *)0x0;
  puVar7 = (uint *)FUN_00efa07c(&local_c8,&local_118);
  if (puVar7 == (uint *)0x0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *puVar7;
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar14 = *(long *)(param_1 + 0x2e0);
  lVar16 = *(long *)(param_1 + 0x2d8);
  uVar26 = (ulong)(int)uVar25;
  lVar19 = lVar14 - lVar16 >> 2;
  if ((ulong)(lVar19 * 0x6db6db6db6db6db7) < (ulong)(long)(int)uVar25) {
    uVar22 = uVar26 + lVar19 * -0x6db6db6db6db6db7;
    if ((ulong)((*(long *)(param_1 + 0x2e8) - lVar14 >> 2) * 0x6db6db6db6db6db7) < uVar22) {
      uVar22 = *(ulong *)(param_1 + 0x2f8);
      if (0x7ffffffffffffffe < uVar22) {
        uVar22 = 0x7fffffffffffffff;
      }
      if (uVar22 < uVar26) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar16 = *(long *)(param_1 + 0x2e8) - lVar16 >> 2;
      uVar20 = lVar16 * -0x2492492492492492;
      uVar2 = uVar26;
      if (uVar26 <= uVar20) {
        uVar2 = uVar20;
      }
      if (uVar22 >> 1 <= (ulong)(lVar16 * 0x6db6db6db6db6db7)) {
        uVar2 = uVar22;
      }
      if (uVar2 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = (**(code **)(**(long **)(param_1 + 0x2f0) + 0x10))
                           (*(long **)(param_1 + 0x2f0),uVar2 * 0x1c,4);
        if (lVar16 == 0) {
          (**(code **)(**(long **)(param_1 + 0x2f0) + 0xe8))();
        }
      }
      lVar14 = lVar16 + lVar19 * 4;
      lVar19 = uVar26 * 0x1c + lVar19 * -4;
      puVar28 = (undefined8 *)(lVar14 + 0xc);
      do {
        uVar29 = *(undefined8 *)(param_1 + 0x2f0);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          *(undefined8 *)((long)puVar28 + -4) = 0;
          *(undefined8 *)((long)puVar28 + 4) = 0;
          *(undefined8 *)((long)puVar28 + -0xc) = 0;
          *(undefined2 *)((long)puVar28 + -4) = 0x7fff;
          *(undefined4 *)((long)puVar28 + 0xc) = 0;
          *puVar28 = 0;
          *(undefined4 *)((long)puVar28 + 7) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02ada7ec;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar29;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          *(undefined8 *)((long)puVar28 + -4) = 0;
          *(undefined8 *)((long)puVar28 + 4) = 0;
          *(undefined8 *)((long)puVar28 + -0xc) = 0;
          *(undefined2 *)((long)puVar28 + -4) = 0x7fff;
          *(undefined4 *)((long)puVar28 + 0xc) = 0;
          *puVar28 = 0;
          *(undefined4 *)((long)puVar28 + 7) = 0;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        puVar28 = (undefined8 *)((long)puVar28 + 0x1c);
        lVar19 = lVar19 + -0x1c;
      } while (lVar19 != 0);
      lVar19 = *(long *)(param_1 + 0x2d8);
      lVar8 = *(long *)(param_1 + 0x2e0);
      if (lVar8 != lVar19) {
        do {
          uVar29 = *(undefined8 *)(param_1 + 0x2f0);
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar9 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar9 == 0) {
            uVar29 = *(undefined8 *)(lVar8 + -0x1c);
            uVar17 = *(undefined8 *)(lVar8 + -0x14);
            uVar21 = *(undefined8 *)(lVar8 + -0xc);
            *(undefined4 *)(lVar14 + -4) = *(undefined4 *)(lVar8 + -4);
            *(undefined8 *)(lVar14 + -0xc) = uVar21;
            *(undefined8 *)(lVar14 + -0x14) = uVar17;
            *(undefined8 *)(lVar14 + -0x1c) = uVar29;
          }
          else {
            if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02ada7ec;
            *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar29;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            uVar29 = *(undefined8 *)(lVar8 + -0x1c);
            uVar17 = *(undefined8 *)(lVar8 + -0x14);
            uVar21 = *(undefined8 *)(lVar8 + -0xc);
            *(undefined4 *)(lVar14 + -4) = *(undefined4 *)(lVar8 + -4);
            *(undefined8 *)(lVar14 + -0xc) = uVar21;
            *(undefined8 *)(lVar14 + -0x14) = uVar17;
            *(undefined8 *)(lVar14 + -0x1c) = uVar29;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          }
          lVar8 = lVar8 + -0x1c;
          lVar14 = lVar14 + -0x1c;
        } while (lVar19 != lVar8);
        lVar19 = *(long *)(param_1 + 0x2d8);
      }
      lVar8 = *(long *)(param_1 + 0x2e8);
      *(long *)(param_1 + 0x2d8) = lVar14;
      *(ulong *)(param_1 + 0x2e0) = lVar16 + uVar26 * 0x1c;
      *(ulong *)(param_1 + 0x2e8) = lVar16 + uVar2 * 0x1c;
      if (lVar19 != 0) {
        plVar27 = *(long **)(param_1 + 0x2f0);
        lVar8 = lVar8 - lVar19;
        uVar26 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar26 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar19,lVar8,4);
        }
        else {
          FUN_00c48fe8(plVar27,lVar19,lVar8,4);
        }
      }
      goto LAB_02ad9310;
    }
    lVar16 = lVar14;
    if (uVar22 != 0) {
      lVar16 = lVar14 + uVar22 * 0x1c;
      puVar28 = (undefined8 *)(lVar14 + 0xc);
      lVar14 = uVar26 * 0x1c + lVar19 * -4;
      do {
        uVar29 = *(undefined8 *)(param_1 + 0x2f0);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar19 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar19 == 0) {
          *(undefined8 *)((long)puVar28 + -4) = 0;
          *(undefined8 *)((long)puVar28 + 4) = 0;
          *(undefined8 *)((long)puVar28 + -0xc) = 0;
          *(undefined2 *)((long)puVar28 + -4) = 0x7fff;
          *(undefined4 *)((long)puVar28 + 0xc) = 0;
          *puVar28 = 0;
          *(undefined4 *)((long)puVar28 + 7) = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar19 + 0x80)) goto LAB_02ada7ec;
          *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar29;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
          *(undefined8 *)((long)puVar28 + -4) = 0;
          *(undefined8 *)((long)puVar28 + 4) = 0;
          *(undefined8 *)((long)puVar28 + -0xc) = 0;
          *(undefined2 *)((long)puVar28 + -4) = 0x7fff;
          *(undefined4 *)((long)puVar28 + 0xc) = 0;
          *puVar28 = 0;
          *(undefined4 *)((long)puVar28 + 7) = 0;
          *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
        }
        puVar28 = (undefined8 *)((long)puVar28 + 0x1c);
        lVar14 = lVar14 + -0x1c;
      } while (lVar14 != 0);
    }
  }
  else {
    if ((ulong)(lVar19 * 0x6db6db6db6db6db7) <= uVar26) goto LAB_02ad9310;
    lVar16 = lVar16 + uVar26 * 0x1c;
  }
  *(long *)(param_1 + 0x2e0) = lVar16;
LAB_02ad9310:
  puVar4 = PTR_DAT_047d5608;
  puVar3 = PTR_LAB_047d5600;
  if (0 < (int)uVar25) {
    lVar16 = 0;
    uVar26 = 0;
    do {
      local_118 = &DAT_fbec41851566601b;
      local_110 = "values";
      local_108 = 6;
      local_100 = (long *)0x0;
      FUN_00e90ee0(&local_90,&local_c8,&local_118,uVar26 & 0xffffffff);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      local_100 = (long *)0x0;
      local_118 = (char *)0xfa9e37973d8f266a;
      local_110 = "mission_info";
      local_108 = 0xc;
      FUN_00fb4c10(&local_a8,&local_90,&local_118);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      lVar14 = *(long *)(param_1 + 0x2d8);
      if ((ulong)((*(long *)(param_1 + 0x2e0) - lVar14 >> 2) * 0x6db6db6db6db6db7) <= uVar26)
      goto LAB_02ada7f0;
      uVar11 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "mission_category";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9dd4:
          uVar11 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 1) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar11 = *(undefined1 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9dd4;
            uVar11 = *(undefined1 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined1 *)(lVar14 + lVar16) = uVar11;
      uVar12 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "mission_type";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9d34:
          uVar12 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar12 = (undefined2)*(undefined4 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9d34;
            uVar12 = (undefined2)*(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      lVar14 = lVar14 + lVar16;
      *(undefined2 *)(lVar14 + 2) = uVar12;
      uVar13 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "mission_id";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9d54:
          uVar13 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar13 = *(undefined4 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9d54;
            uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined4 *)(lVar14 + 4) = uVar13;
      local_118 = (char *)0x62700a68ae745bd6;
      local_100 = (long *)0x0;
      local_110 = "goal";
      local_108 = 4;
      sVar5 = FUN_01f9cec4(&local_a8,&local_118);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      if (sVar5 == 0) {
        return;
      }
      *(short *)(lVar14 + 8) = sVar5;
      uVar13 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "reward_bp";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9d74:
          uVar13 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar13 = *(undefined4 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9d74;
            uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined4 *)(lVar14 + 0xc) = uVar13;
      uVar13 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "reload_bp";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9d94:
          uVar13 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar13 = *(undefined4 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9d94;
            uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined4 *)(lVar14 + 0x10) = uVar13;
      uVar11 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "mission_release_type";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9db4:
          uVar11 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar11 = (undefined1)*(undefined4 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9db4;
            uVar11 = (undefined1)*(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined1 *)(lVar14 + 0x14) = uVar11;
      uVar11 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "mission_grade";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9df4:
          uVar11 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 1) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar11 = *(undefined1 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9df4;
            uVar11 = *(undefined1 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined1 *)(lVar14 + 0x15) = uVar11;
      uVar11 = 0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "difficulty";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
LAB_02ad9e14:
          uVar11 = 0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 1) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            uVar11 = *(undefined1 *)(local_a8 + uVar22);
          }
          else {
            if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ad9e14;
            uVar11 = *(undefined1 *)((long)piVar1 + (ulong)puVar18[6]);
          }
        }
      }
      *(undefined1 *)(lVar14 + 0x16) = uVar11;
      fVar30 = 0.0;
      if (local_a0 != (int *)0x0) {
        if ((*(ushort *)((long)local_a0 - (long)*local_a0) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)local_a0 - (long)*local_a0))[3], uVar22 == 0)) {
          puVar7 = (uint *)0x0;
        }
        else {
          puVar7 = (uint *)((long)local_a0 + uVar22);
          puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        }
        local_118 = "weight";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if (puVar7 == (uint *)0x0) {
          fVar30 = 0.0;
        }
        else {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if ((uVar15 < 0xb) || ((ulong)puVar18[5] == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
            }
            fVar30 = *(float *)(local_a8 + uVar22);
          }
          else {
            fVar30 = 0.0;
            if (0xe < uVar15) {
              fVar30 = 0.0;
              if ((ulong)puVar18[7] != 0) {
                fVar30 = (float)*(double *)((long)piVar1 + (ulong)puVar18[7]);
              }
            }
          }
        }
      }
      *(float *)(lVar14 + 0x18) = fVar30;
      lVar16 = lVar16 + 0x1c;
      uVar26 = uVar26 + 1;
    } while ((ulong)uVar25 * 0x1c != lVar16);
  }
  FUN_02ae33c0(*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2e0));
  local_118 = &DAT_fbec41851566601b;
  local_110 = "values";
  local_108 = 6;
  local_100 = (long *)0x0;
  puVar7 = (uint *)FUN_00efa07c(param_3,&local_118);
  if (puVar7 == (uint *)0x0) {
    uVar25 = 0;
  }
  else {
    uVar25 = *puVar7;
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  lVar16 = *(long *)(param_1 + 0x318);
  lVar14 = *(long *)(param_1 + 0x310);
  lVar19 = lVar16 - lVar14 >> 3;
  uVar26 = (ulong)(int)uVar25;
  if ((ulong)(lVar19 * -0x3333333333333333) < (ulong)(long)(int)uVar25) {
    uVar22 = uVar26 + lVar19 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 800) - lVar16 >> 3) * -0x3333333333333333) < uVar22) {
      uVar22 = *(ulong *)(param_1 + 0x330);
      if (0x7ffffffffffffffe < uVar22) {
        uVar22 = 0x7fffffffffffffff;
      }
      if (uVar22 < uVar26) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar16 = *(long *)(param_1 + 800) - lVar14 >> 3;
      uVar20 = lVar16 * -0x6666666666666666;
      uVar2 = uVar26;
      if (uVar26 <= uVar20) {
        uVar2 = uVar20;
      }
      if (uVar22 >> 1 <= (ulong)(lVar16 * -0x3333333333333333)) {
        uVar2 = uVar22;
      }
      if (uVar2 == 0) {
        lVar16 = 0;
      }
      else {
        lVar16 = (**(code **)(**(long **)(param_1 + 0x328) + 0x10))
                           (*(long **)(param_1 + 0x328),uVar2 * 0x28,8);
        if (lVar16 == 0) {
          (**(code **)(**(long **)(param_1 + 0x328) + 0xe8))();
        }
      }
      lVar14 = lVar16 + lVar19 * 8;
      puVar28 = (undefined8 *)(lVar14 + 0x10);
      lVar19 = uVar26 * 0x28 + lVar19 * -8;
      do {
        uVar29 = *(undefined8 *)(param_1 + 0x328);
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          puVar28[-2] = 0;
          puVar28[-1] = &DAT_cbf29ce484222645;
          puVar28[2] = 0;
          *puVar28 = &DAT_03c886bc;
          puVar28[1] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02ada7ec;
          *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar29;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          puVar28[2] = 0;
          puVar28[-2] = 0;
          puVar28[-1] = &DAT_cbf29ce484222645;
          *puVar28 = &DAT_03c886bc;
          puVar28[1] = 0;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        puVar28 = puVar28 + 5;
        lVar19 = lVar19 + -0x28;
      } while (lVar19 != 0);
      lVar19 = *(long *)(param_1 + 0x310);
      lVar9 = *(long *)(param_1 + 0x318);
      lVar8 = lVar14;
      if (lVar9 == lVar19) {
        lVar8 = lVar19;
      }
      else {
        do {
          uVar29 = *(undefined8 *)(param_1 + 0x328);
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar10 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar10 != 0) {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02ada7ec;
            *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar29;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          }
          *(undefined8 *)(lVar8 + -0x28) = *(undefined8 *)(lVar9 + -0x28);
          *(undefined8 *)(lVar8 + -0x20) = *(undefined8 *)(lVar9 + -0x20);
          *(undefined8 *)(lVar8 + -0x18) = *(undefined8 *)(lVar9 + -0x18);
          *(undefined8 *)(lVar8 + -0x10) = *(undefined8 *)(lVar9 + -0x10);
          uVar29 = *(undefined8 *)(lVar9 + -8);
          *(undefined8 *)(lVar9 + -8) = 0;
          lVar14 = lVar8 + -0x28;
          lVar9 = lVar9 + -0x28;
          *(undefined8 *)(lVar8 + -8) = uVar29;
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
          lVar8 = lVar14;
        } while (lVar19 != lVar9);
        lVar19 = *(long *)(param_1 + 0x318);
        lVar8 = *(long *)(param_1 + 0x310);
      }
      *(ulong *)(param_1 + 0x318) = lVar16 + uVar26 * 0x28;
      lVar9 = *(long *)(param_1 + 800);
      *(long *)(param_1 + 0x310) = lVar14;
      *(ulong *)(param_1 + 800) = lVar16 + uVar2 * 0x28;
      while (lVar19 != lVar8) {
        plVar27 = (long *)(lVar19 + -8);
        lVar19 = lVar19 + -0x28;
        if ((long *)*plVar27 != (long *)0x0) {
          (**(code **)(*(long *)*plVar27 + 0x20))();
        }
      }
      if (lVar8 != 0) {
        plVar27 = *(long **)(param_1 + 0x328);
        lVar9 = lVar9 - lVar8;
        uVar26 = (**(code **)(*plVar27 + 0xf8))(plVar27);
        if (((uVar26 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
          (**(code **)(*plVar27 + 0x18))(plVar27,lVar8,lVar9,8);
        }
        else {
          FUN_00c48fe8(plVar27,lVar8,lVar9,8);
        }
      }
    }
    else {
      lVar14 = lVar16;
      if (uVar22 != 0) {
        lVar14 = lVar16 + uVar22 * 0x28;
        puVar28 = (undefined8 *)(lVar16 + 0x10);
        lVar16 = uVar26 * 0x28 + lVar19 * -8;
        do {
          uVar29 = *(undefined8 *)(param_1 + 0x328);
          if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0))
          {
            FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
            FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
            __cxa_guard_release(&DAT_04865a38);
          }
          lVar19 = nn::os::GetTlsValue(DAT_04865a30);
          if (lVar19 == 0) {
            puVar28[-2] = 0;
            puVar28[-1] = &DAT_cbf29ce484222645;
            puVar28[2] = 0;
            *puVar28 = &DAT_03c886bc;
            puVar28[1] = 0;
          }
          else {
            if (0xf < *(ulong *)(lVar19 + 0x80)) {
LAB_02ada7ec:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(undefined8 *)(lVar19 + *(ulong *)(lVar19 + 0x80) * 8) = uVar29;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + 1;
            puVar28[2] = 0;
            puVar28[-2] = 0;
            puVar28[-1] = &DAT_cbf29ce484222645;
            *puVar28 = &DAT_03c886bc;
            puVar28[1] = 0;
            *(long *)(lVar19 + 0x80) = *(long *)(lVar19 + 0x80) + -1;
          }
          puVar28 = puVar28 + 5;
          lVar16 = lVar16 + -0x28;
        } while (lVar16 != 0);
      }
      *(long *)(param_1 + 0x318) = lVar14;
    }
  }
  else if (uVar26 < (ulong)(lVar19 * -0x3333333333333333)) {
    lVar14 = lVar14 + uVar26 * 0x28;
    while (lVar14 != lVar16) {
      plVar27 = (long *)(lVar16 + -8);
      lVar16 = lVar16 + -0x28;
      if ((long *)*plVar27 != (long *)0x0) {
        (**(code **)(*(long *)*plVar27 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x318) = lVar14;
  }
  puVar3 = PTR_LAB_047d5600;
  if (0 < (int)uVar25) {
    lVar16 = 0;
    uVar26 = 0;
    do {
      local_118 = &DAT_fbec41851566601b;
      local_100 = (long *)0x0;
      local_110 = "values";
      local_108 = 6;
      FUN_00e90ee0(&local_90,param_3,&local_118,uVar26 & 0xffffffff);
      if (local_100 != (long *)0x0) {
        (**(code **)(*local_100 + 0x20))();
      }
      lVar14 = *(long *)(param_1 + 0x310);
      if ((ulong)((*(long *)(param_1 + 0x318) - lVar14 >> 3) * -0x3333333333333333) <= uVar26) {
LAB_02ada7f0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      if ((local_88 == (int *)0x0) || (*(ushort *)((long)local_88 - (long)*local_88) < 7))
      goto LAB_02ada6ec;
      uVar15 = ((ushort *)((long)local_88 - (long)*local_88))[3];
      if ((ulong)uVar15 != 0) {
        puVar7 = (uint *)((long)local_88 + (ulong)uVar15);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        local_118 = "mission_type";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if ((puVar7 != (uint *)0x0) && (local_90 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if (uVar15 < 0xb) {
              uVar23 = 0;
LAB_02ada4ec:
              uVar15 = 0;
            }
            else {
              uVar23 = 0;
              if ((ulong)puVar18[5] != 0) {
                uVar23 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
              }
              if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ada4ec;
              uVar15 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
            }
            if ((uVar23 < *(ushort *)((long)local_90 - (long)*local_90)) &&
               (uVar22 = (ulong)*(ushort *)(((long)local_90 - (long)*local_90) + (ulong)uVar23),
               uVar22 != 0)) {
              uVar15 = (ushort)*(undefined4 *)((long)local_90 + uVar22);
            }
            goto LAB_02ada510;
          }
          if ((0xc < uVar15) && ((ulong)puVar18[6] != 0)) {
            uVar15 = (ushort)*(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
            goto LAB_02ada510;
          }
        }
LAB_02ada6ec:
        uVar15 = 0;
      }
LAB_02ada510:
      *(ushort *)(lVar14 + lVar16) = uVar15;
      if ((local_88 == (int *)0x0) || (*(ushort *)((long)local_88 - (long)*local_88) < 7))
      goto LAB_02ada70c;
      uVar22 = (ulong)((ushort *)((long)local_88 - (long)*local_88))[3];
      uVar13 = 0;
      if (uVar22 != 0) {
        puVar7 = (uint *)((long)local_88 + uVar22);
        puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
        local_118 = "variation";
        puVar7 = bsearch(&local_118,puVar7 + 1,(ulong)*puVar7,4,(__compar_fn_t)puVar3);
        if ((puVar7 != (uint *)0x0) && (local_90 != (int *)0x0)) {
          piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
          puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
          uVar15 = *puVar18;
          if (uVar15 < 7) {
            piVar24 = (int *)0x0;
          }
          else {
            piVar24 = (int *)0x0;
            if ((ulong)puVar18[3] != 0) {
              puVar7 = (uint *)((long)piVar1 + (ulong)puVar18[3]);
              piVar24 = (int *)((long)puVar7 + (ulong)*puVar7);
            }
          }
          if ((*(ushort *)((long)piVar24 - (long)*piVar24) < 5) ||
             (uVar22 = (ulong)((ushort *)((long)piVar24 - (long)*piVar24))[2], uVar22 == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (long)*(char *)((long)piVar24 + uVar22) & 0xffffffff;
          }
          if (*(long *)(puVar4 + uVar22 * 8) == 4) {
            if (uVar15 < 0xb) {
              uVar23 = 0;
LAB_02ada610:
              uVar13 = 0;
            }
            else {
              uVar23 = 0;
              if ((ulong)puVar18[5] != 0) {
                uVar23 = (uint)*(ushort *)((long)piVar1 + (ulong)puVar18[5]);
              }
              if ((uVar15 < 0xd) || ((ulong)puVar18[6] == 0)) goto LAB_02ada610;
              uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
            }
            if ((uVar23 < *(ushort *)((long)local_90 - (long)*local_90)) &&
               (uVar22 = (ulong)*(ushort *)(((long)local_90 - (long)*local_90) + (ulong)uVar23),
               uVar22 != 0)) {
              uVar13 = *(undefined4 *)((long)local_90 + uVar22);
            }
            goto LAB_02ada634;
          }
          if ((0xc < uVar15) && ((ulong)puVar18[6] != 0)) {
            uVar13 = *(undefined4 *)((long)piVar1 + (ulong)puVar18[6]);
            goto LAB_02ada634;
          }
        }
LAB_02ada70c:
        uVar13 = 0;
      }
LAB_02ada634:
      lVar14 = lVar14 + lVar16;
      *(undefined4 *)(lVar14 + 4) = uVar13;
      local_c8 = 0xc2e20ce5bc3f5b9e;
      local_c0 = &DAT_03c6df4b;
      local_b8 = 4;
      local_b0 = (long *)0x0;
      FUN_00cee868(&local_118,&local_90,&local_c8);
      *(char **)(lVar14 + 8) = local_118;
      *(char **)(lVar14 + 0x10) = local_110;
      plVar27 = *(long **)(lVar14 + 0x20);
      *(undefined8 *)(lVar14 + 0x18) = local_108;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      if (plVar27 != (long *)0x0) {
        (**(code **)(*plVar27 + 0x20))();
      }
      *(long **)(lVar14 + 0x20) = local_100;
      local_100 = (long *)0x0;
      if (local_b0 != (long *)0x0) {
        (**(code **)(*local_b0 + 0x20))();
      }
      lVar16 = lVar16 + 0x28;
      uVar26 = uVar26 + 1;
    } while ((ulong)uVar25 * 0x28 != lVar16);
  }
  FUN_02ae4e00(*(undefined8 *)(param_1 + 0x310),*(undefined8 *)(param_1 + 0x318));
  memset((void *)((ulong)&local_118 | 2),0,0x48);
  *(undefined2 *)(param_1 + 0x178) = 0;
  memcpy((void *)(param_1 + 0x17a),&local_118,0x4a);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_02ada808(param_1);
  }
  return;
}


