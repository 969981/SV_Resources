/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fd9340; name: FUN_00fd9340
 */


ulong FUN_00fd9340(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  long *local_68;
  
  while( true ) {
    lVar7 = param_1[0xf] - param_1[0xe];
    if (lVar7 == 0) break;
    uVar6 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar7 + param_1[0xe] + -8;
    uVar12 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar12) =
         *(ulong *)(param_1[7] + uVar12) & (1L << (uVar6 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar6 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar14 = (undefined8 *)(*param_1 + uVar6 * 0x80);
      pcVar10 = (code *)puVar14[1];
      if (pcVar10 != (code *)0x0) {
        puVar14[2] = 0;
        puVar14[3] = 0;
        *puVar14 = 0;
        puVar14[1] = 0;
        (*pcVar10)(puVar14 + 4);
      }
      uVar9 = *param_2;
      puVar14[5] = 0;
      puVar14[4] = uVar9;
      puVar14[6] = 0;
      FUN_00fd9730(puVar14 + 5,param_2 + 1);
      *puVar14 = PTR_LAB_047dc3c8;
      puVar14[1] = PTR_LAB_047dc3d0;
      puVar2 = PTR_LAB_047dc3e0;
      puVar14[2] = PTR_LAB_047dc3d8;
      puVar14[3] = puVar2;
      if ((ulong)param_1[0x15] <= uVar6) {
        param_1[0x15] = uVar6 + 1;
      }
      return uVar6;
    }
  }
  uVar12 = param_1[1] - *param_1 >> 7;
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_00fdb614(param_1,param_2);
  }
  else {
    uVar11 = param_1[4];
    uVar6 = uVar12 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 6;
    if (uVar6 <= uVar8) {
      uVar6 = uVar8;
    }
    plVar15 = param_1 + 3;
    local_70 = 0;
    if (uVar11 >> 1 <= (ulong)(lVar7 >> 7)) {
      uVar6 = uVar11;
    }
    local_68 = plVar15;
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar6 << 7,0x10);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xe8))();
      }
    }
    puVar14 = (undefined8 *)(lVar7 + uVar12 * 0x80);
    local_70 = lVar7 + uVar6 * 0x80;
    lVar7 = *plVar15;
    local_80 = puVar14;
    local_78 = puVar14;
    if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar5 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar5 != 0) {
      if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = 0;
    puVar14[1] = 0;
    uVar9 = *param_2;
    puVar14[5] = 0;
    puVar14[4] = uVar9;
    puVar14[6] = 0;
    FUN_00fd9730(puVar14 + 5,param_2 + 1);
    puVar3 = PTR_LAB_047dc3d8;
    puVar2 = PTR_LAB_047dc3d0;
    *puVar14 = PTR_LAB_047dc3c8;
    puVar14[1] = puVar2;
    puVar14[2] = puVar3;
    puVar14[3] = PTR_LAB_047dc3e0;
    if (lVar5 != 0) {
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    }
    local_78 = local_78 + 0x10;
    FUN_00fd9b00(plVar15,*param_1,param_1[1],&local_80);
    puVar13 = (undefined8 *)*param_1;
    puVar14 = (undefined8 *)param_1[1];
    lVar7 = param_1[2];
    *param_1 = (long)local_80;
    param_1[1] = (long)local_78;
    param_1[2] = local_70;
    local_80 = puVar13;
    local_78 = puVar14;
    local_70 = lVar7;
    while (puVar1 = puVar14, puVar1 != puVar13) {
      puVar14 = puVar1 + -0x10;
      pcVar10 = (code *)puVar1[-0xf];
      local_78 = puVar14;
      if (pcVar10 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar10)(puVar1 + -0xc);
      }
    }
    if (puVar13 != (undefined8 *)0x0) {
      lVar7 = lVar7 - (long)puVar13;
      plVar15 = (long *)*local_68;
      uVar6 = (**(code **)(*plVar15 + 0xf8))(plVar15);
      if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar15 + 0x18))(plVar15,puVar13,lVar7,0x10);
      }
      else {
        FUN_00c48fe8(plVar15,puVar13,lVar7,0x10);
      }
    }
  }
  param_1[0x15] = uVar12 + 1;
  return uVar12;
}


