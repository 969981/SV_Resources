/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0259b9e0; name: FUN_0259b9e0
 */


undefined8 FUN_0259b9e0(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  
  if (((DAT_04851350 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04851350), iVar1 != 0)) {
    __cxa_guard_release(&DAT_04851350);
  }
  fVar2 = (float)FUN_0259ba40();
  FUN_00c46da0((double)fVar2,param_1);
  return 1;
}


