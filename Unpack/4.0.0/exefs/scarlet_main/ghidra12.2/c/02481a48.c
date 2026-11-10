/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02481a48; name: FUN_02481a48
 */


void FUN_02481a48(undefined8 param_1,char *param_2)

{
  if (param_2 == (char *)0x0) {
    return;
  }
  if ((*param_2 == '\x01') && (*(long **)(param_2 + 8) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 8) + 0x18))();
  }
  FUN_024828f4(param_1,param_2);
  return;
}


