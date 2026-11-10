/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d8c0c0; name: FUN_01d8c0c0
 */


undefined8 FUN_01d8c0c0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00c92df0(param_1,1,0);
  if ((DAT_048327b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_048327b8);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_048327b8);
    }
  }
  FUN_01d8c130(uVar2);
  return 0;
}


