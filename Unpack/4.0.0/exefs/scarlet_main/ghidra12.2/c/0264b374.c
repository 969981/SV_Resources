/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0264b374; name: FUN_0264b374
 */


undefined8 * FUN_0264b374(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)*param_1)();
  lVar2 = FUN_0264b3c4();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar1 == (long *)lVar2) break;
    plVar1 = (long *)*plVar1;
  }
  return param_1 + -5;
}


