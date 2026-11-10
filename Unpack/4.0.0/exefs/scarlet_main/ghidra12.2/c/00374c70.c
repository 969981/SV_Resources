/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00374c70; name: FUN_00374c70
 */


void FUN_00374c70(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00374c90 to 00374c93 has its CatchHandler @ 00374ce0 */
    (**(code **)*puVar1)();
  }
  if (param_1[6] != 0) {
                    /* try { // try from 00374ca0 to 00374ca3 has its CatchHandler @ 00374ccc */
    FUN_00368470(param_1 + 2);
  }
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00374cb8 to 00374cbb has its CatchHandler @ 00374cc8 */
    (**(code **)*puVar1)();
  }
  return;
}


