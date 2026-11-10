/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02734ca4; name: FUN_02734ca4
 */


void FUN_02734ca4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  
  if ((ulong)param_1[1] < (ulong)param_1[2]) {
    puVar13 = (undefined8 *)param_1[1];
    lVar12 = param_1[3];
    if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar3 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar3 != 0) {
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    }
    puVar13[2] = 0;
    puVar13[3] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    if ((code *)param_2[3] != (code *)0x0) {
      (*(code *)param_2[3])(param_2 + 4,puVar13 + 4);
      uVar7 = param_2[1];
      puVar13[3] = param_2[3];
      uVar9 = param_2[2];
      *puVar13 = *param_2;
      puVar13[1] = uVar7;
      puVar13[2] = uVar9;
      pcVar8 = (code *)param_2[1];
      if (pcVar8 != (code *)0x0) {
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = 0;
        param_2[1] = 0;
        (*pcVar8)(param_2 + 4);
      }
    }
    if (lVar3 != 0) {
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    }
    param_1[1] = (long)(puVar13 + 0x10);
    return;
  }
  plVar11 = param_1 + 3;
  lVar4 = FUN_02735090(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar12 = *param_1;
  lVar3 = param_1[1];
  local_60 = 0;
  local_58 = plVar11;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,lVar4 << 7,0x10);
    if (lVar5 == 0) {
      (**(code **)(*(long *)*plVar11 + 0xe8))();
    }
  }
  puVar13 = (undefined8 *)(lVar5 + (lVar3 - lVar12 >> 7) * 0x80);
  local_60 = lVar5 + lVar4 * 0x80;
  lVar12 = *plVar11;
  local_70 = puVar13;
  local_68 = puVar13;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 != 0) {
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = lVar12;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  if ((code *)param_2[3] != (code *)0x0) {
    (*(code *)param_2[3])(param_2 + 4,puVar13 + 4);
    uVar7 = param_2[1];
    puVar13[3] = param_2[3];
    uVar9 = param_2[2];
    *puVar13 = *param_2;
    puVar13[1] = uVar7;
    puVar13[2] = uVar9;
    pcVar8 = (code *)param_2[1];
    if (pcVar8 != (code *)0x0) {
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      (*pcVar8)(param_2 + 4);
    }
  }
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  local_68 = local_68 + 0x10;
  FUN_027350e0(plVar11,*param_1,param_1[1],&local_70);
  puVar10 = (undefined8 *)*param_1;
  puVar13 = (undefined8 *)param_1[1];
  lVar12 = param_1[2];
  *param_1 = (long)local_70;
  param_1[1] = (long)local_68;
  param_1[2] = local_60;
  local_70 = puVar10;
  local_68 = puVar13;
  local_60 = lVar12;
  while (puVar1 = puVar13, puVar1 != puVar10) {
    puVar13 = puVar1 + -0x10;
    pcVar8 = (code *)puVar1[-0xf];
    local_68 = puVar13;
    if (pcVar8 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar8)(puVar1 + -0xc);
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    lVar12 = lVar12 - (long)puVar10;
    plVar11 = (long *)*local_58;
    uVar6 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if (((uVar6 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,lVar12,0x10);
    }
    else {
      FUN_00c48fe8(plVar11,puVar10,lVar12,0x10);
    }
  }
  return;
}


