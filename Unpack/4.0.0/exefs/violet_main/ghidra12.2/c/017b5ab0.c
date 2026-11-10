/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b5ab0; name: FUN_017b5ab0
 */


undefined8 FUN_017b5ab0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_04812970 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04812970), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04812970);
  }
  uVar1 = FUN_017b5b10();
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


