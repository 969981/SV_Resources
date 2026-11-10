/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01168e8c; name: FUN_01168e8c
 */


void FUN_01168e8c(long *param_1,long param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
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
  *param_1 = (long)&DAT_0459ddb8;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_0459ddf0;
  param_1[6] = param_2;
  *(undefined4 *)(param_1 + 7) = param_3;
  *(undefined4 *)((long)param_1 + 0x3c) = param_4;
  *(int *)(param_1 + 8) = param_5;
  *(int *)((long)param_1 + 0x44) = param_5 + -1;
  return;
}


