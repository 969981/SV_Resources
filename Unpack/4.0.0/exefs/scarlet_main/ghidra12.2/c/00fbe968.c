/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fbe968; name: FUN_00fbe968
 */


void FUN_00fbe968(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [64];
  undefined1 auStack_100 [64];
  undefined8 local_c0;
  char *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  undefined1 auStack_a0 [8];
  int *local_98;
  char *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  local_158 = *(undefined8 *)(param_1 + 0x788);
  local_150 = *(undefined8 *)(param_1 + 0x790);
  uStack_148 = *(undefined8 *)(param_1 + 0x798);
  FUN_00fb9f24(auStack_140,param_1 + 0x7a0);
  FUN_00fb9f24(auStack_100,param_1 + 0x7e0);
  FUN_00fb4dd0(auStack_170,&local_158);
  *(undefined8 *)(param_1 + 0x830) = *(undefined8 *)(param_1 + 0x828);
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  local_70 = (long *)0x0;
  piVar3 = (int *)FUN_00efa07c(auStack_170,&local_88);
  if (piVar3 == (int *)0x0) {
    iVar22 = 0;
  }
  else {
    iVar22 = *piVar3;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (iVar22 != 0) {
    iVar17 = 0;
    puVar20 = (undefined8 *)((ulong)&local_1a8 | 4);
    do {
      local_78 = 6;
      local_70 = (long *)0x0;
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      FUN_00e90ee0(&local_188,auStack_170,&local_88,iVar17);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_1a0 = 0;
      local_198 = 0;
      local_1c0 = local_188;
      uStack_1b8 = uStack_180;
      local_1b0 = local_178;
      local_1a8 = 0;
      local_88 = (char *)0x8029861655f5d3d1;
      local_190 = 0;
      local_70 = (long *)0x0;
      local_80 = "Category";
      local_78 = 8;
      piVar3 = (int *)FUN_00d27b5c(&local_1c0,&local_88);
      if ((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) {
        uVar1 = 0;
      }
      else {
        uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3];
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = *(undefined4 *)((long)piVar3 + uVar6);
        }
      }
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar1);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_a8 = (long *)0x0;
      local_c0 = 0x2e0abf0a3bd21106;
      local_b8 = "NatureList";
      uStack_b0 = 10;
      FUN_00fb4c10(auStack_a0,&local_1c0,&local_c0);
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = 0;
      if (local_98 != (int *)0x0) {
        if ((*(ushort *)((long)local_98 - (long)*local_98) < 7) ||
           (uVar6 = (ulong)((ushort *)((long)local_98 - (long)*local_98))[3], uVar6 == 0)) {
          puVar4 = (uint *)0x0;
        }
        else {
          puVar4 = (uint *)((long)local_98 + uVar6);
          puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
        }
        local_88 = "Natures";
        puVar4 = bsearch(&local_88,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
        if (puVar4 != (uint *)0x0) {
          piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
          puVar8 = (ushort *)((long)piVar3 - (long)*piVar3);
          if (*puVar8 < 7) {
            piVar13 = (int *)0x0;
          }
          else {
            piVar13 = (int *)0x0;
            if ((ulong)puVar8[3] != 0) {
              puVar4 = (uint *)((long)piVar3 + (ulong)puVar8[3]);
              piVar13 = (int *)((long)puVar4 + (ulong)*puVar4);
            }
          }
          if (((4 < *(ushort *)((long)piVar13 - (long)*piVar13)) &&
              (uVar6 = (ulong)((ushort *)((long)piVar13 - (long)*piVar13))[2], uVar6 != 0)) &&
             (*(char *)((long)piVar13 + uVar6) == '\x11')) {
            piVar3 = (int *)((long)((long)piVar3 + (ulong)puVar8[3]) +
                            (ulong)*(uint *)((long)piVar3 + (ulong)puVar8[3]));
            if (((10 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
                (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[5], uVar6 != 0)) &&
               (uVar6 = (ulong)*(ushort *)((long)piVar3 + uVar6), uVar6 != 0)) {
              uVar18 = 0;
              do {
                local_88 = (char *)0x30ce0f9c7a5bbf9b;
                local_80 = "Natures";
                local_78 = 7;
                local_70 = (long *)0x0;
                uVar1 = FUN_00dbb83c(auStack_a0,&local_88,uVar18 & 0xffffffff);
                *(undefined4 *)((long)puVar20 + uVar18 * 4) = uVar1;
                if (local_70 != (long *)0x0) {
                  (**(code **)(*local_70 + 0x20))();
                }
                uVar18 = uVar18 + 1;
              } while (uVar6 != uVar18);
            }
          }
        }
      }
      if (local_a8 != (long *)0x0) {
        (**(code **)(*local_a8 + 0x20))();
      }
      puVar14 = *(undefined8 **)(param_1 + 0x830);
      if (puVar14 == *(undefined8 **)(param_1 + 0x838)) {
        uVar6 = *(ulong *)(param_1 + 0x848);
        lVar9 = (long)puVar14 - *(long *)(param_1 + 0x828) >> 2;
        if (0x7ffffffffffffffe < uVar6) {
          uVar6 = 0x7fffffffffffffff;
        }
        uVar18 = lVar9 * 0x6db6db6db6db6db7 + 1;
        if (uVar6 < uVar18) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)*(undefined8 **)(param_1 + 0x838) - *(long *)(param_1 + 0x828) >> 2;
        uVar11 = lVar7 * -0x2492492492492492;
        if (uVar18 <= uVar11) {
          uVar18 = uVar11;
        }
        if (uVar6 >> 1 <= (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
          uVar18 = uVar6;
        }
        if (uVar18 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0x840) + 0x10))
                            (*(long **)(param_1 + 0x840),uVar18 * 0x1c,4);
          if (lVar7 == 0) {
            (**(code **)(**(long **)(param_1 + 0x840) + 0xe8))();
          }
        }
        puVar14 = (undefined8 *)(lVar7 + lVar9 * 4);
        uVar15 = *(undefined8 *)(param_1 + 0x840);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 == 0) {
          *(undefined4 *)(puVar14 + 3) = local_190;
          *puVar14 = local_1a8;
          puVar14[1] = local_1a0;
          puVar14[2] = local_198;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_00fbf104:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar15;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          *(undefined4 *)(puVar14 + 3) = local_190;
          puVar14[1] = local_1a0;
          puVar14[2] = local_198;
          *puVar14 = local_1a8;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar9 = *(long *)(param_1 + 0x828);
        lVar21 = *(long *)(param_1 + 0x830);
        puVar16 = puVar14;
        if (lVar21 != lVar9) {
          do {
            uVar15 = *(undefined8 *)(param_1 + 0x840);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar5 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar5 == 0) {
              uVar15 = *(undefined8 *)(lVar21 + -0x1c);
              uVar10 = *(undefined8 *)(lVar21 + -0x14);
              uVar12 = *(undefined8 *)(lVar21 + -0xc);
              *(undefined4 *)((long)puVar16 + -4) = *(undefined4 *)(lVar21 + -4);
              *(undefined8 *)((long)puVar16 + -0xc) = uVar12;
              *(undefined8 *)((long)puVar16 + -0x14) = uVar10;
              *(undefined8 *)((long)puVar16 + -0x1c) = uVar15;
            }
            else {
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00fbf104;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar15;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              uVar15 = *(undefined8 *)(lVar21 + -0x1c);
              uVar10 = *(undefined8 *)(lVar21 + -0x14);
              uVar12 = *(undefined8 *)(lVar21 + -0xc);
              *(undefined4 *)((long)puVar16 + -4) = *(undefined4 *)(lVar21 + -4);
              *(undefined8 *)((long)puVar16 + -0xc) = uVar12;
              *(undefined8 *)((long)puVar16 + -0x14) = uVar10;
              *(undefined8 *)((long)puVar16 + -0x1c) = uVar15;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            }
            lVar21 = lVar21 + -0x1c;
            puVar16 = (undefined8 *)((long)puVar16 + -0x1c);
          } while (lVar9 != lVar21);
          lVar9 = *(long *)(param_1 + 0x828);
        }
        *(long *)(param_1 + 0x830) = (long)puVar14 + 0x1c;
        lVar21 = *(long *)(param_1 + 0x838);
        *(undefined8 **)(param_1 + 0x828) = puVar16;
        *(ulong *)(param_1 + 0x838) = lVar7 + uVar18 * 0x1c;
        if (lVar9 != 0) {
          plVar19 = *(long **)(param_1 + 0x840);
          lVar21 = lVar21 - lVar9;
          uVar6 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar9,lVar21,4);
          }
          else {
            FUN_00c48fe8(plVar19,lVar9,lVar21,4);
          }
        }
      }
      else {
        uVar15 = *(undefined8 *)(param_1 + 0x840);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar9 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar9 == 0) {
          *(undefined4 *)(puVar14 + 3) = local_190;
          *puVar14 = local_1a8;
          puVar14[1] = local_1a0;
          puVar14[2] = local_198;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_00fbf104;
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar15;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          *(undefined4 *)(puVar14 + 3) = local_190;
          puVar14[1] = local_1a0;
          puVar14[2] = local_198;
          *puVar14 = local_1a8;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        *(long *)(param_1 + 0x830) = (long)puVar14 + 0x1c;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 != iVar22);
  }
  FUN_00db239c(auStack_100);
  FUN_00db239c(auStack_140);
  return;
}


