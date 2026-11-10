/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d36a70; name: FUN_01d36a70
 */


undefined8 FUN_01d36a70(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_0482dc58 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0482dc58), iVar2 != 0)) {
    DAT_0482e4d8 = '\x01';
    __cxa_guard_release(&DAT_0482dc58);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_0482dc00 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_0482dc00);
      pcVar4 = &DAT_0482dbd8;
      if (iVar2 != 0) {
        DAT_0482dbd8 = 0;
        DAT_0482dbe0 = 0;
        FUN_00100190(&LAB_01d392cc,&DAT_0482dbd8,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_0482dc00);
      }
    }
    else {
      pcVar4 = &DAT_0482dbd8;
    }
  }
  iVar2 = FUN_00cc4dc0(param_1,2);
  lVar1 = 8;
  if (DAT_0482e4d8 == '\0') {
    lVar1 = -1;
  }
  if (((*pcVar4 == '\x01') || (*pcVar4 == '\0')) && (*(long *)(pcVar4 + 8) != 0)) {
    *(bool *)(*(long *)(pcVar4 + 8) + lVar1) = iVar2 != 0;
  }
  return 0;
}


