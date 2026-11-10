/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0142f6e8; name: FUN_0142f6e8
 */


void FUN_0142f6e8(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04865a38), iVar3 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar4 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047d8c78;
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
  param_1[4] = (long)(puVar1 + 0x88);
  plVar6 = param_1 + 5;
  *plVar6 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar6);
  puVar1 = PTR_DAT_047e2560;
  *param_1 = (long)(PTR_DAT_047e2560 + 0x10);
  param_1[4] = (long)(puVar1 + 0x88);
  puVar2 = PTR_DAT_047e2568;
  *plVar6 = (long)(puVar1 + 0xd8);
  lVar5 = *param_2;
  lVar4 = param_2[1];
  *param_1 = (long)(puVar2 + 0x10);
  param_1[4] = (long)(puVar2 + 0x90);
  *(int *)(param_1 + 9) = (int)lVar4;
  param_1[8] = lVar5;
  *plVar6 = (long)(puVar2 + 0xe0);
  param_1[10] = 0;
  return;
}


