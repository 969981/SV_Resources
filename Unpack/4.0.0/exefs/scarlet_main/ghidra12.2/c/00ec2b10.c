/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec2b10; name: FUN_00ec2b10
 */


void FUN_00ec2b10(long param_1,ulong param_2,undefined4 param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined4 local_68 [2];
  
  lVar16 = *(long *)(param_1 + 0x88) + (param_2 & 0xffffffff) * 0x108;
  puVar17 = (ulong *)(lVar16 + 0x58);
  puVar18 = (ulong *)(lVar16 + 0x50);
  puVar13 = (ulong *)(lVar16 + 0x48);
  local_68[0] = param_3;
  if (*puVar18 < *puVar17) {
    FUN_00ee5650(puVar13,local_68,param_4);
  }
  else {
    lVar16 = *(long *)(param_1 + 0x88) + (param_2 & 0xffffffff) * 0x108;
    lVar9 = (long)(*puVar18 - *puVar13) >> 3;
    uVar10 = *(ulong *)(lVar16 + 0x68);
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar1 = lVar9 * -0x3333333333333333 + 1;
    if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)(*puVar17 - *puVar13) >> 3;
    puVar2 = (undefined8 *)(lVar16 + 0x60);
    uVar8 = lVar7 * -0x6666666666666666;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar10 >> 1 <= (ulong)(lVar7 * -0x3333333333333333)) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar1 * 0x28,8);
      if (lVar16 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xe8))();
      }
    }
    uVar14 = *puVar2;
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 != 0) {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar14;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    }
    puVar15 = (undefined4 *)(lVar16 + lVar9 * 8);
    uVar14 = *param_4;
    uVar5 = param_4[1];
    uVar4 = param_4[2];
    plVar11 = (long *)param_4[3];
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    *puVar15 = param_3;
    lVar9 = lVar16 + lVar9 * 8;
    *(undefined8 *)(lVar9 + 8) = uVar14;
    *(undefined8 *)(lVar9 + 0x10) = uVar5;
    *(undefined8 *)(lVar9 + 0x18) = uVar4;
    *(long **)(lVar9 + 0x20) = plVar11;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    uVar10 = *puVar13;
    uVar8 = *puVar18;
    puVar3 = puVar15 + 10;
    if (uVar8 == uVar10) {
      uVar8 = uVar10;
    }
    else {
      do {
        puVar15 = puVar15 + -10;
        uVar8 = uVar8 - 0x28;
        FUN_00ee4554(puVar2,puVar15,uVar8);
      } while (uVar10 != uVar8);
      uVar8 = *puVar13;
      uVar10 = *puVar18;
    }
    *puVar13 = (ulong)puVar15;
    *puVar18 = (ulong)puVar3;
    uVar12 = *puVar17;
    *puVar17 = lVar16 + uVar1 * 0x28;
    if (uVar10 != uVar8) {
      if (*(long **)(uVar10 - 8) != (long *)0x0) {
        (**(code **)(**(long **)(uVar10 - 8) + 0x20))();
      }
      if (uVar10 - 0x28 != uVar8) {
        do {
          if (*(long **)(uVar10 - 0x30) != (long *)0x0) {
            (**(code **)(**(long **)(uVar10 - 0x30) + 0x20))();
          }
          uVar10 = uVar10 - 0x28;
        } while (uVar8 + 0x28 != uVar10);
      }
    }
    if (uVar8 != 0) {
      plVar11 = (long *)*puVar2;
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00ec2d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar8,uVar12 - uVar8,8);
        return;
      }
      FUN_00c48fe8(plVar11,uVar8,uVar12 - uVar8,8);
      return;
    }
  }
  return;
}


