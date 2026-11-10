/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c8055c; name: FUN_00c8055c
 */


void FUN_00c8055c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x2a8);
  for (puVar1 = *(undefined8 **)(param_1 + 0x2a0); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    FUN_00c80594(*puVar1);
  }
  return;
}


