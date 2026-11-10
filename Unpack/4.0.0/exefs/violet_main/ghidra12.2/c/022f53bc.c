/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022f53bc; name: FUN_022f53bc
 */


undefined8 FUN_022f53bc(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((*PTR_DAT_047de200 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047de200), iVar1 != 0))
  {
    uVar2 = FUN_0201bb84();
    *(undefined8 *)PTR_DAT_047de208 = uVar2;
    __cxa_guard_release(PTR_DAT_047de200);
  }
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 0;
    }
    if (param_1 == (long *)PTR_DAT_047de208) break;
    param_1 = (long *)*param_1;
  }
  return 1;
}


