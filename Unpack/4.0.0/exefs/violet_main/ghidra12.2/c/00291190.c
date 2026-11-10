/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


