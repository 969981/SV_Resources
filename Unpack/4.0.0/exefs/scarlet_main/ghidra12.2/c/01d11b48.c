/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d11b48; name: FUN_01d11b48
 */


undefined8 * FUN_01d11b48(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)*param_1)();
  lVar2 = FUN_01d11c94();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar1 == (long *)lVar2) break;
    plVar1 = (long *)*plVar1;
  }
  return param_1 + -5;
}


