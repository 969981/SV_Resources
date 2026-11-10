/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01417fec; name: FUN_01417fec
 */


void FUN_01417fec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  code *local_b8;
  undefined1 auStack_a0 [32];
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar8 = *param_1;
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
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  uVar8 = *param_3;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  local_80 = (undefined *)0x0;
  local_78 = (code *)0x0;
  FUN_00d0a34c(&local_60,param_4);
  puVar4 = PTR_FUN_047d9970;
  puVar3 = PTR_LAB_047d9968;
  puVar2 = PTR_FUN_047d9960;
  puVar1 = PTR_LAB_047d9958;
  local_80 = PTR_LAB_047d9938;
  local_78 = (code *)PTR_FUN_047d9940;
  local_70 = PTR_LAB_047d9948;
  puStack_68 = PTR_LAB_047d9950;
  local_b8 = (code *)PTR_FUN_047d9960;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_00d0a34c(param_2 + 4,&local_60);
  pcVar7 = local_78;
  param_2[3] = puStack_68;
  *param_2 = local_80;
  param_2[1] = local_78;
  param_2[2] = local_70;
  if (local_78 == (code *)0x0) {
    param_2[8] = 0;
    pcVar7 = (code *)PTR_FUN_047d9970;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
LAB_01418118:
    (*pcVar7)(auStack_a0,param_2 + 0xc);
    param_2[0xb] = puVar4;
    param_2[8] = puVar1;
    param_2[9] = puVar2;
    param_2[10] = puVar3;
    if (puVar2 == (undefined *)0x0) {
      param_2[0x10] = uVar8;
      goto LAB_0141814c;
    }
    local_b8 = (code *)0x0;
    (*(code *)puVar2)(auStack_a0);
  }
  else {
    local_70 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    local_80 = (undefined *)0x0;
    local_78 = (code *)0x0;
    (*pcVar7)(&local_60);
    param_2[8] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[9] = 0;
    pcVar7 = (code *)puVar4;
    if (puVar4 != (undefined *)0x0) goto LAB_01418118;
  }
  param_2[0x10] = uVar8;
  if (local_b8 != (code *)0x0) {
    (*local_b8)(auStack_a0);
  }
LAB_0141814c:
  pcVar7 = local_78;
  if (local_78 != (code *)0x0) {
    local_70 = (undefined *)0x0;
    puStack_68 = (undefined *)0x0;
    local_80 = (undefined *)0x0;
    local_78 = (code *)0x0;
    (*pcVar7)(&local_60);
  }
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


