/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178d59c; name: FUN_0178d59c
 */


void FUN_0178d59c(long *param_1,long param_2,undefined2 *param_3,int param_4,int param_5)

{
  undefined2 uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
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
  *param_1 = (long)&PTR_FUN_04592468;
  param_1[4] = (long)&PTR_LAB_045924e8;
  *plVar6 = (long)&DAT_04592538;
  param_1[8] = (long)&PTR_LAB_04592590;
  param_1[9] = param_2;
  uVar1 = *param_3;
  param_1[0xf] = param_2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 10) = uVar1;
  param_1[0xc] = 0x1555555555555555;
  param_1[0xd] = 0;
  param_1[0xb] = param_2;
  param_1[0x10] = 0x1555555555555555;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = param_1[0xe];
  param_1[0x13] = 0;
  if (param_4 != 0) {
    FUN_0178d770(param_1 + 0xf,param_4);
  }
  param_1[0x1a] = param_2;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x17] = 0xaaaaaaaaaaaaaaa;
  param_1[0x18] = 0;
  param_1[0x16] = param_2;
  param_1[0x1b] = 0xaaaaaaaaaaaaaaa;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_1[0x19];
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (param_5 != 0) {
    FUN_0178d7ac(param_1 + 0x1a,param_5);
  }
  memset(param_1 + 0x21,0,0x7538);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xec8),false,0);
  return;
}


