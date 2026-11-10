/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01002d20; name: FUN_01002d20
 */


ulong FUN_01002d20(long *param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  while( true ) {
    lVar15 = param_1[0xf] - param_1[0xe];
    if (lVar15 == 0) break;
    uVar11 = *(ulong *)(param_1[0xf] + -8);
    param_1[0xf] = lVar15 + param_1[0xe] + -8;
    uVar9 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(param_1[7] + uVar9) =
         *(ulong *)(param_1[7] + uVar9) & (1L << (uVar11 & 0x3f) ^ 0xffffffffffffffffU);
    if (uVar11 < (ulong)(param_1[1] - *param_1 >> 7)) {
      puVar13 = (undefined8 *)(*param_1 + uVar11 * 0x80);
      pcVar7 = (code *)puVar13[1];
      if (pcVar7 != (code *)0x0) {
        puVar13[2] = 0;
        puVar13[3] = 0;
        *puVar13 = 0;
        puVar13[1] = 0;
        (*pcVar7)(puVar13 + 4);
      }
      memcpy(puVar13 + 4,param_2,0x28);
      *puVar13 = PTR_LAB_047dc510;
      puVar13[1] = PTR_LAB_047dc518;
      puVar2 = PTR_LAB_047dc528;
      puVar13[2] = PTR_LAB_047dc520;
      puVar13[3] = puVar2;
      if ((ulong)param_1[0x15] <= uVar11) {
        param_1[0x15] = uVar11 + 1;
      }
      return uVar11;
    }
  }
  puVar13 = (undefined8 *)param_1[1];
  uVar9 = (long)puVar13 - *param_1 >> 7;
  plVar14 = param_1 + 3;
  if (puVar13 < (undefined8 *)param_1[2]) {
    lVar15 = *plVar14;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_010031b0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    memcpy(puVar13 + 4,param_2,0x28);
    puVar4 = PTR_LAB_047dc528;
    puVar3 = PTR_LAB_047dc520;
    puVar2 = PTR_LAB_047dc518;
    *puVar13 = PTR_LAB_047dc510;
    puVar13[1] = puVar2;
    puVar13[2] = puVar3;
    puVar13[3] = puVar4;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar13 + 0x10);
  }
  else {
    uVar10 = param_1[4];
    uVar11 = uVar9 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = param_1[2] - *param_1;
    uVar8 = lVar15 >> 6;
    local_60 = 0;
    if (uVar11 <= uVar8) {
      uVar11 = uVar8;
    }
    if (uVar10 >> 1 <= (ulong)(lVar15 >> 7)) {
      uVar11 = uVar10;
    }
    local_58 = plVar14;
    if (uVar11 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar11 << 7,0x10);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*plVar14 + 0xe8))();
      }
    }
    puVar13 = (undefined8 *)(lVar15 + uVar9 * 0x80);
    local_60 = lVar15 + uVar11 * 0x80;
    lVar15 = *plVar14;
    local_70 = puVar13;
    local_68 = puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 != 0) {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010031b0;
      *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar15;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    memcpy(puVar13 + 4,param_2,0x28);
    puVar4 = PTR_LAB_047dc528;
    puVar3 = PTR_LAB_047dc520;
    puVar2 = PTR_LAB_047dc518;
    *puVar13 = PTR_LAB_047dc510;
    puVar13[1] = puVar2;
    puVar13[2] = puVar3;
    puVar13[3] = puVar4;
    if (lVar6 != 0) {
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    local_68 = local_68 + 0x10;
    FUN_010095a4(plVar14,*param_1,param_1[1],&local_70);
    puVar12 = (undefined8 *)*param_1;
    puVar13 = (undefined8 *)param_1[1];
    lVar15 = param_1[2];
    *param_1 = (long)local_70;
    param_1[1] = (long)local_68;
    param_1[2] = local_60;
    local_70 = puVar12;
    local_68 = puVar13;
    local_60 = lVar15;
    while (puVar1 = puVar13, puVar1 != puVar12) {
      puVar13 = puVar1 + -0x10;
      pcVar7 = (code *)puVar1[-0xf];
      local_68 = puVar13;
      if (pcVar7 != (code *)0x0) {
        puVar1[-0xe] = 0;
        puVar1[-0xd] = 0;
        puVar1[-0x10] = 0;
        puVar1[-0xf] = 0;
        (*pcVar7)(puVar1 + -0xc);
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar15 = lVar15 - (long)puVar12;
      plVar14 = (long *)*local_58;
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,puVar12,lVar15,0x10);
      }
      else {
        FUN_00c48fe8(plVar14,puVar12,lVar15,0x10);
      }
    }
  }
  param_1[0x15] = uVar9 + 1;
  return uVar9;
}


