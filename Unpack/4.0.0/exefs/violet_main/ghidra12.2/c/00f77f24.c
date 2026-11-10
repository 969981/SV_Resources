/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f77f24; name: FUN_00f77f24
 */


void FUN_00f77f24(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  
  puVar13 = (undefined8 *)param_1[1];
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_00f783d4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar13 = uVar6;
    puVar13[1] = param_2[1];
    puVar13[2] = param_2[2];
    puVar13[3] = param_2[3];
    uVar6 = param_2[4];
    param_2[4] = 0;
    puVar13[4] = uVar6;
    *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(param_2 + 5);
    uVar9 = param_2[8];
    uVar6 = param_2[7];
    puVar13[6] = param_2[6];
    puVar13[7] = uVar6;
    puVar13[8] = uVar9;
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar13 + 9);
  }
  else {
    uVar10 = param_1[4];
    lVar12 = (long)puVar13 - *param_1 >> 3;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar1 = lVar12 * -0x71c71c71c71c71c7 + 1;
    if (uVar10 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar3 * 0x1c71c71c71c71c72;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (uVar10 >> 1 <= (ulong)(lVar3 * -0x71c71c71c71c71c7)) {
      uVar1 = uVar10;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar1 * 0x48,8);
      if (lVar3 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar14 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar4 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar4 != 0) {
      if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_00f783d4;
      *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar14;
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    }
    puVar13 = (undefined8 *)(lVar3 + lVar12 * 8);
    uVar6 = *param_2;
    *param_2 = 0;
    *puVar13 = uVar6;
    lVar12 = lVar3 + lVar12 * 8;
    *(undefined8 *)(lVar12 + 8) = param_2[1];
    *(undefined8 *)(lVar12 + 0x10) = param_2[2];
    *(undefined8 *)(lVar12 + 0x18) = param_2[3];
    uVar6 = param_2[4];
    param_2[4] = 0;
    *(undefined8 *)(lVar12 + 0x20) = uVar6;
    *(undefined4 *)(lVar12 + 0x28) = *(undefined4 *)(param_2 + 5);
    uVar6 = param_2[6];
    uVar9 = param_2[8];
    *(undefined8 *)(lVar12 + 0x38) = param_2[7];
    *(undefined8 *)(lVar12 + 0x40) = uVar9;
    *(undefined8 *)(lVar12 + 0x30) = uVar6;
    if (lVar4 != 0) {
      *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    }
    lVar12 = *param_1;
    lVar14 = param_1[1];
    if (lVar14 == lVar12) {
      puVar7 = puVar13;
      lVar14 = lVar12;
    }
    else {
      lVar4 = 0;
      do {
        lVar15 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar5 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar5 != 0) {
          if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00f783d4;
          *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar15;
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        }
        lVar15 = lVar14 + lVar4;
        uVar6 = *(undefined8 *)(lVar15 + -0x48);
        *(undefined8 *)(lVar15 + -0x48) = 0;
        *(undefined8 *)((long)puVar13 + lVar4 + -0x48) = uVar6;
        *(undefined8 *)((long)puVar13 + lVar4 + -0x40) = *(undefined8 *)(lVar15 + -0x40);
        *(undefined8 *)((long)puVar13 + lVar4 + -0x38) = *(undefined8 *)(lVar15 + -0x38);
        *(undefined8 *)((long)puVar13 + lVar4 + -0x30) = *(undefined8 *)(lVar15 + -0x30);
        uVar6 = *(undefined8 *)(lVar15 + -0x28);
        *(undefined8 *)(lVar15 + -0x28) = 0;
        *(undefined8 *)((long)puVar13 + lVar4 + -0x28) = uVar6;
        *(undefined4 *)((long)puVar13 + lVar4 + -0x20) = *(undefined4 *)(lVar15 + -0x20);
        uVar6 = *(undefined8 *)(lVar15 + -0x18);
        uVar9 = *(undefined8 *)(lVar15 + -8);
        *(undefined8 *)((long)puVar13 + lVar4 + -0x10) = *(undefined8 *)(lVar15 + -0x10);
        *(undefined8 *)((long)puVar13 + lVar4 + -8) = uVar9;
        *(undefined8 *)((long)puVar13 + lVar4 + -0x18) = uVar6;
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        }
        lVar4 = lVar4 + -0x48;
      } while (lVar12 - lVar14 != lVar4);
      lVar12 = *param_1;
      puVar7 = (undefined8 *)((long)puVar13 + lVar4);
      lVar14 = param_1[1];
    }
    lVar4 = param_1[2];
    *param_1 = (long)puVar7;
    param_1[1] = (long)(puVar13 + 9);
    param_1[2] = lVar3 + uVar1 * 0x48;
    while (lVar14 != lVar12) {
      if (*(long **)(lVar14 + -0x28) != (long *)0x0) {
        (**(code **)(**(long **)(lVar14 + -0x28) + 0x20))();
      }
      plVar11 = (long *)(lVar14 + -0x48);
      lVar14 = lVar14 + -0x48;
      if ((long *)*plVar11 != (long *)0x0) {
        (**(code **)(*(long *)*plVar11 + 0x20))();
      }
    }
    if (lVar12 != 0) {
      plVar11 = (long *)param_1[3];
      uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar10 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar12,lVar4 - lVar12,8);
      }
      else {
        FUN_00c48fe8(plVar11,lVar12,lVar4 - lVar12,8);
      }
    }
  }
  return;
}


