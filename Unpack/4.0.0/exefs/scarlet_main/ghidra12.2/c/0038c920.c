/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038c920; name: FUN_0038c920
 */


void FUN_0038c920(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = getenv(param_1);
  if (pcVar1 == (char *)0x0) {
    return;
  }
  FUN_0038ccb0();
  return;
}


