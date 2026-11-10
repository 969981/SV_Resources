/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01976cc0; name: FUN_01976cc0
 */


undefined8 FUN_01976cc0(undefined8 param_1)

{
  int iVar1;
  
  if (((DAT_04806e78 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04806e78), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04806e78);
  }
  iVar1 = FUN_01976d20();
  FUN_00c5d960(param_1,(long)iVar1);
  return 1;
}


