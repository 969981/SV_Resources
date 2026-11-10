/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cb4a6c; name: FUN_01cb4a6c
 */


undefined8 * FUN_01cb4a6c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(**(code **)*param_1)();
  lVar2 = FUN_01961044();
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return (undefined8 *)0x0;
    }
    if (plVar1 == (long *)lVar2) break;
    plVar1 = (long *)*plVar1;
  }
  return param_1 + -5;
}


