/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b37350; name: FUN_01b37350
 */


undefined8 FUN_01b37350(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  if (((DAT_048060d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_048060d8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_048060d8);
  }
  fVar2 = (float)FUN_01b373b0();
  FUN_00c46da0((double)fVar2,param_1);
  return 1;
}


