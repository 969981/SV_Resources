/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0180f0d0; name: FUN_0180f0d0
 */


undefined8 FUN_0180f0d0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_8;
  
  if (((DAT_04802838 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04802838), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04802838);
  }
  local_8 = FUN_0180f134();
  FUN_0180f1b0(param_1,&local_8);
  return 1;
}


