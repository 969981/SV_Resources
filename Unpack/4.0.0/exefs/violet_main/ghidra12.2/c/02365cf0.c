/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02365cf0; name: FUN_02365cf0
 */


undefined8 FUN_02365cf0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_04848728 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04848728), iVar2 != 0)) {
    DAT_04848c80 = '\x01';
    __cxa_guard_release(&DAT_04848728);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_048486e0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_048486e0);
      pcVar4 = &DAT_048486b8;
      if (iVar2 != 0) {
        DAT_048486b8 = 0;
        DAT_048486c0 = 0;
        FUN_00100190(&LAB_02356ee0,&DAT_048486b8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_048486e0);
      }
    }
    else {
      pcVar4 = &DAT_048486b8;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  lVar1 = 0x50;
  if (DAT_04848c80 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar4 == '\x01') || (*pcVar4 == '\0')) && (*(long *)(pcVar4 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar4 + 8) + lVar1) = iVar2 != 0;
  }
  return 0;
}


