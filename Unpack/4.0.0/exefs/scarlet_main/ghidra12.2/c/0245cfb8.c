/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0245cfb8; name: FUN_0245cfb8
 */


void FUN_0245cfb8(undefined8 param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 == '\x01') {
    FUN_0245e704(param_2 + 8);
  }
  FUN_0245eb74(param_1,param_2);
  return;
}


