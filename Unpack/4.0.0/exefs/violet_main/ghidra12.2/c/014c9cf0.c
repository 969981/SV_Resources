/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c9cf0; name: FUN_014c9cf0
 */


void FUN_014c9cf0(long *param_1)

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
  *param_1 = (long)&PTR_FUN_0456f880;
  param_1[1] = lVar4;
  param_1[4] = (long)&PTR_LAB_0456f8b8;
  memset(param_1 + 6,0,0x640);
  param_1[0xce] = (long)(param_1 + 0xce);
  param_1[0xcf] = (long)(param_1 + 0xce);
  param_1[0xd0] = 0;
  FUN_014c9e28(param_1 + 0xd1);
  param_1[0xd5] = (long)(param_1 + 0xd5);
  param_1[0xd6] = (long)(param_1 + 0xd5);
  param_1[0xd7] = 0;
  FUN_014c9e28(param_1 + 0xd8);
  param_1[0xdc] = (long)(param_1 + 0xdc);
  param_1[0xdd] = (long)(param_1 + 0xdc);
  param_1[0xde] = 0;
  FUN_014c9f5c(param_1 + 0xdf);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0xe3),false,0);
  return;
}


