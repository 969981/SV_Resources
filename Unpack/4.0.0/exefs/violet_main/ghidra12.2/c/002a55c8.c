/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002a55c8; name: FUN_002a55c8
 */


void FUN_002a55c8(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 002a55e4 to 002a55e7 has its CatchHandler @ 002a55f0 */
    (**(code **)*puVar1)();
  }
  return;
}


