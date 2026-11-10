/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01adc480; name: FUN_01adc480
 */


undefined8 FUN_01adc480(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_04800bf0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04800bf0), iVar2 != 0)) {
    DAT_048018e0 = '\x01';
    __cxa_guard_release(&DAT_04800bf0);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_04800b48 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04800b48);
      pcVar4 = &DAT_04800b20;
      if (iVar2 != 0) {
        DAT_04800b20 = 0;
        DAT_04800b28 = 0;
        FUN_00100190(&LAB_01ada5d0,&DAT_04800b20,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04800b48);
      }
    }
    else {
      pcVar4 = &DAT_04800b20;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  lVar1 = 0x44;
  if (DAT_048018e0 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar4 == '\0') || (*pcVar4 == '\x01')) && (*(long *)(pcVar4 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar4 + 8) + lVar1) = iVar2 != 0;
  }
  return 0;
}


