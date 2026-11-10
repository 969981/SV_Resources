/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0276282c; name: FUN_0276282c
 */


void FUN_0276282c(long param_1,byte param_2)

{
  if ((((param_2 & 1) == 0) || (*(long *)(param_1 + 0x180) == 0)) ||
     ((*(byte *)(*(long *)(param_1 + 0x180) + 0x1e8) & 1) == 0)) {
    FUN_011f075c(param_1 + 0x178,param_1 + 0x138);
    FUN_011f048c(0,param_1);
  }
  else {
    FUN_011e5718(0,param_1,param_1 + 0x178);
  }
  *(byte *)(param_1 + 0x225) = param_2 & 1;
  return;
}


