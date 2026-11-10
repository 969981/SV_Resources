/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b3be0; name: FUN_002b3be0
 */


void FUN_002b3be0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 002b3bfc to 002b3bff has its CatchHandler @ 002b3c08 */
    (**(code **)*puVar1)();
  }
  return;
}


