/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027767fc; name: FUN_027767fc
 */


void FUN_027767fc(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  uVar7 = param_1[4];
  lVar10 = param_1[1] - *param_1 >> 7;
  uVar3 = lVar10 + 1;
  if (0x7ffffffffffffffe < uVar7) {
    uVar7 = 0x7fffffffffffffff;
  }
  if (uVar7 < uVar3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - *param_1;
  uVar5 = lVar4 >> 6;
  if (uVar3 <= uVar5) {
    uVar3 = uVar5;
  }
  plVar9 = param_1 + 3;
  local_50 = 0;
  if (uVar7 >> 1 <= (ulong)(lVar4 >> 7)) {
    uVar3 = uVar7;
  }
  local_48 = plVar9;
  if (uVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,uVar3 << 7,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  puVar11 = (undefined8 *)(lVar4 + lVar10 * 0x80);
  local_50 = lVar4 + uVar3 * 0x80;
  lVar10 = *plVar9;
  local_60 = puVar11;
  local_58 = puVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar4 == 0) {
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    FUN_0277667c(puVar11,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = lVar10;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    puVar11[2] = 0;
    puVar11[3] = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    FUN_0277667c(puVar11,param_2);
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    puVar11 = local_58;
  }
  local_58 = puVar11 + 0x10;
  FUN_0103360c(plVar9,*param_1,param_1[1],&local_60);
  puVar8 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  lVar10 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar8;
  local_58 = puVar11;
  local_50 = lVar10;
  while (puVar1 = puVar11, puVar1 != puVar8) {
    puVar11 = puVar1 + -0x10;
    pcVar6 = (code *)puVar1[-0xf];
    local_58 = puVar11;
    if (pcVar6 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar6)(puVar1 + -0xc);
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    lVar10 = lVar10 - (long)puVar8;
    plVar9 = (long *)*local_48;
    uVar3 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar10,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,puVar8,lVar10,0x10);
    }
  }
  return;
}


