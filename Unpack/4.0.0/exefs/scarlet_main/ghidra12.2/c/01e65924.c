/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e65924; name: FUN_01e65924
 */


void FUN_01e65924(long *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
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
  puVar1 = PTR_DAT_047d8c78;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar4 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar4;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar5 = param_1 + 5;
  *plVar5 = (long)(puVar1 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar5);
  *param_1 = (long)&DAT_04551a68;
  param_1[4] = (long)&PTR_LAB_04551ae8;
  *plVar5 = (long)&PTR_LAB_04551b38;
  param_1[8] = (long)&PTR_LAB_04551b90;
  param_1[9] = param_2;
  memset(param_1 + 10,0,0x48);
  *(undefined8 *)((long)param_1 + 0xf3) = 0;
  param_1[0x14] = 0x1fffffffffffffff;
  param_1[0x1b] = 0xfffffffffffffff;
  param_1[0x13] = param_2;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = param_2;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((long)param_1 + 0xf2) = 1;
  *(undefined8 *)((long)param_1 + 0xfb) = 0;
  *(undefined1 *)((long)param_1 + 0x103) = 0;
  FUN_015c486c(param_1 + 0x21);
  memset(param_1 + 0x24,0,0x78);
  return;
}


