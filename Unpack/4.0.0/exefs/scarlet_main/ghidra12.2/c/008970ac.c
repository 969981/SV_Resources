/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008970ac; name: FUN_008970ac
 */


void FUN_008970ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    param_1[4] = 0;
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[5] = 0;
  return;
}


