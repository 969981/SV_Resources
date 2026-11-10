/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002b3bb4; name: FUN_002b3bb4
 */


void FUN_002b3bb4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 002b3bd0 to 002b3bd3 has its CatchHandler @ 002b3bdc */
    (**(code **)*puVar1)();
  }
  return;
}


