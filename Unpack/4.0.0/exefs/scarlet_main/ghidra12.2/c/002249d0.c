/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002249d0; name: FUN_002249d0
 */


void FUN_002249d0(long *param_1)

{
  byte bVar1;
  
  *param_1 = (long)(PTR_DAT_047cbeb0 + 0x10);
  if ((int)param_1[7] == 0) {
    (**(code **)(**(long **)PTR_DAT_047cbb08 + 0xd8))(*(long **)PTR_DAT_047cbb08,param_1 + 3);
    bVar1 = *(byte *)(param_1 + 0xb);
  }
  else {
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
    operator_delete(param_1);
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[10]);
  operator_delete(param_1);
  return;
}


