/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d7ac3c; name: FUN_00d7ac3c
 */


void FUN_00d7ac3c(long *param_1)

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
  *param_1 = (long)&PTR_LAB_0456fec8;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_0456ff00;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3fc0000040400000;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0x5000000050;
  *(undefined8 *)((long)param_1 + 0x3c) = 0x190000000050;
  *(undefined4 *)((long)param_1 + 0x44) = 0x1900;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = -0x5000000000;
  return;
}


