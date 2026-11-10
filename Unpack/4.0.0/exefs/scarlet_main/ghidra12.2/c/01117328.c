/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01117328; name: FUN_01117328
 */


void FUN_01117328(uint *param_1,long *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  ulong uVar15;
  uint *puVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  undefined4 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  uint *puVar25;
  long *plVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  
  lVar19 = *param_2;
  lVar7 = param_2[1];
  lVar10 = lVar7 - lVar19 >> 4;
  uVar15 = (ulong)*param_1;
  if ((ulong)(lVar10 * 0x6db6db6db6db6db7) < uVar15) {
    uVar12 = uVar15 + lVar10 * -0x6db6db6db6db6db7;
    if ((ulong)((param_2[2] - lVar7 >> 4) * 0x6db6db6db6db6db7) < uVar12) {
      uVar12 = param_2[4];
      if (0x7ffffffffffffffe < uVar12) {
        uVar12 = 0x7fffffffffffffff;
      }
      if (uVar12 < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar7 = param_2[2] - lVar19 >> 4;
      uVar9 = lVar7 * -0x2492492492492492;
      uVar11 = uVar15;
      if (uVar15 <= uVar9) {
        uVar11 = uVar9;
      }
      plVar26 = param_2 + 3;
      if (uVar12 >> 1 <= (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
        uVar11 = uVar12;
      }
      if (uVar11 == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = (**(code **)(*(long *)*plVar26 + 0x10))((long *)*plVar26,uVar11 * 0x70,8);
        if (lVar7 == 0) {
          (**(code **)(*(long *)*plVar26 + 0xe8))();
        }
      }
      lVar19 = lVar7 + lVar10 * 0x10;
      lVar23 = lVar7 + uVar15 * 0x70;
      FUN_01117ef4(plVar26,lVar19);
      if (lVar23 != lVar19 + 0x70) {
        FUN_01117ef4(plVar26,lVar19 + 0x70);
        if (lVar23 != lVar19 + 0xe0) {
          FUN_01117ef4(plVar26,lVar19 + 0xe0);
          lVar13 = lVar19 + 0x150;
          if (lVar23 != lVar13) {
            lVar10 = lVar10 * -0x10 + uVar15 * 0x70 + -0x150;
            do {
              FUN_01117ef4(plVar26,lVar13);
              lVar13 = lVar13 + 0x70;
              lVar10 = lVar10 + -0x70;
            } while (lVar10 != 0);
          }
        }
      }
      lVar10 = *param_2;
      lVar13 = param_2[1];
      if (lVar13 == lVar10) {
        lVar13 = lVar10;
      }
      else {
        do {
          lVar19 = lVar19 + -0x70;
          lVar13 = lVar13 + -0x70;
          FUN_0111989c(plVar26,lVar19,lVar13);
        } while (lVar10 != lVar13);
        lVar13 = *param_2;
        lVar10 = param_2[1];
      }
      lVar21 = param_2[2];
      *param_2 = lVar19;
      param_2[1] = lVar23;
      param_2[2] = lVar7 + uVar11 * 0x70;
      if ((lVar10 != lVar13) && (FUN_01118d3c(plVar26,lVar10 + -0x70), lVar10 + -0x70 != lVar13)) {
        do {
          FUN_01118d3c(plVar26,lVar10 + -0xe0);
          lVar10 = lVar10 + -0x70;
        } while (lVar13 + 0x70 != lVar10);
      }
      if (lVar13 != 0) {
        plVar26 = (long *)*plVar26;
        uVar15 = (**(code **)(*plVar26 + 0xf8))(plVar26);
        if (((uVar15 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
          (**(code **)(*plVar26 + 0x18))(plVar26,lVar13,lVar21 - lVar13,8);
        }
        else {
          FUN_00c48fe8(plVar26,lVar13,lVar21 - lVar13,8);
        }
      }
    }
    else {
      lVar19 = lVar7;
      if (uVar12 != 0) {
        lVar19 = lVar7 + uVar12 * 0x70;
        lVar10 = uVar15 * 0x70 + lVar10 * -0x10;
        do {
          FUN_01117ef4(param_2 + 3,lVar7);
          lVar7 = lVar7 + 0x70;
          lVar10 = lVar10 + -0x70;
        } while (lVar10 != 0);
      }
      param_2[1] = lVar19;
    }
  }
  else if (lVar10 * 0x6db6db6db6db6db7 != uVar15) {
    lVar19 = lVar19 + uVar15 * 0x70;
    if (lVar19 != lVar7) {
      do {
        lVar7 = lVar7 + -0x70;
        FUN_01118d3c(param_2 + 3,lVar7);
      } while (lVar19 != lVar7);
    }
    param_2[1] = lVar19;
  }
  puVar25 = param_1 + 1;
  if (*param_1 != 0) {
    puVar2 = puVar25 + *param_1;
    lVar7 = 0;
    do {
      piVar3 = (int *)((long)puVar25 + (ulong)*puVar25);
      lVar19 = *param_2;
      plVar26 = (long *)(lVar19 + lVar7 * 0x70);
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
         (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar15 == 0)) {
        puVar16 = (uint *)0x0;
      }
      else {
        puVar16 = (uint *)((long)piVar3 + uVar15);
        puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
      }
      uVar15 = (ulong)*puVar16;
      plVar17 = (long *)(lVar19 + lVar7 * 0x70 + 8);
      lVar10 = *plVar26;
      lVar23 = *plVar17 - lVar10 >> 2;
      if ((ulong)(lVar23 * -0x3333333333333333) < uVar15) {
        plVar18 = (long *)(lVar19 + lVar7 * 0x70 + 0x10);
        if ((ulong)((*plVar18 - *plVar17 >> 2) * -0x3333333333333333) <
            uVar15 + lVar23 * 0x3333333333333333) {
          lVar13 = lVar19 + lVar7 * 0x70;
          uVar12 = *(ulong *)(lVar13 + 0x20);
          if (0x7ffffffffffffffe < uVar12) {
            uVar12 = 0x7fffffffffffffff;
          }
          if (uVar12 < uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = *plVar18 - lVar10 >> 2;
          uVar9 = lVar10 * -0x6666666666666666;
          uVar11 = uVar15;
          if (uVar15 <= uVar9) {
            uVar11 = uVar9;
          }
          puVar1 = (undefined8 *)(lVar13 + 0x18);
          if (uVar12 >> 1 <= (ulong)(lVar10 * -0x3333333333333333)) {
            uVar11 = uVar12;
          }
          if (uVar11 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar11 * 0x14,4);
            if (lVar10 == 0) {
              (**(code **)(*(long *)*puVar1 + 0xe8))();
            }
          }
          puVar28 = (undefined8 *)(lVar10 + lVar23 * 4);
          lVar23 = uVar15 * 0x14 + lVar23 * -4;
          puVar22 = puVar28;
          do {
            uVar24 = *puVar1;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar13 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar13 == 0) {
              *(undefined4 *)(puVar22 + 2) = 0;
              *puVar22 = 0;
              puVar22[1] = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_01117ed0;
              *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar24;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
              *(undefined4 *)(puVar22 + 2) = 0;
              *puVar22 = 0;
              puVar22[1] = 0;
              *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
            }
            lVar23 = lVar23 + -0x14;
            puVar22 = (undefined8 *)((long)puVar22 + 0x14);
          } while (lVar23 != 0);
          lVar23 = *plVar26;
          lVar13 = *plVar17;
          if (lVar13 != lVar23) {
            do {
              puVar28 = (undefined8 *)((long)puVar28 + -0x14);
              lVar13 = lVar13 + -0x14;
              FUN_0111912c(puVar1,puVar28,lVar13);
            } while (lVar23 != lVar13);
            lVar23 = *plVar26;
          }
          *plVar26 = (long)puVar28;
          *plVar17 = lVar10 + uVar15 * 0x14;
          lVar13 = *plVar18;
          *plVar18 = lVar10 + uVar11 * 0x14;
          if (lVar23 != 0) {
            plVar17 = (long *)*puVar1;
            uVar15 = (**(code **)(*plVar17 + 0xf8))(plVar17);
            if (((uVar15 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
              (**(code **)(*plVar17 + 0x18))(plVar17,lVar23,lVar13 - lVar23,4);
            }
            else {
              FUN_00c48fe8(plVar17,lVar23,lVar13 - lVar23,4);
            }
          }
        }
        else {
          FUN_01119640(plVar26);
        }
      }
      else if (lVar23 * -0x3333333333333333 != uVar15) {
        *plVar17 = lVar10 + uVar15 * 0x14;
      }
      uVar4 = *puVar16;
      if (uVar4 != 0) {
        lVar10 = 0;
        lVar23 = 0;
        do {
          uVar15 = (ulong)*(uint *)((long)puVar16 + lVar10 + 4);
          lVar21 = lVar10 + uVar15;
          lVar5 = lVar10 + (uVar15 - (long)*(int *)((long)puVar16 + lVar21 + 4));
          lVar13 = *plVar26;
          if (*(ushort *)((long)puVar16 + lVar5 + 4) < 5) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar12 = (ulong)*(ushort *)((long)puVar16 + lVar5 + 8);
            uVar14 = 0xffffffff;
            if (uVar12 != 0) {
              uVar14 = *(undefined4 *)((long)puVar16 + lVar10 + uVar15 + uVar12 + 4);
            }
          }
          *(undefined4 *)(lVar13 + lVar23) = uVar14;
          lVar5 = lVar10 + (uVar15 - (long)*(int *)((long)puVar16 + lVar21 + 4));
          if (*(ushort *)((long)puVar16 + lVar5 + 4) < 7) {
            uVar14 = 0;
          }
          else {
            uVar12 = (ulong)*(ushort *)((long)puVar16 + lVar5 + 10);
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = *(undefined4 *)((long)puVar16 + lVar10 + uVar15 + uVar12 + 4);
            }
          }
          lVar13 = lVar13 + lVar23;
          *(undefined4 *)(lVar13 + 4) = uVar14;
          lVar5 = lVar10 + (uVar15 - (long)*(int *)((long)puVar16 + lVar21 + 4));
          if (*(ushort *)((long)puVar16 + lVar5 + 4) < 9) {
            uVar14 = 0;
          }
          else {
            uVar12 = (ulong)*(ushort *)((long)puVar16 + lVar5 + 0xc);
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = *(undefined4 *)((long)puVar16 + lVar10 + uVar15 + uVar12 + 4);
            }
          }
          *(undefined4 *)(lVar13 + 8) = uVar14;
          lVar5 = lVar10 + (uVar15 - (long)*(int *)((long)puVar16 + lVar21 + 4));
          if (*(ushort *)((long)puVar16 + lVar5 + 4) < 0xb) {
            uVar14 = 0;
          }
          else {
            uVar12 = (ulong)*(ushort *)((long)puVar16 + lVar5 + 0xe);
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = *(undefined4 *)((long)puVar16 + lVar10 + uVar15 + uVar12 + 4);
            }
          }
          *(undefined4 *)(lVar13 + 0xc) = uVar14;
          lVar21 = lVar10 + (uVar15 - (long)*(int *)((long)puVar16 + lVar21 + 4));
          if ((*(ushort *)((long)puVar16 + lVar21 + 4) < 0xd) ||
             (uVar12 = (ulong)*(ushort *)((long)puVar16 + lVar21 + 0x10), uVar12 == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)((long)puVar16 + lVar10 + uVar15 + uVar12 + 4);
          }
          lVar10 = lVar10 + 4;
          lVar23 = lVar23 + 0x14;
          *(undefined4 *)(lVar13 + 0x10) = uVar14;
        } while ((ulong)uVar4 * 4 != lVar10);
      }
      if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 7) ||
         (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[3], uVar15 == 0)) {
        puVar16 = (uint *)0x0;
      }
      else {
        puVar16 = (uint *)((long)piVar3 + uVar15);
        puVar16 = (uint *)((long)puVar16 + (ulong)*puVar16);
      }
      lVar23 = lVar19 + lVar7 * 0x70;
      plVar26 = (long *)(lVar23 + 0x38);
      lVar10 = *plVar26;
      uVar15 = (ulong)*puVar16;
      plVar17 = (long *)(lVar23 + 0x40);
      uVar12 = *plVar17 - lVar10 >> 2;
      if (uVar12 < uVar15) {
        plVar18 = (long *)(lVar19 + lVar7 * 0x70 + 0x48);
        if ((ulong)(*plVar18 - *plVar17 >> 2) < uVar15 - uVar12) {
          lVar19 = lVar19 + lVar7 * 0x70;
          uVar11 = *(ulong *)(lVar19 + 0x58);
          if (0x7ffffffffffffffe < uVar11) {
            uVar11 = 0x7fffffffffffffff;
          }
          if (uVar11 < uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar10 = *plVar18 - lVar10;
          uVar8 = lVar10 >> 1;
          uVar9 = uVar15;
          if (uVar15 <= uVar8) {
            uVar9 = uVar8;
          }
          puVar1 = (undefined8 *)(lVar19 + 0x50);
          if (uVar11 >> 1 <= (ulong)(lVar10 >> 2)) {
            uVar9 = uVar11;
          }
          if (uVar9 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 2,4);
            if (lVar19 == 0) {
              (**(code **)(*(long *)*puVar1 + 0xe8))();
            }
          }
          puVar27 = (undefined4 *)(lVar19 + uVar12 * 4);
          lVar10 = uVar15 * 4 + uVar12 * -4;
          puVar20 = puVar27;
          do {
            uVar24 = *puVar1;
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar23 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar23 == 0) {
              *puVar20 = 0;
            }
            else {
              if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_01117ed0:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              *(undefined8 *)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = uVar24;
              *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
              *puVar20 = 0;
              *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
            }
            puVar20 = puVar20 + 1;
            lVar10 = lVar10 + -4;
          } while (lVar10 != 0);
          lVar10 = *plVar26;
          lVar23 = *plVar17;
          if (lVar23 != lVar10) {
            do {
              puVar27 = puVar27 + -1;
              lVar23 = lVar23 + -4;
              FUN_01119050(puVar1,puVar27,lVar23);
            } while (lVar10 != lVar23);
            lVar10 = *plVar26;
          }
          *plVar26 = (long)puVar27;
          *plVar17 = lVar19 + uVar15 * 4;
          lVar23 = *plVar18;
          *plVar18 = lVar19 + uVar9 * 4;
          if (lVar10 != 0) {
            plVar17 = (long *)*puVar1;
            uVar15 = (**(code **)(*plVar17 + 0xf8))(plVar17);
            if (((uVar15 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
              (**(code **)(*plVar17 + 0x18))(plVar17,lVar10,lVar23 - lVar10,4);
            }
            else {
              FUN_00c48fe8(plVar17,lVar10,lVar23 - lVar10,4);
            }
          }
        }
        else {
          FUN_01119530(plVar26);
        }
      }
      else if (uVar12 != uVar15) {
        *plVar17 = lVar10 + uVar15 * 4;
      }
      uVar4 = *puVar16;
      if (uVar4 != 0) {
        piVar3 = (int *)((long)(puVar16 + 1) + (ulong)puVar16[1]);
        if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
           (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar15 == 0)) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined4 *)((long)piVar3 + uVar15);
        }
        *(undefined4 *)*plVar26 = uVar14;
        if (uVar4 != 1) {
          piVar3 = (int *)((long)(puVar16 + 2) + (ulong)puVar16[2]);
          if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
             (uVar15 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar15 == 0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined4 *)((long)piVar3 + uVar15);
          }
          *(undefined4 *)(*plVar26 + 4) = uVar14;
          if (uVar4 != 2) {
            lVar19 = 8;
            do {
              uVar15 = (ulong)*(uint *)((long)puVar16 + lVar19 + 4);
              lVar10 = lVar19 + (uVar15 - (long)*(int *)((long)puVar16 + lVar19 + uVar15 + 4));
              if ((*(ushort *)((long)puVar16 + lVar10 + 4) < 5) ||
                 (uVar12 = (ulong)*(ushort *)((long)puVar16 + lVar10 + 8), uVar12 == 0)) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(undefined4 *)((long)puVar16 + lVar19 + uVar15 + uVar12 + 4);
              }
              *(undefined4 *)(*plVar26 + lVar19) = uVar14;
              lVar19 = lVar19 + 4;
            } while ((ulong)uVar4 * 4 != lVar19);
          }
        }
      }
      puVar25 = puVar25 + 1;
      lVar7 = lVar7 + 1;
    } while (puVar25 != puVar2);
  }
  return;
}


