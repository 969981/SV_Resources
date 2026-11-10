/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01be1c60; name: FUN_01be1c60
 */


undefined8 FUN_01be1c60(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  if (((DAT_0480e798 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0480e798), iVar2 != 0)) {
    DAT_0480ec78 = '\x01';
    __cxa_guard_release(&DAT_0480e798);
  }
  pcVar3 = (char *)FUN_01bcf370(param_1,1);
  lVar1 = 0x30;
  if (DAT_0480ec78 == '\0') {
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
  FUN_01be1d40(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_01be1e24(auStack_38);
  }
  return 1;
}


