/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02202844; name: FUN_02202844
 */


void FUN_02202844(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(*(long **)(param_1 + 0x20))[1];
  for (puVar2 = (undefined8 *)**(long **)(param_1 + 0x20); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    FUN_01284cd0(*(undefined8 *)(param_1 + 0x18),*puVar2);
  }
  FUN_01f56340(*(long *)(param_1 + 0x18) + 0x128,0);
  return;
}


