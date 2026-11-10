/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f8aef8; name: FUN_00f8aef8
 */


void FUN_00f8aef8(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar2 != 0) {
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_1;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  FUN_021a0ee8(param_2 + 4,param_3);
  *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_3 + 0x10);
  param_2[8] = 0;
  param_2[7] = 0;
  FUN_00e27c6c(param_2 + 7,param_3 + 0x18);
  uVar3 = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_3 + 0x28) = 0;
  param_2[9] = uVar3;
  *param_2 = &LAB_01059938;
  param_2[1] = FUN_021a0c9c;
  param_2[2] = FUN_021a120c;
  param_2[3] = FUN_021a1300;
  param_2[0x10] = *(undefined8 *)(param_3 + 0x30);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


