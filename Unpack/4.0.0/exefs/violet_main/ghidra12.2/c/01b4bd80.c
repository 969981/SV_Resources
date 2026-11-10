/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b4bd80; name: FUN_01b4bd80
 */


undefined8 FUN_01b4bd80(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00cc4dc0(param_1,1);
  if ((DAT_04806f10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04806f10);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04806f10);
    }
  }
  FUN_01b4bdf4(iVar1 != 0);
  return 0;
}


