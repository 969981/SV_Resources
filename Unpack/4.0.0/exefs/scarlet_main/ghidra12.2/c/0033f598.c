/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033f598; name: FUN_0033f598
 */


void FUN_0033f598(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 0033f5b4 to 0033f5b7 has its CatchHandler @ 0033f5c0 */
    (**(code **)*puVar1)();
  }
  return;
}


