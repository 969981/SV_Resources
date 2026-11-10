/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a521e4; name: FUN_00a521e4
 */


void FUN_00a521e4(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  size_t sVar2;
  long lVar3;
  char *__s;
  long lVar4;
  char acStack_b0 [128];
  char *local_18;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    lVar3 = 0xe;
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x40) + 0xe;
  }
  __s = acStack_b0 + (0x80 - (lVar3 + 0xfU & 0xfffffffffffffff0));
  local_18 = __s;
  *__s = '\0';
  sVar2 = strlen(__s);
  *(ulong *)(__s + sVar2) = CONCAT26(s_message_sort__03bd4230._6_2_,s_message_sort__03bd4230._0_6_);
  *(ulong *)(__s + sVar2 + 6) =
       CONCAT62(s_message_sort__03bd4230._8_6_,s_message_sort__03bd4230._6_2_);
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (lVar4 != 0) {
    puVar1 = (undefined8 *)(lVar4 + 0x38);
  }
  strcat(__s,(char *)*puVar1);
  FUN_00cf9768(param_1,&local_18);
  return;
}


