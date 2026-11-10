/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01281bcc; name: FUN_01281bcc
 */


void FUN_01281bcc(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    puVar10 = (undefined4 *)param_1[1];
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 == 0) {
      *puVar10 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      *puVar10 = *param_2;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar10 + 1);
    return;
  }
  uVar7 = param_1[4];
  lVar9 = param_1[1] - *param_1 >> 2;
  uVar4 = lVar9 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 1;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  if (uVar7 >> 1 <= (ulong)(lVar5 >> 2)) {
    uVar4 = uVar7;
  }
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 2,4);
    if (lVar5 == 0) {
      (**(code **)(*(long *)param_1[3] + 0xe8))();
    }
  }
  puVar10 = (undefined4 *)(lVar5 + lVar9 * 4);
  lVar9 = param_1[3];
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 == 0) {
    *puVar10 = *param_2;
  }
  else {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_01281ecc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    *puVar10 = *param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  lVar9 = *param_1;
  lVar2 = param_1[1];
  puVar12 = puVar10;
  if (lVar2 != lVar9) {
    do {
      lVar11 = param_1[3];
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar3 == 0) {
        puVar12[-1] = *(undefined4 *)(lVar2 + -4);
      }
      else {
        if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_01281ecc;
        *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar11;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        puVar12[-1] = *(undefined4 *)(lVar2 + -4);
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      }
      lVar2 = lVar2 + -4;
      puVar12 = puVar12 + -1;
    } while (lVar9 != lVar2);
    lVar9 = *param_1;
  }
  *param_1 = (long)puVar12;
  param_1[1] = (long)(puVar10 + 1);
  lVar2 = param_1[2];
  param_1[2] = lVar5 + uVar4 * 4;
  if (lVar9 == 0) {
    return;
  }
  plVar8 = (long *)param_1[3];
  uVar4 = (**(code **)(*plVar8 + 0xf8))(plVar8);
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00c4e600();
    if (0 < *(int *)(lVar5 + 0x12c8)) {
      FUN_00c48fe8(plVar8,lVar9,lVar2 - lVar9,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01281da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,lVar2 - lVar9,4);
  return;
}


