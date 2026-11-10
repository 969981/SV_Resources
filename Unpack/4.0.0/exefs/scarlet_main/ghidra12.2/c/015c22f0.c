/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c22f0; name: FUN_015c22f0
 */


undefined8 FUN_015c22f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  if (((DAT_04819aa0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04819aa0), iVar2 != 0)) {
    DAT_0481afb0 = '\x01';
    __cxa_guard_release(&DAT_04819aa0);
  }
  pcVar3 = (char *)FUN_015c23e0(param_1,1);
  lVar1 = 0x28;
  if (DAT_0481afb0 == '\0') {
    lVar1 = -1;
  }
  if ((*pcVar3 == '\0') || (*pcVar3 == '\x01')) {
    local_40 = 0;
    if (*(long *)(pcVar3 + 8) != 0) {
      local_40 = *(long *)(pcVar3 + 8) + lVar1;
    }
  }
  else {
    local_40 = 0;
  }
  local_48[0] = '\0';
  FUN_015c2470(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_01ce1e04(auStack_38);
  }
  return 1;
}


