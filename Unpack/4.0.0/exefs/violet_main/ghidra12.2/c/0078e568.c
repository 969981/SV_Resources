/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078e568; name: FUN_0078e568
 */


void FUN_0078e568(int *param_1,void *param_2)

{
  if (*param_1 != 5) {
    FUN_0078e5ac(param_1);
    *param_1 = 5;
  }
  memcpy(param_2,param_1 + 6,0x10);
  return;
}


