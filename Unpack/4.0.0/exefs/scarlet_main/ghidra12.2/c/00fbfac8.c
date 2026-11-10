/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fbfac8; name: FUN_00fbfac8
 */


void FUN_00fbfac8(long param_1)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ushort *puVar11;
  ulong uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  ulong *puVar16;
  __compar_fn_t __compar;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  ulong *puVar21;
  float fVar22;
  int *local_188;
  int *local_180;
  undefined8 local_178;
  undefined8 local_170;
  float local_168;
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
  
  local_130 = *(undefined8 *)(param_1 + 0xe58);
  local_128 = *(undefined8 *)(param_1 + 0xe60);
  uStack_120 = *(undefined8 *)(param_1 + 0xe68);
  FUN_00fb9f24(auStack_118,param_1 + 0xe70);
  FUN_00fb9f24(auStack_d8,param_1 + 0xeb0);
  FUN_00fb4dd0(auStack_148,&local_130);
  *(undefined8 *)(param_1 + 0xf00) = *(undefined8 *)(param_1 + 0xef8);
  local_98 = &DAT_fbec41851566601b;
  local_90 = "values";
  local_88 = 6;
  local_80 = (long *)0x0;
  piVar4 = (int *)FUN_00efa07c(auStack_148,&local_98);
  if (piVar4 == (int *)0x0) {
    iVar20 = 0;
  }
  else {
    iVar20 = *piVar4;
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  if (iVar20 != 0) {
    iVar15 = 0;
    __compar = (__compar_fn_t)PTR_LAB_047d5600;
    do {
      local_88 = 6;
      local_80 = (long *)0x0;
      local_98 = &DAT_fbec41851566601b;
      local_90 = "values";
      FUN_00e90ee0(&local_160,auStack_148,&local_98,iVar15);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      local_178 = local_150;
      local_170 = 0;
      local_188 = local_160;
      local_180 = piStack_158;
      local_98 = (char *)0x4c4c0abcfb97386c;
      local_168 = 0.0;
      local_90 = "TimeType";
      local_88 = 8;
      local_80 = (long *)0x0;
      piVar4 = (int *)FUN_00d27b5c(&local_188,&local_98);
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
      local_170 = CONCAT44(local_170._4_4_,uVar7);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      if (local_180 == (int *)0x0) {
        local_170 = local_170 & 0xffffffff;
LAB_00fc028c:
        fVar22 = 0.0;
      }
      else {
        fVar22 = 0.0;
        if (6 < *(ushort *)((long)local_180 - (long)*local_180)) {
          uVar8 = (ulong)((ushort *)((long)local_180 - (long)*local_180))[3];
          fVar22 = 0.0;
          if (uVar8 != 0) {
            puVar5 = (uint *)((long)local_180 + uVar8);
            puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
            local_98 = "MinTime";
            puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,__compar);
            if (puVar5 == (uint *)0x0) {
              fVar22 = 0.0;
            }
            else {
              fVar22 = 0.0;
              if (local_188 != (int *)0x0) {
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
LAB_00fbfd2c:
                    fVar22 = 0.0;
                  }
                  else {
                    uVar13 = 0;
                    if ((ulong)puVar11[5] != 0) {
                      uVar13 = (uint)*(ushort *)((long)piVar4 + (ulong)puVar11[5]);
                    }
                    if ((uVar2 < 0xf) || ((ulong)puVar11[7] == 0)) goto LAB_00fbfd2c;
                    fVar22 = (float)*(double *)((long)piVar4 + (ulong)puVar11[7]);
                  }
                  if ((uVar13 < *(ushort *)((long)local_188 - (long)*local_188)) &&
                     (uVar8 = (ulong)*(ushort *)
                                      (((long)local_188 - (long)*local_188) + (ulong)uVar13),
                     uVar8 != 0)) {
                    fVar22 = *(float *)((long)local_188 + uVar8);
                  }
                }
                else {
                  fVar22 = 0.0;
                  if (0xe < uVar2) {
                    fVar22 = 0.0;
                    if ((ulong)puVar11[7] != 0) {
                      fVar22 = (float)*(double *)((long)piVar4 + (ulong)puVar11[7]);
                    }
                  }
                }
              }
            }
          }
        }
        local_170 = CONCAT44(fVar22,(undefined4)local_170);
        fVar22 = 0.0;
        if (local_180 != (int *)0x0) {
          fVar22 = 0.0;
          if (6 < *(ushort *)((long)local_180 - (long)*local_180)) {
            uVar8 = (ulong)((ushort *)((long)local_180 - (long)*local_180))[3];
            fVar22 = 0.0;
            if (uVar8 != 0) {
              puVar5 = (uint *)((long)local_180 + uVar8);
              puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
              local_98 = "MaxTime";
              puVar5 = bsearch(&local_98,puVar5 + 1,(ulong)*puVar5,4,__compar);
              if (puVar5 == (uint *)0x0) goto LAB_00fc028c;
              fVar22 = 0.0;
              if (local_188 != (int *)0x0) {
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
LAB_00fbfe4c:
                    fVar22 = 0.0;
                  }
                  else {
                    uVar13 = 0;
                    if ((ulong)puVar11[5] != 0) {
                      uVar13 = (uint)*(ushort *)((long)piVar4 + (ulong)puVar11[5]);
                    }
                    if ((uVar2 < 0xf) || ((ulong)puVar11[7] == 0)) goto LAB_00fbfe4c;
                    fVar22 = (float)*(double *)((long)piVar4 + (ulong)puVar11[7]);
                  }
                  if (uVar13 < *(ushort *)((long)local_188 - (long)*local_188)) {
                    uVar8 = (ulong)*(ushort *)(((long)local_188 - (long)*local_188) + (ulong)uVar13)
                    ;
                    if (uVar8 != 0) {
                      fVar22 = *(float *)((long)local_188 + uVar8);
                    }
                  }
                }
                else {
                  fVar22 = 0.0;
                  if (0xe < uVar2) {
                    fVar22 = 0.0;
                    if ((ulong)puVar11[7] != 0) {
                      fVar22 = (float)*(double *)((long)piVar4 + (ulong)puVar11[7]);
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_168 = fVar22;
      if (*(long *)(param_1 + 0xf00) == *(long *)(param_1 + 0xf08)) {
        lVar10 = *(long *)(param_1 + 0xf00) - *(long *)(param_1 + 0xef8) >> 2;
        uVar8 = *(ulong *)(param_1 + 0xf18);
        if (0x7ffffffffffffffe < uVar8) {
          uVar8 = 0x7fffffffffffffff;
        }
        uVar1 = lVar10 * -0x5555555555555555 + 1;
        if (uVar8 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar9 = *(long *)(param_1 + 0xf08) - *(long *)(param_1 + 0xef8) >> 2;
        uVar12 = lVar9 * 0x5555555555555556;
        if (uVar1 <= uVar12) {
          uVar1 = uVar12;
        }
        if (uVar8 >> 1 <= (ulong)(lVar9 * -0x5555555555555555)) {
          uVar1 = uVar8;
        }
        if (uVar1 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = (**(code **)(**(long **)(param_1 + 0xf10) + 0x10))
                            (*(long **)(param_1 + 0xf10),uVar1 * 0xc,4);
          if (lVar9 == 0) {
            (**(code **)(**(long **)(param_1 + 0xf10) + 0xe8))();
          }
        }
        puVar16 = (ulong *)(lVar9 + lVar10 * 4);
        uVar17 = *(undefined8 *)(param_1 + 0xf10);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          *(float *)(puVar16 + 1) = local_168;
          *puVar16 = local_170;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00fc02bc:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar17;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *(float *)(puVar16 + 1) = local_168;
          *puVar16 = local_170;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        lVar18 = *(long *)(param_1 + 0xef8);
        lVar10 = *(long *)(param_1 + 0xf00);
        puVar21 = puVar16;
        if (lVar10 != lVar18) {
          do {
            uVar17 = *(undefined8 *)(param_1 + 0xf10);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar6 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar6 == 0) {
              uVar17 = *(undefined8 *)(lVar10 + -0xc);
              *(undefined4 *)((long)puVar21 + -4) = *(undefined4 *)(lVar10 + -4);
              *(undefined8 *)((long)puVar21 + -0xc) = uVar17;
            }
            else {
              if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_00fc02bc;
              *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar17;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
              uVar17 = *(undefined8 *)(lVar10 + -0xc);
              *(undefined4 *)((long)puVar21 + -4) = *(undefined4 *)(lVar10 + -4);
              *(undefined8 *)((long)puVar21 + -0xc) = uVar17;
              *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
            }
            lVar10 = lVar10 + -0xc;
            puVar21 = (ulong *)((long)puVar21 + -0xc);
          } while (lVar18 != lVar10);
          lVar18 = *(long *)(param_1 + 0xef8);
        }
        *(ulong **)(param_1 + 0xef8) = puVar21;
        *(long *)(param_1 + 0xf00) = (long)puVar16 + 0xc;
        lVar10 = *(long *)(param_1 + 0xf08);
        *(ulong *)(param_1 + 0xf08) = lVar9 + uVar1 * 0xc;
        __compar = (__compar_fn_t)PTR_LAB_047d5600;
        if (lVar18 != 0) {
          plVar19 = *(long **)(param_1 + 0xf10);
          lVar10 = lVar10 - lVar18;
          uVar8 = (**(code **)(*plVar19 + 0xf8))(plVar19);
          if (((uVar8 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
            (**(code **)(*plVar19 + 0x18))(plVar19,lVar18,lVar10,4);
          }
          else {
            FUN_00c48fe8(plVar19,lVar18,lVar10,4);
          }
        }
      }
      else {
        FUN_00fc02c8((long *)(param_1 + 0xef8),&local_170);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar20);
  }
  FUN_00db239c(auStack_d8);
  FUN_00db239c(auStack_118);
  return;
}


