/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e007a8; name: FUN_00e007a8
 */


void FUN_00e007a8(long *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_2 <= (ulong)((param_1[2] - param_1[1] >> 3) * -0x5555555555555555)) {
    FUN_00e026dc(param_1,param_2);
    return;
  }
  lVar8 = param_1[1] - *param_1 >> 3;
  uVar10 = param_1[4];
  if (0x7ffffffffffffffe < uVar10) {
    uVar10 = 0x7fffffffffffffff;
  }
  uVar1 = lVar8 * -0x5555555555555555 + param_2;
  if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar6 = param_1[2] - *param_1 >> 3;
  uVar7 = lVar6 * 0x5555555555555556;
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (uVar10 >> 1 <= (ulong)(lVar6 * -0x5555555555555555)) {
    uVar1 = uVar10;
  }
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x18,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  lVar15 = lVar6 + lVar8 * 8;
  lVar13 = param_2 * 0x18;
  lVar8 = lVar15 + param_2 * 0x18;
  puVar12 = (undefined8 *)(lVar15 + 0x10);
  do {
    lVar14 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      puVar12[-1] = 0;
      *puVar12 = 0;
      puVar12[-2] = 0;
      *(undefined1 *)puVar12 = 1;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00e00af4;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      puVar12[-2] = 0;
      puVar12[-1] = 0;
      *puVar12 = 0;
      *(undefined1 *)puVar12 = 1;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar13 = lVar13 + -0x18;
    puVar12 = puVar12 + 3;
  } while (lVar13 != 0);
  lVar13 = *param_1;
  lVar14 = param_1[1];
  if (lVar14 != lVar13) {
    do {
      lVar4 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        uVar2 = *(undefined8 *)(lVar14 + -0x18);
        uVar9 = *(undefined8 *)(lVar14 + -8);
        *(undefined8 *)(lVar15 + -0x10) = *(undefined8 *)(lVar14 + -0x10);
        *(undefined8 *)(lVar15 + -8) = uVar9;
        *(undefined8 *)(lVar15 + -0x18) = uVar2;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_00e00af4:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar4;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        uVar9 = *(undefined8 *)(lVar14 + -8);
        uVar2 = *(undefined8 *)(lVar14 + -0x10);
        *(undefined8 *)(lVar15 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
        *(undefined8 *)(lVar15 + -0x10) = uVar2;
        *(undefined8 *)(lVar15 + -8) = uVar9;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar14 = lVar14 + -0x18;
      lVar15 = lVar15 + -0x18;
    } while (lVar13 != lVar14);
    lVar13 = *param_1;
  }
  lVar14 = param_1[2];
  *param_1 = lVar15;
  param_1[1] = lVar8;
  param_1[2] = lVar6 + uVar1 * 0x18;
  if (lVar13 == 0) {
    return;
  }
  plVar11 = (long *)param_1[3];
  uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
  if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00e009d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar13,lVar14 - lVar13,8);
    return;
  }
  FUN_00c48fe8(plVar11,lVar13,lVar14 - lVar13,8);
  return;
}


