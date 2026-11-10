/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01649fc4; name: FUN_01649fc4
 */


void FUN_01649fc4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long *plStack_68;
  
  uVar10 = param_1[4];
  lVar11 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar11 + 1;
  if (0x7ffffffffffffffe < uVar10) {
    uVar10 = 0x7fffffffffffffff;
  }
  if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar8 = lVar7 >> 2;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  plVar2 = param_1 + 3;
  local_70 = 0;
  if (uVar10 >> 1 <= (ulong)(lVar7 >> 3)) {
    uVar1 = uVar10;
  }
  plStack_68 = plVar2;
  if (uVar1 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar1 << 3,8);
    if (local_88 == 0) {
      (**(code **)(*(long *)*plVar2 + 0xe8))();
    }
  }
  lVar11 = local_88 + lVar11 * 8;
  lVar7 = local_88 + uVar1 * 8;
  local_80 = lVar11;
  local_70 = lVar7;
  FUN_0164a1dc(plVar2,lVar11,param_2);
  puVar3 = PTR_LAB_047d3900;
  local_78 = lVar11 + 8;
  lVar9 = *param_1;
  lVar12 = param_1[1];
  if (lVar12 == lVar9) {
    lVar12 = lVar9;
  }
  else {
    do {
      lVar7 = *plVar2;
      if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar3,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar5 = nn::os::GetTlsValue(DAT_04865a30);
      if (lVar5 == 0) {
        uVar6 = *(undefined8 *)(lVar12 + -8);
        *(undefined8 *)(lVar12 + -8) = 0;
        *(undefined8 *)(lVar11 + -8) = uVar6;
      }
      else {
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        uVar6 = *(undefined8 *)(lVar12 + -8);
        *(undefined8 *)(lVar12 + -8) = 0;
        *(undefined8 *)(lVar11 + -8) = uVar6;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      }
      lVar12 = lVar12 + -8;
      lVar11 = local_80 + -8;
      local_80 = lVar11;
    } while (lVar9 != lVar12);
    lVar9 = *param_1;
    lVar7 = local_70;
    lVar12 = param_1[1];
  }
  *param_1 = lVar11;
  param_1[1] = local_78;
  local_70 = param_1[2];
  param_1[2] = lVar7;
  local_88 = lVar9;
  local_80 = lVar9;
  local_78 = lVar12;
  FUN_0163d9b8(&local_88);
  return;
}


