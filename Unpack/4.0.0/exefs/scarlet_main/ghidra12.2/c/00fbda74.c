/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fbda74; name: FUN_00fbda74
 */


void FUN_00fbda74(long param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ushort *puVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  undefined4 *puVar21;
  float fVar22;
  int *local_178;
  int *local_170;
  undefined8 local_168;
  int *local_160;
  int *piStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [64];
  undefined1 auStack_d8 [64];
  char *local_98;
  char *local_90;
  undefined8 local_88;
  long *local_80;
  
  local_130 = *(undefined8 *)(param_1 + 0xb90);
  local_128 = *(undefined8 *)(param_1 + 0xb98);
  uStack_120 = *(undefined8 *)(param_1 + 0xba0);
  FUN_00fb9f24(auStack_118,param_1 + 0xba8);
  FUN_00fb9f24(auStack_d8,param_1 + 0xbe8);
  FUN_00fb4dd0(auStack_148,&local_130);
  *(undefined8 *)(param_1 + 0xc38) = *(undefined8 *)(param_1 + 0xc30);
  local_98 = &DAT_fbec41851566601b;
  local_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar3 = (int *)FUN_00efa07c(auStack_148,&local_98);
  if (piVar3 == (int *)0x0) {
    iVar20 = 0;
  }
  else {
    iVar20 = *piVar3;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (iVar20 != 0) {
    iVar13 = 0;
    do {
      local_88 = 6;
      local_80 = (long *)0x0;
      local_98 = &DAT_fbec41851566601b;
      local_90 = "values";
      FUN_00e90ee0(&local_160,auStack_148,&local_98,iVar13);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_178 = local_160;
      local_170 = piStack_158;
      local_168 = local_150;
      local_98 = (char *)0x45e350da1d34436d;
      local_80 = (long *)0x0;
      local_90 = "Type";
      local_88 = 4;
      piVar3 = (int *)FUN_00d27b5c(&local_178,&local_98);
      if (((piVar3 == (int *)0x0) || (*(ushort *)((long)piVar3 - (long)*piVar3) < 7)) ||
         (uVar6 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar6 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined4 *)((long)piVar3 + uVar6);
      }
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      fVar22 = 0.0;
      if (local_170 != (int *)0x0) {
        fVar22 = 0.0;
        if (6 < *(ushort *)((long)local_170 - (long)*local_170)) {
          uVar6 = (ulong)((ushort *)((long)local_170 - (long)*local_170))[3];
          fVar22 = 0.0;
          if (uVar6 != 0) {
            puVar4 = (uint *)((long)local_170 + uVar6);
            puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
            local_98 = "Probability";
            puVar4 = bsearch(&local_98,puVar4 + 1,(ulong)*puVar4,4,(__compar_fn_t)PTR_LAB_047d5600);
            if (puVar4 == (uint *)0x0) {
              fVar22 = 0.0;
            }
            else {
              fVar22 = 0.0;
              if (local_178 != (int *)0x0) {
                piVar3 = (int *)((long)puVar4 + (ulong)*puVar4);
                puVar9 = (ushort *)((long)piVar3 - (long)*piVar3);
                uVar1 = *puVar9;
                if (uVar1 < 7) {
                  piVar12 = (int *)0x0;
                }
                else {
                  piVar12 = (int *)0x0;
                  if ((ulong)puVar9[3] != 0) {
                    puVar4 = (uint *)((long)piVar3 + (ulong)puVar9[3]);
                    piVar12 = (int *)((long)puVar4 + (ulong)*puVar4);
                  }
                }
                if ((*(ushort *)((long)piVar12 - (long)*piVar12) < 5) ||
                   (uVar6 = (ulong)((ushort *)((long)piVar12 - (long)*piVar12))[2], uVar6 == 0)) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = (long)*(char *)((long)piVar12 + uVar6) & 0xffffffff;
                }
                if (*(long *)(PTR_DAT_047d5608 + uVar6 * 8) == 4) {
                  if (uVar1 < 0xb) {
                    uVar11 = 0;
LAB_00fbdccc:
                    fVar22 = 0.0;
                  }
                  else {
                    uVar11 = 0;
                    if ((ulong)puVar9[5] != 0) {
                      uVar11 = (uint)*(ushort *)((long)piVar3 + (ulong)puVar9[5]);
                    }
                    if ((uVar1 < 0xf) || ((ulong)puVar9[7] == 0)) goto LAB_00fbdccc;
                    fVar22 = (float)*(double *)((long)piVar3 + (ulong)puVar9[7]);
                  }
                  if ((uVar11 < *(ushort *)((long)local_178 - (long)*local_178)) &&
                     (uVar6 = (ulong)*(ushort *)
                                      (((long)local_178 - (long)*local_178) + (ulong)uVar11),
                     uVar6 != 0)) {
                    fVar22 = *(float *)((long)local_178 + uVar6);
                  }
                }
                else {
                  fVar22 = 0.0;
                  if (0xe < uVar1) {
                    fVar22 = 0.0;
                    if ((ulong)puVar9[7] != 0) {
                      fVar22 = (float)*(double *)((long)piVar3 + (ulong)puVar9[7]);
                    }
                  }
                }
              }
            }
          }
        }
      }
      puVar14 = *(undefined4 **)(param_1 + 0xc38);
      if (puVar14 == *(undefined4 **)(param_1 + 0xc40)) {
        uVar10 = *(ulong *)(param_1 + 0xc50);
        lVar15 = (long)puVar14 - *(long *)(param_1 + 0xc30) >> 3;
        uVar6 = lVar15 + 1;
        if (0x7ffffffffffffffe < uVar10) {
          uVar10 = 0x7fffffffffffffff;
        }
        if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar7 = (long)*(undefined4 **)(param_1 + 0xc40) - *(long *)(param_1 + 0xc30);
        uVar8 = lVar7 >> 2;
        if (uVar6 <= uVar8) {
          uVar6 = uVar8;
        }
        if (uVar10 >> 1 <= (ulong)(lVar7 >> 3)) {
          uVar6 = uVar10;
        }
        if (uVar6 == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = (**(code **)(**(long **)(param_1 + 0xc48) + 0x10))
                            (*(long **)(param_1 + 0xc48),uVar6 << 3,4);
          if (lVar7 == 0) {
            (**(code **)(**(long **)(param_1 + 0xc48) + 0xe8))();
          }
        }
        puVar14 = (undefined4 *)(lVar7 + lVar15 * 8);
        uVar16 = *(undefined8 *)(param_1 + 0xc48);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          *puVar14 = uVar17;
          puVar14[1] = fVar22;
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) goto LAB_00fbe128;
          *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          *puVar14 = uVar17;
          puVar14[1] = fVar22;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        lVar18 = *(long *)(param_1 + 0xc30);
        lVar15 = *(long *)(param_1 + 0xc38);
        puVar21 = puVar14;
        if (lVar15 != lVar18) {
          do {
            uVar16 = *(undefined8 *)(param_1 + 0xc48);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar5 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar5 == 0) {
              *(undefined8 *)(puVar21 + -2) = *(undefined8 *)(lVar15 + -8);
            }
            else {
              if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00fbe128;
              *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar16;
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
              *(undefined8 *)(puVar21 + -2) = *(undefined8 *)(lVar15 + -8);
              *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
            }
            lVar15 = lVar15 + -8;
            puVar21 = puVar21 + -2;
          } while (lVar18 != lVar15);
          lVar18 = *(long *)(param_1 + 0xc30);
        }
        *(undefined4 **)(param_1 + 0xc30) = puVar21;
        *(undefined4 **)(param_1 + 0xc38) = puVar14 + 2;
        lVar15 = *(long *)(param_1 + 0xc40);
        *(ulong *)(param_1 + 0xc40) = lVar7 + uVar6 * 8;
        if (lVar18 != 0) {
          plVar19 = *(long **)(param_1 + 0xc48);
          lVar15 = lVar15 - lVar18;
          uVar6 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar18,lVar15,4);
          }
          else {
            FUN_00c48fe8(plVar19,lVar18,lVar15,4);
          }
        }
      }
      else {
        uVar16 = *(undefined8 *)(param_1 + 0xc48);
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar15 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar15 == 0) {
          *puVar14 = uVar17;
          puVar14[1] = fVar22;
        }
        else {
          if (0xf < *(ulong *)(lVar15 + 0x80)) {
LAB_00fbe128:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = uVar16;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
          *puVar14 = uVar17;
          puVar14[1] = fVar22;
          *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
        }
        *(undefined4 **)(param_1 + 0xc38) = puVar14 + 2;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar20);
  }
  FUN_00db239c(auStack_d8);
  FUN_00db239c(auStack_118);
  return;
}


