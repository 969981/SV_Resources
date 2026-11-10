/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e02a10; name: FUN_01e02a10
 */


ulong FUN_01e02a10(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if (((DAT_04837608 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04837608), iVar2 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar1 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  if (*(char *)(DAT_048375f8 + 0x3b0) == '\0') {
    uVar3 = FUN_01e02aa8(DAT_048375f8);
    *(int *)(lVar1 + 0x3b4) = (int)uVar3;
    *(undefined1 *)(lVar1 + 0x3b0) = 1;
  }
  else {
    uVar3 = (ulong)*(uint *)(DAT_048375f8 + 0x3b4);
  }
  return uVar3;
}


