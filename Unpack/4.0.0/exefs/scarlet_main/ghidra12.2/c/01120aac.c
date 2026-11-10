/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01120aac; name: FUN_01120aac
 */


void FUN_01120aac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 != 0) {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar8;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar8 = *param_3;
  uVar1 = param_3[1];
  uVar2 = param_3[3];
  param_2[6] = param_3[2];
  param_2[7] = uVar2;
  param_2[4] = uVar8;
  param_2[5] = uVar1;
  uVar8 = param_3[4];
  param_2[10] = 0;
  param_2[8] = uVar8;
  param_2[9] = 0;
  FUN_00fd9730(param_2 + 9,param_3 + 5);
  puVar5 = PTR_LAB_047dc4e8;
  puVar4 = PTR_LAB_047dc4e0;
  puVar3 = PTR_LAB_047dc4d8;
  *param_2 = PTR_LAB_047dc4d0;
  param_2[1] = puVar3;
  param_2[2] = puVar4;
  param_2[3] = puVar5;
  if (lVar7 != 0) {
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


