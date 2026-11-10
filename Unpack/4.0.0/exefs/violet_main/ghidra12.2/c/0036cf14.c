/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0036cf14; name: FUN_0036cf14
 */


void FUN_0036cf14(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0036cf30 to 0036cf33 has its CatchHandler @ 0036cf3c */
    (**(code **)*puVar1)();
  }
  return;
}


