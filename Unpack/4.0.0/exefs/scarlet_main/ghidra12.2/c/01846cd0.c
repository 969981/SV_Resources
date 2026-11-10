/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01846cd0; name: FUN_01846cd0
 */


void FUN_01846cd0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045fef38;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_045fef70;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0x3f800000;
  param_1[8] = lVar4;
  param_1[9] = 0xfffffffffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = lVar4;
  param_1[0xe] = 0xfffffffffffffff;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = lVar4;
  param_1[0x16] = 0xfffffffffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = lVar4;
  param_1[0x1b] = 0xfffffffffffffff;
  param_1[0x1c] = 0;
  memset(param_1 + 0x20,0,0x50);
  return;
}


