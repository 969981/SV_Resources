/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02345d64; name: FUN_02345d64
 */


undefined8 * FUN_02345d64(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)*param_1)();
  FUN_02346320();
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (puVar1 == &DAT_04848030) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return param_1 + -5;
}


