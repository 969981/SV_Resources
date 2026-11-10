/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029dccec; name: FUN_029dccec
 */


void FUN_029dccec(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  lVar8 = param_1[1];
  if ((ulong)(param_1[2] - lVar8 >> 3) < param_2) {
    uVar10 = param_1[4];
    lVar8 = lVar8 - *param_1 >> 3;
    uVar2 = param_2 + lVar8;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar7 = lVar6 >> 2;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    plVar1 = param_1 + 3;
    if (uVar10 >> 1 <= (ulong)(lVar6 >> 3)) {
      uVar2 = uVar10;
    }
    local_70 = 0;
    plStack_68 = plVar1;
    if (uVar2 == 0) {
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar2 << 3,8);
      if (local_88 == 0) {
        (**(code **)(*(long *)*plVar1 + 0xe8))();
      }
    }
    lVar6 = local_88 + lVar8 * 8;
    lVar11 = local_88 + uVar2 * 8;
    lVar5 = lVar6 + param_2 * 8;
    lVar12 = param_2 << 3;
    lVar8 = lVar6;
    local_80 = lVar6;
    local_78 = lVar6;
    local_70 = lVar11;
    do {
      FUN_029e4008(plVar1,lVar8);
      puVar3 = PTR_LAB_047d3900;
      lVar8 = lVar8 + 8;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
    lVar8 = *param_1;
    lVar12 = param_1[1];
    local_78 = lVar5;
    if (lVar12 == lVar8) {
      local_70 = lVar11;
      lVar11 = lVar8;
    }
    else {
      do {
        lVar11 = *plVar1;
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 == 0) {
          uVar9 = *(undefined8 *)(lVar12 + -8);
          *(undefined8 *)(lVar12 + -8) = 0;
          *(undefined8 *)(lVar6 + -8) = uVar9;
        }
        else {
          if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
          uVar9 = *(undefined8 *)(lVar12 + -8);
          *(undefined8 *)(lVar12 + -8) = 0;
          *(undefined8 *)(lVar6 + -8) = uVar9;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar12 = lVar12 + -8;
        lVar6 = local_80 + -8;
        local_80 = lVar6;
      } while (lVar8 != lVar12);
      lVar8 = *param_1;
      lVar11 = param_1[1];
    }
    *param_1 = lVar6;
    param_1[1] = local_78;
    lVar6 = param_1[2];
    param_1[2] = local_70;
    local_88 = lVar8;
    local_80 = lVar8;
    local_78 = lVar11;
    local_70 = lVar6;
    FUN_011c76ec(&local_88);
  }
  else {
    lVar6 = lVar8;
    if (param_2 != 0) {
      lVar6 = lVar8 + param_2 * 8;
      lVar11 = param_2 << 3;
      do {
        FUN_029e4008(param_1 + 3,lVar8);
        lVar8 = lVar8 + 8;
        lVar11 = lVar11 + -8;
      } while (lVar11 != 0);
    }
    param_1[1] = lVar6;
  }
  return;
}


