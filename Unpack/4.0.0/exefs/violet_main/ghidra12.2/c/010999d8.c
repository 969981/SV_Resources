/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010999d8; name: FUN_010999d8
 */


ulong FUN_010999d8(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  
  while( true ) {
    lVar15 = param_1[0xf] - param_1[0xe];
    if (lVar15 == 0) break;
    uVar12 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar15 + param_1[0xe] + -8;
    uVar10 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar10) =
         *(ulong *)(param_1[7] + uVar10) & (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar12 < (ulong)(param_1[1] - *param_1 >> 5)) {
      puVar1 = (undefined8 *)(*param_1 + uVar12 * 0x20);
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      if (uVar12 < (ulong)param_1[0x15]) {
        return uVar12;
      }
      param_1[0x15] = uVar12 + 1;
      return uVar12;
    }
  }
  puVar1 = (undefined8 *)param_1[1];
  uVar10 = (long)puVar1 - *param_1 >> 5;
  if (puVar1 < (undefined8 *)param_1[2]) {
    lVar15 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01099dfc;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar1 + 4);
  }
  else {
    uVar11 = param_1[4];
    uVar12 = uVar10 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = param_1[2] - *param_1;
    uVar9 = lVar15 >> 4;
    if (uVar12 <= uVar9) {
      uVar12 = uVar9;
    }
    if (uVar11 >> 1 <= (ulong)(lVar15 >> 5)) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 << 5,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar6 = param_1[3];
    puVar1 = (undefined8 *)(lVar15 + uVar10 * 0x20);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar7 == 0) {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
    }
    else {
      if (0xf < *(ulong *)(lVar7 + 0x80)) {
LAB_01099dfc:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar6;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[3];
      puVar1[2] = param_2[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
    }
    lVar6 = *param_1;
    lVar7 = param_1[1];
    puVar16 = puVar1;
    if (lVar7 != lVar6) {
      do {
        lVar13 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          uVar2 = *(undefined8 *)(lVar7 + -0x20);
          uVar3 = *(undefined8 *)(lVar7 + -0x18);
          uVar4 = *(undefined8 *)(lVar7 + -8);
          puVar16[-2] = *(undefined8 *)(lVar7 + -0x10);
          puVar16[-1] = uVar4;
          puVar16[-4] = uVar2;
          puVar16[-3] = uVar3;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_01099dfc;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar13;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          uVar2 = *(undefined8 *)(lVar7 + -0x20);
          uVar3 = *(undefined8 *)(lVar7 + -0x18);
          uVar4 = *(undefined8 *)(lVar7 + -8);
          puVar16[-2] = *(undefined8 *)(lVar7 + -0x10);
          puVar16[-1] = uVar4;
          puVar16[-4] = uVar2;
          puVar16[-3] = uVar3;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar7 = lVar7 + -0x20;
        puVar16 = puVar16 + -4;
      } while (lVar6 != lVar7);
      lVar6 = *param_1;
    }
    *param_1 = (long)puVar16;
    param_1[1] = (long)(puVar1 + 4);
    lVar7 = param_1[2];
    param_1[2] = lVar15 + uVar12 * 0x20;
    if (lVar6 != 0) {
      plVar14 = (long *)param_1[3];
      uVar12 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar12 & 1) == 0) || (lVar15 = FUN_00c4e600(), *(int *)(lVar15 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar6,lVar7 - lVar6,8);
      }
      else {
        FUN_00c48fe8(plVar14,lVar6,lVar7 - lVar6,8);
      }
    }
  }
  param_1[0x15] = uVar10 + 1;
  return uVar10;
}


