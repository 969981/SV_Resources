/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 009327e0; name: FUN_009327e0
 */


undefined8 FUN_009327e0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  if (((DAT_04807c20 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04807c20), iVar2 != 0)) {
    DAT_048097d8 = '\x01';
    __cxa_guard_release(&DAT_04807c20);
  }
  puVar3 = (undefined8 *)FUN_00c41a10(param_1,1);
  if ((puVar3 == (undefined8 *)0x0) || (pcVar4 = (char *)*puVar3, pcVar4 == (char *)0x0)) {
    if ((DAT_04807b70 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_04807b70);
      if (iVar2 != 0) {
        DAT_04807b48 = 0;
        DAT_04807b50 = 0;
        FUN_00100190(&LAB_0155bd00,&DAT_04807b48,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04807b70);
      }
      pcVar4 = &DAT_04807b48;
    }
    else {
      pcVar4 = &DAT_04807b48;
    }
  }
  lVar1 = 0x70;
  if (DAT_048097d8 == '\0') {
    lVar1 = -1;
  }
  if ((*pcVar4 == '\x01') || (*pcVar4 == '\0')) {
    iVar2 = 0;
    if (*(long *)(pcVar4 + 8) != 0) {
      iVar2 = *(int *)(*(long *)(pcVar4 + 8) + lVar1);
    }
  }
  else {
    iVar2 = 0;
  }
  FUN_00c5d960(param_1,(long)iVar2);
  return 1;
}


