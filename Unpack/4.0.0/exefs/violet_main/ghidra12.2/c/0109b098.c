/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0109b098; name: FUN_0109b098
 */


ulong FUN_0109b098(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *local_48;
  
  while( true ) {
    lVar8 = param_1[0xf] - param_1[0xe];
    if (lVar8 == 0) break;
    uVar7 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar8 + param_1[0xe] + -8;
    uVar13 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar13) =
         *(ulong *)(param_1[7] + uVar13) & (1L << (uVar7 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar7 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar16 = (undefined8 *)(*param_1 + uVar7 * 0x80);
      pcVar11 = (code *)puVar16[1];
      if (pcVar11 != (code *)0x0) {
        puVar16[2] = 0;
        puVar16[3] = 0;
        *puVar16 = 0;
        puVar16[1] = 0;
        (*pcVar11)(puVar16 + 4);
      }
      puVar16[4] = param_2;
      *puVar16 = PTR_LAB_047d9a98;
      puVar16[1] = PTR_LAB_047d9aa0;
      puVar1 = PTR_LAB_047d9ab0;
      puVar16[2] = PTR_LAB_047d9aa8;
      puVar16[3] = puVar1;
      if ((ulong)param_1[0x15] <= uVar7) {
        param_1[0x15] = uVar7 + 1;
      }
      return uVar7;
    }
  }
  uVar13 = param_1[1] - *param_1 >> 7;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_0109be64(param_1,param_2);
  }
  else {
    uVar12 = param_1[4];
    uVar7 = uVar13 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = param_1[2] - *param_1;
    uVar9 = lVar8 >> 6;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    plVar14 = param_1 + 3;
    if (uVar12 >> 1 <= (ulong)(lVar8 >> 7)) {
      uVar7 = uVar12;
    }
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar7 << 7,0x10);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xe8))();
      }
    }
    lVar17 = *plVar14;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar17;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar3 = PTR_LAB_047d9aa8;
    puVar2 = PTR_LAB_047d9aa0;
    puVar1 = PTR_LAB_047d9a98;
    local_48 = (undefined8 *)(lVar8 + uVar13 * 0x80);
    local_48[4] = param_2;
    puVar4 = PTR_LAB_047d9ab0;
    *local_48 = puVar1;
    local_48[1] = puVar2;
    local_48[2] = puVar3;
    local_48[3] = puVar4;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    puVar10 = (undefined8 *)*param_1;
    puVar15 = (undefined8 *)param_1[1];
    puVar16 = local_48 + 0x10;
    if (puVar15 == puVar10) {
      puVar15 = puVar10;
    }
    else {
      local_48 = local_48 + -0x10;
      FUN_0109bf70(plVar14,local_48,puVar15 + -0x10);
      if (puVar15 + -0x10 != puVar10) {
        do {
          local_48 = local_48 + -0x10;
          FUN_0109bf70(plVar14,local_48,puVar15 + -0x20);
          puVar15 = puVar15 + -0x10;
        } while (puVar10 + 0x10 != puVar15);
      }
      puVar15 = (undefined8 *)*param_1;
      puVar10 = (undefined8 *)param_1[1];
    }
    *param_1 = (long)local_48;
    param_1[1] = (long)puVar16;
    lVar17 = param_1[2];
    param_1[2] = lVar8 + uVar7 * 0x80;
    if (puVar10 != puVar15) {
      puVar16 = puVar10 + -0x10;
      pcVar11 = (code *)puVar10[-0xf];
      if (pcVar11 != (code *)0x0) {
        puVar10[-0xe] = 0;
        puVar10[-0xd] = 0;
        *puVar16 = 0;
        puVar10[-0xf] = 0;
        (*pcVar11)(puVar10 + -0xc);
      }
      while (puVar10 = puVar16, puVar10 != puVar15) {
        pcVar11 = (code *)puVar10[-0xf];
        puVar16 = puVar10 + -0x10;
        if (pcVar11 != (code *)0x0) {
          puVar10[-0xe] = 0;
          puVar10[-0xd] = 0;
          puVar10[-0x10] = 0;
          puVar10[-0xf] = 0;
          (*pcVar11)(puVar10 + -0xc);
        }
      }
    }
    if (puVar15 != (undefined8 *)0x0) {
      plVar14 = (long *)*plVar14;
      uVar7 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar15,lVar17 - (long)puVar15,0x10);
      }
      else {
        FUN_00c48fe8(plVar14,puVar15,lVar17 - (long)puVar15,0x10);
      }
    }
  }
  param_1[0x15] = uVar13 + 1;
  return uVar13;
}


