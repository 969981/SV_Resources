/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec0dec; name: FUN_00ec0dec
 */


void FUN_00ec0dec(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong *puVar17;
  
  lVar16 = *(long *)(param_1 + 0x88) + (param_2 & 0xffffffff) * 0x108;
  puVar17 = (ulong *)(lVar16 + 0x90);
  puVar14 = (ulong *)(lVar16 + 0x88);
  uVar11 = *puVar14;
  puVar1 = (undefined8 *)(lVar16 + 0x98);
  if (uVar11 < *puVar17) {
    FUN_00ec124c(puVar1,uVar11,param_3,param_3 + 0x20,param_3 + 0x40);
    *puVar14 = uVar11 + 0x48;
  }
  else {
    puVar10 = (ulong *)(lVar16 + 0x80);
    lVar16 = (long)(uVar11 - *puVar10) >> 3;
    uVar11 = *(ulong *)(*(long *)(param_1 + 0x88) + (param_2 & 0xffffffff) * 0x108 + 0xa0);
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar6 = lVar16 * -0x71c71c71c71c71c7 + 1;
    if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)(*puVar17 - *puVar10) >> 3;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    if (uVar11 >> 1 <= (ulong)(lVar7 * -0x71c71c71c71c71c7)) {
      uVar6 = uVar11;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar6 * 0x48,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    uVar12 = lVar7 + lVar16 * 8;
    FUN_00ec124c(puVar1,uVar12,param_3,param_3 + 0x20,param_3 + 0x40);
    uVar8 = *puVar10;
    uVar11 = *puVar14;
    if (uVar11 == uVar8) {
      uVar11 = uVar12;
      uVar13 = uVar8;
    }
    else {
      lVar16 = 0;
      do {
        uVar15 = *puVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar15;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar2 = uVar11 + lVar16;
        lVar3 = uVar12 + lVar16;
        *(undefined8 *)(lVar3 + -0x48) = *(undefined8 *)(lVar2 + -0x48);
        *(undefined8 *)(lVar3 + -0x40) = *(undefined8 *)(lVar2 + -0x40);
        *(undefined8 *)(lVar3 + -0x38) = *(undefined8 *)(lVar2 + -0x38);
        uVar15 = *(undefined8 *)(lVar2 + -0x30);
        *(undefined8 *)(lVar2 + -0x30) = 0;
        *(undefined8 *)(lVar3 + -0x30) = uVar15;
        *(undefined8 *)(lVar3 + -0x28) = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar2 + -0x18);
        uVar15 = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)(lVar2 + -0x10) = 0;
        *(undefined8 *)(lVar3 + -0x10) = uVar15;
        *(undefined4 *)(lVar3 + -8) = *(undefined4 *)(lVar2 + -8);
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar16 = lVar16 + -0x48;
      } while (uVar8 - uVar11 != lVar16);
      uVar8 = *puVar10;
      uVar11 = uVar12 + lVar16;
      uVar13 = *puVar14;
    }
    *puVar10 = uVar11;
    *puVar14 = uVar12 + 0x48;
    uVar11 = *puVar17;
    *puVar17 = lVar7 + uVar6 * 0x48;
    if (uVar13 != uVar8) {
      if (*(long **)(uVar13 - 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(uVar13 - 0x10) + 0x20))();
      }
      if (*(long **)(uVar13 - 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(uVar13 - 0x30) + 0x20))();
      }
      if (uVar13 - 0x48 != uVar8) {
        if (*(long **)(uVar13 - 0x58) != (long *)0x0) {
          (**(code **)(**(long **)(uVar13 - 0x58) + 0x20))();
        }
        if (*(long **)(uVar13 - 0x78) != (long *)0x0) {
          (**(code **)(**(long **)(uVar13 - 0x78) + 0x20))();
        }
        if (uVar13 - 0x90 != uVar8) {
          if (*(long **)(uVar13 - 0xa0) != (long *)0x0) {
            (**(code **)(**(long **)(uVar13 - 0xa0) + 0x20))();
          }
          if (*(long **)(uVar13 - 0xc0) != (long *)0x0) {
            (**(code **)(**(long **)(uVar13 - 0xc0) + 0x20))();
          }
          if (uVar13 - 0xd8 != uVar8) {
            do {
              if (*(long **)(uVar13 - 0xe8) != (long *)0x0) {
                (**(code **)(**(long **)(uVar13 - 0xe8) + 0x20))();
              }
              if (*(long **)(uVar13 - 0x108) != (long *)0x0) {
                (**(code **)(**(long **)(uVar13 - 0x108) + 0x20))();
              }
              uVar13 = uVar13 - 0x48;
            } while (uVar8 + 0xd8 != uVar13);
          }
        }
      }
    }
    if (uVar8 != 0) {
      plVar9 = (long *)*puVar1;
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ec109c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x18))(plVar9,uVar8,uVar11 - uVar8,8);
        return;
      }
      FUN_00c48fe8(plVar9,uVar8,uVar11 - uVar8,8);
      return;
    }
  }
  return;
}


