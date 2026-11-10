/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d5bffc; name: FUN_00d5bffc
 */


void FUN_00d5bffc(long param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ushort uVar3;
  undefined *__compar;
  undefined *puVar4;
  int *piVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  char *local_a8;
  char *local_a0;
  undefined8 local_98;
  long *local_90;
  long local_88;
  int *local_80;
  int *local_78;
  
  uVar21 = (uint)(5000.0 / *(float *)(param_1 + 0x28));
  uVar10 = (ulong)uVar21;
  FUN_00d5d248((long *)(param_2 + 0x98),uVar10);
  if (uVar21 != 0) {
    uVar22 = 0;
    do {
      lVar7 = *(long *)(param_2 + 0x98);
      plVar19 = (long *)(lVar7 + uVar22 * 0x38);
      plVar8 = plVar19 + 1;
      lVar18 = *plVar8;
      lVar9 = *plVar19;
      lVar12 = lVar18 - lVar9 >> 3;
      if ((ulong)(lVar12 * 0x6db6db6db6db6db7) < uVar10) {
        plVar16 = (long *)(lVar7 + uVar22 * 0x38 + 0x10);
        uVar14 = uVar10 + lVar12 * -0x6db6db6db6db6db7;
        if ((ulong)((*plVar16 - lVar18 >> 3) * 0x6db6db6db6db6db7) < uVar14) {
          lVar7 = lVar7 + uVar22 * 0x38;
          uVar14 = *(ulong *)(lVar7 + 0x20);
          if (0x7ffffffffffffffe < uVar14) {
            uVar14 = 0x7fffffffffffffff;
          }
          if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar18 = *plVar16 - lVar9 >> 3;
          uVar13 = lVar18 * -0x2492492492492492;
          uVar2 = uVar10;
          if (uVar10 <= uVar13) {
            uVar2 = uVar13;
          }
          puVar1 = (undefined8 *)(lVar7 + 0x18);
          if (uVar14 >> 1 <= (ulong)(lVar18 * 0x6db6db6db6db6db7)) {
            uVar2 = uVar14;
          }
          if (uVar2 == 0) {
            lVar18 = 0;
          }
          else {
            lVar18 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar2 * 0x38,8);
            if (lVar18 == 0) {
              (**(code **)(*(long *)*puVar1 + 0xe8))();
            }
          }
          lVar9 = lVar18 + lVar12 * 8;
          lVar12 = uVar10 * 0x38 + lVar12 * -8;
          lVar7 = lVar9;
          do {
            FUN_00d5d05c(puVar1,lVar7);
            lVar7 = lVar7 + 0x38;
            lVar12 = lVar12 + -0x38;
          } while (lVar12 != 0);
          lVar7 = *plVar19;
          lVar12 = *plVar8;
          if (lVar12 == lVar7) {
            lVar12 = lVar7;
          }
          else {
            do {
              lVar9 = lVar9 + -0x38;
              lVar12 = lVar12 + -0x38;
              FUN_00d5db30(puVar1,lVar9,lVar12);
            } while (lVar7 != lVar12);
            lVar7 = *plVar19;
            lVar12 = *plVar8;
          }
          *plVar19 = lVar9;
          *plVar8 = lVar18 + uVar10 * 0x38;
          lVar9 = *plVar16;
          *plVar16 = lVar18 + uVar2 * 0x38;
          if ((lVar12 != lVar7) && (FUN_00d5d9c0(lVar12 + -0x38), lVar12 + -0x38 != lVar7)) {
            do {
              FUN_00d5d9c0(lVar12 + -0x70);
              lVar12 = lVar12 + -0x38;
            } while (lVar7 + 0x38 != lVar12);
          }
          if (lVar7 != 0) {
            plVar8 = (long *)*puVar1;
            uVar14 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar14 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,lVar7,lVar9 - lVar7,8);
            }
            else {
              FUN_00c48fe8(plVar8,lVar7,lVar9 - lVar7,8);
            }
          }
        }
        else {
          lVar9 = lVar18;
          if (uVar14 != 0) {
            lVar9 = lVar18 + uVar14 * 0x38;
            lVar12 = uVar10 * 0x38 + lVar12 * -8;
            do {
              FUN_00d5d05c(lVar7 + uVar22 * 0x38 + 0x18,lVar18);
              lVar18 = lVar18 + 0x38;
              lVar12 = lVar12 + -0x38;
            } while (lVar12 != 0);
          }
          *plVar8 = lVar9;
        }
      }
      else if (lVar12 * 0x6db6db6db6db6db7 != uVar10) {
        lVar9 = lVar9 + uVar10 * 0x38;
        while (lVar9 != lVar18) {
          lVar18 = lVar18 + -0x38;
          FUN_00d5d9c0(lVar18);
        }
        *plVar8 = lVar9;
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar10);
  }
  local_a8 = (char *)0xc04542cc58d3b835;
  local_a0 = "encount_point_list";
  local_98 = 0x12;
  local_90 = (long *)0x0;
  piVar5 = (int *)FUN_00d5d2d4(param_2,&local_a8);
  if (piVar5 == (int *)0x0) {
    iVar20 = 0;
  }
  else {
    iVar20 = *piVar5;
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
  puVar4 = PTR_DAT_047d5608;
  __compar = PTR_LAB_047d5600;
  if (iVar20 != 0) {
    iVar17 = 0;
    do {
      local_90 = (long *)0x0;
      local_a8 = (char *)0xc04542cc58d3b835;
      local_a0 = "encount_point_list";
      local_98 = 0x12;
      FUN_00d5c978(&local_88,param_2,&local_a8,iVar17);
      if (local_90 != (long *)0x0) {
        (**(code **)(*local_90 + 0x20))();
      }
      fVar24 = 0.0;
      fVar23 = 0.0;
      if (local_80 == (int *)0x0) goto LAB_00d5c6a8;
      if ((*(ushort *)((long)local_80 - (long)*local_80) < 7) ||
         (uVar10 = (ulong)((ushort *)((long)local_80 - (long)*local_80))[3], uVar10 == 0)) {
        puVar6 = (uint *)0x0;
      }
      else {
        puVar6 = (uint *)((long)local_80 + uVar10);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
      local_a8 = "position";
      puVar6 = bsearch(&local_a8,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)__compar);
      lVar18 = local_88;
      if (puVar6 == (uint *)0x0) {
LAB_00d5c7c4:
        fVar24 = 0.0;
      }
      else {
        piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar11 = (ushort *)((long)piVar5 - (long)*piVar5);
        if (*puVar11 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar11[3] != 0) {
            puVar6 = (uint *)((long)piVar5 + (ulong)puVar11[3]);
            piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        fVar24 = 0.0;
        if (4 < *(ushort *)((long)piVar15 - (long)*piVar15)) {
          uVar10 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2];
          fVar24 = 0.0;
          if ((uVar10 != 0) && (fVar24 = 0.0, (int)*(char *)((long)piVar15 + uVar10) - 0xfU < 2)) {
            if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
              uVar10 = 0;
            }
            else {
              uVar10 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar11[5]);
            }
            if ((*(ushort *)((long)local_78 - (long)*local_78) < 5) ||
               (uVar22 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[2], uVar22 == 0)) {
              lVar7 = 0;
            }
            else {
              puVar6 = (uint *)((long)local_78 + uVar22);
              lVar7 = (long)puVar6 + (ulong)*puVar6;
            }
            piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar11[3]) +
                            (ulong)*(uint *)((long)piVar5 + (ulong)puVar11[3]));
            if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
               (uVar22 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar22 == 0)) {
              uVar22 = 0xffffffff;
            }
            else {
              uVar22 = (ulong)*(uint *)((long)piVar5 + uVar22);
            }
            puVar6 = (uint *)(lVar7 + uVar22 * 4 + 4);
            piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
            if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
               (uVar22 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar22 == 0)) {
              puVar6 = (uint *)0x0;
            }
            else {
              puVar6 = (uint *)((long)piVar5 + uVar22);
              puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
            }
            local_a8 = "x";
            puVar6 = bsearch(&local_a8,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)__compar);
            if (puVar6 == (uint *)0x0) goto LAB_00d5c7c4;
            piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
            puVar11 = (ushort *)((long)piVar5 - (long)*piVar5);
            uVar3 = *puVar11;
            if (uVar3 < 7) {
              piVar15 = (int *)0x0;
            }
            else {
              piVar15 = (int *)0x0;
              if ((ulong)puVar11[3] != 0) {
                puVar6 = (uint *)((long)piVar5 + (ulong)puVar11[3]);
                piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
              }
            }
            if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
               (uVar22 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar22 == 0)) {
              uVar22 = 0;
            }
            else {
              uVar22 = (long)*(char *)((long)piVar15 + uVar22) & 0xffffffff;
            }
            if (*(long *)(puVar4 + uVar22 * 8) == 4) {
              if ((uVar3 < 0xb) || ((ulong)puVar11[5] == 0)) {
                uVar22 = 0;
              }
              else {
                uVar22 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar11[5]);
              }
              fVar24 = *(float *)(lVar18 + uVar10 + uVar22);
            }
            else {
              fVar24 = 0.0;
              if (0xe < uVar3) {
                fVar24 = 0.0;
                if ((ulong)puVar11[7] != 0) {
                  fVar24 = (float)*(double *)((long)piVar5 + (ulong)puVar11[7]);
                }
              }
            }
          }
        }
      }
      if (local_80 == (int *)0x0) {
LAB_00d5c74c:
        fVar23 = 0.0;
      }
      else {
        if ((*(ushort *)((long)local_80 - (long)*local_80) < 7) ||
           (uVar10 = (ulong)((ushort *)((long)local_80 - (long)*local_80))[3], uVar10 == 0)) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = (uint *)((long)local_80 + uVar10);
          puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        }
        local_a8 = "position";
        puVar6 = bsearch(&local_a8,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)__compar);
        lVar18 = local_88;
        if (puVar6 == (uint *)0x0) goto LAB_00d5c74c;
        piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar11 = (ushort *)((long)piVar5 - (long)*piVar5);
        if (*puVar11 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar11[3] != 0) {
            puVar6 = (uint *)((long)piVar5 + (ulong)puVar11[3]);
            piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if (((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
            (uVar10 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar10 == 0)) ||
           (1 < (int)*(char *)((long)piVar15 + uVar10) - 0xfU)) goto LAB_00d5c74c;
        if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar11[5]);
        }
        if ((*(ushort *)((long)local_78 - (long)*local_78) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)local_78 - (long)*local_78))[2], uVar22 == 0)) {
          lVar7 = 0;
        }
        else {
          puVar6 = (uint *)((long)local_78 + uVar22);
          lVar7 = (long)puVar6 + (ulong)*puVar6;
        }
        piVar5 = (int *)((long)((long)piVar5 + (ulong)puVar11[3]) +
                        (ulong)*(uint *)((long)piVar5 + (ulong)puVar11[3]));
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
           (uVar22 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar22 == 0)) {
          uVar22 = 0xffffffff;
        }
        else {
          uVar22 = (ulong)*(uint *)((long)piVar5 + uVar22);
        }
        puVar6 = (uint *)(lVar7 + uVar22 * 4 + 4);
        piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
        if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 7) ||
           (uVar22 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3], uVar22 == 0)) {
          puVar6 = (uint *)0x0;
        }
        else {
          puVar6 = (uint *)((long)piVar5 + uVar22);
          puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
        }
        local_a8 = "z";
        puVar6 = bsearch(&local_a8,puVar6 + 1,(ulong)*puVar6,4,(__compar_fn_t)__compar);
        if (puVar6 == (uint *)0x0) goto LAB_00d5c74c;
        piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
        puVar11 = (ushort *)((long)piVar5 - (long)*piVar5);
        uVar3 = *puVar11;
        if (uVar3 < 7) {
          piVar15 = (int *)0x0;
        }
        else {
          piVar15 = (int *)0x0;
          if ((ulong)puVar11[3] != 0) {
            puVar6 = (uint *)((long)piVar5 + (ulong)puVar11[3]);
            piVar15 = (int *)((long)puVar6 + (ulong)*puVar6);
          }
        }
        if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
           (uVar22 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar22 == 0)) {
          uVar22 = 0;
        }
        else {
          uVar22 = (long)*(char *)((long)piVar15 + uVar22) & 0xffffffff;
        }
        if (*(long *)(puVar4 + uVar22 * 8) == 4) {
          if ((uVar3 < 0xb) || ((ulong)puVar11[5] == 0)) {
            uVar22 = 0;
          }
          else {
            uVar22 = (ulong)*(ushort *)((long)piVar5 + (ulong)puVar11[5]);
          }
          fVar23 = *(float *)(lVar18 + uVar10 + uVar22);
        }
        else {
          if ((uVar3 < 0xf) || ((ulong)puVar11[7] == 0)) goto LAB_00d5c74c;
          fVar23 = (float)*(double *)((long)piVar5 + (ulong)puVar11[7]);
        }
      }
LAB_00d5c6a8:
      fVar24 = fVar24 / *(float *)(param_1 + 0x28);
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      if ((ulong)(uint)(int)fVar24 <
          (ulong)((*(long *)(param_2 + 0xa0) - *(long *)(param_2 + 0x98) >> 3) * 0x6db6db6db6db6db7)
         ) {
        fVar23 = -fVar23 / *(float *)(param_1 + 0x28);
        plVar8 = (long *)(*(long *)(param_2 + 0x98) + (ulong)(uint)(int)fVar24 * 0x38);
        lVar18 = *plVar8;
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        if ((ulong)(uint)(int)fVar23 < (ulong)((plVar8[1] - lVar18 >> 3) * 0x6db6db6db6db6db7)) {
          FUN_00d5cc64(lVar18 + (ulong)(uint)(int)fVar23 * 0x38,&local_88);
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar20 != iVar17);
  }
  return;
}


