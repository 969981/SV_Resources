/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e80b9c; name: FUN_01e80b9c
 */


void FUN_01e80b9c(long *param_1,undefined4 *param_2,long *param_3,long *param_4,long *param_5)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  
  param_1[2] = 0;
  puVar2 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar2 = PTR_DAT_047d8c78;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar4 + 0x80) != 0) {
      lVar5 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar5;
  param_1[4] = (long)(puVar2 + 0x88);
  plVar6 = param_1 + 5;
  *plVar6 = (long)(puVar2 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  *param_1 = (long)&DAT_045526c0;
  param_1[4] = (long)&PTR_LAB_04552738;
  *plVar6 = (long)&PTR_LAB_04552788;
  uVar1 = *param_2;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if ((code *)param_3[3] != (code *)0x0) {
    (*(code *)param_3[3])(param_3 + 4,param_1 + 0xe);
    lVar4 = param_3[1];
    param_1[0xd] = param_3[3];
    lVar5 = param_3[2];
    param_1[10] = *param_3;
    param_1[0xb] = lVar4;
    param_1[0xc] = lVar5;
    UNRECOVERED_JUMPTABLE = (code *)param_3[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_3[2] = 0;
      param_3[3] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_3 + 4);
    }
  }
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  if ((code *)param_4[3] != (code *)0x0) {
    (*(code *)param_4[3])(param_4 + 4,param_1 + 0x1e);
    lVar4 = param_4[1];
    param_1[0x1d] = param_4[3];
    lVar5 = param_4[2];
    param_1[0x1a] = *param_4;
    param_1[0x1b] = lVar4;
    param_1[0x1c] = lVar5;
    UNRECOVERED_JUMPTABLE = (code *)param_4[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_4[2] = 0;
      param_4[3] = 0;
      *param_4 = 0;
      param_4[1] = 0;
      (*UNRECOVERED_JUMPTABLE)(param_4 + 4);
    }
  }
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if ((code *)param_5[3] != (code *)0x0) {
    (*(code *)param_5[3])(param_5 + 4,param_1 + 0x2e);
    lVar4 = param_5[1];
    param_1[0x2d] = param_5[3];
    lVar5 = param_5[2];
    param_1[0x2a] = *param_5;
    param_1[0x2b] = lVar4;
    param_1[0x2c] = lVar5;
    UNRECOVERED_JUMPTABLE = (code *)param_5[1];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      param_5[2] = 0;
      param_5[3] = 0;
      *param_5 = 0;
      param_5[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x01e80d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_5 + 4);
      return;
    }
  }
  return;
}


