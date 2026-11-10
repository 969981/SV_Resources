/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bc5eb0; name: FUN_01bc5eb0
 */


undefined8 FUN_01bc5eb0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  if (((DAT_0480d8e8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0480d8e8), iVar2 != 0)) {
    DAT_0480ea38 = '\x01';
    __cxa_guard_release(&DAT_0480d8e8);
  }
  pcVar3 = (char *)FUN_01bc5810(param_1,1);
  lVar1 = 8;
  if (DAT_0480ea38 == '\0') {
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
  FUN_01bc5f90(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_01bc3af4(auStack_38);
  }
  return 1;
}


