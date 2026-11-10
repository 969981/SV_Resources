/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e3e80c; name: FUN_01e3e80c
 */


void FUN_01e3e80c(void *param_1,long param_2)

{
  if (*(char *)(param_2 + 0x5e8) == '\0') {
    memset(param_1,0,0x70);
    FUN_011d1fc0(param_1);
    FUN_011d1fc0((long)param_1 + 0x38);
    return;
  }
  FUN_01e3e870(param_1,param_2 + 0xb90);
  FUN_01e3e870((long)param_1 + 0x38,param_2 + 0xbc8);
  return;
}


