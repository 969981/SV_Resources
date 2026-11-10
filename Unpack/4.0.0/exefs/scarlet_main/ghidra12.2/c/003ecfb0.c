/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ecfb0; name: FUN_003ecfb0
 */


undefined4 * FUN_003ecfb0(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = FUN_003eb8f0(param_1 + 2,param_2 + 2);
    if (((lVar1 == 0) || (lVar1 = FUN_003eb8f0(param_1 + 8,param_2 + 8), lVar1 == 0)) ||
       (lVar1 = FUN_003eb8f0(param_1 + 0xe,param_2 + 0xe), lVar1 == 0)) {
      return (undefined4 *)0x0;
    }
    *param_1 = *param_2;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
  }
  return param_1;
}


