/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01160bdc; name: FUN_01160bdc
 */


ulong FUN_01160bdc(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  while( true ) {
    lVar5 = param_1[0xf] - param_1[0xe];
    if (lVar5 == 0) break;
    uVar4 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar5 + param_1[0xe] + -8;
    uVar8 = uVar4 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar8) =
         *(ulong *)(param_1[7] + uVar8) & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar4 < (ulong)(param_1[1] - *param_1 >> 4)) {
      puVar10 = (undefined8 *)(*param_1 + uVar4 * 0x10);
      *puVar10 = *param_2;
      puVar10[1] = param_2[1];
      if ((ulong)param_1[0x15] <= uVar4) {
        param_1[0x15] = uVar4 + 1;
      }
      return uVar4;
    }
  }
  uVar8 = param_1[1] - *param_1 >> 4;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01163e30(param_1,param_2);
  }
  else {
    uVar7 = param_1[4];
    uVar4 = uVar8 + 1;
    if (0x7ffffffffffffffe < uVar7) {
      uVar7 = 0x7fffffffffffffff;
    }
    if (uVar7 < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = param_1[2] - *param_1;
    uVar6 = lVar5 >> 3;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    plVar9 = param_1 + 3;
    local_60 = 0;
    if (uVar7 >> 1 <= (ulong)(lVar5 >> 4)) {
      uVar4 = uVar7;
    }
    local_58 = plVar9;
    if (uVar4 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar4 << 4,8);
      if (lVar5 == 0) {
        (**(code **)(*(long *)*plVar9 + 0xe8))();
      }
    }
    puVar10 = (undefined8 *)(lVar5 + uVar8 * 0x10);
    local_60 = lVar5 + uVar4 * 0x10;
    lVar5 = *plVar9;
    local_70 = puVar10;
    local_68 = puVar10;
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 == 0) {
      uVar1 = param_2[1];
      *puVar10 = *param_2;
      puVar10[1] = uVar1;
    }
    else {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar5;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      uVar1 = param_2[1];
      *puVar10 = *param_2;
      puVar10[1] = uVar1;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      puVar10 = local_68;
    }
    local_68 = puVar10 + 2;
    FUN_01160f10(plVar9,*param_1,param_1[1],&local_70);
    puVar10 = (undefined8 *)*param_1;
    lVar5 = param_1[1];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    lVar3 = param_1[2];
    param_1[2] = local_60;
    local_68 = (undefined8 *)lVar5;
    if (lVar5 - (long)puVar10 != 0) {
      local_68 = (undefined8 *)
                 (lVar5 + ((lVar5 - (long)puVar10) - 0x10U >> 4 ^ 0xffffffffffffffff) * 0x10);
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar5 = lVar3 - (long)puVar10;
      plVar9 = (long *)*local_58;
      local_70 = puVar10;
      local_60 = lVar3;
      uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,puVar10,lVar5,8);
      }
      else {
        FUN_00c48fe8(plVar9,puVar10,lVar5,8);
      }
    }
  }
  param_1[0x15] = uVar8 + 1;
  return uVar8;
}


