/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01538998; name: FUN_01538998
 */


void FUN_01538998(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
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
    *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar5;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_01538ec0(param_2 + 4,param_3);
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  param_2[10] = 0;
  param_2[7] = uVar1;
  param_2[8] = uVar4;
  param_2[6] = uVar5;
  param_2[9] = 0;
  FUN_00d334b4(param_2 + 9,param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)(param_3 + 0x38) = 0;
  param_2[0xb] = uVar5;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  FUN_00c96b7c(param_2 + 0xc,param_3 + 0x40);
  param_2[0xe] = *(undefined8 *)(param_3 + 0x50);
  *param_2 = &LAB_0129f070;
  param_2[1] = FUN_02538c94;
  param_2[2] = FUN_02538da4;
  param_2[3] = FUN_02538ec8;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  }
  return;
}


