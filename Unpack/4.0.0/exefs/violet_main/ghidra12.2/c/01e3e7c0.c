/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3e7c0; name: FUN_01e3e7c0
 */


void FUN_01e3e7c0(void *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x5e8) == '\0') {
    memset(param_1,0,0x810);
    FUN_011d2100(param_1);
    return;
  }
  FUN_013e6f68(param_1,param_2 + 0xc00);
  return;
}


