/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0276db50; name: FUN_0276db50
 */


void FUN_0276db50(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  uVar8 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 7;
  uVar4 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar8) {
    uVar8 = 0x7fffffffffffffff;
  }
  if (uVar8 < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar5 = param_1[2] - *param_1;
  uVar6 = lVar5 >> 6;
  if (uVar4 <= uVar6) {
    uVar4 = uVar6;
  }
  plVar9 = param_1 + 3;
  local_50 = 0;
  if (uVar8 >> 1 <= (ulong)(lVar5 >> 7)) {
    uVar4 = uVar8;
  }
  local_48 = plVar9;
  if (uVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar4 << 7,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  lVar10 = lVar5 + lVar10 * 0x80;
  local_50 = lVar5 + uVar4 * 0x80;
  lVar5 = *plVar9;
  local_60 = lVar10;
  local_58 = lVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    FUN_0276ddd0(lVar10,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    FUN_0276ddd0(lVar10,param_2);
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    lVar10 = local_58;
  }
  local_58 = lVar10 + 0x80;
  FUN_0103360c(plVar9,*param_1,param_1[1],&local_60);
  lVar3 = *param_1;
  lVar10 = param_1[1];
  lVar5 = param_1[2];
  *param_1 = local_60;
  param_1[1] = local_58;
  param_1[2] = local_50;
  local_60 = lVar3;
  local_58 = lVar10;
  local_50 = lVar5;
  while (lVar1 = lVar10, lVar1 != lVar3) {
    lVar10 = lVar1 + -0x80;
    pcVar7 = *(code **)(lVar1 + -0x78);
    local_58 = lVar10;
    if (pcVar7 != (code *)0x0) {
      *(undefined8 *)(lVar1 + -0x70) = 0;
      *(undefined8 *)(lVar1 + -0x68) = 0;
      *(undefined8 *)(lVar1 + -0x80) = 0;
      *(undefined8 *)(lVar1 + -0x78) = 0;
      (*pcVar7)(lVar1 + -0x60);
    }
  }
  if (lVar3 != 0) {
    lVar5 = lVar5 - lVar3;
    plVar9 = (long *)*local_48;
    uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar4 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar3,lVar5,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,lVar3,lVar5,0x10);
    }
  }
  return;
}


