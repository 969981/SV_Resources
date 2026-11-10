/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b7ba20; name: FUN_01b7ba20
 */


undefined8 FUN_01b7ba20(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  if (((DAT_04809ca8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04809ca8), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04809ca8);
  }
  fVar2 = (float)FUN_01b7ba80();
  FUN_00c46da0((double)fVar2,param_1);
  return 1;
}


