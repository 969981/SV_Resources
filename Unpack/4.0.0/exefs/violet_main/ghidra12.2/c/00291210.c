/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00291210; name: FUN_00291210
 */


void FUN_00291210(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_0448d680;
  FUN_00288048(param_1 + 0x16);
  FUN_00288048(param_1 + 0xc);
  if (*(char *)(param_1 + 8) != '\0') {
    if ((*(byte *)(param_1 + 9) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[0xb]);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 2);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[7]);
    bVar1 = *(byte *)(param_1 + 2);
  }
  if ((bVar1 & 1) == 0) {
    operator_delete(param_1);
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[4]);
  operator_delete(param_1);
  return;
}


