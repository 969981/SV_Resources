/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015813cc; name: FUN_015813cc
 */


void FUN_015813cc(long param_1)

{
  if (*(code **)(param_1 + 0x410) != (code *)0x0) {
    (**(code **)(param_1 + 0x410))(param_1 + 0x430,param_1 + 0x360);
  }
  FUN_01581408(param_1);
  FUN_0172bf50(param_1);
  return;
}


