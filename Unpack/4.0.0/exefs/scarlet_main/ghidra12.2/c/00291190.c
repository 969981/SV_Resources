/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00291190; name: FUN_00291190
 */


void FUN_00291190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0448d680;
  FUN_00288048(param_1 + 0x16);
  FUN_00288048(param_1 + 0xc);
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[0xb]);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,param_1[7]);
  }
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[4]);
  return;
}


