/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01bb1c64; name: FUN_01bb1c64
 */


undefined8 FUN_01bb1c64(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047d53a0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d53a0), iVar1 != 0))
  {
    uVar2 = FUN_00ff17b4();
    *(undefined8 *)PTR_DAT_047d53a8 = uVar2;
    __cxa_guard_release(PTR_DAT_047d53a0);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047d53a8) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


