/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc0510; name: FUN_00fc0510
 */


void FUN_00fc0510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  long *plVar15;
  undefined4 *puVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lVar20;
  int local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [64];
  undefined1 auStack_c8 [64];
  undefined1 *local_88;
  char *local_80;
  undefined8 local_78;
  long *local_70;
  
  local_120 = *(undefined8 *)(param_1 + 0x630);
  local_118 = *(undefined8 *)(param_1 + 0x638);
  uStack_110 = *(undefined8 *)(param_1 + 0x640);
  FUN_00fb9f24(auStack_108,param_1 + 0x648);
  FUN_00fb9f24(auStack_c8,param_1 + 0x688);
  FUN_00fb4dd0(auStack_138,&local_120);
  *(undefined8 *)(param_1 + 0x6d8) = *(undefined8 *)(param_1 + 0x6d0);
  local_88 = &DAT_fbec41851566601b;
  local_80 = "values";
  local_78 = 6;
  local_70 = (long *)0x0;
  piVar4 = (int *)FUN_00efa07c(auStack_138,&local_88);
  if (piVar4 == (int *)0x0) {
    local_17c = 0;
  }
  else {
    local_17c = *piVar4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_17c != 0) {
    iVar11 = 0;
    do {
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      local_78 = 6;
      local_70 = (long *)0x0;
      FUN_00e90ee0(&local_150,auStack_138,&local_88,iVar11);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_168 = local_150;
      uStack_160 = uStack_148;
      local_158 = local_140;
      local_88 = (undefined1 *)0x8029861655f5d3d1;
      local_70 = (long *)0x0;
      local_80 = "Category";
      local_78 = 8;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        local_16c = 0;
      }
      else {
        local_16c = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x529471c5b65bdb97;
      local_80 = "GroupA";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        local_170 = 0;
      }
      else {
        local_170 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x529472c5b65bdd4a;
      local_80 = "GroupB";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        local_174 = 0;
      }
      else {
        local_174 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x529473c5b65bdefd;
      local_80 = "GroupC";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        local_178 = 0;
      }
      else {
        local_178 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x52946cc5b65bd318;
      local_80 = "GroupD";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x52946dc5b65bd4cb;
      local_80 = "GroupE";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x52946ec5b65bd67e;
      local_80 = "GroupF";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x52946fc5b65bd831;
      local_80 = "GroupG";
      local_78 = 6;
      piVar4 = (int *)FUN_00d27b5c(&local_168,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar6 == 0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(undefined4 *)((long)piVar4 + uVar6);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      puVar16 = *(undefined4 **)(param_1 + 0x6d8);
      if (puVar16 == *(undefined4 **)(param_1 + 0x6e0)) {
        uVar9 = *(ulong *)(param_1 + 0x6f0);
        lVar17 = (long)puVar16 - *(long *)(param_1 + 0x6d0) >> 5;
        uVar6 = lVar17 + 1;
        if (0x7ffffffffffffffe < uVar9) {
          uVar9 = 0x7fffffffffffffff;
        }
        if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)*(undefined4 **)(param_1 + 0x6e0) - *(long *)(param_1 + 0x6d0);
        uVar8 = lVar7 >> 4;
        if (uVar6 <= uVar8) {
          uVar6 = uVar8;
        }
        if (uVar9 >> 1 <= (ulong)(lVar7 >> 5)) {
          uVar6 = uVar9;
        }
        if (uVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0x6e8) + 0x10))
                            (*(long **)(param_1 + 0x6e8),uVar6 << 5,4);
          if (lVar7 == 0) {
            (**(code **)(**(long **)(param_1 + 0x6e8) + 0xe8))();
          }
        }
        uVar10 = *(undefined8 *)(param_1 + 0x6e8);
        puVar16 = (undefined4 *)(lVar7 + lVar17 * 0x20);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar17 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar17 == 0) {
          *puVar16 = local_16c;
          puVar16[1] = local_170;
          puVar16[2] = local_174;
          puVar16[3] = local_178;
          puVar16[4] = uVar12;
          puVar16[5] = uVar18;
          puVar16[6] = uVar14;
          puVar16[7] = uVar19;
        }
        else {
          if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_00fc0dd0:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar10;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          *puVar16 = local_16c;
          puVar16[1] = local_170;
          puVar16[2] = local_174;
          puVar16[3] = local_178;
          puVar16[4] = uVar12;
          puVar16[5] = uVar18;
          puVar16[6] = uVar14;
          puVar16[7] = uVar19;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        lVar20 = *(long *)(param_1 + 0x6d0);
        lVar17 = *(long *)(param_1 + 0x6d8);
        puVar13 = puVar16;
        if (lVar17 != lVar20) {
          do {
            uVar10 = *(undefined8 *)(param_1 + 0x6e8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar5 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar5 == 0) {
              uVar10 = *(undefined8 *)(lVar17 + -0x20);
              uVar1 = *(undefined8 *)(lVar17 + -0x18);
              uVar2 = *(undefined8 *)(lVar17 + -8);
              *(undefined8 *)(puVar13 + -4) = *(undefined8 *)(lVar17 + -0x10);
              *(undefined8 *)(puVar13 + -2) = uVar2;
              *(undefined8 *)(puVar13 + -8) = uVar10;
              *(undefined8 *)(puVar13 + -6) = uVar1;
            }
            else {
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00fc0dd0;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar10;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              uVar10 = *(undefined8 *)(lVar17 + -0x20);
              uVar1 = *(undefined8 *)(lVar17 + -0x18);
              uVar2 = *(undefined8 *)(lVar17 + -8);
              *(undefined8 *)(puVar13 + -4) = *(undefined8 *)(lVar17 + -0x10);
              *(undefined8 *)(puVar13 + -2) = uVar2;
              *(undefined8 *)(puVar13 + -8) = uVar10;
              *(undefined8 *)(puVar13 + -6) = uVar1;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            }
            lVar17 = lVar17 + -0x20;
            puVar13 = puVar13 + -8;
          } while (lVar20 != lVar17);
          lVar20 = *(long *)(param_1 + 0x6d0);
        }
        *(undefined4 **)(param_1 + 0x6d8) = puVar16 + 8;
        lVar17 = *(long *)(param_1 + 0x6e0);
        *(undefined4 **)(param_1 + 0x6d0) = puVar13;
        *(ulong *)(param_1 + 0x6e0) = lVar7 + uVar6 * 0x20;
        if (lVar20 != 0) {
          plVar15 = *(long **)(param_1 + 0x6e8);
          lVar17 = lVar17 - lVar20;
          uVar6 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,lVar17,4);
          }
          else {
            FUN_00c48fe8(plVar15,lVar20,lVar17,4);
          }
        }
      }
      else {
        uVar10 = *(undefined8 *)(param_1 + 0x6e8);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar17 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar17 == 0) {
          *puVar16 = local_16c;
          puVar16[1] = local_170;
          puVar16[2] = local_174;
          puVar16[3] = local_178;
          puVar16[4] = uVar12;
          puVar16[5] = uVar18;
          puVar16[6] = uVar14;
          puVar16[7] = uVar19;
        }
        else {
          if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_00fc0dd0;
          *(undefined8 *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar10;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
          *puVar16 = local_16c;
          puVar16[1] = local_170;
          puVar16[2] = local_174;
          puVar16[3] = local_178;
          puVar16[4] = uVar12;
          puVar16[5] = uVar18;
          puVar16[6] = uVar14;
          puVar16[7] = uVar19;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        *(undefined4 **)(param_1 + 0x6d8) = puVar16 + 8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != local_17c);
  }
  FUN_00db239c(auStack_c8);
  FUN_00db239c(auStack_108);
  return;
}


