/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e967d8; name: FUN_01e967d8
 */


int FUN_01e967d8(long *param_1,undefined1 param_2,long param_3,void *param_4,size_t param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *__s;
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
  *param_1 = (long)&DAT_04552e00;
  param_1[8] = 0;
  param_1[4] = (long)&PTR_LAB_04552ec0;
  *plVar5 = (long)&PTR_LAB_04552f10;
  *(undefined1 *)(param_1 + 9) = param_2;
  *(undefined1 *)((long)param_1 + 0x51) = 0;
  __s = (char *)((long)param_1 + 0x49);
  __s[0] = '\0';
  __s[1] = '\0';
  __s[2] = '\0';
  __s[3] = '\0';
  __s[4] = '\0';
  __s[5] = '\0';
  __s[6] = '\0';
  __s[7] = '\0';
  FUN_019870dc(param_1 + 0xb);
  memset(param_1 + 0xd,0,0x88);
  if ((param_4 != (void *)0x0) && (param_5 - 1 < 0x80)) {
    memcpy(param_1 + 0xd,param_4,param_5);
    param_1[0x1d] = param_5;
  }
  iVar2 = snprintf(__s,9,"%s",*(undefined8 *)(param_3 + 8));
  return iVar2;
}


