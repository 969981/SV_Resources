/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01739940; name: FUN_01739940
 */


undefined8 FUN_01739940(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char local_48 [8];
  long local_40 [4];
  
  if (((DAT_0484f448 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0484f448), iVar2 != 0)) {
    DAT_04850380 = '\x01';
    __cxa_guard_release(&DAT_0484f448);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, (char *)*puVar3 == (char *)0x0)) {
    if ((*PTR_DAT_047df440 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_047df440);
      pcVar4 = PTR_DAT_047df448;
      if (iVar2 != 0) {
        *PTR_DAT_047df448 = 0;
        *(undefined8 *)(pcVar4 + 8) = 0;
        FUN_00100190(&LAB_0252f26c,pcVar4,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047df440);
      }
    }
    else {
      pcVar4 = PTR_DAT_047df448;
    }
  }
  lVar1 = 0x10;
  if (DAT_04850380 == '\0') {
    lVar1 = -1;
  }
  if ((*pcVar4 == '\x01') || (*pcVar4 == '\0')) {
    local_40[0] = 0;
    if (*(long *)(pcVar4 + 8) != 0) {
      local_40[0] = *(long *)(pcVar4 + 8) + lVar1;
    }
  }
  else {
    local_40[0] = 0;
  }
  local_48[0] = '\0';
  FUN_00d1fe80(param_1,local_48);
  if (local_48[0] == '\x01') {
    FUN_01739a90(local_40,0);
  }
  return 1;
}


