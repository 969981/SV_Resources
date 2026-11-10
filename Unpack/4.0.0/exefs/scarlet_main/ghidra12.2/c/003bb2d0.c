/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bb2d0; name: FUN_003bb2d0
 */


undefined8 FUN_003bb2d0(long param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(uint *)(param_1 + 0x694) >> 2 & 1) == 0) {
      if ((*(uint *)(param_1 + 0x694) & 0x40000) == 0 && param_3 == 0) {
        FUN_003c3950(param_1,0x28,0x1e3,0x152,"external/openssl/ssl/statem/extensions.c",0x39c);
        return 0;
      }
      return 1;
    }
  }
  else if ((*(int *)(param_1 + 0x890) != 0) &&
          ((*(uint *)(param_1 + 0x694) & 0x40000) == 0 && param_3 == 0)) {
    FUN_003c3950(param_1,0x28,0x1e3,0x152,"external/openssl/ssl/statem/extensions.c",0x3a8);
    return 0;
  }
  return 1;
}


