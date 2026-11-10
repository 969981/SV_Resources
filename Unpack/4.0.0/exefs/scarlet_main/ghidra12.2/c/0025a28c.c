/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025a28c; name: FUN_0025a28c
 */


void FUN_0025a28c(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0025a28c(param_1,*param_2);
    FUN_0025a28c(param_1,param_2[1]);
    if (*(long *)(param_1 + 0x10) == 0) {
      FUN_0049e700(param_2);
      return;
    }
  }
  return;
}


