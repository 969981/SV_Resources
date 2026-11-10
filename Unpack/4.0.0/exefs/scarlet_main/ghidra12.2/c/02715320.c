/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02715320; name: FUN_02715320
 */


undefined8 FUN_02715320(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1a8) != 1) {
    if (*(int *)(param_1 + 0x1a8) == 2) {
      return 0;
    }
    puVar1 = *(undefined8 **)(param_1 + 0xd8);
    puVar2 = *(undefined8 **)(param_1 + 0xd0);
    do {
      if (puVar2 == puVar1) {
        return 0;
      }
      uVar3 = FUN_0271537c(*puVar2);
      puVar2 = puVar2 + 1;
    } while ((uVar3 & 1) == 0);
  }
  return 1;
}


