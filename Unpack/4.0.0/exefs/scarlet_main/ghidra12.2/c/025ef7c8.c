/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025ef7c8; name: FUN_025ef7c8
 */


undefined8 * FUN_025ef7c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)*param_1)();
  FUN_025ebe14();
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (puVar1 == &DAT_04853dc0) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return param_1 + -5;
}


