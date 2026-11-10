/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02484388; name: FUN_02484388
 */


void FUN_02484388(undefined8 param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\x01') && (*(long **)(param_2 + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 8) + 0x18))();
  }
  FUN_02486054(param_1,param_2);
  return;
}


