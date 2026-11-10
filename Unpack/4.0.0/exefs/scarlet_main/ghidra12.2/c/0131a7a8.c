/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0131a7a8; name: FUN_0131a7a8
 */


void FUN_0131a7a8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    uVar8 = param_1[4];
    lVar10 = (long)puVar1 - *param_1 >> 3;
    uVar4 = lVar10 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar7 = lVar6 >> 2;
    if (uVar4 <= uVar7) {
      uVar4 = uVar7;
    }
    if (uVar8 >> 1 <= (ulong)(lVar6 >> 3)) {
      uVar4 = uVar8;
    }
    if (uVar4 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar4 << 3,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    puVar1 = (undefined8 *)(lVar6 + lVar10 * 8);
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      *puVar1 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_0131ab4c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar10;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      *puVar1 = *param_2;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar10 = *param_1;
    lVar3 = param_1[1];
    puVar12 = puVar1;
    if (lVar3 != lVar10) {
      do {
        lVar11 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          puVar12[-1] = *(undefined8 *)(lVar3 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_0131ab4c;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          puVar12[-1] = *(undefined8 *)(lVar3 + -8);
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar3 = lVar3 + -8;
        puVar12 = puVar12 + -1;
      } while (lVar10 != lVar3);
      lVar10 = *param_1;
    }
    *param_1 = (long)puVar12;
    param_1[1] = (long)(puVar1 + 1);
    lVar3 = param_1[2];
    param_1[2] = lVar6 + uVar4 * 8;
    if (lVar10 != 0) {
      plVar9 = (long *)param_1[3];
      uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if ((uVar4 & 1) != 0) {
        lVar6 = FUN_00c4e600();
        if (0 < *(int *)(lVar6 + 0x12c8)) {
          FUN_00c48fe8(plVar9,lVar10,lVar3 - lVar10,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0131a928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar10,lVar3 - lVar10,8);
      return;
    }
  }
  else {
    lVar10 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar1 = *param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0131ab4c;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar1 = *param_2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 1);
  }
  return;
}


