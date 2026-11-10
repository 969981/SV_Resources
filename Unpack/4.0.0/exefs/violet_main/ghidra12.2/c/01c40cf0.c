/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c40cf0; name: FUN_01c40cf0
 */


undefined8 FUN_01c40cf0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_04812988 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04812988), iVar2 != 0)) {
    __cxa_guard_release(&DAT_04812988);
  }
  uVar1 = FUN_01c40d50();
  FUN_00c419e0(param_1,uVar1 & 1);
  return 1;
}


