/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02141984; name: FUN_02141984
 */


void FUN_02141984(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_50;
  long *local_48;
  
  plVar13 = param_1 + 3;
  lVar6 = FUN_02141d10(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar14 = *param_1;
  lVar8 = param_1[1];
  local_50 = 0;
  lVar7 = 0;
  local_48 = plVar13;
  if ((lVar6 != 0) &&
     (lVar7 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,lVar6 << 6,0x10), lVar7 == 0)
     ) {
    (**(code **)(*(long *)*plVar13 + 0xe8))((long *)*plVar13);
  }
  puVar11 = (undefined8 *)(lVar7 + (lVar8 - lVar14 >> 6) * 0x40);
  local_50 = lVar7 + lVar6 * 0x40;
  lVar14 = *plVar13;
  local_60 = puVar11;
  local_58 = puVar11;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar14;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  puVar11[2] = 0;
  puVar11[3] = 0;
  *puVar11 = 0;
  puVar11[1] = 0;
  uVar2 = param_2[3];
  uVar1 = *param_2;
  uVar3 = param_2[1];
  puVar11[6] = param_2[2];
  puVar11[7] = uVar2;
  puVar11[4] = uVar1;
  puVar11[5] = uVar3;
  *puVar11 = &LAB_02141ebc;
  puVar11[1] = &LAB_02b2cee8;
  puVar11[2] = &LAB_02b2ceec;
  puVar11[3] = &LAB_02b2cf00;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  local_58 = local_58 + 8;
  FUN_02141d54(plVar13,*param_1,param_1[1],&local_60);
  puVar12 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  lVar14 = param_1[2];
  *param_1 = (long)local_60;
  param_1[1] = (long)local_58;
  param_1[2] = local_50;
  local_60 = puVar12;
  local_58 = puVar11;
  local_50 = lVar14;
  while (puVar4 = puVar11, puVar4 != puVar12) {
    puVar11 = puVar4 + -8;
    pcVar10 = (code *)puVar4[-7];
    local_58 = puVar11;
    if (pcVar10 != (code *)0x0) {
      puVar4[-6] = 0;
      puVar4[-5] = 0;
      puVar4[-8] = 0;
      puVar4[-7] = 0;
      (*pcVar10)(puVar4 + -4);
    }
  }
  if (puVar12 != (undefined8 *)0x0) {
    lVar14 = lVar14 - (long)puVar12;
    plVar13 = (long *)*local_48;
    uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if (((uVar9 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
      (**(code **)(*plVar13 + 0x18))(plVar13,puVar12,lVar14,0x10);
    }
    else {
      FUN_00c48fe8(plVar13,puVar12,lVar14,0x10);
    }
  }
  return;
}


