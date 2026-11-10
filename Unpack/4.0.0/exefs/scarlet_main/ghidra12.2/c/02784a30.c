/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02784a30; name: FUN_02784a30
 */


void FUN_02784a30(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x38,8);
  if (puVar6 == (undefined8 *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar7 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_2;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    uVar1 = *param_3;
    uVar3 = param_3[1];
    uVar2 = param_3[2];
    uVar4 = param_3[3];
    puVar6[6] = 0;
    puVar6[2] = uVar2;
    puVar6[3] = uVar4;
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    puVar6[4] = 0;
    puVar6[5] = 0;
    FUN_02784c08(puVar6);
    *param_1 = puVar6;
    param_1[1] = param_2;
    param_1[2] = 0x38;
    param_1[3] = 8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


