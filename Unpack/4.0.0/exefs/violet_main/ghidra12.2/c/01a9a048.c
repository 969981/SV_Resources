/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a9a048; name: FUN_01a9a048
 */


ulong FUN_01a9a048(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  
  while( true ) {
    lVar6 = param_1[0xf] - param_1[0xe];
    if (lVar6 == 0) break;
    uVar5 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar6 + param_1[0xe] + -8;
    uVar9 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar9) =
         *(ulong *)(param_1[7] + uVar9) & (1L << (uVar5 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar5 < (ulong)(param_1[1] - *param_1 >> 4)) {
      puVar11 = (undefined8 *)(*param_1 + uVar5 * 0x10);
      uVar2 = param_2[1];
      *puVar11 = *param_2;
      puVar11[1] = uVar2;
      if ((ulong)param_1[0x15] <= uVar5) {
        param_1[0x15] = uVar5 + 1;
      }
      return uVar5;
    }
  }
  uVar9 = param_1[1] - *param_1 >> 4;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01a9a348(param_1,param_2);
  }
  else {
    uVar8 = param_1[4];
    uVar5 = uVar9 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = param_1[2] - *param_1;
    uVar7 = lVar6 >> 3;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    plVar10 = param_1 + 3;
    if (uVar8 >> 1 <= (ulong)(lVar6 >> 4)) {
      uVar5 = uVar8;
    }
    if (uVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar5 << 4,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xe8))();
      }
    }
    lVar12 = *plVar10;
    puVar11 = (undefined8 *)(lVar6 + uVar9 * 0x10);
    if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 == 0) {
      uVar2 = param_2[1];
      *puVar11 = *param_2;
      puVar11[1] = uVar2;
    }
    else {
      if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar12;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
      uVar2 = param_2[1];
      *puVar11 = *param_2;
      puVar11[1] = uVar2;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar12 = *param_1;
    lVar4 = param_1[1];
    puVar1 = puVar11 + 2;
    if (lVar4 != lVar12) {
      puVar11 = puVar11 + -2;
      FUN_013d364c(plVar10,puVar11,lVar4 + -0x10);
      if (lVar4 + -0x10 != lVar12) {
        do {
          puVar11 = puVar11 + -2;
          FUN_013d364c(plVar10,puVar11,lVar4 + -0x20);
          lVar4 = lVar4 + -0x10;
        } while (lVar12 + 0x10 != lVar4);
      }
      lVar12 = *param_1;
    }
    lVar4 = param_1[2];
    *param_1 = (long)puVar11;
    param_1[1] = (long)puVar1;
    param_1[2] = lVar6 + uVar5 * 0x10;
    if (lVar12 != 0) {
      plVar10 = (long *)*plVar10;
      uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10);
      if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar4 - lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar10,lVar12,lVar4 - lVar12,8);
      }
    }
  }
  param_1[0x15] = uVar9 + 1;
  return uVar9;
}


