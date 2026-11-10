/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d4a730; name: FUN_01d4a730
 */


undefined8 FUN_01d4a730(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  if (((DAT_0482fbf8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0482fbf8), iVar2 != 0)) {
    DAT_04830cf0 = '\x01';
    __cxa_guard_release(&DAT_0482fbf8);
  }
  pcVar3 = (char *)FUN_01d49a20(param_1,1);
  lVar1 = 0x8c0;
  if (DAT_04830cf0 == '\0') {
    lVar1 = -1;
  }
  if ((*pcVar3 == '\x01') || (*pcVar3 == '\0')) {
    local_40 = 0;
    if (*(long *)(pcVar3 + 8) != 0) {
      local_40 = *(long *)(pcVar3 + 8) + lVar1;
    }
  }
  else {
    local_40 = 0;
  }
  local_48[0] = '\0';
  FUN_0189f070(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_019b13d4(auStack_38);
  }
  return 1;
}


