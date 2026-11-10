/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0029db20; name: FUN_0029db20
 */


void FUN_0029db20(long *param_1)

{
  byte bVar1;
  
  *param_1 = (long)(PTR_DAT_047cc6a0 + 0x10);
  if ((*(byte *)(param_1 + 0xb) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 5);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[10]);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) == 0) {
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


