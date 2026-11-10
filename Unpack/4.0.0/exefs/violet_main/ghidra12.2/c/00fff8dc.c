/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fff8dc; name: FUN_00fff8dc
 */


void FUN_00fff8dc(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_2 <= (ulong)(param_1[2] - param_1[1] >> 3)) {
    FUN_0100b384(param_1,param_2);
    return;
  }
  uVar7 = param_1[4];
  lVar11 = param_1[1] - *param_1 >> 3;
  uVar4 = param_2 + lVar11;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 2;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  plVar8 = param_1 + 3;
  if (uVar7 >> 1 <= (ulong)(lVar5 >> 3)) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar8 + 0x10))((long *)*plVar8,uVar4 << 3,8);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar8 + 0xe8))();
    }
  }
  puVar12 = (undefined8 *)(lVar5 + lVar11 * 8);
  lVar11 = param_2 << 3;
  puVar1 = puVar12 + param_2;
  puVar9 = puVar12;
  do {
    lVar10 = *plVar8;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar9 = 0;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar9 = 0;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    puVar9 = puVar9 + 1;
    lVar11 = lVar11 + -8;
  } while (lVar11 != 0);
  lVar11 = *param_1;
  lVar10 = param_1[1];
  if (lVar10 != lVar11) {
    do {
      puVar12 = puVar12 + -1;
      lVar10 = lVar10 + -8;
      FUN_0100ad20(plVar8,puVar12,lVar10);
    } while (lVar11 != lVar10);
    lVar11 = *param_1;
  }
  lVar10 = param_1[2];
  *param_1 = (long)puVar12;
  param_1[1] = (long)puVar1;
  param_1[2] = lVar5 + uVar4 * 8;
  if (lVar11 == 0) {
    return;
  }
  plVar8 = (long *)*plVar8;
  uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar8,lVar11,lVar10 - lVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00fffad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,lVar10 - lVar11,8);
  return;
}


