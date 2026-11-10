/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a3e7fc; name: FUN_02a3e7fc
 */


void FUN_02a3e7fc(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  if (*(char *)*param_1 != '\0') {
    bVar1 = FUN_02a3e1d0(*param_2);
    *(byte *)*param_1 = bVar1 & 1;
  }
  return;
}


