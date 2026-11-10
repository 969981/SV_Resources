/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fbd3cc; name: FUN_00fbd3cc
 */


void FUN_00fbd3cc(long param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  int local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined2 local_154;
  undefined1 local_152;
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
  
  local_120 = *(undefined8 *)(param_1 + 0xa38);
  local_118 = *(undefined8 *)(param_1 + 0xa40);
  uStack_110 = *(undefined8 *)(param_1 + 0xa48);
  FUN_00fb9f24(auStack_108,param_1 + 0xa50);
  FUN_00fb9f24(auStack_c8,param_1 + 0xa90);
  FUN_00fb4dd0(auStack_138,&local_120);
  *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(param_1 + 0xad8);
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
    iVar12 = 0;
    do {
      local_88 = &DAT_fbec41851566601b;
      local_80 = "values";
      local_78 = 6;
      local_70 = (long *)0x0;
      FUN_00e90ee0(&local_150,auStack_138,&local_88,iVar12);
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_160 = local_140;
      local_170 = local_150;
      uStack_168 = uStack_148;
      local_88 = (undefined1 *)0x81316c1bb8af0852;
      local_152 = 0;
      local_154 = 0;
      local_80 = "ActionID";
      local_78 = 8;
      local_70 = (long *)0x0;
      piVar4 = (int *)FUN_00d27b5c(&local_170,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar8 == 0)) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)((long)piVar4 + uVar8);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x2b510f375e407c3d;
      local_80 = "OverwriteActionID";
      local_78 = 0x11;
      piVar4 = (int *)FUN_00d27b5c(&local_170,&local_88);
      if (((piVar4 == (int *)0x0) || (*(ushort *)((long)piVar4 - (long)*piVar4) < 7)) ||
         (uVar8 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[3], uVar8 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined4 *)((long)piVar4 + uVar8);
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      local_70 = (long *)0x0;
      local_88 = (undefined1 *)0x35c5363e6e49b704;
      local_80 = "IsPrioritize";
      local_78 = 0xc;
      bVar2 = FUN_00cf7518(&local_170,&local_88);
      bVar2 = bVar2 & 1;
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      puVar15 = *(undefined4 **)(param_1 + 0xae0);
      if (puVar15 == *(undefined4 **)(param_1 + 0xae8)) {
        uVar8 = *(ulong *)(param_1 + 0xaf8);
        lVar5 = (long)puVar15 - *(long *)(param_1 + 0xad8) >> 2;
        if (0x7ffffffffffffffe < uVar8) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar1 = lVar5 * -0x5555555555555555 + 1;
        if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = (long)*(undefined4 **)(param_1 + 0xae8) - *(long *)(param_1 + 0xad8) >> 2;
        uVar10 = lVar9 * 0x5555555555555556;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        if (uVar8 >> 1 <= (ulong)(lVar9 * -0x5555555555555555)) {
          uVar1 = uVar8;
        }
        if (uVar1 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (**(code **)(**(long **)(param_1 + 0xaf0) + 0x10))
                            (*(long **)(param_1 + 0xaf0),uVar1 * 0xc,4);
          if (lVar9 == 0) {
            (**(code **)(**(long **)(param_1 + 0xaf0) + 0xe8))();
          }
        }
        puVar15 = (undefined4 *)(lVar9 + lVar5 * 4);
        uVar16 = *(undefined8 *)(param_1 + 0xaf0);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          lVar5 = lVar9 + lVar5 * 4;
          *puVar15 = uVar13;
          *(undefined4 *)(lVar5 + 4) = uVar17;
          *(byte *)(lVar5 + 8) = bVar2;
          *(undefined1 *)((long)puVar15 + 0xb) = local_152;
          *(undefined2 *)((long)puVar15 + 9) = local_154;
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00fbda20;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar16;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          lVar5 = lVar9 + lVar5 * 4;
          *puVar15 = uVar13;
          *(undefined4 *)(lVar5 + 4) = uVar17;
          *(byte *)(lVar5 + 8) = bVar2;
          *(undefined1 *)((long)puVar15 + 0xb) = local_152;
          *(undefined2 *)((long)puVar15 + 9) = local_154;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar6 = *(long *)(param_1 + 0xad8);
        lVar5 = *(long *)(param_1 + 0xae0);
        puVar11 = puVar15;
        if (lVar5 != lVar6) {
          do {
            uVar16 = *(undefined8 *)(param_1 + 0xaf0);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar7 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar7 == 0) {
              uVar16 = *(undefined8 *)(lVar5 + -0xc);
              puVar11[-1] = *(undefined4 *)(lVar5 + -4);
              *(undefined8 *)(puVar11 + -3) = uVar16;
            }
            else {
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00fbda20;
              *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar16;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
              uVar16 = *(undefined8 *)(lVar5 + -0xc);
              puVar11[-1] = *(undefined4 *)(lVar5 + -4);
              *(undefined8 *)(puVar11 + -3) = uVar16;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            }
            lVar5 = lVar5 + -0xc;
            puVar11 = puVar11 + -3;
          } while (lVar6 != lVar5);
          lVar6 = *(long *)(param_1 + 0xad8);
        }
        *(undefined4 **)(param_1 + 0xae0) = puVar15 + 3;
        lVar5 = *(long *)(param_1 + 0xae8);
        *(undefined4 **)(param_1 + 0xad8) = puVar11;
        *(ulong *)(param_1 + 0xae8) = lVar9 + uVar1 * 0xc;
        if (lVar6 != 0) {
          plVar14 = *(long **)(param_1 + 0xaf0);
          lVar5 = lVar5 - lVar6;
          uVar8 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,lVar6,lVar5,4);
          }
          else {
            FUN_00c48fe8(plVar14,lVar6,lVar5,4);
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)(param_1 + 0xaf0);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          *puVar15 = uVar13;
          puVar15[1] = uVar17;
          *(byte *)(puVar15 + 2) = bVar2;
          *(undefined1 *)((long)puVar15 + 0xb) = local_152;
          *(undefined2 *)((long)puVar15 + 9) = local_154;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00fbda20:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar16;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          *puVar15 = uVar13;
          puVar15[1] = uVar17;
          *(byte *)(puVar15 + 2) = bVar2;
          *(undefined1 *)((long)puVar15 + 0xb) = local_152;
          *(undefined2 *)((long)puVar15 + 9) = local_154;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        *(undefined4 **)(param_1 + 0xae0) = puVar15 + 3;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 != local_174);
  }
  FUN_00db239c(auStack_c8);
  FUN_00db239c(auStack_108);
  return;
}


