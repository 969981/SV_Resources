/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a51ad0; name: FUN_00a51ad0
 */


void FUN_00a51ad0(long *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  ushort *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  
  uVar22 = 0;
  *(undefined8 *)(param_2 + 0x61b8) = *(undefined8 *)(param_2 + 0x61b0);
  do {
    if (((*PTR_DAT_047d7430 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7430);
    }
    *(undefined8 *)PTR_DAT_047d7440 = *(undefined8 *)PTR_DAT_047d7438;
    uVar12 = 0xb6;
    puVar10 = &DAT_03d62a08;
    do {
      uVar14 = uVar12 >> 1;
      puVar3 = puVar10 + uVar14 + 1;
      uVar12 = uVar12 + (uVar12 >> 1 ^ 0xffffffffffffffff);
      if (((uint)uVar22 & 0xffff) <= (uint)puVar10[uVar14]) {
        puVar3 = puVar10;
        uVar12 = uVar14;
      }
      puVar10 = puVar3;
    } while (uVar12 != 0);
    if ((uint)*puVar3 == ((uint)uVar22 & 0xffff)) {
      uVar12 = (ulong)(byte)(&DAT_03d62b74)[(long)(puVar3 + -0x1eb1504) >> 1];
    }
    else {
      uVar12 = 1;
    }
    puVar10 = (ushort *)(param_2 + uVar22 * 0x18 + 0x2c);
    uVar14 = 0;
    do {
      uVar6 = FUN_00a4f8c0(param_3);
      if (((((uVar6 & 1) != 0) && (param_3 < 3)) && (uVar24 = (uint)uVar14, (uVar24 & 0xff) < 0x20))
         && (((*(uint *)(puVar10 + (ulong)param_3 * 2 + 6) >> (ulong)(uVar24 & 0x1f) & 1) != 0 &&
             (uVar6 = FUN_00a61b94(param_2 + 0x6358,param_3,uVar22 & 0xffffffff,uVar14 & 0xffffffff)
             , (uVar6 & 1) == 0)))) {
        uVar2 = 0;
        if ((*puVar10 & 0xfffe) != 0x298 && *puVar10 != 0x2e8) {
          uVar2 = uVar24;
        }
        uVar6 = FUN_00a65d24(puVar10,0,uVar2);
        if ((uVar6 & 1) != 0) {
          uVar6 = (ulong)puVar10[(ulong)param_3 + 2];
          puVar17 = *(ulong **)(param_2 + 0x61b8);
          if (puVar17 < *(ulong **)(param_2 + 0x61c0)) {
            uVar23 = *(undefined8 *)(param_2 + 0x61c8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar7 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar7 == 0) {
              *puVar17 = uVar6 | uVar14 << 0x20;
            }
            else {
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00a521d0;
              *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar23;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
              *puVar17 = uVar6 | uVar14 << 0x20;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            }
            *(ulong **)(param_2 + 0x61b8) = puVar17 + 1;
          }
          else {
            uVar15 = *(ulong *)(param_2 + 0x61d0);
            lVar7 = (long)puVar17 - *(long *)(param_2 + 0x61b0) >> 3;
            uVar1 = lVar7 + 1;
            if (0x7ffffffffffffffe < uVar15) {
              uVar15 = 0x7fffffffffffffff;
            }
            if (uVar15 < uVar1) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar13 = (long)*(ulong **)(param_2 + 0x61c0) - *(long *)(param_2 + 0x61b0);
            uVar11 = lVar13 >> 2;
            if (uVar1 <= uVar11) {
              uVar1 = uVar11;
            }
            if (uVar15 >> 1 <= (ulong)(lVar13 >> 3)) {
              uVar1 = uVar15;
            }
            if (uVar1 == 0) {
              lVar13 = 0;
            }
            else {
              lVar13 = (**(code **)(**(long **)(param_2 + 0x61c8) + 0x10))
                                 (*(long **)(param_2 + 0x61c8),uVar1 << 3,4);
              if (lVar13 == 0) {
                (**(code **)(**(long **)(param_2 + 0x61c8) + 0xe8))();
              }
            }
            puVar17 = (ulong *)(lVar13 + lVar7 * 8);
            uVar23 = *(undefined8 *)(param_2 + 0x61c8);
            if (((DAT_04865a38 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
              FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
              FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
              __cxa_guard_release(&DAT_04865a38);
            }
            lVar7 = nn::os::GetTlsValue(DAT_04865a30);
            if (lVar7 == 0) {
              *puVar17 = uVar6 | uVar14 << 0x20;
            }
            else {
              if (0xf < *(ulong *)(lVar7 + 0x80)) goto LAB_00a521d0;
              *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar23;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
              *puVar17 = uVar6 | uVar14 << 0x20;
              *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
            }
            lVar16 = *(long *)(param_2 + 0x61b0);
            lVar7 = *(long *)(param_2 + 0x61b8);
            puVar18 = puVar17;
            if (lVar7 != lVar16) {
              do {
                uVar23 = *(undefined8 *)(param_2 + 0x61c8);
                if (((DAT_04865a38 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
                  FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
                  FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
                  __cxa_guard_release(&DAT_04865a38);
                }
                lVar8 = nn::os::GetTlsValue(DAT_04865a30);
                if (lVar8 == 0) {
                  puVar18[-1] = *(ulong *)(lVar7 + -8);
                }
                else {
                  if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00a521d0;
                  *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar23;
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
                  puVar18[-1] = *(ulong *)(lVar7 + -8);
                  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
                }
                lVar7 = lVar7 + -8;
                puVar18 = puVar18 + -1;
              } while (lVar16 != lVar7);
              lVar16 = *(long *)(param_2 + 0x61b0);
            }
            *(ulong **)(param_2 + 0x61b0) = puVar18;
            *(ulong **)(param_2 + 0x61b8) = puVar17 + 1;
            lVar7 = *(long *)(param_2 + 0x61c0);
            *(ulong *)(param_2 + 0x61c0) = lVar13 + uVar1 * 8;
            if (lVar16 != 0) {
              plVar19 = *(long **)(param_2 + 0x61c8);
              lVar7 = lVar7 - lVar16;
              uVar6 = (**(code **)(*plVar19 + 0xf8))(plVar19);
              if (((uVar6 & 1) == 0) || (lVar13 = FUN_00c4e600(), *(int *)(lVar13 + 0x12c8) < 1)) {
                (**(code **)(*plVar19 + 0x18))(plVar19,lVar16,lVar7,4);
              }
              else {
                FUN_00c48fe8(plVar19,lVar16,lVar7,4);
              }
            }
          }
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
    uVar22 = uVar22 + 1;
  } while (uVar22 != 0x402);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar7 = *(long *)(param_2 + 0x61c8);
  lVar13 = *(long *)(param_2 + 0x61d0);
  lVar16 = *(long *)(param_2 + 0x61e0);
  param_1[5] = *(long *)(param_2 + 0x61d8);
  param_1[6] = lVar16;
  param_1[3] = lVar7;
  param_1[4] = lVar13;
  lVar7 = *(long *)(param_2 + 0x61b8) - *(long *)(param_2 + 0x61b0);
  if (lVar7 != 0) {
    uVar22 = param_1[4];
    if (0x7ffffffffffffffe < uVar22) {
      uVar22 = 0x7fffffffffffffff;
    }
    if (uVar22 < (ulong)(lVar7 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar9 = (undefined8 *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar7,4);
    if (puVar9 == (undefined8 *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
    *param_1 = (long)puVar9;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)(puVar9 + (lVar7 >> 3));
    puVar4 = PTR_LAB_047d3900;
    puVar21 = *(undefined8 **)(param_2 + 0x61b8);
    for (puVar20 = *(undefined8 **)(param_2 + 0x61b0); puVar20 != puVar21; puVar20 = puVar20 + 1) {
      lVar7 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar13 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar13 == 0) {
        *puVar9 = *puVar20;
      }
      else {
        if (0xf < *(ulong *)(lVar13 + 0x80)) {
LAB_00a521d0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = lVar7;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        *puVar9 = *puVar20;
        *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
      }
      puVar9 = puVar9 + 1;
    }
    param_1[1] = (long)puVar9;
  }
  return;
}


