/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dbf50; name: FUN_027dbf50
 */


void FUN_027dbf50(char *param_1,long param_2)

{
  if (*param_1 == '\0') {
    FUN_01cfa5b0(param_1 + 8,param_2);
    FUN_01cfa5b0(param_1 + 0x28,param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x40);
    *param_1 = '\x01';
  }
  else {
    FUN_01d0e1a8(param_1 + 8,param_2);
    FUN_01d0e1a8(param_1 + 0x28,param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x40);
  }
  return;
}


