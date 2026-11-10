/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd1990; name: FUN_01dd1990
 */


void FUN_01dd1990(long param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 500) == '\0') {
    return;
  }
  FUN_01dd19e0(*param_2,param_1 + 0x1ec);
  FUN_01dd19e0(param_2[1],param_1 + 0x1f0);
  FUN_01dd1a34(param_1);
  return;
}


