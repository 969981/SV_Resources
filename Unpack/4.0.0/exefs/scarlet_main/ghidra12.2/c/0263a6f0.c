/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263a6f0; name: FUN_0263a6f0
 */


undefined8 FUN_0263a6f0(long *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = *(undefined8 **)(*param_1 + 8), puVar1 != (undefined8 *)0x0)) {
    FUN_0263aa60();
    do {
      if (puVar1 == &DAT_048550a8) {
        return 1;
      }
      puVar1 = (undefined8 *)*puVar1;
    } while (puVar1 != (undefined8 *)0x0);
  }
  return 0;
}


