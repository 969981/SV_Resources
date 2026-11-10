/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f2a28; name: FUN_028f2a28
 */


void FUN_028f2a28(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar9 = param_1 + 3;
  lVar3 = FUN_014bdac4(param_1,(param_1[1] - *param_1 >> 7) + 1);
  lVar11 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  local_48 = plVar9;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar3 << 7,0x10);
    if (lVar4 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
  }
  puVar10 = (undefined8 *)(lVar4 + (lVar5 - lVar11 >> 7) * 0x80);
  local_50 = lVar4 + lVar3 * 0x80;
  lVar11 = *plVar9;
  local_60 = puVar10;
  local_58 = puVar10;
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_028f28b8(puVar10,param_2);
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar11;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    FUN_028f28b8(puVar10,param_2);
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    puVar10 = local_58;
  }
  local_58 = puVar10 + 0x10;
  FUN_014bdb14(plVar9,*param_1,param_1[1],&local_60);
  puVar8 = (undefined8 *)*param_1;
  puVar10 = (undefined8 *)param_1[1];
  lVar11 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar8;
  local_58 = puVar10;
  local_50 = lVar11;
  while (puVar1 = puVar10, puVar1 != puVar8) {
    puVar10 = puVar1 + -0x10;
    pcVar7 = (code *)puVar1[-0xf];
    local_58 = puVar10;
    if (pcVar7 != (code *)0x0) {
      puVar1[-0xe] = 0;
      puVar1[-0xd] = 0;
      puVar1[-0x10] = 0;
      puVar1[-0xf] = 0;
      (*pcVar7)(puVar1 + -0xc);
    }
  }
  if (puVar8 != (undefined8 *)0x0) {
    lVar11 = lVar11 - (long)puVar8;
    plVar9 = (long *)*local_48;
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar9 + 0x18))(plVar9,puVar8,lVar11,0x10);
    }
    else {
      FUN_00c48fe8(plVar9,puVar8,lVar11,0x10);
    }
  }
  return;
}


