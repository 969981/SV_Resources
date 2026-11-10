/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0039eaf0; name: FUN_0039eaf0
 */


void FUN_0039eaf0(long *param_1)

{
  byte bVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047cd058 + 0x10);
  if ((*(byte *)(param_1 + 0xe) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x10]);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xd]);
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    lVar2 = param_1[4];
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[10]);
    lVar2 = param_1[4];
  }
  if (lVar2 != 0) {
    param_1[5] = lVar2;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_0039af84(param_1);
  operator_delete(param_1);
  return;
}


