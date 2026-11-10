/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081953c; name: FUN_0081953c
 */


void FUN_0081953c(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)0x0;
  if (param_3 != 0) {
    puVar1 = param_2;
  }
  param_1[2] = 0;
  *param_1 = puVar1;
  param_1[1] = param_3;
  *puVar1 = 0;
  return;
}


