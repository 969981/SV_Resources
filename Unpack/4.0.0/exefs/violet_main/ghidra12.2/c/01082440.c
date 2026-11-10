/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01082440; name: FUN_01082440
 */


undefined8 FUN_01082440(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char local_48 [8];
  long local_40;
  undefined1 auStack_38 [24];
  
  if (((DAT_04815318 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04815318), iVar2 != 0)) {
    DAT_04815940 = '\x01';
    __cxa_guard_release(&DAT_04815318);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_048152e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048152e8);
      if (iVar2 != 0) {
        DAT_048152c0 = 0;
        DAT_048152c8 = 0;
        FUN_00100190(&LAB_0117fe5c,&DAT_048152c0,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048152e8);
      }
      pcVar4 = &DAT_048152c0;
    }
    else {
      pcVar4 = &DAT_048152c0;
    }
  }
  lVar1 = 0x18;
  if (DAT_04815940 == '\0') {
    lVar1 = -1;
  }
  if ((*pcVar4 == '\x01') || (*pcVar4 == '\0')) {
    local_40 = 0;
    if (*(long *)(pcVar4 + 8) != 0) {
      local_40 = *(long *)(pcVar4 + 8) + lVar1;
    }
  }
  else {
    local_40 = 0;
  }
  local_48[0] = '\0';
  FUN_010825a0(param_1,local_48);
  lVar1 = local_40;
  if ((local_48[0] == '\x01') && (local_40 = 0, lVar1 != 0)) {
    FUN_01ab15f0(auStack_38);
  }
  return 1;
}


