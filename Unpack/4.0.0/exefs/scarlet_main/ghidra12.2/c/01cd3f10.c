/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cd3f10; name: FUN_01cd3f10
 */


ulong FUN_01cd3f10(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  while( true ) {
    lVar4 = param_1[0xf] - param_1[0xe];
    if (lVar4 == 0) break;
    uVar8 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar4 + param_1[0xe] + -8;
    uVar6 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar6) =
         *(ulong *)(param_1[7] + uVar6) & (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar8 < (ulong)(param_1[1] - *param_1 >> 4)) {
      plVar10 = (long *)(*param_1 + uVar8 * 0x10);
      *plVar10 = (long)*param_2;
      plVar10[1] = *(long *)(param_2 + 2);
      if (uVar8 < (ulong)param_1[0x15]) {
        return uVar8;
      }
      param_1[0x15] = uVar8 + 1;
      return uVar8;
    }
  }
  plVar10 = (long *)param_1[1];
  uVar6 = (long)plVar10 - *param_1 >> 4;
  if (plVar10 < (long *)param_1[2]) {
    lVar4 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar9 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar9 == 0) {
      *plVar10 = (long)*param_2;
      plVar10[1] = *(long *)(param_2 + 2);
    }
    else {
      if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_01cd431c;
      *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar4;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      *plVar10 = (long)*param_2;
      plVar10[1] = *(long *)(param_2 + 2);
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    }
    param_1[1] = (long)(plVar10 + 2);
  }
  else {
    uVar7 = param_1[4];
    uVar8 = uVar6 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = param_1[2] - *param_1;
    uVar5 = lVar4 >> 3;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (uVar7 >> 1 <= (ulong)(lVar4 >> 4)) {
      uVar8 = uVar7;
    }
    if (uVar8 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar8 << 4,8);
      if (lVar4 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar9 = param_1[3];
    plVar10 = (long *)(lVar4 + uVar6 * 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar2 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar2 == 0) {
      *plVar10 = (long)*param_2;
      plVar10[1] = *(long *)(param_2 + 2);
    }
    else {
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
LAB_01cd431c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = lVar9;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *plVar10 = (long)*param_2;
      plVar10[1] = *(long *)(param_2 + 2);
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
    }
    lVar9 = *param_1;
    lVar2 = param_1[1];
    plVar11 = plVar10;
    if (lVar2 != lVar9) {
      do {
        lVar12 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar3 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar3 == 0) {
          lVar12 = *(long *)(lVar2 + -8);
          plVar11[-2] = *(long *)(lVar2 + -0x10);
          plVar11[-1] = lVar12;
        }
        else {
          if (0xf < *(ulong *)(lVar3 + 0x80)) goto LAB_01cd431c;
          *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          lVar12 = *(long *)(lVar2 + -8);
          plVar11[-2] = *(long *)(lVar2 + -0x10);
          plVar11[-1] = lVar12;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        }
        lVar2 = lVar2 + -0x10;
        plVar11 = plVar11 + -2;
      } while (lVar9 != lVar2);
      lVar9 = *param_1;
    }
    *param_1 = (long)plVar11;
    param_1[1] = (long)(plVar10 + 2);
    lVar2 = param_1[2];
    param_1[2] = lVar4 + uVar8 * 0x10;
    if (lVar9 != 0) {
      plVar10 = (long *)param_1[3];
      uVar8 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar8 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,lVar2 - lVar9,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar9,lVar2 - lVar9,8);
      }
    }
  }
  param_1[0x15] = uVar6 + 1;
  return uVar6;
}


