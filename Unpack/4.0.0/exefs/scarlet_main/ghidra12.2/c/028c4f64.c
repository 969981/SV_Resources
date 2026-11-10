/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028c4f64; name: FUN_028c4f64
 */


ulong FUN_028c4f64(long *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  
  while( true ) {
    lVar9 = param_1[0xf] - param_1[0xe];
    if (lVar9 == 0) break;
    uVar12 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar9 + param_1[0xe] + -8;
    uVar10 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar10) =
         *(ulong *)(param_1[7] + uVar10) & (1L << (uVar12 & 0x3f) ^ 0xffffffffffffffffU);
    lVar9 = *param_1;
    if (uVar12 < (ulong)((param_1[1] - lVar9 >> 4) * 0x6db6db6db6db6db7)) {
      *(undefined8 *)(lVar9 + uVar12 * 0x70) = *param_2;
      plVar15 = (long *)(lVar9 + uVar12 * 0x70 + 8);
      plVar2 = (long *)*plVar15;
      *plVar15 = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))();
      }
      lVar5 = param_2[1];
      param_2[1] = 0;
      *plVar15 = lVar5;
      memcpy((void *)(lVar9 + uVar12 * 0x70 + 0x10),param_2 + 2,0x51);
      if (uVar12 < (ulong)param_1[0x15]) {
        return uVar12;
      }
      param_1[0x15] = uVar12 + 1;
      return uVar12;
    }
  }
  puVar14 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar14 - *param_1 >> 4;
  uVar10 = lVar9 * 0x6db6db6db6db6db7;
  if (puVar14 < (undefined8 *)param_1[2]) {
    lVar9 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_028c5490;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar9;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    *puVar14 = *param_2;
    uVar6 = param_2[1];
    param_2[1] = 0;
    puVar14[1] = uVar6;
    memcpy(puVar14 + 2,param_2 + 2,0x51);
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar14 + 0xe);
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
    lVar5 = param_1[2] - *param_1 >> 4;
    uVar7 = lVar5 * -0x2492492492492492;
    if (uVar12 <= uVar7) {
      uVar12 = uVar7;
    }
    if (uVar11 >> 1 <= (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar12 = uVar11;
    }
    if (uVar12 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar12 * 0x70,0x10);
      if (lVar5 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xe8))();
      }
    }
    lVar13 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
LAB_028c5490:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar13;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar14 = (undefined8 *)(lVar5 + lVar9 * 0x10);
    *puVar14 = *param_2;
    lVar9 = lVar5 + lVar9 * 0x10;
    uVar6 = param_2[1];
    param_2[1] = 0;
    *(undefined8 *)(lVar9 + 8) = uVar6;
    memcpy((void *)(lVar9 + 0x10),param_2 + 2,0x51);
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    lVar9 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 == lVar9) {
      puVar8 = puVar14;
      lVar13 = lVar9;
    }
    else {
      lVar3 = 0;
      do {
        lVar16 = param_1[3];
        if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar4 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar4 != 0) {
          if (0xf < *(ulong *)(lVar4 + 0x80)) goto LAB_028c5490;
          *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar16;
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
        }
        lVar16 = lVar13 + lVar3;
        *(undefined8 *)((long)puVar14 + lVar3 + -0x70) = *(undefined8 *)(lVar16 + -0x70);
        uVar6 = *(undefined8 *)(lVar16 + -0x68);
        *(undefined8 *)(lVar16 + -0x68) = 0;
        *(undefined8 *)((long)puVar14 + lVar3 + -0x68) = uVar6;
        memcpy((void *)((long)puVar14 + lVar3 + -0x60),(void *)(lVar16 + -0x60),0x51);
        if (lVar4 != 0) {
          *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
        }
        lVar3 = lVar3 + -0x70;
      } while (lVar9 - lVar13 != lVar3);
      lVar9 = param_1[1];
      puVar8 = (undefined8 *)((long)puVar14 + lVar3);
      lVar13 = *param_1;
    }
    lVar3 = param_1[2];
    *param_1 = (long)puVar8;
    param_1[1] = (long)(puVar14 + 0xe);
    param_1[2] = lVar5 + uVar12 * 0x70;
    while (lVar9 != lVar13) {
      plVar2 = (long *)(lVar9 + -0x68);
      lVar9 = lVar9 + -0x70;
      if ((long *)*plVar2 != (long *)0x0) {
        (**(code **)(*(long *)*plVar2 + 0x18))();
      }
    }
    if (lVar13 != 0) {
      plVar2 = (long *)param_1[3];
      uVar12 = (**(code **)(*plVar2 + 0xf8))(plVar2);
      if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar13,lVar3 - lVar13,0x10);
      }
      else {
        FUN_00c48fe8(plVar2,lVar13,lVar3 - lVar13,0x10);
      }
    }
  }
  param_1[0x15] = uVar10 + 1;
  return uVar10;
}


