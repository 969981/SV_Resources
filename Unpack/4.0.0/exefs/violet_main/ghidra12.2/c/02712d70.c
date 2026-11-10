/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02712d70; name: FUN_02712d70
 */


void FUN_02712d70(long param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  
  puVar14 = *(undefined4 **)(param_1 + 200);
  if (puVar14 < *(undefined4 **)(param_1 + 0xd0)) {
    uVar13 = *(undefined8 *)(param_1 + 0xd8);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar11 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar11 != 0) {
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_02713278;
      *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar13;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
    }
    *puVar14 = param_2;
    *(undefined8 *)(puVar14 + 2) = *param_3;
    *(undefined8 *)(puVar14 + 4) = param_3[1];
    *(undefined8 *)(puVar14 + 6) = param_3[2];
    plVar5 = (long *)param_3[3];
    *(long **)(puVar14 + 8) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    uVar13 = param_4[1];
    *(undefined8 *)(puVar14 + 10) = *param_4;
    *(undefined8 *)(puVar14 + 0xc) = uVar13;
    if (lVar11 != 0) {
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
    }
    *(undefined4 **)(param_1 + 200) = puVar14 + 0xe;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0xe0);
    lVar11 = (long)puVar14 - *(long *)(param_1 + 0xc0) >> 3;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    uVar1 = lVar11 * 0x6db6db6db6db6db7 + 1;
    if (uVar12 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = (long)*(undefined4 **)(param_1 + 0xd0) - *(long *)(param_1 + 0xc0) >> 3;
    uVar10 = lVar7 * -0x2492492492492492;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (uVar12 >> 1 <= (ulong)(lVar7 * 0x6db6db6db6db6db7)) {
      uVar1 = uVar12;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(**(long **)(param_1 + 0xd8) + 0x10))
                        (*(long **)(param_1 + 0xd8),uVar1 * 0x38,8);
      if (lVar7 == 0) {
        (**(code **)(**(long **)(param_1 + 0xd8) + 0xe8))();
      }
    }
    uVar13 = *(undefined8 *)(param_1 + 0xd8);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_02713278:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = uVar13;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar14 = (undefined4 *)(lVar7 + lVar11 * 8);
    lVar8 = lVar7 + lVar11 * 8;
    *puVar14 = param_2;
    *(undefined8 *)(lVar8 + 8) = *param_3;
    *(undefined8 *)(lVar8 + 0x10) = param_3[1];
    *(undefined8 *)(lVar8 + 0x18) = param_3[2];
    plVar5 = (long *)param_3[3];
    *(long **)(lVar8 + 0x20) = plVar5;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))();
    }
    lVar11 = lVar7 + lVar11 * 8;
    uVar13 = param_4[1];
    *(undefined8 *)(lVar11 + 0x28) = *param_4;
    *(undefined8 *)(lVar11 + 0x30) = uVar13;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar11 = *(long *)(param_1 + 0xc0);
    lVar4 = *(long *)(param_1 + 200);
    if (lVar4 == lVar11) {
      puVar9 = puVar14;
      lVar4 = lVar11;
    }
    else {
      lVar8 = 0;
      do {
        uVar13 = *(undefined8 *)(param_1 + 0xd8);
        if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_02713278;
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar13;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        lVar2 = lVar4 + lVar8;
        *(undefined4 *)((long)puVar14 + lVar8 + -0x38) = *(undefined4 *)(lVar2 + -0x38);
        *(undefined8 *)((long)puVar14 + lVar8 + -0x30) = *(undefined8 *)(lVar2 + -0x30);
        *(undefined8 *)((long)puVar14 + lVar8 + -0x28) = *(undefined8 *)(lVar2 + -0x28);
        *(undefined8 *)((long)puVar14 + lVar8 + -0x20) = *(undefined8 *)(lVar2 + -0x20);
        uVar13 = *(undefined8 *)(lVar2 + -0x18);
        *(undefined8 *)(lVar2 + -0x18) = 0;
        *(undefined8 *)((long)puVar14 + lVar8 + -0x18) = uVar13;
        uVar13 = *(undefined8 *)(lVar2 + -8);
        *(undefined8 *)((long)puVar14 + lVar8 + -0x10) = *(undefined8 *)(lVar2 + -0x10);
        *(undefined8 *)((long)puVar14 + lVar8 + -8) = uVar13;
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar8 = lVar8 + -0x38;
      } while (lVar11 - lVar4 != lVar8);
      lVar11 = *(long *)(param_1 + 0xc0);
      puVar9 = (undefined4 *)((long)puVar14 + lVar8);
      lVar4 = *(long *)(param_1 + 200);
    }
    lVar8 = *(long *)(param_1 + 0xd0);
    *(ulong *)(param_1 + 0xd0) = lVar7 + uVar1 * 0x38;
    *(undefined4 **)(param_1 + 0xc0) = puVar9;
    *(undefined4 **)(param_1 + 200) = puVar14 + 0xe;
    if (lVar4 != lVar11) {
      if (*(long **)(lVar4 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar4 + -0x18) + 0x20))();
      }
      if (lVar4 + -0x38 != lVar11) {
        if (*(long **)(lVar4 + -0x50) != (long *)0x0) {
          (**(code **)(**(long **)(lVar4 + -0x50) + 0x20))();
        }
        if (lVar4 + -0x70 != lVar11) {
          do {
            if (*(long **)(lVar4 + -0x88) != (long *)0x0) {
              (**(code **)(**(long **)(lVar4 + -0x88) + 0x20))();
            }
            lVar4 = lVar4 + -0x38;
          } while (lVar11 + 0x70 != lVar4);
        }
      }
    }
    if (lVar11 != 0) {
      plVar5 = *(long **)(param_1 + 0xd8);
      lVar8 = lVar8 - lVar11;
      uVar12 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar12 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x02713024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar11,lVar8,8);
        return;
      }
      FUN_00c48fe8(plVar5,lVar11,lVar8,8);
      return;
    }
  }
  return;
}


