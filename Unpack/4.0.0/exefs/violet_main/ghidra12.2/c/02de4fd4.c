/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02de4fd4; name: FUN_02de4fd4
 */


void FUN_02de4fd4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + param_2 * 8);
  puVar8 = *(undefined8 **)(lVar13 + 0x3b8);
  if (puVar8 < *(undefined8 **)(lVar13 + 0x3c0)) {
    uVar10 = *(undefined8 *)(lVar13 + 0x3c8);
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar8 = param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_02de5380:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar8 = param_3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    *(undefined8 **)(lVar13 + 0x3b8) = puVar8 + 1;
  }
  else {
    uVar7 = *(ulong *)(lVar13 + 0x3d0);
    lVar2 = (long)puVar8 - *(long *)(lVar13 + 0x3b0) >> 3;
    uVar4 = lVar2 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = (long)*(undefined8 **)(lVar13 + 0x3c0) - *(long *)(lVar13 + 0x3b0);
    uVar6 = lVar5 >> 2;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (uVar7 >> 1 <= (ulong)(lVar5 >> 3)) {
      uVar4 = uVar7;
    }
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(**(long **)(lVar13 + 0x3c8) + 0x10))
                        (*(long **)(lVar13 + 0x3c8),uVar4 << 3,8);
      if (lVar5 == 0) {
        (**(code **)(**(long **)(lVar13 + 0x3c8) + 0xe8))();
      }
    }
    puVar8 = (undefined8 *)(lVar5 + lVar2 * 8);
    uVar10 = *(undefined8 *)(lVar13 + 0x3c8);
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *puVar8 = param_3;
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) goto LAB_02de5380;
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar8 = param_3;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    lVar2 = *(long *)(lVar13 + 0x3b0);
    lVar12 = *(long *)(lVar13 + 0x3b8);
    puVar11 = puVar8;
    if (lVar12 != lVar2) {
      do {
        uVar10 = *(undefined8 *)(lVar13 + 0x3c8);
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          puVar11[-1] = *(undefined8 *)(lVar12 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_02de5380;
          *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar10;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          puVar11[-1] = *(undefined8 *)(lVar12 + -8);
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar12 = lVar12 + -8;
        puVar11 = puVar11 + -1;
      } while (lVar2 != lVar12);
      lVar2 = *(long *)(lVar13 + 0x3b0);
    }
    *(undefined8 **)(lVar13 + 0x3b8) = puVar8 + 1;
    lVar12 = *(long *)(lVar13 + 0x3c0);
    *(undefined8 **)(lVar13 + 0x3b0) = puVar11;
    *(ulong *)(lVar13 + 0x3c0) = lVar5 + uVar4 * 8;
    if (lVar2 != 0) {
      plVar9 = *(long **)(lVar13 + 0x3c8);
      lVar12 = lVar12 - lVar2;
      uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar4 & 1) != 0) {
        lVar13 = FUN_00c4e600();
        if (0 < *(int *)(lVar13 + 0x12c8)) {
          FUN_00c48fe8(plVar9,lVar2,lVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02de5280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar2,lVar12,8);
      return;
    }
  }
  return;
}


