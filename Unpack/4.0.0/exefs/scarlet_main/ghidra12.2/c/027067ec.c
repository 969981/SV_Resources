/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027067ec; name: FUN_027067ec
 */


undefined8 FUN_027067ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1 = (long *)*param_1;
  if (*param_1 != 0) {
    puVar1 = (undefined8 *)param_1[1];
    puVar2 = (undefined8 *)param_1[2];
    if ((puVar1 == (undefined8 *)0x0 || puVar2 == (undefined8 *)0x0) ||
       (((puVar1 != puVar2 && ((long *)*puVar1 == param_1)) && ((long *)*puVar2 == param_1)))) {
      return 0;
    }
  }
  return 1;
}


