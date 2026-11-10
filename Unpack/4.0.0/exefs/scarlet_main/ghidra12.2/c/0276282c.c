/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


