/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02470c40; name: FUN_02470c40
 */


undefined8 FUN_02470c40(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00cc4dc0(param_1,1);
  if ((DAT_04849b80 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_04849b80);
    if (iVar2 != 0) {
      __cxa_guard_release(&DAT_04849b80);
    }
  }
  FUN_02470cb4(iVar1 != 0);
  return 0;
}


