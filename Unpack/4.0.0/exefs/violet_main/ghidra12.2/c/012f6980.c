/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012f6980; name: FUN_012f6980
 */


void FUN_012f6980(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    FUN_01302d70(param_1,param_2);
    return;
  }
  uVar9 = param_1[4];
  lVar13 = param_1[1] - *param_1 >> 7;
  uVar3 = lVar13 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 6;
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  plVar12 = param_1 + 3;
  local_60 = 0;
  if (uVar9 >> 1 <= (ulong)(lVar4 >> 7)) {
    uVar3 = uVar9;
  }
  local_58 = plVar12;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar3 << 7,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar12 + 0xe8))();
    }
  }
  puVar10 = (undefined8 *)(lVar4 + lVar13 * 0x80);
  local_60 = lVar4 + uVar3 * 0x80;
  lVar13 = *plVar12;
  local_70 = puVar10;
  local_68 = puVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 != 0) {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar13;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  }
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,puVar10 + 4);
    uVar6 = param_2[1];
    puVar10[3] = param_2[3];
    uVar8 = param_2[2];
    *puVar10 = *param_2;
    puVar10[1] = uVar6;
    puVar10[2] = uVar8;
    pcVar7 = (code *)param_2[1];
    if (pcVar7 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar7)(param_2 + 4);
    }
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  }
  local_68 = local_68 + 0x10;
  FUN_012f6c78(plVar12,*param_1,param_1[1],&local_70);
  puVar11 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar13 = param_1[2];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  param_1[2] = local_60;
  local_70 = puVar11;
  local_68 = puVar10;
  local_60 = lVar13;
  while (puVar1 = puVar10, puVar1 != puVar11) {
    puVar10 = puVar1 + -0x10;
    pcVar7 = (code *)puVar1[-0xf];
    local_68 = puVar10;
    if (pcVar7 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar7)(puVar1 + -0xc);
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    lVar13 = lVar13 - (long)puVar11;
    plVar12 = (long *)*local_58;
    uVar3 = (**(code **)(*plVar12 + 0xf8))(plVar12);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar12 + 0x18))(plVar12,puVar11,lVar13,0x10);
    }
    else {
      FUN_00c48fe8(plVar12,puVar11,lVar13,0x10);
    }
  }
  return;
}


