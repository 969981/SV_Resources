/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00374ce4; name: FUN_00374ce4
 */


void FUN_00374ce4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (puVar1 != (undefined8 *)0x0) {
                    /* try { // try from 00374d00 to 00374d03 has its CatchHandler @ 00374d20 */
    (**(code **)*puVar1)();
  }
  if (param_1[6] == 0) {
    return;
  }
  FUN_00368470(param_1 + 2);
  return;
}


