/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00edf638; name: FUN_00edf638
 */


undefined8 FUN_00edf638(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047e0dd8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047e0dd8), iVar1 != 0))
  {
    uVar2 = FUN_02173f9c();
    *(undefined8 *)PTR_DAT_047e0de0 = uVar2;
    __cxa_guard_release(PTR_DAT_047e0dd8);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047e0de0) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


