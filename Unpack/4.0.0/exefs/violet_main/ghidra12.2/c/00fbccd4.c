/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbccd4; name: FUN_00fbccd4
 */


void FUN_00fbccd4(long param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  int local_174;
  int *local_170;
  int *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int *local_150;
  int *piStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [64];
  char *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  local_120 = *(undefined8 *)(param_1 + 0x380);
  local_118 = *(undefined8 *)(param_1 + 0x388);
  uStack_110 = *(undefined8 *)(param_1 + 0x390);
  FUN_00fb9f24(auStack_108,param_1 + 0x398);
  FUN_00fb9f24(auStack_c8,param_1 + 0x3d8);
  FUN_00fb4dd0(auStack_138,&local_120);
  *(undefined8 *)(param_1 + 0x428) = *(undefined8 *)(param_1 + 0x420);
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  local_70 = (long *)0x0;
  piVar4 = (int *)FUN_00efa07c(auStack_138,&local_88);
  if (piVar4 == (int *)0x0) {
    local_174 = 0;
  }
  else {
    local_174 = *piVar4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_174 != 0) {
    iVar15 = 0;
    do {
      local_78 = 6;
      local_70 = (long *)0x0;
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      FUN_00e90ee0(&local_150,auStack_138,&local_88,iVar15);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_170 = local_150;
      local_168 = piStack_148;
      local_160 = local_140;
      local_158 = 0;
      local_88 = (char *)0xe26a017a411a4e7d;
      local_70 = (long *)0x0;
      local_80 = "LengthType";
      local_78 = 10;
      piVar4 = (int *)FUN_00d27b5c(&local_170,&local_88);
      if ((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) {
        uVar7 = 0;
      }
      else {
        uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3];
        uVar7 = 0;
        if (uVar8 != 0) {
          uVar7 = *(undefined4 *)((long)piVar4 + uVar8);
        }
      }
      local_158 = CONCAT44(local_158._4_4_,uVar7);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if ((local_168 == (int *)0x0) || (*(ushort *)((long)local_168 - (long)*local_168) < 7))
      goto LAB_00fbd124;
      uVar8 = (ulong)((ushort *)((long)local_168 - (long)*local_168))[3];
      uVar7 = 0;
      if (uVar8 != 0) {
        puVar5 = (uint *)((long)local_168 + uVar8);
        puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
        local_88 = "LoopNum";
        puVar5 = bsearch(&local_88,puVar5 + 1,(ulong)*puVar5,4,(__compar_fn_t)PTR_LAB_047d5600);
        if ((puVar5 != (uint *)0x0) && (local_170 != (int *)0x0)) {
          piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
          puVar11 = (ushort *)((long)piVar4 - (long)*piVar4);
          uVar2 = *puVar11;
          if (uVar2 < 7) {
            piVar14 = (int *)0x0;
          }
          else {
            piVar14 = (int *)0x0;
            if ((ulong)puVar11[3] != 0) {
              puVar5 = (uint *)((long)piVar4 + (ulong)puVar11[3]);
              piVar14 = (int *)((long)puVar5 + (ulong)*puVar5);
            }
          }
          if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
             (uVar8 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar8 == 0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (long)*(char *)((long)piVar14 + uVar8) & 0xffffffff;
          }
          if (*(long *)(PTR_DAT_047d5608 + uVar8 * 8) == 4) {
            if (uVar2 < 0xb) {
              uVar13 = 0;
LAB_00fbd168:
              uVar7 = 0;
            }
            else {
              uVar13 = 0;
              if ((ulong)puVar11[5] != 0) {
                uVar13 = (uint)*(ushort *)((long)piVar4 + (ulong)puVar11[5]);
              }
              if ((uVar2 < 0xd) || ((ulong)puVar11[6] == 0)) goto LAB_00fbd168;
              uVar7 = *(undefined4 *)((long)piVar4 + (ulong)puVar11[6]);
            }
            if ((uVar13 < *(ushort *)((long)local_170 - (long)*local_170)) &&
               (uVar8 = (ulong)*(ushort *)(((long)local_170 - (long)*local_170) + (ulong)uVar13),
               uVar8 != 0)) {
              uVar7 = *(undefined4 *)((long)local_170 + uVar8);
            }
            goto LAB_00fbcf40;
          }
          if ((0xc < uVar2) && ((ulong)puVar11[6] != 0)) {
            uVar7 = *(undefined4 *)((long)piVar4 + (ulong)puVar11[6]);
            goto LAB_00fbcf40;
          }
        }
LAB_00fbd124:
        uVar7 = 0;
      }
LAB_00fbcf40:
      local_158 = CONCAT44(uVar7,(undefined4)local_158);
      if (*(long *)(param_1 + 0x428) == *(long *)(param_1 + 0x430)) {
        uVar12 = *(ulong *)(param_1 + 0x440);
        lVar16 = *(long *)(param_1 + 0x428) - *(long *)(param_1 + 0x420) >> 3;
        uVar8 = lVar16 + 1;
        if (0x7ffffffffffffffe < uVar12) {
          uVar12 = 0x7fffffffffffffff;
        }
        if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = *(long *)(param_1 + 0x430) - *(long *)(param_1 + 0x420);
        uVar10 = lVar9 >> 2;
        if (uVar8 <= uVar10) {
          uVar8 = uVar10;
        }
        if (uVar12 >> 1 <= (ulong)(lVar9 >> 3)) {
          uVar8 = uVar12;
        }
        if (uVar8 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (**(code **)(**(long **)(param_1 + 0x438) + 0x10))
                            (*(long **)(param_1 + 0x438),uVar8 << 3,4);
          if (lVar9 == 0) {
            (**(code **)(**(long **)(param_1 + 0x438) + 0xe8))();
          }
        }
        puVar1 = (undefined8 *)(lVar9 + lVar16 * 8);
        uVar17 = *(undefined8 *)(param_1 + 0x438);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar16 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar16 == 0) {
          *puVar1 = local_158;
        }
        else {
          if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_00fbd2c4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = uVar17;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
          *puVar1 = local_158;
          *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
        }
        lVar19 = *(long *)(param_1 + 0x420);
        lVar16 = *(long *)(param_1 + 0x428);
        puVar18 = puVar1;
        if (lVar16 != lVar19) {
          do {
            uVar17 = *(undefined8 *)(param_1 + 0x438);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar6 == 0) {
              puVar18[-1] = *(undefined8 *)(lVar16 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00fbd2c4;
              *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar17;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              puVar18[-1] = *(undefined8 *)(lVar16 + -8);
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            }
            lVar16 = lVar16 + -8;
            puVar18 = puVar18 + -1;
          } while (lVar19 != lVar16);
          lVar19 = *(long *)(param_1 + 0x420);
        }
        *(undefined8 **)(param_1 + 0x428) = puVar1 + 1;
        lVar16 = *(long *)(param_1 + 0x430);
        *(undefined8 **)(param_1 + 0x420) = puVar18;
        *(ulong *)(param_1 + 0x430) = lVar9 + uVar8 * 8;
        if (lVar19 != 0) {
          plVar20 = *(long **)(param_1 + 0x438);
          lVar16 = lVar16 - lVar19;
          uVar8 = (**(code **)(*plVar20 + 0xf8))(plVar20);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar20 + 0x18))(plVar20,lVar19,lVar16,4);
          }
          else {
            FUN_00c48fe8(plVar20,lVar19,lVar16,4);
          }
        }
      }
      else {
        FUN_00fbd2dc((long *)(param_1 + 0x420),&local_158);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != local_174);
  }
  FUN_00db239c(auStack_c8);
  FUN_00db239c(auStack_108);
  return;
}


