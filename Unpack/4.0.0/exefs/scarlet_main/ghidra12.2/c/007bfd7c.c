/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfd7c; name: FUN_007bfd7c
 */


void FUN_007bfd7c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  while (puVar1 != param_1) {
    puVar2 = (undefined8 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_1;
  param_1[1] = param_1;
  return;
}


